/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFDB0
// Address: 0x00000000000DFDB0

//----- (00000000000DFDB0) ----------------------------------------------------
char *__fastcall sub_DFDB0(__int64 a1, char **a2)
{
  __int64 v3; // rbx
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  _BYTE *v8; // r15
  char *v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  size_t v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // r15
  unsigned __int64 v16; // rsi
  char *v17; // rax
  __int64 v18; // rcx
  size_t v19; // rsi
  __int64 v20; // rbp
  _BYTE *v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  char *result; // rax
  size_t v25; // rsi
  int v26; // [rsp+0h] [rbp-34h]

  v3 = a1;
  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 1) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 1) )
      v7 = (size_t)(v4 + 1);
    a2[2] = (char *)v7;
    v6 = (char *)realloc(*a2, v7);
    *a2 = v6;
    v4 = a2[1];
  }
  else
  {
    v6 = *a2;
  }
  v4[(_QWORD)v6] = 40;
  ++a2[1];
  v8 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 24LL))(v8, a2);
  if ( v8[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 32LL))(v8, a2);
  v9 = a2[1];
  v10 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v9 + 2) >= v10 )
  {
    v12 = 2 * v10;
    if ( v12 < (unsigned __int64)(v9 + 2) )
      v12 = (size_t)(v9 + 2);
    a2[2] = (char *)v12;
    v11 = (char *)realloc(*a2, v12);
    *a2 = v11;
    v9 = a2[1];
  }
  else
  {
    v11 = *a2;
  }
  *(_WORD *)&v9[(_QWORD)v11] = 10281;
  v13 = (__int64)(a2[1] + 2);
  a2[1] = (char *)v13;
  if ( *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(v11) = 1;
    v14 = 0;
    do
    {
      v15 = v13;
      v26 = (int)v11;
      if ( ((unsigned __int8)v11 & 1) == 0 )
      {
        v16 = (unsigned __int64)a2[2];
        if ( v13 + 2 >= v16 )
        {
          v19 = 2 * v16;
          if ( v19 < v13 + 2 )
            v19 = v13 + 2;
          a2[2] = (char *)v19;
          v17 = (char *)realloc(*a2, v19);
          *a2 = v17;
          v18 = (__int64)a2[1];
        }
        else
        {
          v17 = *a2;
          v18 = v13;
        }
        *(_WORD *)&v17[v18] = 8236;
        v15 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v15;
      }
      v20 = v3;
      v21 = *(_BYTE **)(*(_QWORD *)(v3 + 24) + 8 * v14);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v21 + 24LL))(v21, a2);
      if ( v21[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v21 + 32LL))(v21, a2);
      v22 = (__int64)a2[1];
      if ( v15 == v22 )
      {
        a2[1] = (char *)v13;
        v22 = v13;
        v3 = v20;
        LODWORD(v11) = v26;
      }
      else
      {
        LODWORD(v11) = 0;
        v13 = (__int64)a2[1];
        v3 = v20;
      }
      ++v14;
    }
    while ( v14 != *(_QWORD *)(v3 + 32) );
  }
  else
  {
    v22 = v13;
  }
  v23 = (unsigned __int64)a2[2];
  if ( v22 + 1 >= v23 )
  {
    v25 = 2 * v23;
    if ( v25 < v22 + 1 )
      v25 = v22 + 1;
    a2[2] = (char *)v25;
    result = (char *)realloc(*a2, v25);
    *a2 = result;
    v22 = (__int64)a2[1];
  }
  else
  {
    result = *a2;
  }
  result[v22] = 41;
  ++a2[1];
  return result;
}
