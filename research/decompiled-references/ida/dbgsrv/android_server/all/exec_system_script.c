/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: exec_system_script
// Address: 0x0000000000067B50

//----- (0000000000067B50) ----------------------------------------------------
__int64 __fastcall exec_system_script(const char *a1, char a2)
{
  char *idc_filename; // x0
  const char *align; // x1
  pthread_mutex_t ptr[103]; // [xsp+60h] [xbp-1050h] BYREF
  __int64 v8; // [xsp+1078h] [xbp-38h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  idc_filename = (char *)get_idc_filename((size_t)&ptr[0].__list, 0x1000u, (__int64)a1);
  if ( !idc_filename )
  {
    if ( (a2 & 1) != 0 )
      sub_4EC28((__int64)"Could not locate system script file %s", a1);
    return 0;
  }
  memset(ptr, 0, 24);
  if ( (compile_idc_file(idc_filename, (__int64)ptr, 3) & 1) == 0
    || (call_idc_func(nullptr, (__int64)"main", nullptr, 0, ptr, 0) & 1) == 0 )
  {
    if ( *(&ptr[0].__align + 1) )
      align = (const char *)ptr[0].__align;
    else
      align = &byte_F154B;
    sub_4EC28((__int64)"%s", align);
    if ( ptr[0].__align )
    {
      *(&ptr[0].__align + 1) = 0;
      qfree((void *)ptr[0].__align);
      ptr[0].__align = 0;
      *(&ptr[0].__align + 2) = 0;
    }
    return 0;
  }
  if ( ptr[0].__align )
  {
    *(&ptr[0].__align + 1) = 0;
    qfree((void *)ptr[0].__align);
    ptr[0].__align = 0;
    *(&ptr[0].__align + 2) = 0;
  }
  return 1;
}
// F154B: using guessed type char byte_F154B;
