/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x00000000000C06D0

//----- (00000000000C06D0) ----------------------------------------------------
__int64 __fastcall memicmp(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // x23
  int v7; // w22
  __int64 result; // x0

  if ( a3 < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = tolower(*(unsigned __int8 *)(a1 + v6));
    result = (unsigned int)(v7 - tolower(*(unsigned __int8 *)(a2 + v6)));
    if ( (_DWORD)result )
      break;
    if ( (int)++v6 >= a3 )
      return 0;
  }
  return result;
}
