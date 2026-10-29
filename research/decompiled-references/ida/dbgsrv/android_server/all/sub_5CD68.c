/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CD68
// Address: 0x000000000005CD68

//----- (000000000005CD68) ----------------------------------------------------
__int64 __fastcall sub_5CD68(__int64 a1, __int64 a2)
{
  const char *v3; // x20
  char *v4; // x0
  char *v5; // x21
  char *align; // x0
  pthread_mutex_t ptr; // [xsp+0h] [xbp-50h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = &byte_F154B;
  v4 = strchr(v3, 61);
  if ( v4 )
  {
    v5 = v4;
    sub_4968C(&ptr, v3, v4 - v3);
    if ( *(&ptr.__align + 1) )
      align = (char *)ptr.__align;
    else
      align = &byte_F154B;
    *(_QWORD *)(a2 + 8) = qsetenv(align, v5 + 1);
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
