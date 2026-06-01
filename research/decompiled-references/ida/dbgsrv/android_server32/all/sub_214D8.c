/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_214D8
// Address: 0x000214D8

//----- (000214D8) --------------------------------------------------------
int __fastcall sub_214D8(int a1, int a2, _DWORD *a3)
{
  const char *v3; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  if ( *a3 == -1 )
  {
    sub_64B30(a1, "Can't import symbols from %s: no imagebase\n");
  }
  else
  {
    v5[1] = 49;
    v5[2] = a1;
    v5[4] = a2;
    v5[0] = &off_D62E8;
    v5[3] = a3;
    if ( a3[3] )
      v3 = (const char *)a3[2];
    else
      v3 = &byte_B3CBE;
    sub_35628(v3, v5, 0);
  }
  return _stack_chk_guard - v5[5];
}
// B3CBE: using guessed type char byte_B3CBE;
// D62E8: using guessed type _UNKNOWN *off_D62E8;
