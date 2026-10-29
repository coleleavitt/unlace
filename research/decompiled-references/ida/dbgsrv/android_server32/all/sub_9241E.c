/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9241E
// Address: 0x0009241E

//----- (0009241E) --------------------------------------------------------
__int64 __fastcall sub_9241E(int a1, char a2)
{
  __int64 result; // r0

  sub_93BBC(a1, 1);
  result = *(_QWORD *)a1;
  ++*(_DWORD *)(a1 + 4);
  *(_BYTE *)(result + HIDWORD(result)) = a2;
  return result;
}
