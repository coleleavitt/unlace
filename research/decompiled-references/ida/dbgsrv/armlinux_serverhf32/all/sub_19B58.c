/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19B58
// Address: 0x00019B58

//----- (00019B58) --------------------------------------------------------
void __fastcall sub_19B58(int a1)
{
  _DWORD *v2; // r1

  if ( *(_DWORD *)(a1 + 860) )
  {
    off_D3950(*(_DWORD *)(a1 + 860));
    v2 = (_DWORD *)dword_D3940;
    *(_DWORD *)(a1 + 860) = 0;
    sub_19B28((int)&dword_D3938, v2);
    dword_D3940 = 0;
    dword_D394C = 0;
    dword_D3944 = (int)&dword_D393C;
    dword_D3948 = (int)&dword_D393C;
  }
}
// D3938: using guessed type int dword_D3938;
// D393C: using guessed type int dword_D393C;
// D3940: using guessed type int dword_D3940;
// D3944: using guessed type int dword_D3944;
// D3948: using guessed type int dword_D3948;
// D394C: using guessed type int dword_D394C;
// D3950: using guessed type int (__fastcall *off_D3950)(_DWORD);
