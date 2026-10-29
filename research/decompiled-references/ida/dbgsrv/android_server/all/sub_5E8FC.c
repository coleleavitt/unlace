/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E8FC
// Address: 0x000000000005E8FC

//----- (000000000005E8FC) ----------------------------------------------------
void __fastcall sub_5E8FC(__int64 a1, unsigned __int64 a2)
{
  void *ptr; // [xsp+0h] [xbp-30h] BYREF
  __int64 v3; // [xsp+8h] [xbp-28h]
  __int64 v4; // [xsp+10h] [xbp-20h]
  __int64 v5; // [xsp+18h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    ptr = nullptr;
    v3 = 0;
    v4 = 0;
    sub_65D78((pthread_mutex_t *)a1, a2, (unsigned __int64)&ptr);
    if ( ptr )
    {
      v3 = 0;
      qfree(ptr);
    }
  }
}
