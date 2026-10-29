/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E6F20
// Address: 0x00000000000E6F20

//----- (00000000000E6F20) ----------------------------------------------------
__int64 __fastcall sub_E6F20(_QWORD *a1, char **a2)
{
  const void *v4; // r12
  __int64 v5; // rbx
  char *v6; // rdi
  size_t v7; // rbx
  size_t v8; // rsi
  char *v9; // rax
  _QWORD *v10; // r13
  size_t v11; // rsi
  size_t v12; // rbx
  size_t v13; // rcx
  char *v14; // rax
  size_t v15; // rsi
  _BYTE *v16; // rbx
  __int64 result; // rax

  v4 = (const void *)a1[2];
  v5 = a1[3];
  v6 = a2[1];
  v7 = v5 - (_QWORD)v4;
  if ( v7 )
  {
    v8 = (size_t)a2[2];
    if ( (unsigned __int64)&v6[v7] >= v8 )
    {
      v11 = 2 * v8;
      if ( v11 < (unsigned __int64)&v6[v7] )
        v11 = (size_t)&v6[v7];
      a2[2] = (char *)v11;
      v9 = (char *)realloc(*a2, v11);
      *a2 = v9;
      v6 = a2[1];
    }
    else
    {
      v9 = *a2;
    }
    v10 = a2 + 2;
    memmove(&v6[(_QWORD)v9], v4, v7);
    v12 = (size_t)&a2[1][v7];
    a2[1] = (char *)v12;
    v6 = (char *)v12;
  }
  else
  {
    v10 = a2 + 2;
  }
  v13 = (size_t)(v6 + 1);
  if ( (unsigned __int64)(v6 + 1) >= *v10 )
  {
    v15 = 2LL * *v10;
    if ( v15 < v13 )
      v15 = (size_t)(v6 + 1);
    a2[2] = (char *)v15;
    v14 = (char *)realloc(*a2, v15);
    *a2 = v14;
    v6 = a2[1];
    v13 = (size_t)(v6 + 1);
  }
  else
  {
    v14 = *a2;
  }
  a2[1] = (char *)v13;
  v6[(_QWORD)v14] = 32;
  v16 = (_BYTE *)a1[4];
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 24LL))(v16, a2);
  if ( v16[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 32LL))(v16, a2);
  return result;
}
