__int64 __fastcall sub_100CE90(char **a1, __int64 *a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r15
  int v5; // edx
  int v6; // edx
  char *v8; // r13
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r14
  char *v21; // r15
  char *v22; // rsi
  __int64 v23; // rdi
  char *v24; // r14
  unsigned __int64 v25; // rdx
  char *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+10h] [rbp-48h]
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v2 = a1[1];
  if ( v2 != a1[2] )
  {
    *((_QWORD *)v2 + 1) = 0;
    *(_WORD *)v2 = 7;
    v3 = *a2;
    *((_QWORD *)v2 + 2) = 0;
    v4 = (__int64)a1[1];
    *((_DWORD *)v2 + 6) = 0;
    *((_QWORD *)v2 + 1) = v3;
    LODWORD(v3) = *((_DWORD *)a2 + 2);
    *a2 = 0;
    *((_DWORD *)v2 + 4) = v3;
    v5 = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 2) = 0;
    LODWORD(v3) = *((_DWORD *)v2 + 5);
    *((_DWORD *)v2 + 5) = v5;
    v6 = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 3) = v3;
    LODWORD(v3) = *((_DWORD *)v2 + 6);
    *((_DWORD *)v2 + 6) = v6;
    *((_DWORD *)a2 + 4) = v3;
    a1[1] = (char *)(v4 + 40);
    return v4;
  }
  v8 = *a1;
  v10 = v2 - *a1;
  v11 = v10 >> 3;
  if ( 0xCCCCCCCCCCCCCCCDLL * (v10 >> 3) )
  {
    v12 = 0x999999999999999ALL * v11;
    v13 = -16;
    if ( 0xCCCCCCCCCCCCCCCDLL * v11 <= 0x999999999999999ALL * v11 && v12 <= 0x666666666666666LL )
    {
      if ( !v12 )
      {
        v28 = 40;
        v15 = 0;
        v30 = 0;
        goto LABEL_7;
      }
      v13 = 16 * v11;
    }
  }
  else
  {
    v13 = 40;
  }
  v29 = v10;
  v14 = operator new(v13);
  v10 = v29;
  v15 = v14;
  v30 = v14 + v13;
  v28 = v14 + 40;
LABEL_7:
  v16 = *a2;
  v17 = v15 + v10;
  *a2 = 0;
  *(_WORD *)v17 = 7;
  v18 = *((_DWORD *)a2 + 4);
  *(_QWORD *)(v17 + 8) = v16;
  v19 = a2[1];
  *(_DWORD *)(v17 + 24) = v18;
  *(_QWORD *)(v17 + 16) = v19;
  a2[1] = 0;
  *((_DWORD *)a2 + 4) = 0;
  if ( v2 == v8 )
  {
    v4 = v15;
  }
  else
  {
    v20 = v15;
    v21 = v8;
    do
    {
      v22 = v21;
      v23 = v20;
      v21 += 40;
      v20 += 40;
      sub_222B350(v23, v22);
    }
    while ( v2 != v21 );
    v24 = v8;
    v25 = (0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v2 - 40 - v8) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v4 = v15 + 8 * (5 * v25 + 5);
    v28 = v15 + 40 * v25 + 80;
    do
    {
      v26 = v24;
      v24 += 40;
      sub_222B2A0(v26);
    }
    while ( v2 != v24 );
  }
  if ( v8 )
    operator delete(v8);
  v29 = v15;
  v27 = v30;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v28);
  a1[2] = (char *)v27;
  return v4;
}
