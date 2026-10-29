__int64 __fastcall sub_1C381C0(__int64 a1, void **a2, unsigned __int64 a3)
{
  void **v4; // r12
  void **v5; // rbp
  char *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned int v12; // eax
  char *v13; // rbx
  __int64 v14; // r15
  char *v15; // rbx
  char v16; // al
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  void **v19; // rbx
  void *v20; // rdx
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  void **i; // rbx
  __int64 result; // rax
  __m128 v25; // xmm0
  __int64 v26; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = *(void ***)(a1 + 8);
  v5 = *(void ***)a1;
  v6 = (char *)a2 - *(_QWORD *)a1;
  v7 = ((__int64)v4 - *(_QWORD *)a1) >> 4;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_31;
  }
  v8 = 2 * v7;
  v9 = -16;
  if ( v7 > 2 * v7 || v8 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_31:
    v9 = 16 * v8;
LABEL_3:
    v27 = a3;
    v10 = operator new(v9);
    a3 = v27;
    v26 = v10;
    v28 = v10 + v9;
    v11 = v10 + 16;
    goto LABEL_4;
  }
  v28 = 0;
  v11 = 16;
  v26 = 0;
LABEL_4:
  v12 = *(_DWORD *)(a3 + 8);
  v13 = &v6[v26];
  *((_DWORD *)v13 + 2) = v12;
  if ( v12 > 0x40 )
  {
    v27 = a3;
    sub_2205510(v13);
    a3 = v27;
  }
  else
  {
    *(_QWORD *)v13 = *(_QWORD *)a3;
  }
  v13[12] = *(_BYTE *)(a3 + 12);
  if ( a2 != v5 )
  {
    v14 = v26;
    v15 = (char *)v5;
    do
    {
      v17 = *((_DWORD *)v15 + 2);
      *(_DWORD *)(v14 + 8) = v17;
      if ( v17 <= 0x40 )
        *(_QWORD *)v14 = *(_QWORD *)v15;
      else
        sub_2205510(v14);
      v16 = v15[12];
      v15 += 16;
      v14 += 16;
      *(_BYTE *)(v14 - 4) = v16;
    }
    while ( a2 != (void **)v15 );
    v11 = v26 + (((char *)(a2 - 2) - (char *)v5) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  v18 = v11;
  v19 = a2;
  if ( a2 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v21 = *((_DWORD *)v19 + 2);
        *(_DWORD *)(v18 + 8) = v21;
        if ( v21 > 0x40 )
          break;
        v20 = *v19;
        v19 += 2;
        v18 += 16LL;
        *(_QWORD *)(v18 - 16) = v20;
        *(_BYTE *)(v18 - 4) = *((_BYTE *)v19 - 4);
        if ( v4 == v19 )
          goto LABEL_18;
      }
      v27 = v18;
      v19 += 2;
      sub_2205510(v18);
      v22 = v27;
      *(_BYTE *)(v27 + 12) = *((_BYTE *)v19 - 4);
      v18 = v22 + 16;
    }
    while ( v4 != v19 );
LABEL_18:
    v11 += (((char *)v4 - (char *)a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  for ( i = v5; v4 != i; i += 2 )
  {
    if ( *((_DWORD *)i + 2) > 0x40u && *i )
      operator delete[](*i);
  }
  if ( v5 )
    operator delete(v5);
  v26 = v11;
  result = v28;
  v25 = _mm_loadh_ps((const double *)&v26);
  *(_QWORD *)(a1 + 16) = v28;
  *(__m128 *)a1 = v25;
  return result;
}
