void __fastcall sub_1459120(__m128 *a1, int a2, int a3)
{
  char *v3; // rbx
  _DWORD *v4; // rbx
  char *v5; // rcx
  signed __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  char *v13; // rax
  char *v14; // rbp
  char *v15; // r15
  char *v16; // rdx
  char *v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  char *v22; // rax
  char *v23; // rdx
  char *v24; // rdx
  int v25; // r9d
  int v26; // r8d
  __int64 v27; // [rsp+8h] [rbp-50h] BYREF
  void *v28; // [rsp+10h] [rbp-48h]
  signed __int64 v29; // [rsp+18h] [rbp-40h]

  v3 = (char *)a1[10].m128_u64[1];
  if ( v3 != (char *)a1[11].m128_u64[0] )
  {
    *(_DWORD *)v3 = a2;
    v4 = v3 + 8;
    *(v4 - 1) = a3;
    a1[10].m128_u64[1] = (unsigned __int64)v4;
    return;
  }
  v5 = (char *)a1[10].m128_u64[0];
  v9 = v3 - v5;
  v10 = (v3 - v5) >> 3;
  if ( v10 )
  {
    v11 = 2 * v10;
    v12 = -8;
    if ( v10 <= 2 * v10 && v11 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( !v11 )
      {
        v27 = 8;
        v15 = nullptr;
        v14 = nullptr;
        goto LABEL_6;
      }
      v12 = 16 * v10;
    }
  }
  else
  {
    v12 = 8;
  }
  v29 = v3 - v5;
  v28 = v5;
  v13 = (char *)operator new(v12);
  v5 = (char *)v28;
  v9 = v29;
  v14 = v13;
  v15 = &v13[v12];
  v27 = (__int64)(v13 + 8);
LABEL_6:
  v16 = &v14[v9];
  *(_DWORD *)v16 = a2;
  *((_DWORD *)v16 + 1) = a3;
  if ( v3 != v5 )
  {
    v17 = v5;
    v18 = (unsigned __int64)(v3 - 8 - v5) >> 3;
    if ( (v14 >= v5 + 16 || v5 >= v14 + 16) && (v18 & 0x1FFFFFFFFFFFFFFELL) != 0 )
    {
      v19 = v18 + 1;
      v20 = 0;
      do
      {
        *(__m128i *)&v14[v20] = _mm_loadu_si128((const __m128i *)&v5[v20]);
        v20 += 16;
      }
      while ( v20 != 16 * ((v18 + 1) >> 1) );
      v21 = 8 * (v19 & 0xFFFFFFFFFFFFFFFELL);
      v22 = &v5[v21];
      v23 = &v14[v21];
      if ( v19 != (v19 & 0xFFFFFFFFFFFFFFFELL) )
        *(_QWORD *)v23 = *(_QWORD *)v22;
    }
    else
    {
      v24 = v14;
      do
      {
        v25 = *(_DWORD *)v17;
        v26 = *((_DWORD *)v17 + 1);
        v17 += 8;
        v24 += 8;
        *((_DWORD *)v24 - 2) = v25;
        *((_DWORD *)v24 - 1) = v26;
      }
      while ( v3 != v17 );
    }
    v27 = (__int64)&v14[8 * v18 + 16];
  }
  if ( v5 )
    operator delete(v5);
  v28 = v14;
  a1[11].m128_u64[0] = (unsigned __int64)v15;
  a1[10] = _mm_loadh_ps((const double *)&v27);
}
