/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438BC0
// Address: 0x0000000000438BC0

//----- (0000000000438BC0) ----------------------------------------------------
void *__fastcall sub_438BC0(_QWORD *a1, __int64 a2, void *a3, signed __int64 a4)
{
  if ( a1[3] - a2 < a4 )
    sub_4371C0();
  return memcpy(a3, (const void *)(*a1 + a2), a4);
}
