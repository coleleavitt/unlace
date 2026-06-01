/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D910
// Address: 0x000000014002D910

//----- (000000014002D910) ----------------------------------------------------
void *__fastcall sub_14002D910(_QWORD *a1, __int64 a2, void *a3, signed __int64 a4)
{
  if ( a1[3] - a2 < a4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(276);
  }
  return memcpy(a3, (const void *)(*a1 + a2), a4);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
