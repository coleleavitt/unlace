/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E878
// Address: 0x000000000009E878

//----- (000000000009E878) ----------------------------------------------------
__int64 __fastcall sub_9E878(__int64 a1, char a2, int a3)
{
  __int64 result; // x0

  result = sub_A5478(a1, a2 & 1, a3, 0, 0);
  *(_QWORD *)a1 = off_15E658;
  *(_WORD *)(a1 + 96) = 0;
  return result;
}
// 15E658: using guessed type __int64 (__fastcall *off_15E658[3])();
