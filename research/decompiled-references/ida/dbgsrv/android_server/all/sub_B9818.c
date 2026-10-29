/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9818
// Address: 0x00000000000B9818

//----- (00000000000B9818) ----------------------------------------------------
size_t __fastcall sub_B9818(pthread_mutex_t *a1, void *dest, size_t n)
{
  __int64 prev; // x1
  pthread_mutex_t *v5; // x20
  char *v6; // x9
  size_t v7; // x19
  unsigned __int64 v9; // x8
  __int64 v10; // x10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x23
  unsigned __int64 v13; // x24
  int v14; // w26
  __int64 v15; // x8
  unsigned __int64 v16; // x27
  __int64 v17; // x1
  unsigned __int64 v18; // x8
  int v19; // w8
  unsigned __int64 v20; // x9
  char v21; // w11

  if ( (n & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      a1 = interr(1225);
    __break(1u);
    return (size_t)open_linput((const char *)a1, (char)dest);
  }
  prev = (__int64)a1->__list.__prev;
  v5 = a1;
  if ( prev < 0 )
    return 0;
  v6 = (char *)(prev + n);
  v7 = n;
  if ( (__int64)(prev + n) < prev )
    return 0;
  v9 = *(&a1[1].__align + 1);
  if ( !v9 )
  {
    v7 = (***((__int64 (__fastcall ****)(_QWORD, struct __pthread_internal_list *, void *, size_t))&a1->__align + 1))(
           *(&a1->__align + 1),
           (struct __pthread_internal_list *)prev,
           dest,
           n);
    if ( (v7 & 0x8000000000000000LL) != 0 )
      return v7;
    goto LABEL_29;
  }
  v10 = *(&a1->__align + 2);
  if ( (__int64)v6 > v10 )
  {
    v7 = v10 - prev;
    if ( v10 <= prev )
      return 0;
    v6 = (char *)*(&a1->__align + 2);
  }
  v11 = (unsigned __int64)&v6[v9 - 1];
  v12 = v11 / v9;
  v13 = prev / v9;
  if ( (int)(prev / v9) > (int)(v11 / v9) )
  {
LABEL_27:
    memcpy(dest, (const void *)(v5[1].__align + prev), v7);
LABEL_29:
    v5->__list.__prev = (struct __pthread_internal_list *)((char *)v5->__list.__prev + v7);
    return v7;
  }
  v14 = -1;
  while ( 1 )
  {
    if ( (_DWORD)v13 != (_DWORD)v12
      && ((1 << (v13 & 7)) & *((unsigned __int8 *)&v5->__list.__next->__prev + ((unsigned __int64)(int)v13 >> 3))) == 0 )
    {
      if ( v14 == -1 )
        v14 = v13;
      goto LABEL_25;
    }
    if ( v14 != -1 )
      break;
LABEL_24:
    v14 = -1;
LABEL_25:
    LODWORD(v13) = v13 + 1;
    if ( (int)v13 > (int)v12 )
    {
      prev = (__int64)v5->__list.__prev;
      goto LABEL_27;
    }
  }
  v15 = *(&v5[1].__align + 1);
  v16 = v14;
  v17 = v15 * v14;
  v18 = v15 * (int)v13;
  if ( v18 > *(&v5->__align + 2) )
    v18 = *(&v5->__align + 2);
  v19 = v18 - v17;
  if ( (v19 & 0x80000000) == 0
    && (***((__int64 (__fastcall ****)(_QWORD, __int64, __int64, _QWORD))&v5->__align + 1))(
         *(&v5->__align + 1),
         v17,
         v5[1].__align + v17,
         v19) == v19 )
  {
    if ( v14 < (int)v13 )
    {
      do
      {
        v20 = v16 >> 3;
        v21 = v16++ & 7;
        *((_BYTE *)&v5->__list.__next->__prev + v20) |= 1 << v21;
      }
      while ( (__int64)v16 < (int)v13 );
    }
    goto LABEL_24;
  }
  return -1;
}
// B99F5: variable 'dest' is possibly undefined
// 168DF0: using guessed type char under_debugger;
