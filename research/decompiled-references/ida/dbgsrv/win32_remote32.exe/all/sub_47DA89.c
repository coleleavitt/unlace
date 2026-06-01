/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DA89
// Address: 0x0047DA89

//----- (0047DA89) --------------------------------------------------------
char __usercall sub_47DA89@<al>(int a1@<ebx>, int *a2@<edi>, void *a3@<esi>)
{
  void *v3; // eax

  if ( !byte_4B7F88 )
  {
    dword_4B7F80 = (int)dword_4B62D8;
    dword_4B7F7C = (int)dword_4B6600;
    dword_4B7F78 = (int)dword_4B64F8;
    v3 = sub_478383(a1, a2, a3);
    sub_47D8D5(a1, 0xFFFFFFFD, 1, (int)v3, (void **)&dword_4B7F80);
    byte_4B7F88 = 1;
  }
  return 1;
}
// 4B62D8: using guessed type int dword_4B62D8[22];
// 4B64F8: using guessed type int dword_4B64F8[16];
// 4B6600: using guessed type int dword_4B6600[16];
// 4B7F78: using guessed type int dword_4B7F78;
// 4B7F7C: using guessed type int dword_4B7F7C;
// 4B7F80: using guessed type int dword_4B7F80;
// 4B7F88: using guessed type char byte_4B7F88;
