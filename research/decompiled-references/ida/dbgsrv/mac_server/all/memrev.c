/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memrev
// Address: 0x000000010007DA80

//----- (000000010007DA80) ----------------------------------------------------
_BYTE *__fastcall memrev(_BYTE *a1, __int64 a2)
{
  _BYTE *result; // rax
  unsigned __int64 v3; // rdx
  char v4; // cl
  char *v5; // rcx
  char *v6; // rdx
  __int64 v7; // rsi
  char v8; // di
  char v9; // di
  bool v10; // cf

  result = a1;
  if ( a2 >= 2 )
  {
    v3 = a2 - 2;
    if ( (((_BYTE)a2 - 2) & 2) != 0 )
    {
      v5 = a1;
      if ( v3 < 2 )
        return result;
    }
    else
    {
      v4 = *a1;
      *a1 = a1[a2 - 1];
      a1[a2 - 1] = v4;
      v5 = a1 + 1;
      a2 -= 2;
      if ( v3 < 2 )
        return result;
    }
    v6 = &v5[a2 - 1];
    v7 = a2 - 2;
    do
    {
      v8 = *v5;
      *v5 = *v6;
      *v6 = v8;
      v9 = v5[1];
      v5[1] = *(v6 - 1);
      *(v6 - 1) = v9;
      v5 += 2;
      v6 -= 2;
      v10 = __CFADD__(v7, -4);
      v7 -= 4;
    }
    while ( v10 );
  }
  return result;
}
