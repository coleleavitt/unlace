/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62D40
// Address: 0x0000000000062D40

//----- (0000000000062D40) ----------------------------------------------------
__int64 __fastcall sub_62D40(__int64 a1, char *a2)
{
  __int64 v3; // x19
  void *ptr[4]; // [xsp+0h] [xbp-40h] BYREF

  ptr[3] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 8);
  sub_39140(ptr, a2);
  sub_494CC((char *)a1, (char *)ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v3;
}
