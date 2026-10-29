/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50318
// Address: 0x0000000000050318

//----- (0000000000050318) ----------------------------------------------------
__int64 __fastcall sub_50318(pthread_mutex_t *a1, int a2)
{
  if ( (unsigned int)(a2 - 1) < 0x19 )
    return *((unsigned int *)&a1[1].__kind + a2);
  if ( !under_debugger )
    a1 = interr(20054);
  __break(1u);
  return sub_50350((__int64)a1);
}
// 168DF0: using guessed type char under_debugger;
