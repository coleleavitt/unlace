/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E3E0
// Address: 0x000000014002E3E0

//----- (000000014002E3E0) ----------------------------------------------------
__int64 __fastcall sub_14002E3E0(__int64 *a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  if ( a1[1] - a2 < 2 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(277);
  }
  *(_BYTE *)(a2 + *a1) = a3;
  result = *a1;
  *(_BYTE *)(*a1 + a2 + 1) = HIBYTE(a3);
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
