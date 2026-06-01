/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x0000000000493010

//----- (0000000000493010) ----------------------------------------------------
__int64 __fastcall memicmp(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x19
  int v7; // w20
  int v8; // w0
  __int64 result; // x0

  if ( a3 <= 0 )
    return 0;
  v3 = 0;
  do
  {
    v7 = tolower(*(unsigned __int8 *)(a1 + v3));
    v8 = *(unsigned __int8 *)(a2 + v3++);
    result = (unsigned int)(v7 - tolower(v8));
  }
  while ( !(_DWORD)result && a3 > (int)v3 );
  return result;
}
