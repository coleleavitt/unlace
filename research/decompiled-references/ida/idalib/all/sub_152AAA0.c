void __fastcall sub_152AAA0(__int64 a1, __int64 *a2, __int64 a3, int *a4)
{
  int v5; // r13d
  void *v6; // rdi
  __int64 v7; // rsi
  int v8; // ecx
  unsigned int v9; // r12d
  char *v10; // rax
  int v11; // edi
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rdx
  __int64 v15; // rdx
  __m128i *v16; // r8
  const __m128i *v17; // rdx
  __m128i v18; // [rsp+0h] [rbp-128h] BYREF
  __int16 v19; // [rsp+10h] [rbp-118h]
  unsigned __int8 *v20[10]; // [rsp+20h] [rbp-108h] BYREF
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+78h] [rbp-B0h]
  _BYTE v23[168]; // [rsp+80h] [rbp-A8h] BYREF

  v5 = *a4;
  sub_14634E0(a2, v18.m128i_i32);
  if ( v19 == 22 )
  {
    ptr = v23;
    v22 = 0x500000000LL;
    do
    {
      sub_14634E0(a2, v18.m128i_i32);
      if ( v19 != 5 )
      {
        sub_FC70B0((__int64)v20, a2[6], v18.m128i_i32[0], 2220);
        sub_AEA040((__int64)v20);
        goto LABEL_5;
      }
      sub_141B840((__int64)&ptr, &v18);
      sub_14634E0(a2, v18.m128i_i32);
    }
    while ( v19 == 66 );
    if ( v19 != 23 )
    {
      v7 = a2[6];
      v8 = 2195;
      goto LABEL_11;
    }
    sub_14634E0(a2, v18.m128i_i32);
    if ( v19 != 2 )
    {
      v7 = a2[6];
      v8 = 2202;
LABEL_11:
      sub_FC70B0((__int64)v20, v7, v18.m128i_i32[0], v8);
      sub_1520A40(v20, (__int64)"unused");
      sub_AEA040((__int64)v20);
LABEL_5:
      v6 = ptr;
      if ( ptr == v23 )
        return;
LABEL_6:
      free(v6);
      return;
    }
    v9 = 2 * v22;
    v10 = (char *)sub_15290A0(a2 + 16, 48LL * (unsigned int)v22, 3u);
    if ( (_DWORD)v22 )
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = &v10[24 * v11];
        *(_QWORD *)(v14 + 12) = 0x1AA00000000LL;
        *(_QWORD *)(v14 + 4) = 0;
        *(_DWORD *)v14 = v5;
        v15 = (unsigned int)(v11 + 1);
        v11 += 2;
        v16 = (__m128i *)&v10[24 * v15];
        v17 = (const __m128i *)((char *)ptr + 24 * v13);
        v13 = (unsigned int)(v12 + 1);
        v12 = v13;
        *v16 = _mm_loadu_si128(v17);
        v16[1].m128i_i32[0] = v17[1].m128i_i32[0];
      }
      while ( (_DWORD)v13 != (_DWORD)v22 );
    }
    sub_14368B0((__int64)a2, v10, v9, 1u, 0, 0);
    v6 = ptr;
    if ( ptr != v23 )
      goto LABEL_6;
  }
  else
  {
    sub_FC70B0((__int64)&ptr, a2[6], v18.m128i_i32[0], 2192);
    sub_1520A40((unsigned __int8 **)&ptr, (__int64)"unused");
    sub_AEA040((__int64)&ptr);
  }
}
