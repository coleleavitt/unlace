unsigned __int64 __fastcall sub_212FB50(__int64 a1, char *a2, __int64 a3)
{
  char *v4; // rbp
  char *v5; // r14
  char *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 result; // rax
  __int16 v14; // si
  char *v15; // rcx
  char *v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  char v19; // al
  char v20; // r8
  char *v21; // rdx
  unsigned __int64 v22; // rcx
  char v23; // r9
  int v24; // r10d
  char v25; // r8
  unsigned __int64 v26; // [rsp+0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+8h] [rbp-40h]

  v4 = *(char **)(a1 + 8);
  v5 = *(char **)a1;
  v6 = &a2[-*(_QWORD *)a1];
  v7 = (__int64)&v4[-*(_QWORD *)a1] >> 3;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_19;
  }
  v8 = 2 * v7;
  v9 = -8;
  if ( v7 > 2 * v7 || v8 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_19:
    v9 = 8 * v8;
LABEL_3:
    v27 = a3;
    v26 = (unsigned __int64)v6;
    v10 = operator new(v9);
    v6 = (char *)v26;
    a3 = v27;
    v11 = v10;
    v12 = v10 + v9;
    result = v10 + 8;
    goto LABEL_4;
  }
  result = 8;
  v12 = 0;
  v11 = 0;
LABEL_4:
  v14 = *(_WORD *)(a3 + 4);
  v15 = &v6[v11];
  *(_DWORD *)v15 = *(_DWORD *)a3;
  *((_WORD *)v15 + 2) = v14;
  if ( a2 != v5 )
  {
    v16 = v5;
    v17 = v11;
    do
    {
      v18 = *(_DWORD *)v16;
      v19 = v16[4];
      v16 += 8;
      v17 += 8;
      v20 = *(v16 - 3);
      *(_DWORD *)(v17 - 8) = v18;
      *(_BYTE *)(v17 - 4) = v19;
      *(_BYTE *)(v17 - 3) = v20;
    }
    while ( a2 != v16 );
    result = v11 + 8 * ((unsigned __int64)(a2 - 8 - v5) >> 3) + 16;
  }
  if ( a2 != v4 )
  {
    v21 = a2;
    v22 = result;
    do
    {
      v23 = v21[4];
      v24 = *(_DWORD *)v21;
      v21 += 8;
      v22 += 8LL;
      v25 = *(v21 - 3);
      *(_DWORD *)(v22 - 8) = v24;
      *(_BYTE *)(v22 - 4) = v23;
      *(_BYTE *)(v22 - 3) = v25;
    }
    while ( v4 != v21 );
    result += 8 * ((unsigned __int64)(v4 - a2 - 8) >> 3) + 8;
  }
  if ( v5 )
  {
    v26 = result;
    operator delete(v5);
    result = v26;
  }
  v26 = result;
  *(_QWORD *)(a1 + 16) = v12;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v26);
  return result;
}
