unsigned __int64 __fastcall sub_3D1650(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rax
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rdx
  int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-68h] BYREF
  __m128i v22; // [rsp+8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]
  __m128i si128; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+30h] [rbp-38h]
  __int16 v26; // [rsp+34h] [rbp-34h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v8 = *(_QWORD **)(a2 + 8);
  v9 = *(_QWORD *)(a1 + 8);
  v27 = __readfsqword(0x28u);
  if ( !v8 )
    v8 = *(_QWORD **)(a2 + 16);
  if ( v9 != *v8 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCE91u, a2, a3);
LABEL_33:
    BUG();
  }
  v10 = *(_QWORD *)(a1 + 96);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 8);
    v9 = v10 + 8;
    do
    {
      if ( !v11 )
      {
        v14 = *(volatile signed __int32 **)(a1 + 96);
        v10 = 0;
        goto LABEL_15;
      }
      a5 = (unsigned int)(v11 + 1);
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)v9, a5, v11);
    }
    while ( v12 != v11 );
    if ( *(_DWORD *)v9 )
    {
      v13 = *(_QWORD *)(a1 + 88);
      if ( v13 )
      {
        a5 = *(unsigned int *)(v13 + 60);
        v9 = (unsigned int)(a5 - 1);
        if ( (unsigned int)v9 <= 1 )
        {
          v9 = *(_QWORD *)(v13 + 64);
          if ( a2 == v9 )
            sub_3CB0E0(a3, a1, a2);
          *(_DWORD *)(v13 + 60) = 2;
          a5 = *(_QWORD *)(a2 + 8);
          if ( *(_QWORD *)(v9 + 8) != a5 )
            *(_DWORD *)(v13 + 60) = 4;
        }
      }
    }
    v14 = *(volatile signed __int32 **)(a1 + 96);
LABEL_15:
    *(_OWORD *)(a1 + 88) = 0;
    if ( v14 )
    {
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) != 1 )
          goto LABEL_18;
      }
      else
      {
        v20 = *((_DWORD *)v14 + 3);
        v9 = (unsigned int)(v20 - 1);
        *((_DWORD *)v14 + 3) = v9;
        if ( v20 != 1 )
          goto LABEL_18;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
    }
  }
  else
  {
    *(_OWORD *)(a1 + 88) = 0;
  }
LABEL_18:
  v15 = *(_QWORD *)(a1 + 16);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_QWORD *)(a1 + 40) = 0;
  sub_32E580((_QWORD *)(a2 + 8), a1 + 16, v9, a5, a6, a7);
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v26 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  sub_8DBE0(a2, (__int64)&v21);
  v16 = _mm_loadu_si128(&v22);
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v18 = v21;
  v21 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v18;
  *(__m128i *)(a1 + 72) = v16;
  v22 = v17;
  if ( !v16.m128i_i64[0] )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCE92u, (__int64)&v21, 0.0);
    goto LABEL_33;
  }
  *(_DWORD *)(a1 + 60) = 1;
  sub_7D050(&v21);
  if ( v10 )
    sub_3D1560((volatile signed __int32 *)v10);
  return v27 - __readfsqword(0x28u);
}
