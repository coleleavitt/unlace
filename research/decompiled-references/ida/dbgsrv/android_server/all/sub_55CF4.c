/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55CF4
// Address: 0x0000000000055CF4

//----- (0000000000055CF4) ----------------------------------------------------
__int64 __fastcall sub_55CF4(pthread_mutex_t *align, __int64 a2, __int64 *a3, unsigned int prev)
{
  __int64 v4; // x8
  struct __pthread_internal_list *next; // x9

  if ( !align[4].__size[8] )
  {
    if ( !under_debugger )
      align = interr(20099);
    __break(1u);
    return sub_55D60((__int64)align, a2, a3, prev);
  }
  v4 = (unsigned int)a3;
  if ( align[1].__align > (unsigned __int64)(unsigned int)a3 )
  {
    a3 = &align[4].__align + 2;
    if ( *(&align[4].__align + 2) >= 1 )
    {
      if ( align[4].__list.__next )
      {
        next = align->__list.__next;
        align = (pthread_mutex_t *)align[4].__align;
        prev = (unsigned int)next[4 * v4].__prev;
        return sub_55D60((__int64)align, a2, a3, prev);
      }
    }
  }
  return 0;
}
// 55D5D: variable 'a2' is possibly undefined
// 55D5D: variable 'a3' is possibly undefined
// 55D5D: variable 'prev' is possibly undefined
// 168DF0: using guessed type char under_debugger;
