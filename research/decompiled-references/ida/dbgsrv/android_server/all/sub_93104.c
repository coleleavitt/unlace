/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93104
// Address: 0x0000000000093104

//----- (0000000000093104) ----------------------------------------------------
void __fastcall sub_93104(__int64 a1, unsigned __int64 a2)
{
  int v2; // [xsp+8h] [xbp-38h] BYREF
  void *ptr; // [xsp+10h] [xbp-30h]
  __int64 v4; // [xsp+18h] [xbp-28h]
  __int64 v5; // [xsp+20h] [xbp-20h]
  __int64 v6; // [xsp+28h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v2 = -2;
    v4 = 0;
    v5 = 0;
    ptr = (void *)-1LL;
    sub_986BC((pthread_mutex_t *)a1, a2, (unsigned __int64)&v2);
    if ( v2 >= -1 )
    {
      if ( ptr )
      {
        v4 = 0;
        qfree(ptr);
      }
    }
  }
}
