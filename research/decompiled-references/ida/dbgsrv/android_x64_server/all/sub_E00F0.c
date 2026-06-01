/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E00F0
// Address: 0x00000000000E00F0

//----- (00000000000E00F0) ----------------------------------------------------
char *__fastcall sub_E00F0(char **a1)
{
  char v1; // al
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  char *v5; // r15
  char *v6; // r12
  signed __int64 v7; // r15
  char *v8; // rax
  __int64 v9; // rcx
  char *v10; // r13
  char *v11; // rax

  if ( a1[1] == *a1 )
    return sub_D7A40(a1);
  v1 = **a1;
  if ( v1 == 68 )
  {
    v2 = sub_D88C0(a1);
    if ( !v2 )
      return nullptr;
LABEL_8:
    v3 = v2;
    v5 = a1[38];
    if ( v5 == a1[39] )
    {
      v6 = a1[37];
      v7 = v5 - v6;
      if ( a1 + 40 == (char **)v6 )
      {
        v11 = (char *)malloc(2 * v7);
        v10 = v11;
        if ( v7 )
          memmove(v11, v6, v7);
        a1[37] = v10;
        v9 = v7 >> 2;
      }
      else
      {
        v8 = (char *)realloc(a1[37], 2 * v7);
        v9 = v7 >> 2;
        v10 = v8;
        a1[37] = v8;
      }
      v5 = &v10[8 * (v7 >> 3)];
      a1[38] = v5;
      a1[39] = &v10[8 * v9];
    }
    a1[38] = v5 + 8;
    *(_QWORD *)v5 = v3;
    return (char *)v3;
  }
  if ( v1 != 84 )
    return sub_D7A40(a1);
  v2 = sub_D85D0((__int64)a1);
  if ( v2 )
    goto LABEL_8;
  return nullptr;
}
