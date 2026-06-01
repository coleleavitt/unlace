/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81CE0
// Address: 0x00081CE0

//----- (00081CE0) --------------------------------------------------------
int __fastcall sub_81CE0(int a1)
{
  int v2; // r0
  __time_t v4; // [sp+8h] [bp-8h] BYREF

  v2 = sub_80DC4();
  if ( (unsigned int)(sub_807A4(v2, &v4, a1, 0, -1) + 1) >= 2 && v4 << 25 && !((unsigned int)((v4 + 1) << 25) >> 26) )
  {
    if ( !under_debugger )
      interr(1150);
    __debugbreak();
  }
  return 0;
}
// E0550: using guessed type char under_debugger;
