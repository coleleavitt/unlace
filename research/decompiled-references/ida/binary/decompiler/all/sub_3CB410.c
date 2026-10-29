unsigned __int64 __fastcall sub_3CB410(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  signed __int32 v6; // eax
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // ett
  __int64 v9; // rax
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // xmm1
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  int v18; // eax
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // r13
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-68h] BYREF
  __m128i v27; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-50h]
  __m128i si128; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+30h] [rbp-38h]
  __int16 v31; // [rsp+34h] [rbp-34h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  v32 = __readfsqword(0x28u);
  if ( !v3 )
    v3 = *(_QWORD **)(a2 + 16);
  if ( v4 != *v3 )
  {
    if ( !under_debugger )
      sub_37EA20(52881);
LABEL_75:
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( !v5 )
  {
    *(_OWORD *)(a1 + 88) = 0;
    goto LABEL_18;
  }
  v6 = *(_DWORD *)(v5 + 8);
  v7 = (volatile signed __int32 *)(v5 + 8);
  do
  {
    if ( !v6 )
    {
      v11 = *(volatile signed __int32 **)(a1 + 96);
      v5 = 0;
      goto LABEL_15;
    }
    v8 = v6;
    v6 = _InterlockedCompareExchange(v7, v6 + 1, v6);
  }
  while ( v8 != v6 );
  if ( !*v7 )
    goto LABEL_14;
  v9 = *(_QWORD *)(a1 + 88);
  if ( !v9 || (unsigned int)(*(_DWORD *)(v9 + 60) - 1) > 1 )
    goto LABEL_14;
  v10 = *(_QWORD *)(v9 + 64);
  if ( a2 == v10 )
  {
    if ( !under_debugger )
      sub_37EA20(52878);
    goto LABEL_75;
  }
  *(_DWORD *)(v9 + 60) = 2;
  if ( *(_QWORD *)(v10 + 8) != *(_QWORD *)(a2 + 8) )
    *(_DWORD *)(v9 + 60) = 4;
LABEL_14:
  v11 = *(volatile signed __int32 **)(a1 + 96);
LABEL_15:
  *(_OWORD *)(a1 + 88) = 0;
  if ( v11 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) != 1 )
        goto LABEL_18;
    }
    else
    {
      v18 = *((_DWORD *)v11 + 3);
      *((_DWORD *)v11 + 3) = v18 - 1;
      if ( v18 != 1 )
        goto LABEL_18;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 24LL))(v11);
  }
LABEL_18:
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_QWORD *)(a1 + 40) = 0;
  sub_32F510(a2 + 8, a1 + 16);
  v27 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_425BA0);
  sub_90880(a2, (__int64)&v26);
  v12 = _mm_loadu_si128(&v27);
  v13 = *(_QWORD *)(a1 + 64);
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  *(_QWORD *)(a1 + 64) = v26;
  v26 = v13;
  *(__m128i *)(a1 + 72) = v12;
  v27 = v14;
  if ( !v12.m128i_i64[0] )
  {
    if ( !under_debugger )
      sub_37EA20(52882);
    goto LABEL_75;
  }
  v15 = v28;
  *(_DWORD *)(a1 + 60) = 1;
  if ( !v15 )
    goto LABEL_27;
  v16 = *(_QWORD *)v15;
  if ( si128.m128i_i64[0] )
  {
    v19 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_56:
      *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | v16 & 3;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      *(_QWORD *)v28 &= ~1uLL;
      *(_QWORD *)v28 |= 2uLL;
      si128.m128i_i64[0] = 0;
      goto LABEL_24;
    }
    v20 = *(_QWORD *)(v19 + 8);
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
      v23 = *(_QWORD *)(v19 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_50;
      goto LABEL_43;
    }
    v21 = *(__int64 **)(v20 + 8);
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = *(__int64 **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
LABEL_62:
        if ( *(_QWORD *)(v20 + 32) )
        {
          *(_QWORD *)(v20 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v20 |= 2uLL;
LABEL_40:
        if ( v20 )
          qfree();
        v23 = *(_QWORD *)(v19 + 16);
        if ( (*(_BYTE *)v23 & 2) != 0 )
        {
LABEL_49:
          if ( (*(_BYTE *)v19 & 2) != 0 )
          {
LABEL_53:
            if ( v16 > 3 )
              qfree();
            v15 = v28;
            v16 = *(_QWORD *)v28;
            goto LABEL_56;
          }
LABEL_50:
          if ( *(_QWORD *)(v19 + 32) )
          {
            *(_QWORD *)(v19 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v19 |= 2uLL;
          goto LABEL_53;
        }
LABEL_43:
        v24 = *(__int64 **)(v23 + 8);
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
          v25 = *(__int64 **)(v23 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
            goto LABEL_66;
        }
        else
        {
          sub_3C5CC0(v24);
          v25 = *(__int64 **)(v23 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
            goto LABEL_46;
        }
        sub_3C5CC0(v25);
LABEL_46:
        if ( (*(_BYTE *)v23 & 2) != 0 )
        {
LABEL_47:
          if ( v23 )
            qfree();
          goto LABEL_49;
        }
LABEL_66:
        if ( *(_QWORD *)(v23 + 32) )
        {
          *(_QWORD *)(v23 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v23 |= 2uLL;
        goto LABEL_47;
      }
    }
    else
    {
      sub_3C5CC0(v21);
      v22 = *(__int64 **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_39;
    }
    sub_3C5CC0(v22);
LABEL_39:
    if ( (*(_BYTE *)v20 & 2) != 0 )
      goto LABEL_40;
    goto LABEL_62;
  }
  *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
  *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
  *(_QWORD *)v28 &= ~1uLL;
  *(_QWORD *)v28 |= 2uLL;
LABEL_24:
  if ( v28 )
    qfree();
  v13 = v26;
LABEL_27:
  if ( v13 )
  {
    v27.m128i_i64[0] = 0;
    qfree();
  }
  if ( v5 )
    sub_3CB2E0((volatile signed __int32 *)v5);
  return v32 - __readfsqword(0x28u);
}
