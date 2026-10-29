/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_545E8
// Address: 0x00000000000545E8

//----- (00000000000545E8) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_545E8(pthread_mutex_t *a1, void *src, size_t n)
{
  unsigned __int64 v4; // x24
  unsigned __int64 v7; // x22
  char *align; // x0
  __int64 v9; // x8
  char v11[4]; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v12; // [xsp+8h] [xbp-48h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( n )
  {
    v4 = *(&a1->__align + 1);
    if ( __CFADD__(v4, n) )
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v7 = v4 + n;
    if ( v4 >= v7 )
    {
      if ( v4 != v7 )
      {
        v11[0] = 0;
        sub_5BBF4(a1, v7, v11);
      }
    }
    else
    {
      if ( *(&a1->__align + 2) >= v7 )
      {
        align = (char *)a1->__align;
        v9 = *(&a1->__align + 1);
      }
      else
      {
        align = (char *)qvector_reserve(a1, (void *)a1->__align, v7, 1u);
        v9 = *(&a1->__align + 1);
        a1->__align = (__int64)align;
      }
      memset(&align[v9], 0, v7 - v9);
      *(&a1->__align + 1) = v7;
    }
    memcpy((void *)(a1->__align + v4), src, n);
  }
  return a1;
}
