/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408438
// Address: 0x0000000000408438

//----- (0000000000408438) ----------------------------------------------------
bool __fastcall sub_408438(unsigned int a1)
{
  int v1; // w2
  _QWORD v3[2]; // [xsp+28h] [xbp-128h] BYREF
  char v4; // [xsp+38h] [xbp-118h] BYREF

  v1 = dword_51F738;
  if ( dword_51F738 < 0 )
  {
    v3[0] = &v4;
    v3[1] = 272;
    v1 = ptrace(PTRACE_GETREGSET, a1, 1, v3) == 0;
    dword_51F738 = v1;
  }
  return v1 > 0;
}
// 51F738: using guessed type int dword_51F738;
