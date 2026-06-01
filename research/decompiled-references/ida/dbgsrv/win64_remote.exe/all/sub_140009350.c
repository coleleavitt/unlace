/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009350
// Address: 0x0000000140009350

//----- (0000000140009350) ----------------------------------------------------
__int64 __fastcall sub_140009350(__int64 a1, __int64 *a2)
{
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 272))(a2) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1551);
  }
  if ( !(unsigned int)sub_140006960(*(_QWORD **)(a1 + 16), a2[2]) )
    ++*(_DWORD *)(a1 + 24);
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
