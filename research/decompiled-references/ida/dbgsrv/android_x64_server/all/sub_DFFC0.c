/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFFC0
// Address: 0x00000000000DFFC0

//----- (00000000000DFFC0) ----------------------------------------------------
__int64 __fastcall sub_DFFC0(__int64 a1, char **a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  char *v5; // rax
  size_t *v6; // rbx
  size_t v7; // rsi
  char *v8; // rax
  size_t v9; // rsi
  char *v10; // rax
  char *v11; // rcx
  size_t v12; // rax
  char *v13; // rax
  size_t v14; // rsi
  _BYTE *v15; // rbx
  __int64 result; // rax

  v3 = (__int64)a2[1];
  if ( *(_BYTE *)(a1 + 24) )
  {
    v4 = (unsigned __int64)a2[2];
    if ( v3 + 2 >= v4 )
    {
      v7 = 2 * v4;
      if ( v7 < v3 + 2 )
        v7 = v3 + 2;
      a2[2] = (char *)v7;
      v5 = (char *)realloc(*a2, v7);
      *a2 = v5;
      v3 = (__int64)a2[1];
    }
    else
    {
      v5 = *a2;
    }
    v6 = (size_t *)(a2 + 2);
    *(_WORD *)&v5[v3] = 14906;
    v3 = (__int64)(a2[1] + 2);
    a2[1] = (char *)v3;
  }
  else
  {
    v6 = (size_t *)(a2 + 2);
  }
  if ( v3 + 6 >= *v6 )
  {
    v9 = 2 * *v6;
    if ( v9 < v3 + 6 )
      v9 = v3 + 6;
    a2[2] = (char *)v9;
    v8 = (char *)realloc(*a2, v9);
    *a2 = v8;
    v3 = (__int64)a2[1];
  }
  else
  {
    v8 = *a2;
  }
  *(_WORD *)&v8[v3 + 4] = 25972;
  *(_DWORD *)&v8[v3] = 1701602660;
  v10 = a2[1];
  v11 = v10 + 6;
  a2[1] = v10 + 6;
  if ( *(_BYTE *)(a1 + 25) )
  {
    v12 = (size_t)(v10 + 9);
    if ( v12 >= *v6 )
    {
      v14 = 2 * *v6;
      if ( v14 < v12 )
        v14 = v12;
      a2[2] = (char *)v14;
      v13 = (char *)realloc(*a2, v14);
      *a2 = v13;
      v11 = a2[1];
    }
    else
    {
      v13 = *a2;
    }
    v11[(_QWORD)v13 + 2] = 32;
    *(_WORD *)&v11[(_QWORD)v13] = 23899;
    a2[1] += 3;
  }
  v15 = *(_BYTE **)(a1 + 16);
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 24LL))(v15, a2);
  if ( v15[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 32LL))(v15, a2);
  return result;
}
