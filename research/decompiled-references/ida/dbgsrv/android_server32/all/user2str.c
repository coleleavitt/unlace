/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2str
// Address: 0x00071774

//----- (00071774) --------------------------------------------------------
int __fastcall user2str(int a1, unsigned __int8 *a2, int a3)
{
  int result; // r0
  int i; // r7
  int v7; // r0
  int v8; // r0
  unsigned __int8 *v9; // [sp+4h] [bp-8h] BYREF

  v9 = a2;
  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  result = 0;
  if ( !a2 )
    return result;
  if ( a3 < 1 )
    return a1;
  for ( i = 0; ; ++i )
  {
    v9 = a2 + 1;
    v7 = *a2;
    *(_BYTE *)(a1 + i) = v7;
    if ( v7 != 92 )
      break;
    *(_BYTE *)(a1 + i) = back_char(&v9);
LABEL_10:
    if ( i + 1 >= a3 )
    {
      v8 = i + 1;
      if ( a3 < 1 )
        return a1;
      goto LABEL_12;
    }
    a2 = v9;
  }
  if ( v7 )
    goto LABEL_10;
  v8 = i;
  if ( a3 < 1 )
    return a1;
LABEL_12:
  if ( v8 == a3 )
    *(_BYTE *)(a1 + i) = 0;
  return a1;
}
// E0550: using guessed type char under_debugger;
