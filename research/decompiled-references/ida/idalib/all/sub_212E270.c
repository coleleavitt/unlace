char *__fastcall sub_212E270(__m128 *a1, int *a2, __int64 *a3)
{
  char *v3; // rbx
  __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rsi
  char *v8; // r12
  signed __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r13
  char *v14; // rax
  char *v15; // rbp
  unsigned __int64 v16; // r13
  char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  char *v20; // r15
  int v21; // esi
  char *v22; // r14
  __int64 v23; // rax
  __m128i v24; // xmm1
  unsigned int v25; // eax
  char *v26; // rdi
  char *v27; // r14
  unsigned __int64 v28; // rax
  void *v29; // rdi
  __m128 *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  __m128 *v32; // [rsp+10h] [rbp-48h]
  signed __int64 v33; // [rsp+18h] [rbp-40h]

  v3 = (char *)a1->m128_u64[1];
  if ( v3 != (char *)a1[1].m128_u64[0] )
  {
    v4 = a3[1];
    v5 = *a2;
    v6 = *a3;
    *((_DWORD *)v3 + 8) = 64;
    *((_QWORD *)v3 + 2) = v4;
    *(_DWORD *)v3 = v5;
    *((_QWORD *)v3 + 1) = v6;
    *((_QWORD *)v3 + 3) = 0;
    a1->m128_u64[1] = (unsigned __int64)(v3 + 40);
    return v3;
  }
  v8 = (char *)a1->m128_u64[0];
  v32 = a1;
  v10 = v3 - v8;
  v11 = (v3 - v8) >> 3;
  if ( 0xCCCCCCCCCCCCCCCDLL * v11 )
  {
    v12 = 0x999999999999999ALL * v11;
    v13 = -16;
    if ( 0xCCCCCCCCCCCCCCCDLL * v11 <= 0x999999999999999ALL * v11 && v12 <= 0x666666666666666LL )
    {
      if ( !v12 )
      {
        v31 = 40;
        v16 = 0;
        v15 = nullptr;
        goto LABEL_7;
      }
      v13 = 16 * v11;
    }
  }
  else
  {
    v13 = 40;
  }
  v33 = v3 - v8;
  v14 = (char *)operator new(v13);
  v10 = v3 - v8;
  v15 = v14;
  v16 = (unsigned __int64)&v14[v13];
  v31 = (__int64)(v14 + 40);
LABEL_7:
  v17 = &v15[v10];
  v18 = *a3;
  v19 = a3[1];
  v20 = v15;
  v21 = *a2;
  *((_DWORD *)v17 + 8) = 64;
  *((_QWORD *)v17 + 1) = v18;
  *(_DWORD *)v17 = v21;
  *((_QWORD *)v17 + 2) = v19;
  *((_QWORD *)v17 + 3) = 0;
  if ( v3 != v8 )
  {
    v22 = v8;
    do
    {
      while ( 1 )
      {
        v24 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        *(_DWORD *)v20 = *(_DWORD *)v22;
        v25 = *((_DWORD *)v22 + 8);
        *(__m128i *)(v20 + 8) = v24;
        *((_DWORD *)v20 + 8) = v25;
        if ( v25 > 0x40 )
          break;
        v23 = *((_QWORD *)v22 + 3);
        v22 += 40;
        v20 += 40;
        *((_QWORD *)v20 - 2) = v23;
        if ( v3 == v22 )
          goto LABEL_12;
      }
      v26 = v20 + 24;
      v22 += 40;
      v20 += 40;
      sub_2205510(v26);
    }
    while ( v3 != v22 );
LABEL_12:
    v27 = v8;
    v28 = (0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v3 - 40 - v8) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v20 = &v15[40 * v28 + 40];
    v31 = (__int64)&v15[40 * v28 + 80];
    do
    {
      if ( *((_DWORD *)v27 + 8) > 0x40u )
      {
        v29 = *((void **)v27 + 3);
        if ( v29 )
          operator delete[](v29);
      }
      v27 += 40;
    }
    while ( v3 != v27 );
  }
  if ( v8 )
    operator delete(v8);
  v33 = (signed __int64)v15;
  v3 = v20;
  v30 = v32;
  *v32 = _mm_loadh_ps((const double *)&v31);
  v30[1].m128_u64[0] = v16;
  return v3;
}
