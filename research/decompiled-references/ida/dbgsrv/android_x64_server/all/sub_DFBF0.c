/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFBF0
// Address: 0x00000000000DFBF0

//----- (00000000000DFBF0) ----------------------------------------------------
char *__fastcall sub_DFBF0(__int64 a1, char **a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // r15
  char *v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // rax
  size_t v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  char *v13; // rax
  __int64 v14; // rcx
  size_t v15; // rsi
  __int64 v16; // rbp
  _BYTE *v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  char *result; // rax
  size_t v21; // rsi
  int v22; // [rsp+0h] [rbp-34h]

  v3 = a1;
  v4 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v4[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 32LL))(v4, a2);
  v5 = a2[1];
  v6 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v5 + 1) >= v6 )
  {
    v8 = 2 * v6;
    if ( v8 < (unsigned __int64)(v5 + 1) )
      v8 = (size_t)(v5 + 1);
    a2[2] = (char *)v8;
    v7 = (char *)realloc(*a2, v8);
    *a2 = v7;
    v5 = a2[1];
  }
  else
  {
    v7 = *a2;
  }
  v5[(_QWORD)v7] = 40;
  v9 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v9;
  if ( *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(v7) = 1;
    v10 = 0;
    do
    {
      v11 = v9;
      v22 = (int)v7;
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        v12 = (unsigned __int64)a2[2];
        if ( v9 + 2 >= v12 )
        {
          v15 = 2 * v12;
          if ( v15 < v9 + 2 )
            v15 = v9 + 2;
          a2[2] = (char *)v15;
          v13 = (char *)realloc(*a2, v15);
          *a2 = v13;
          v14 = (__int64)a2[1];
        }
        else
        {
          v13 = *a2;
          v14 = v9;
        }
        *(_WORD *)&v13[v14] = 8236;
        v11 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v11;
      }
      v16 = v3;
      v17 = *(_BYTE **)(*(_QWORD *)(v3 + 24) + 8 * v10);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 24LL))(v17, a2);
      if ( v17[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 32LL))(v17, a2);
      v18 = (__int64)a2[1];
      if ( v11 == v18 )
      {
        a2[1] = (char *)v9;
        v18 = v9;
        v3 = v16;
        LODWORD(v7) = v22;
      }
      else
      {
        LODWORD(v7) = 0;
        v9 = (__int64)a2[1];
        v3 = v16;
      }
      ++v10;
    }
    while ( v10 != *(_QWORD *)(v3 + 32) );
  }
  else
  {
    v18 = v9;
  }
  v19 = (unsigned __int64)a2[2];
  if ( v18 + 1 >= v19 )
  {
    v21 = 2 * v19;
    if ( v21 < v18 + 1 )
      v21 = v18 + 1;
    a2[2] = (char *)v21;
    result = (char *)realloc(*a2, v21);
    *a2 = result;
    v18 = (__int64)a2[1];
  }
  else
  {
    result = *a2;
  }
  result[v18] = 41;
  ++a2[1];
  return result;
}
