/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E4E0
// Address: 0x0003E4E0

//----- (0003E4E0) --------------------------------------------------------
int sub_3E4E0()
{
  char v0; // r3
  _QWORD *v2; // r4

  v0 = byte_D4A24;
  __dmb(0xBu);
  if ( (v0 & 1) != 0 )
    return dword_D4AAC;
  if ( !sub_81144((unsigned int *)&byte_D4A24) )
    return dword_D4AAC;
  v2 = sub_808A4(0x50u);
  v2[4] = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 0;
  *((_DWORD *)v2 + 13) = 0;
  *((_DWORD *)v2 + 14) = 0;
  *((_DWORD *)v2 + 15) = 0;
  *((_DWORD *)v2 + 16) = 0;
  *((_DWORD *)v2 + 17) = 0;
  *((_BYTE *)v2 + 72) = 0;
  dword_D4AAC = (int)v2;
  sub_81248((int)&byte_D4A24);
  return (int)v2;
}
// D4A24: using guessed type char byte_D4A24;
// D4AAC: using guessed type int dword_D4AAC;
