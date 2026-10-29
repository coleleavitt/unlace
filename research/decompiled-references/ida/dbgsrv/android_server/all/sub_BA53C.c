/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA53C
// Address: 0x00000000000BA53C

//----- (00000000000BA53C) ----------------------------------------------------
void __fastcall sub_BA53C(pthread_mutex_t *a1)
{
  int spins; // w8
  struct __pthread_internal_list *prev; // x0
  struct __pthread_internal_list *v3; // x19
  struct __pthread_internal_list *next; // x0

  spins = a1->__spins;
  a1->__align = (__int64)&off_1602F0;
  if ( spins )
  {
    if ( spins != 1 )
    {
      if ( spins == 2 )
        return;
      if ( under_debugger )
      {
        __break(1u);
        sub_39134(a1);
      }
      a1 = interr(193);
    }
    prev = a1->__list.__prev;
    if ( prev )
      operator delete(prev);
  }
  else
  {
    v3 = a1->__list.__prev;
    if ( v3 )
    {
      if ( SLODWORD(v3->__prev) < 2 )
      {
        qfclose((FILE *)v3->__next);
      }
      else
      {
        next = v3->__next;
        if ( next )
          ((void (__fastcall *)(struct __pthread_internal_list *))next->__prev[1].__prev)(next);
        qfree(v3[2].__next);
        qfree(v3[2].__prev);
      }
      operator delete(v3);
    }
  }
}
// 1602F0: using guessed type void (__fastcall __noreturn *off_1602F0)();
// 168DF0: using guessed type char under_debugger;
