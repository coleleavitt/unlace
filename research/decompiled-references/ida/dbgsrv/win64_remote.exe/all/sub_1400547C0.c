/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400547C0
// Address: 0x00000001400547C0

//----- (00000001400547C0) ----------------------------------------------------
__int64 __fastcall sub_1400547C0(__int64 a1, __int64 a2, char a3)
{
  int v5; // ecx

  *(_QWORD *)a1 = &off_140099638;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  v5 = dword_1400C8720++;
  *(_DWORD *)(a1 + 168) = v5;
  *(_QWORD *)(a1 + 176) = sub_14005A7C0();
  *(_BYTE *)(a1 + 184) = a3;
  if ( !(unsigned __int8)sub_140054400(*(_QWORD *)(a1 + 136)) )
    sub_140001810(a1 + 144, "(unknown)", 9u);
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  return a1;
}
// 140099638: using guessed type __int64 (__fastcall *off_140099638)(void *Block);
// 1400C8720: using guessed type int dword_1400C8720;
