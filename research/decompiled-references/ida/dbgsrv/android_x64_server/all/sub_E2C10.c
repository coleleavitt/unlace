/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E2C10
// Address: 0x00000000000E2C10

//----- (00000000000E2C10) ----------------------------------------------------
char *__fastcall sub_E2C10(__int64 a1, char **a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // r15
  char *v5; // rdx
  unsigned __int64 v6; // rsi
  size_t v7; // rcx
  char *v8; // rax
  size_t v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  char *v14; // rax
  __int64 v15; // rcx
  size_t v16; // rsi
  __int64 v17; // r13
  _BYTE *v18; // rbx
  __int64 v19; // rcx
  size_t v20; // rdx
  unsigned __int64 v21; // rsi
  char *result; // rax
  size_t v23; // rsi
  int v24; // [rsp+0h] [rbp-34h]

  v3 = a1;
  v4 = *(_BYTE **)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)v4 + 24LL))(*(_QWORD *)(a1 + 16), a2);
    if ( v4[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 32LL))(v4, a2);
  }
  v5 = a2[1];
  v6 = (unsigned __int64)a2[2];
  v7 = (size_t)(v5 + 1);
  if ( (unsigned __int64)(v5 + 1) >= v6 )
  {
    v9 = 2 * v6;
    if ( v9 < v7 )
      v9 = (size_t)(v5 + 1);
    a2[2] = (char *)v9;
    v8 = (char *)realloc(*a2, v9);
    *a2 = v8;
    v5 = a2[1];
    v7 = (size_t)(v5 + 1);
  }
  else
  {
    v8 = *a2;
  }
  a2[1] = (char *)v7;
  v5[(_QWORD)v8] = 123;
  if ( *(_QWORD *)(a1 + 32) )
  {
    v10 = (__int64)a2[1];
    LOBYTE(v8) = 1;
    v11 = 0;
    do
    {
      v12 = v10;
      v24 = (int)v8;
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        v13 = (unsigned __int64)a2[2];
        if ( v10 + 2 >= v13 )
        {
          v16 = 2 * v13;
          if ( v16 < v10 + 2 )
            v16 = v10 + 2;
          a2[2] = (char *)v16;
          v14 = (char *)realloc(*a2, v16);
          *a2 = v14;
          v15 = (__int64)a2[1];
        }
        else
        {
          v14 = *a2;
          v15 = v10;
        }
        *(_WORD *)&v14[v15] = 8236;
        v12 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v12;
      }
      v17 = v3;
      v18 = *(_BYTE **)(*(_QWORD *)(v3 + 24) + 8 * v11);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v18 + 24LL))(v18, a2);
      if ( v18[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v18 + 32LL))(v18, a2);
      v19 = (__int64)a2[1];
      if ( v12 == v19 )
      {
        a2[1] = (char *)v10;
        v19 = v10;
        v3 = v17;
        LODWORD(v8) = v24;
      }
      else
      {
        LODWORD(v8) = 0;
        v10 = (__int64)a2[1];
        v3 = v17;
      }
      ++v11;
    }
    while ( v11 != *(_QWORD *)(v3 + 32) );
  }
  else
  {
    v19 = (__int64)a2[1];
  }
  v20 = v19 + 1;
  v21 = (unsigned __int64)a2[2];
  if ( v19 + 1 >= v21 )
  {
    v23 = 2 * v21;
    if ( v23 < v20 )
      v23 = v19 + 1;
    a2[2] = (char *)v23;
    result = (char *)realloc(*a2, v23);
    *a2 = result;
    v19 = (__int64)a2[1];
    v20 = v19 + 1;
  }
  else
  {
    result = *a2;
  }
  a2[1] = (char *)v20;
  result[v19] = 125;
  return result;
}
