/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EB28
// Address: 0x000000000003EB28

//----- (000000000003EB28) ----------------------------------------------------
bool __fastcall sub_3EB28(_QWORD *a1)
{
  __int64 v2; // x21
  __int64 v3; // x19
  void *ptr[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v6; // [xsp+10h] [xbp-30h]
  __int64 v7; // [xsp+18h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a1[20];
  ptr[0] = nullptr;
  ptr[1] = nullptr;
  v6 = 0;
  if ( (unsigned int)sub_3EC08((unsigned __int64)a1, (__int64)ptr, 0) == 1 )
    sub_3F200((unsigned __int64)a1, (__int64 *)ptr);
  sub_3E6A0(a1);
  v3 = a1[20];
  if ( ptr[0] )
  {
    sub_3967C((__int64 *)ptr, 0);
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v6 = 0;
  }
  return v3 != (int)v2;
}
