/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A140
// Address: 0x000000014005A140

//----- (000000014005A140) ----------------------------------------------------
__int64 __fastcall sub_14005A140(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0;
  sub_14006C6AC(a2 + 8, a1 + 8);
  *(_QWORD *)a1 = &off_1400AB398;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  return a1;
}
// 1400AB398: using guessed type void *(__fastcall *off_1400AB398)(std::exception *__hidden this, unsigned int);
// 1400AE648: using guessed type void *std::exception::`vftable';
