/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B07DC
// Address: 0x00000000000B07DC

//----- (00000000000B07DC) ----------------------------------------------------
void __fastcall sub_B07DC(__int64 a1, unsigned __int64 a2)
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
    sub_B14C8((pthread_mutex_t *)a1, a2, (unsigned __int64)&ptr);
    if ( ptr )
    {
      v3 = 0;
      qfree(ptr);
    }
  }
}
