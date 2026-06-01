/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002DC10
// Address: 0x000000014002DC10

//----- (000000014002DC10) ----------------------------------------------------
__int64 __fastcall sub_14002DC10(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 < 1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(276);
  }
  return *(unsigned __int8 *)(a2 + *a1);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
