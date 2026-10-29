/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E790
// Address: 0x000000010006E790

//----- (000000010006E790) ----------------------------------------------------
__int64 __fastcall sub_10006E790(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)xmmword_1000AE410 + 184LL))(xmmword_1000AE410, a1);
  sub_10006AB40((_QWORD *)(v1 + 32));
  return 1;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
