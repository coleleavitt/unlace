/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F120
// Address: 0x000000000046F120

//----- (000000000046F120) ----------------------------------------------------
__int64 *__fastcall sub_46F120(__int64 a1, char a2, int a3)
{
  sub_477AF8(a1, a2, a3, 0, 0);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = qword_51E000;
  *(_BYTE *)(a1 + 97) = 0;
  return qword_51E000;
}
// 51E000: using guessed type __int64 qword_51E000[2];
