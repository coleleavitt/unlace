/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31E40
// Address: 0x00031E40

//----- (00031E40) --------------------------------------------------------
int __fastcall sub_31E40(_WORD *a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r1
  int result; // r0

  v2 = *(unsigned __int16 *)(a2 + 308);
  a1[28] = v2;
  v3 = *(_DWORD *)(a2 + 328);
  a1[44] = v3;
  v4 = *(_DWORD *)(a2 + 332);
  a1[60] = v4;
  if ( !v2 || !(v3 << 16) || (result = v4 << 16) == 0 )
  {
    if ( !under_debugger )
      interr(20037);
    __debugbreak();
  }
  return result;
}
// E0550: using guessed type char under_debugger;
