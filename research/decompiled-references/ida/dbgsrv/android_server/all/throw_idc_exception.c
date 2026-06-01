/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: throw_idc_exception
// Address: 0x000000000005C7E4

//----- (000000000005C7E4) ----------------------------------------------------
__int64 __fastcall throw_idc_exception(__int64 *a1, const char *a2)
{
  __int64 idc_class; // x0
  size_t v5; // x2
  unsigned int v6; // w19
  __int64 v8; // [xsp+8h] [xbp-48h] BYREF
  pthread_mutex_t v9; // [xsp+10h] [xbp-40h] BYREF

  v9.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  LOBYTE(v8) = 2;
  memset(&v9, 0, 24);
  free_idcv(&v8);
  if ( a2 )
    v5 = strlen(a2);
  else
    v5 = 0;
  LOBYTE(v8) = 7;
  sub_4968C(&v9, a2, v5);
  set_idcv_attr((__int64)a1, "description", (unsigned __int8 *)&v8, 0);
  v6 = set_qerrno(0x5Au);
  free_idcv(&v8);
  return v6;
}
