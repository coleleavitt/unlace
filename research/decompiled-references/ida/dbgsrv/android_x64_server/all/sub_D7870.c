/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7870
// Address: 0x00000000000D7870

//----- (00000000000D7870) ----------------------------------------------------
__int64 __fastcall sub_D7870(_QWORD *a1, char **a2)
{
  const void *v4; // r12
  size_t v5; // rbx
  char *v6; // rdi
  size_t v7; // rsi
  char *v8; // rax
  size_t v9; // rsi
  _BYTE *v10; // rbx
  __int64 result; // rax

  v4 = (const void *)a1[2];
  v5 = a1[3] - (_QWORD)v4;
  if ( v5 )
  {
    v6 = a2[1];
    v7 = (size_t)a2[2];
    if ( (unsigned __int64)&v6[v5] >= v7 )
    {
      v9 = 2 * v7;
      if ( v9 < (unsigned __int64)&v6[v5] )
        v9 = (size_t)&v6[v5];
      a2[2] = (char *)v9;
      v8 = (char *)realloc(*a2, v9);
      *a2 = v8;
      v6 = a2[1];
    }
    else
    {
      v8 = *a2;
    }
    memmove(&v6[(_QWORD)v8], v4, v5);
    a2[1] += v5;
  }
  v10 = (_BYTE *)a1[4];
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 24LL))(v10, a2);
  if ( v10[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v10 + 32LL))(v10, a2);
  return result;
}
