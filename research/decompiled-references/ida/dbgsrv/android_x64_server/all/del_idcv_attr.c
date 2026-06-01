/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idcv_attr
// Address: 0x0000000000075A80

//----- (0000000000075A80) ----------------------------------------------------
__int64 __fastcall del_idcv_attr(__int64 a1, const char *a2, double a3, __m128 a4)
{
  unsigned int v4; // ebp
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return set_qerrno(0x5FCu);
  sub_37F60((__int64)ptr, a2);
  v4 = 0;
  if ( !sub_80DA0(*(__int64 ****)(a1 + 8), (__int64)ptr, a3, a4) )
  {
    set_error_string(0, a2);
    v4 = set_qerrno(0x602u);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v4;
}
