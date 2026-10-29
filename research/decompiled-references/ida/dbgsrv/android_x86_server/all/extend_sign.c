/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: extend_sign
// Address: 0x0009D950

//----- (0009D950) --------------------------------------------------------
int __cdecl extend_sign(__int64 a1, int a2, unsigned __int8 a3)
{
  int result; // eax
  char v4; // cl
  int v5; // ebx
  int v6; // edi

  if ( a2 <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1112);
    BUG();
  }
  result = a1;
  if ( a2 <= 7 )
  {
    v4 = 8 * a2 - 1;
    v5 = (unsigned __int64)(1LL << v4) >> 32;
    v6 = 1 << v4;
    if ( (v4 & 0x20) != 0 )
    {
      v5 = 1 << v4;
      v6 = 0;
    }
    result = a1 & (2 * v6 - 1);
    if ( !(a3 ^ 1 | ((HIDWORD(a1) & v5 | (unsigned int)a1 & v6) == 0)) )
      return a1 | (-2 * v6);
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
