/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19CFC
// Address: 0x00019CFC

//----- (00019CFC) --------------------------------------------------------
void __fastcall sub_19CFC(int a1)
{
  _DWORD *v2; // r1

  if ( *(_DWORD *)(a1 + 860) )
  {
    off_D4970(*(_DWORD *)(a1 + 860));
    v2 = (_DWORD *)dword_D4960;
    *(_DWORD *)(a1 + 860) = 0;
    sub_19CCC((int)&dword_D4958, v2);
    dword_D4960 = 0;
    dword_D496C = 0;
    dword_D4964 = (int)&dword_D495C;
    dword_D4968 = (int)&dword_D495C;
  }
}
// D4958: using guessed type int dword_D4958;
// D495C: using guessed type int dword_D495C;
// D4960: using guessed type int dword_D4960;
// D4964: using guessed type int dword_D4964;
// D4968: using guessed type int dword_D4968;
// D496C: using guessed type int dword_D496C;
// D4970: using guessed type int (__fastcall *off_D4970)(_DWORD);
