unsigned __int64 __fastcall sub_1C387A0(__int64 a1, void **a2, unsigned __int64 a3)
{
  void **v4; // r12
  void **v5; // rbp
  char *v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  int v12; // esi
  char *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  void **v16; // rbx
  char v17; // al
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  void **v20; // rbx
  unsigned int v21; // edx
  void *v22; // rdx
  void **i; // rbx
  unsigned __int64 result; // rax
  __m128 v25; // xmm0
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+10h] [rbp-48h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v4 = *(void ***)(a1 + 8);
  v5 = *(void ***)a1;
  v6 = (char *)a2 - *(_QWORD *)a1;
  if ( !(0xAAAAAAAAAAAAAAABLL * (((__int64)v4 - *(_QWORD *)a1) >> 3)) )
  {
    v7 = 1;
    goto LABEL_29;
  }
  v7 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v8 = -16;
  if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v4 - *(_QWORD *)a1) >> 3) > 0x5555555555555556LL
                                                                   * (((__int64)v4 - *(_QWORD *)a1) >> 3)
    || v7 > 0xAAAAAAAAAAAAAAALL )
  {
    goto LABEL_3;
  }
  if ( v7 )
  {
LABEL_29:
    v8 = 24 * v7;
LABEL_3:
    v28 = a3;
    v9 = operator new(v8);
    a3 = v28;
    v27 = v9;
    v10 = v9;
    v29 = v9 + v8;
    v11 = v9 + 24;
    goto LABEL_4;
  }
  v27 = 0;
  v11 = 24;
  v10 = 0;
  v29 = 0;
LABEL_4:
  v12 = *(_DWORD *)(a3 + 8);
  v13 = &v6[v10];
  *(_DWORD *)(a3 + 8) = 0;
  *((_DWORD *)v13 + 2) = v12;
  *(_QWORD *)v13 = *(_QWORD *)a3;
  LOBYTE(v12) = *(_BYTE *)(a3 + 12);
  v14 = *(_QWORD *)(a3 + 16);
  v13[12] = v12;
  *((_QWORD *)v13 + 2) = v14;
  if ( a2 != v5 )
  {
    v15 = v10;
    v16 = v5;
    do
    {
      v18 = *((_DWORD *)v16 + 2);
      *(_DWORD *)(v15 + 8) = v18;
      if ( v18 <= 0x40 )
        *(_QWORD *)v15 = *v16;
      else
        sub_2205510(v15);
      v17 = *((_BYTE *)v16 + 12);
      v16 += 3;
      v15 += 24LL;
      *(_BYTE *)(v15 - 12) = v17;
      *(_QWORD *)(v15 - 8) = *(v16 - 1);
    }
    while ( a2 != v16 );
    v11 = v27 + 8 * ((unsigned __int64)((char *)(a2 - 3) - (char *)v5) >> 3) + 48;
  }
  v19 = v11;
  v20 = a2;
  if ( a2 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v21 = *((_DWORD *)v20 + 2);
        *(_DWORD *)(v19 + 8) = v21;
        if ( v21 > 0x40 )
          break;
        v22 = *v20;
        v20 += 3;
        v19 += 24LL;
        *(_QWORD *)(v19 - 24) = v22;
        *(_BYTE *)(v19 - 12) = *((_BYTE *)v20 - 12);
        *(_QWORD *)(v19 - 8) = *(v20 - 1);
        if ( v4 == v20 )
          goto LABEL_14;
      }
      v28 = v19;
      v20 += 3;
      sub_2205510(v19);
      v26 = v28;
      *(_BYTE *)(v28 + 12) = *((_BYTE *)v20 - 12);
      v19 = v26 + 24;
      *(_QWORD *)(v19 - 8) = *(v20 - 1);
    }
    while ( v20 != v4 );
LABEL_14:
    v11 += 8 * ((unsigned __int64)((char *)v4 - (char *)a2 - 24) >> 3) + 24;
  }
  for ( i = v5; i != v4; i += 3 )
  {
    if ( *((_DWORD *)i + 2) > 0x40u && *i )
      operator delete[](*i);
  }
  if ( v5 )
    operator delete(v5);
  v27 = v11;
  result = v29;
  v25 = _mm_loadh_ps((const double *)&v27);
  *(_QWORD *)(a1 + 16) = v29;
  *(__m128 *)a1 = v25;
  return result;
}
