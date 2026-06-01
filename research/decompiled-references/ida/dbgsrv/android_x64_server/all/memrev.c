/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memrev
// Address: 0x00000000000C53C0

//----- (00000000000C53C0) ----------------------------------------------------
char *__fastcall memrev(char *a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  char *v4; // rax
  char v5; // al
  char *v6; // rcx
  __int64 v7; // rsi
  char v8; // r8
  char v9; // r8

  if ( a2 >= 2 )
  {
    v2 = -4;
    if ( ~a2 >= -5 && a2 != 4 )
      v2 = ~a2;
    v3 = a2 + v2;
    if ( (v3 & 2) != 0 )
    {
      v5 = *a1;
      *a1 = a1[a2 - 1];
      a1[a2 - 1] = v5;
      v4 = a1 + 1;
      a2 -= 2;
      if ( v3 > 0xFFFFFFFFFFFFFFFDLL )
        return a1;
    }
    else
    {
      v4 = a1;
      if ( v3 > 0xFFFFFFFFFFFFFFFDLL )
        return a1;
    }
    v6 = &v4[a2 - 1];
    v7 = a2 + 4;
    do
    {
      v8 = *v4;
      *v4 = *v6;
      *v6 = v8;
      v9 = v4[1];
      v4[1] = *(v6 - 1);
      *(v6 - 1) = v9;
      v7 -= 4;
      v6 -= 2;
      v4 += 2;
    }
    while ( v7 > 5 );
  }
  return a1;
}
