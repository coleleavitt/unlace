/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66FB4
// Address: 0x0000000000066FB4

//----- (0000000000066FB4) ----------------------------------------------------
__int64 __fastcall sub_66FB4(__int64 a1)
{
  void *ptr; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 v3; // [xsp+8h] [xbp-28h]
  __int64 v4; // [xsp+10h] [xbp-20h]
  __int64 v5; // [xsp+18h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ptr = nullptr;
  v3 = 0;
  v4 = 0;
  sub_66600(sub_67070, &ptr, a1);
  if ( v3 >= 2 )
    sub_39FA0((__int64)"%s", (const char *)ptr);
  if ( ptr )
  {
    v3 = 0;
    qfree(ptr);
    ptr = nullptr;
    v4 = 0;
  }
  return 0;
}
// 66600: using guessed type __int64 __fastcall sub_66600(_QWORD, _QWORD, _QWORD);
