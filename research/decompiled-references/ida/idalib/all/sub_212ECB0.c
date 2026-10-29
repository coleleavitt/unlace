unsigned __int64 __fastcall sub_212ECB0(__int64 a1, char *a2, __int64 a3)
{
  char *v5; // r12
  char *v6; // rbx
  char *v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r13
  char *v12; // rdi
  __m128i v13; // xmm3
  unsigned int v14; // eax
  unsigned __int64 v15; // r15
  char *v16; // r13
  __int64 v17; // rdx
  __m128i v18; // xmm1
  unsigned int v19; // edx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  char *v22; // r15
  __int64 v23; // rsi
  __m128i v24; // xmm2
  unsigned int v25; // esi
  char *i; // rbp
  void *v27; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  if ( !(0xCCCCCCCCCCCCCCCDLL * ((__int64)&v5[-*(_QWORD *)a1] >> 3)) )
  {
    v8 = 1;
    goto LABEL_30;
  }
  v8 = 0x999999999999999ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v9 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * ((__int64)&v5[-*(_QWORD *)a1] >> 3) > 0x999999999999999ALL
                                                                  * ((__int64)&v5[-*(_QWORD *)a1] >> 3)
    || v8 > 0x666666666666666LL )
  {
    goto LABEL_3;
  }
  if ( v8 )
  {
LABEL_30:
    v9 = 40 * v8;
LABEL_3:
    v32 = a3;
    v30 = (unsigned __int64)v7;
    v10 = operator new(v9);
    v7 = (char *)v30;
    a3 = v32;
    v29 = v10;
    v11 = v10 + 40;
    v31 = v10 + v9;
    goto LABEL_4;
  }
  v29 = 0;
  v11 = 40;
  v10 = 0;
  v31 = 0;
LABEL_4:
  v12 = &v7[v10];
  v13 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  *(_DWORD *)v12 = *(_DWORD *)a3;
  v14 = *(_DWORD *)(a3 + 32);
  *(__m128i *)(v12 + 8) = v13;
  *((_DWORD *)v12 + 8) = v14;
  if ( v14 > 0x40 )
    sub_2205510(v12 + 24);
  else
    *((_QWORD *)v12 + 3) = *(_QWORD *)(a3 + 24);
  if ( a2 != v6 )
  {
    v15 = v29;
    v16 = v6;
    do
    {
      while ( 1 )
      {
        v18 = _mm_loadu_si128((const __m128i *)(v16 + 8));
        *(_DWORD *)v15 = *(_DWORD *)v16;
        v19 = *((_DWORD *)v16 + 8);
        *(__m128i *)(v15 + 8) = v18;
        *(_DWORD *)(v15 + 32) = v19;
        if ( v19 > 0x40 )
          break;
        v17 = *((_QWORD *)v16 + 3);
        v16 += 40;
        v15 += 40LL;
        *(_QWORD *)(v15 - 16) = v17;
        if ( a2 == v16 )
          goto LABEL_11;
      }
      v20 = v15 + 24;
      v16 += 40;
      v15 += 40LL;
      sub_2205510(v20);
    }
    while ( a2 != v16 );
LABEL_11:
    v11 = v29 + 8 * ((unsigned __int64)(a2 - 40 - v6) >> 3) + 80;
  }
  v21 = v11;
  v22 = a2;
  if ( a2 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v24 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        *(_DWORD *)v21 = *(_DWORD *)v22;
        v25 = *((_DWORD *)v22 + 8);
        *(__m128i *)(v21 + 8) = v24;
        *(_DWORD *)(v21 + 32) = v25;
        if ( v25 > 0x40 )
          break;
        v23 = *((_QWORD *)v22 + 3);
        v22 += 40;
        v21 += 40LL;
        *(_QWORD *)(v21 - 16) = v23;
        if ( v5 == v22 )
          goto LABEL_17;
      }
      v30 = v21;
      v22 += 40;
      sub_2205510(v21 + 24);
      v21 = v30 + 40;
    }
    while ( v5 != v22 );
LABEL_17:
    v11 += 8 * ((unsigned __int64)(v5 - a2 - 40) >> 3) + 40;
  }
  for ( i = v6; v5 != i; i += 40 )
  {
    if ( *((_DWORD *)i + 8) > 0x40u )
    {
      v27 = *((void **)i + 3);
      if ( v27 )
        operator delete[](v27);
    }
  }
  if ( v6 )
    operator delete(v6);
  result = v31;
  v29 = v11;
  *(_QWORD *)(a1 + 16) = v31;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v29);
  return result;
}
