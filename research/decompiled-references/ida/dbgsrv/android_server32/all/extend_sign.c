/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: extend_sign
// Address: 0x00071FDC

//----- (00071FDC) --------------------------------------------------------
int __fastcall extend_sign(int result, int a2, int a3, int a4)
{
  int v5; // r5
  __int64 v6; // r0
  int v7; // r4
  int v8; // r2
  int v9; // r2

  if ( a3 <= 0 )
  {
    if ( !under_debugger )
      interr(1112);
    __debugbreak();
  }
  v5 = result;
  if ( a3 <= 7 )
  {
    v6 = 1LL << (8 * (unsigned __int8)a3 - 1);
    v7 = a4 ^ 1 | (((unsigned int)v6 & v5 | HIDWORD(v6) & a2) == 0);
    v8 = 2 * v6;
    result = (2 * v6 - 1) & v5;
    v9 = -v8 | v5;
    if ( !v7 )
      return v9;
  }
  return result;
}
// E0550: using guessed type char under_debugger;
