/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002DCB0
// Address: 0x000000014002DCB0

//----- (000000014002DCB0) ----------------------------------------------------
__int16 __fastcall sub_14002DCB0(_QWORD *a1, __int64 a2)
{
  __int16 v2; // ax

  if ( a1[3] - a2 < 2 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(276);
  }
  v2 = (unsigned __int8)*(_WORD *)(a2 + *a1);
  return v2 + (v2 & 0xFF00);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
