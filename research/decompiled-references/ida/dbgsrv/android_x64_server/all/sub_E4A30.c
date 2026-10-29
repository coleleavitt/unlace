/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4A30
// Address: 0x00000000000E4A30

//----- (00000000000E4A30) ----------------------------------------------------
char *__fastcall sub_E4A30(__int64 a1, char **a2)
{
  __int64 v3; // rbx
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  char *v12; // rax
  __int64 v13; // rcx
  size_t v14; // rsi
  __int64 v15; // r14
  _BYTE *v16; // rbx
  __int64 v17; // rcx
  size_t v18; // rdx
  unsigned __int64 v19; // rsi
  char *result; // rax
  size_t v21; // rsi
  int v22; // [rsp+0h] [rbp-34h]

  v3 = a1;
  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 12) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 12) )
      v7 = (size_t)(v4 + 12);
    a2[2] = (char *)v7;
    v6 = (char *)realloc(*a2, v7);
    *a2 = v6;
    v4 = a2[1];
  }
  else
  {
    v6 = *a2;
  }
  qmemcpy(&v4[(_QWORD)v6], " [enable_if:", 12);
  v8 = (__int64)(a2[1] + 12);
  a2[1] = (char *)v8;
  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(v6) = 1;
    v9 = 0;
    do
    {
      v10 = v8;
      v22 = (int)v6;
      if ( ((unsigned __int8)v6 & 1) == 0 )
      {
        v11 = (unsigned __int64)a2[2];
        if ( v8 + 2 >= v11 )
        {
          v14 = 2 * v11;
          if ( v14 < v8 + 2 )
            v14 = v8 + 2;
          a2[2] = (char *)v14;
          v12 = (char *)realloc(*a2, v14);
          *a2 = v12;
          v13 = (__int64)a2[1];
        }
        else
        {
          v12 = *a2;
          v13 = v8;
        }
        *(_WORD *)&v12[v13] = 8236;
        v10 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v10;
      }
      v15 = v3;
      v16 = *(_BYTE **)(*(_QWORD *)(v3 + 16) + 8 * v9);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 24LL))(v16, a2);
      if ( v16[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 32LL))(v16, a2);
      v17 = (__int64)a2[1];
      if ( v10 == v17 )
      {
        a2[1] = (char *)v8;
        v17 = v8;
        LODWORD(v6) = v22;
      }
      else
      {
        LODWORD(v6) = 0;
        v8 = (__int64)a2[1];
      }
      v3 = v15;
      ++v9;
    }
    while ( v9 != *(_QWORD *)(v15 + 24) );
  }
  else
  {
    v17 = v8;
  }
  v18 = v17 + 1;
  v19 = (unsigned __int64)a2[2];
  if ( v17 + 1 >= v19 )
  {
    v21 = 2 * v19;
    if ( v21 < v18 )
      v21 = v17 + 1;
    a2[2] = (char *)v21;
    result = (char *)realloc(*a2, v21);
    *a2 = result;
    v17 = (__int64)a2[1];
    v18 = v17 + 1;
  }
  else
  {
    result = *a2;
  }
  a2[1] = (char *)v18;
  result[v17] = 93;
  return result;
}
