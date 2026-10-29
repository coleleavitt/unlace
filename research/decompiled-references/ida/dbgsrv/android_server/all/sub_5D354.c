/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D354
// Address: 0x000000000005D354

//----- (000000000005D354) ----------------------------------------------------
__int64 __fastcall sub_5D354(__int64 a1, __int64 *a2)
{
  const char *v3; // x1
  unsigned int v4; // w20
  void *align; // x0
  const char *v6; // x1
  pthread_mutex_t ptr; // [xsp+0h] [xbp-40h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&ptr, 0, 24);
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = &byte_F154B;
  if ( (eval_idc_snippet(nullptr, v3, &ptr, 0) & 1) != 0 )
  {
    v4 = 0;
    a2[1] = 1;
    align = (void *)ptr.__align;
    if ( !ptr.__align )
      return v4;
    goto LABEL_11;
  }
  if ( *(&ptr.__align + 1) )
    v6 = (const char *)ptr.__align;
  else
    v6 = &byte_F154B;
  v4 = throw_idc_exception(a2, v6);
  align = (void *)ptr.__align;
  if ( ptr.__align )
  {
LABEL_11:
    *(&ptr.__align + 1) = 0;
    qfree(align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v4;
}
// F154B: using guessed type char byte_F154B;
