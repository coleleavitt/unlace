/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x000000010007537C

//----- (000000010007537C) ----------------------------------------------------
__int64 __fastcall memicmp(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  int v3; // w19
  int v6; // w22
  __int64 result; // x0

  v3 = a3;
  if ( a3 < 1 )
    return 0;
  while ( 1 )
  {
    v6 = __tolower(*a1);
    result = (unsigned int)(v6 - __tolower(*a2));
    if ( (_DWORD)result )
      break;
    ++a2;
    ++a1;
    if ( !--v3 )
      return 0;
  }
  return result;
}
