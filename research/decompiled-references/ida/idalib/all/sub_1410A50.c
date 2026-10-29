__int64 __fastcall sub_1410A50(__int64 a1, __int64 a2, __m128i a3, __m128i a4)
{
  void **v6; // r13
  void **v7; // r12
  int v8; // r15d
  void **v9; // rbp
  unsigned __int64 v10; // rax
  void **v11; // r12
  void **v12; // rbx
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // rbx
  void **v16; // r12
  __int64 v18; // rdx
  _BYTE *v19; // rsi
  void **v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __m128 *v24; // rdx
  __m128i *v25; // rax
  __m128i *v26; // rdi
  __int64 v27; // rdx
  void *v28; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-A0h]
  __m128i v30; // [rsp+10h] [rbp-98h] BYREF
  void *v31; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-80h]
  __m128i v33; // [rsp+30h] [rbp-78h] BYREF
  void *v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+50h] [rbp-58h] BYREF
  __int16 v36; // [rsp+60h] [rbp-48h]

  v6 = *(void ***)a2;
  v7 = (void **)(*(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8));
  while ( v6 != v7 )
  {
    while ( 1 )
    {
      v7 -= 5;
      if ( *v7 == v7 + 2 )
        break;
      operator delete(*v7);
      if ( v6 == v7 )
        goto LABEL_5;
    }
  }
LABEL_5:
  *(_DWORD *)(a2 + 8) = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 76);
    if ( (*(_DWORD *)(a1 + 72) & 0xFFFFFFEF) != 5 )
      break;
    v18 = *(unsigned int *)(a1 + 80);
    v19 = *(_BYTE **)(a1 + 88);
    v28 = &v30;
    sub_140C020(&v28, v19, (__int64)&v19[v18]);
    v31 = &v33;
    if ( v28 == &v30 )
    {
      a3 = _mm_load_si128(&v30);
      v33 = a3;
    }
    else
    {
      v31 = v28;
      v33.m128i_i64[0] = v30.m128i_i64[0];
    }
    v20 = *(void ***)a2;
    v30.m128i_i8[0] = 0;
    v21 = *(unsigned int *)(a2 + 12);
    LODWORD(v34) = v8;
    v32 = v29;
    v28 = &v30;
    v22 = *(unsigned int *)(a2 + 8);
    v29 = 0;
    v23 = v22 + 1;
    v24 = (__m128 *)&v20[5 * v22];
    v25 = (__m128i *)&v31;
    if ( v23 > v21 )
    {
      if ( v20 > &v31 || v24 <= (__m128 *)&v31 )
      {
        sub_13FA4A0(a2, v23);
        v24 = (__m128 *)(*(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8));
        v25 = (__m128i *)&v31;
      }
      else
      {
        sub_13FA4A0(a2, v23);
        v25 = (__m128i *)(*(_QWORD *)a2 + (char *)&v31 - (char *)v20);
        v24 = (__m128 *)(*(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8));
      }
    }
    v24->m128_u64[0] = (unsigned __int64)&v24[1];
    if ( (__m128i *)v25->m128i_i64[0] == &v25[1] )
    {
      a4 = _mm_loadu_si128(v25 + 1);
      v24[1] = (__m128)a4;
    }
    else
    {
      v24->m128_u64[0] = v25->m128i_i64[0];
      v24[1].m128_u64[0] = v25[1].m128i_u64[0];
    }
    v24->m128_u64[1] = v25->m128i_u64[1];
    v25->m128i_i64[0] = (__int64)v25[1].m128i_i64;
    v25->m128i_i64[1] = 0;
    v25[1].m128i_i8[0] = 0;
    v24[2].m128_i32[0] = v25[2].m128i_i32[0];
    v26 = (__m128i *)v31;
    ++*(_DWORD *)(a2 + 8);
    if ( v26 != &v33 )
      operator delete(v26);
    if ( v28 == &v30 )
    {
      sub_140C1F0((_BYTE **)a1, a3, *(double *)a4.m128i_i64);
      if ( *(_DWORD *)(a1 + 72) != 15 )
        return 0;
    }
    else
    {
      operator delete(v28);
      sub_140C1F0((_BYTE **)a1, a3, *(double *)a4.m128i_i64);
      if ( *(_DWORD *)(a1 + 72) != 15 )
        return 0;
    }
    sub_140C1F0((_BYTE **)a1, a3, *(double *)a4.m128i_i64);
  }
  sub_FC70B0((__int64)&v31, *(_QWORD *)(a1 + 8), v8, 1075);
  if ( (_BYTE)v36 )
  {
    sub_FC7790(v33.m128i_i64[0], (__int64 *)&v31, SHIBYTE(v36));
    v33.m128i_i64[0] = 0;
    v36 = 0;
  }
  if ( v34 != &v35 )
    operator delete(v34);
  v9 = (void **)v31;
  if ( v31 )
  {
    v10 = v32;
    if ( v32 )
    {
      if ( (unsigned __int64)v31 >= v32 && (unsigned __int64)v31 <= v32 + 14848 )
      {
        v27 = *(unsigned int *)(v32 + 14976);
        *(_DWORD *)(v32 + 14976) = v27 + 1;
        *(_QWORD *)(v10 + 8 * v27 + 14848) = v9;
      }
      else
      {
        v11 = *((void ***)v31 + 66);
        v12 = &v11[8 * (unsigned __int64)*((unsigned int *)v31 + 134)];
        if ( v11 != v12 )
        {
          do
          {
            while ( 1 )
            {
              v12 -= 8;
              v13 = (void **)v12[3];
              if ( v13 == v12 + 5 )
                break;
              operator delete(v13);
              if ( v11 == v12 )
                goto LABEL_18;
            }
          }
          while ( v11 != v12 );
LABEL_18:
          v12 = (void **)v9[66];
        }
        if ( v12 != v9 + 68 )
          free(v12);
        v14 = (void **)v9[52];
        if ( v14 != v9 + 54 )
          free(v14);
        v15 = v9 + 48;
        v16 = v9 + 8;
        do
        {
          while ( *v15 != v15 + 2 )
          {
            operator delete(*v15);
            v15 -= 4;
            if ( v15 == v16 )
              goto LABEL_26;
          }
          v15 -= 4;
        }
        while ( v16 != v15 );
LABEL_26:
        operator delete(v9, 0x3A0u);
      }
    }
  }
  return 1;
}
