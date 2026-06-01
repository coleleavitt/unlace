/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E26D0
// Address: 0x00000000000E26D0

//----- (00000000000E26D0) ----------------------------------------------------
__int64 __fastcall sub_E26D0(_QWORD *a1, char **a2)
{
  _BYTE *v4; // rbx
  const void *v5; // r12
  size_t v6; // r15
  char *v7; // rdi
  size_t v8; // rsi
  char *v9; // rax
  size_t v10; // rsi
  _BYTE *v11; // rbx
  __int64 result; // rax

  v4 = (_BYTE *)a1[2];
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v4[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v4 + 32LL))(v4, a2);
  v5 = (const void *)a1[3];
  v6 = a1[4] - (_QWORD)v5;
  if ( v6 )
  {
    v7 = a2[1];
    v8 = (size_t)a2[2];
    if ( (unsigned __int64)&v7[v6] >= v8 )
    {
      v10 = 2 * v8;
      if ( v10 < (unsigned __int64)&v7[v6] )
        v10 = (size_t)&v7[v6];
      a2[2] = (char *)v10;
      v9 = (char *)realloc(*a2, v10);
      *a2 = v9;
      v7 = a2[1];
    }
    else
    {
      v9 = *a2;
    }
    memmove(&v7[(_QWORD)v9], v5, v6);
    a2[1] += v6;
  }
  v11 = (_BYTE *)a1[5];
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v11 + 24LL))(v11, a2);
  if ( v11[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v11 + 32LL))(v11, a2);
  return result;
}
