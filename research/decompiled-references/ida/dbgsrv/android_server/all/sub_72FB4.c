/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_72FB4
// Address: 0x0000000000072FB4

//----- (0000000000072FB4) ----------------------------------------------------
void __fastcall sub_72FB4(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 v2[8]; // [xsp+8h] [xbp-38h] BYREF
  void *ptr; // [xsp+10h] [xbp-30h]
  __int64 v4; // [xsp+18h] [xbp-28h]
  __int64 v5; // [xsp+20h] [xbp-20h]
  __int64 v6; // [xsp+28h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v2[0] = 2;
    v4 = 0;
    v5 = 0;
    ptr = nullptr;
    sub_65F94((pthread_mutex_t *)a1, a2, v2);
    if ( v2[0] == 5 )
    {
      sub_6F17C((__int64)ptr, v2);
    }
    else if ( v2[0] == 7 )
    {
      if ( ptr )
      {
        v4 = 0;
        qfree(ptr);
        ptr = nullptr;
        v5 = 0;
      }
    }
  }
}
