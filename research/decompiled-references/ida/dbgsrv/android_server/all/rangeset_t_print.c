/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_print
// Address: 0x00000000000C4B58

//----- (00000000000C4B58) ----------------------------------------------------
__int64 __fastcall rangeset_t_print(__int64 **a1, pthread_mutex_t *a2, __int64 a3, double a4)
{
  pthread_mutex_t *v5; // x23
  pthread_mutex_t *v6; // x21
  __int64 *v7; // x8
  __int64 **v8; // x20
  __int64 *i; // x22

  v5 = (pthread_mutex_t *)((char *)a2 + a3);
  v6 = a2;
  if ( 16LL * (_QWORD)a1[1] )
  {
    v7 = *a1;
    v8 = a1;
    v6 = a2;
    for ( i = *a1; i != &(*v8)[2 * (_QWORD)v8[1]]; i += 2 )
    {
      if ( i != v7 )
      {
        if ( v6 >= v5 )
        {
          if ( !under_debugger )
          {
            a1 = (__int64 **)interr(518);
            goto LABEL_12;
          }
LABEL_14:
          __break(1u);
          return rangeset_t_intersect((__int64)a1, &a2->__align);
        }
        v6->__size[0] = 44;
        v6 = (pthread_mutex_t *)((char *)v6 + 1);
        if ( v6 >= v5 )
        {
          v6 = (pthread_mutex_t *)((char *)v5 - 1);
          v5[-1].__size[39] = 0;
        }
      }
      a1 = (__int64 **)range_t_print(i, v6, (char *)v5 - (char *)v6, a4);
      v7 = *v8;
      v6 = (pthread_mutex_t *)((char *)a1 + (_QWORD)v6);
    }
  }
  if ( v6 >= v5 )
  {
LABEL_12:
    if ( !under_debugger )
      a1 = (__int64 **)interr(519);
    goto LABEL_14;
  }
  v6->__size[0] = 0;
  return (char *)v6 - (char *)a2;
}
// C4BC8: variable 'a4' is possibly undefined
// C4C39: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
