/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_500F4
// Address: 0x00000000000500F4

//----- (00000000000500F4) ----------------------------------------------------
void __fastcall sub_500F4(pthread_mutex_t *a1, __int64 *a2, __int64 a3, char a4)
{
  if ( (unsigned int)((_DWORD)a2 - 1) >= 0x19 )
  {
    if ( !under_debugger )
      a1 = interr(20055);
    __break(1u);
    sub_5012C((__int64)a1, a2, a3, a4);
  }
  else
  {
    *(&a1[1].__kind + (int)a2) = a3;
  }
}
// 50129: variable 'a2' is possibly undefined
// 50129: variable 'a3' is possibly undefined
// 50129: variable 'a4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
