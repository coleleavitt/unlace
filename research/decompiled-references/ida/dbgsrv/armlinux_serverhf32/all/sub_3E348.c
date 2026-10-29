/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E348
// Address: 0x0003E348

//----- (0003E348) --------------------------------------------------------
int sub_3E348()
{
  char v0; // r3
  _QWORD *v2; // r4

  v0 = byte_D3A04;
  __dmb(0xBu);
  if ( (v0 & 1) != 0 )
    return dword_D3A8C;
  if ( !sub_80BB0((unsigned int *)&byte_D3A04) )
    return dword_D3A8C;
  v2 = sub_805CC(0x50u);
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
  dword_D3A8C = (int)v2;
  sub_80CB4((int)&byte_D3A04);
  return (int)v2;
}
// D3A04: using guessed type char byte_D3A04;
// D3A8C: using guessed type int dword_D3A8C;
