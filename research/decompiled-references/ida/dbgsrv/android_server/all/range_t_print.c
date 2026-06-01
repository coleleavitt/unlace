/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: range_t_print
// Address: 0x00000000000C48B8

//----- (00000000000C48B8) ----------------------------------------------------
__int64 __fastcall range_t_print(__int64 *a1, pthread_mutex_t *a2, __int64 a3, double a4)
{
  __int64 v6; // x2
  __int64 v7; // x21
  double v8; // d0
  __int64 v9; // x0
  size_t v10; // x23
  struct __pthread_internal_list *prev; // x8
  const char *v12; // x22
  __int64 v13; // x0
  size_t v14; // x21
  void *align; // x8
  const char *v16; // x4
  int v17; // w19
  pthread_mutex_t ptr; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int64 v20; // [xsp+30h] [xbp-50h]
  __int64 v21; // [xsp+38h] [xbp-48h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    v6 = *a1;
    v7 = a1[1];
    *(_OWORD *)(&ptr.__align + 3) = 0u;
    v20 = 0;
    if ( v6 != -1 )
    {
      sub_3C748((__int64)&ptr.__list, "%a", a4);
      goto LABEL_10;
    }
  }
  else
  {
    *(_OWORD *)(&ptr.__align + 3) = 0u;
    v20 = 0;
    v7 = -1;
  }
  v9 = __strlen_chk("BADADDR", 8);
  v10 = v9;
  if ( v9 )
  {
    prev = ptr.__list.__prev;
    if ( v20 < v9 + 1 )
    {
      prev = (struct __pthread_internal_list *)qvector_reserve(
                                                 (pthread_mutex_t *)(&ptr.__align + 3),
                                                 ptr.__list.__prev,
                                                 v9 + 1,
                                                 1u);
      ptr.__list.__prev = prev;
    }
    ptr.__list.__next = (struct __pthread_internal_list *)(v10 + 1);
    memmove(prev, "BADADDR", v10);
    *((_BYTE *)&ptr.__list.__prev->__prev + v10) = 0;
  }
  else
  {
    ptr.__list.__next = nullptr;
  }
LABEL_10:
  *(_OWORD *)&ptr.__lock = 0u;
  if ( ptr.__list.__next )
    v12 = (const char *)ptr.__list.__prev;
  else
    v12 = &byte_F154B;
  *(&ptr.__align + 2) = 0;
  if ( v7 == -1 )
  {
    v13 = __strlen_chk("BADADDR", 8);
    v14 = v13;
    if ( v13 )
    {
      align = (void *)ptr.__align;
      if ( *(&ptr.__align + 2) < (unsigned __int64)(v13 + 1) )
      {
        align = qvector_reserve(&ptr, (void *)ptr.__align, v13 + 1, 1u);
        ptr.__align = (__int64)align;
      }
      *(&ptr.__align + 1) = v14 + 1;
      memmove(align, "BADADDR", v14);
      *(_BYTE *)(ptr.__align + v14) = 0;
    }
    else
    {
      *(&ptr.__align + 1) = 0;
    }
  }
  else
  {
    sub_3C748((__int64)&ptr, "%a", v8);
  }
  if ( *(&ptr.__align + 1) )
    v16 = (const char *)ptr.__align;
  else
    v16 = &byte_F154B;
  v17 = qsnprintf(a2, a3, "%s..%s", v12, v16);
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  if ( ptr.__list.__prev )
  {
    ptr.__list.__next = nullptr;
    qfree(ptr.__list.__prev);
    ptr.__list.__prev = nullptr;
    v20 = 0;
  }
  return v17;
}
// C49C8: variable 'v8' is possibly undefined
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
