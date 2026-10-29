/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0220
// Address: 0x00000000000A0220

//----- (00000000000A0220) ----------------------------------------------------
void __fastcall sub_A0220(__int64 a1, unsigned __int64 a2)
{
  void *ptr[2]; // [xsp+8h] [xbp-38h] BYREF
  __int128 v3; // [xsp+18h] [xbp-28h]
  __int64 v4; // [xsp+28h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v3 = 0u;
    *(_OWORD *)ptr = 0u;
    sub_A0B4C((pthread_mutex_t *)a1, a2, (unsigned __int64)ptr);
    if ( ptr[1] )
    {
      *(_QWORD *)&v3 = 0;
      qfree(ptr[1]);
    }
  }
}
