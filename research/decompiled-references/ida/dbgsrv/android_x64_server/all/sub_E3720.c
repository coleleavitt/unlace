/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3720
// Address: 0x00000000000E3720

//----- (00000000000E3720) ----------------------------------------------------
char *__fastcall sub_E3720(__int64 a1, char **a2, __int64 a3, int a4)
{
  char *result; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  char *v10; // rax
  __int64 v11; // rcx
  size_t v12; // rsi
  _BYTE *v13; // rbx
  int v14; // [rsp+0h] [rbp-34h]

  if ( *(_QWORD *)(a1 + 24) )
  {
    v6 = (__int64)a2[1];
    LOBYTE(a4) = 1;
    v7 = 0;
    do
    {
      v8 = v6;
      v14 = a4;
      if ( (a4 & 1) == 0 )
      {
        v9 = (unsigned __int64)a2[2];
        if ( v6 + 2 >= v9 )
        {
          v12 = 2 * v9;
          if ( v12 < v6 + 2 )
            v12 = v6 + 2;
          a2[2] = (char *)v12;
          v10 = (char *)realloc(*a2, v12);
          *a2 = v10;
          v11 = (__int64)a2[1];
        }
        else
        {
          v10 = *a2;
          v11 = v6;
        }
        *(_WORD *)&v10[v11] = 8236;
        v8 = (__int64)(a2[1] + 2);
        a2[1] = (char *)v8;
      }
      v13 = *(_BYTE **)(*(_QWORD *)(a1 + 16) + 8 * v7);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v13 + 24LL))(v13, a2);
      if ( v13[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v13 + 32LL))(v13, a2);
      result = a2[1];
      if ( (char *)v8 == result )
      {
        a2[1] = (char *)v6;
        a4 = v14;
      }
      else
      {
        a4 = 0;
        v6 = (__int64)a2[1];
      }
      ++v7;
    }
    while ( v7 != *(_QWORD *)(a1 + 24) );
  }
  return result;
}
