/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E390
// Address: 0x000000014002E390

//----- (000000014002E390) ----------------------------------------------------
__int64 __fastcall sub_14002E390(_QWORD *a1, __int64 a2, unsigned int a3)
{
  if ( a1[1] - a2 < 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(277);
  }
  *(_DWORD *)(a2 + *a1) = a3;
  return HIWORD(a3);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
