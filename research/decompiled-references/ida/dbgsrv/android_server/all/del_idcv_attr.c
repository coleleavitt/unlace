/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idcv_attr
// Address: 0x0000000000071A04

//----- (0000000000071A04) ----------------------------------------------------
__int64 __fastcall del_idcv_attr(__int64 a1, char *a2)
{
  unsigned int v4; // w19
  void *v5; // x0
  void *ptr[4]; // [xsp+0h] [xbp-40h] BYREF

  ptr[3] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return set_qerrno(0x5FCu);
  sub_39140(ptr, a2);
  if ( sub_7C4DC(*(__int64 ****)(a1 + 8), ptr) )
  {
    v4 = 0;
    v5 = ptr[0];
    if ( !ptr[0] )
      return v4;
    goto LABEL_8;
  }
  set_error_string(nullptr, a2);
  v4 = set_qerrno(0x602u);
  v5 = ptr[0];
  if ( ptr[0] )
  {
LABEL_8:
    ptr[1] = nullptr;
    qfree(v5);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v4;
}
