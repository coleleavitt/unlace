/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461C48
// Address: 0x0000000000461C48

//----- (0000000000461C48) ----------------------------------------------------
__int64 __fastcall sub_461C48(__int64 a1, unsigned __int8 a2)
{
  sub_476300(a1, a2);
  *(_QWORD *)a1 = off_51AC10;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_WORD *)(a1 + 104) = 23946;
  *(_BYTE *)(a1 + 106) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  return a1 + 112;
}
// 51AC10: using guessed type __int64 (__fastcall *off_51AC10[4])();
