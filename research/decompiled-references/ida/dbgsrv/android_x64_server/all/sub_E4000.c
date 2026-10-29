/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4000
// Address: 0x00000000000E4000

//----- (00000000000E4000) ----------------------------------------------------
char *__fastcall sub_E4000(__int64 a1, char **a2)
{
  __int64 v3; // rbx
  char *v4; // rdx
  unsigned __int64 v5; // rsi
  size_t v6; // rcx
  char *v7; // rax
  size_t v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  char *v13; // rax
  __int64 v14; // rcx
  size_t v15; // rsi
  __int64 v16; // r14
  _BYTE *v17; // rbx
  __int64 v18; // rcx
  size_t v19; // rdx
  unsigned __int64 v20; // rsi
  char *result; // rax
  size_t v22; // rsi
  int v23; // [rsp+0h] [rbp-34h]

  v3 = a1;
  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  v6 = (size_t)(v4 + 1);
  if ( (unsigned __int64)(v4 + 1) >= v5 )
  {
    v8 = 2 * v5;
    if ( v8 < v6 )
      v8 = (size_t)(v4 + 1);
    a2[2] = (char *)v8;
    v7 = (char *)realloc(*a2, v8);
    *a2 = v7;
    v4 = a2[1];
    v6 = (size_t)(v4 + 1);
  }
  else
  {
    v7 = *a2;
  }
  a2[1] = (char *)v6;
  v4[(_QWORD)v7] = 91;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v9 = (__int64)a2[1];
    LOBYTE(v7) = 1;
    v10 = 0;
    do
    {
      v11 = v9;
      v23 = (int)v7;
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
      v17 = *(_BYTE **)(*(_QWORD *)(v3 + 16) + 8 * v10);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 24LL))(v17, a2);
      if ( v17[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v17 + 32LL))(v17, a2);
      v18 = (__int64)a2[1];
      if ( v11 == v18 )
      {
        a2[1] = (char *)v9;
        v18 = v9;
        LODWORD(v7) = v23;
      }
      else
      {
        LODWORD(v7) = 0;
        v9 = (__int64)a2[1];
      }
      v3 = v16;
      ++v10;
    }
    while ( v10 != *(_QWORD *)(v16 + 24) );
  }
  else
  {
    v18 = (__int64)a2[1];
  }
  v19 = v18 + 1;
  v20 = (unsigned __int64)a2[2];
  if ( v18 + 1 >= v20 )
  {
    v22 = 2 * v20;
    if ( v22 < v19 )
      v22 = v18 + 1;
    a2[2] = (char *)v22;
    result = (char *)realloc(*a2, v22);
    *a2 = result;
    v18 = (__int64)a2[1];
    v19 = v18 + 1;
  }
  else
  {
    result = *a2;
  }
  a2[1] = (char *)v19;
  result[v18] = 93;
  return result;
}
