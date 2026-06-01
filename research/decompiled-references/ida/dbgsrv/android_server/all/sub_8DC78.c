/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DC78
// Address: 0x000000000008DC78

//----- (000000000008DC78) ----------------------------------------------------
void __fastcall sub_8DC78(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // [xsp+0h] [xbp-50h] BYREF
  void *ptr[2]; // [xsp+8h] [xbp-48h]
  __int64 v4; // [xsp+18h] [xbp-38h]
  __int64 v5; // [xsp+20h] [xbp-30h]
  __int128 v6; // [xsp+28h] [xbp-28h]
  __int64 v7; // [xsp+38h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v6 = 0u;
    *(_OWORD *)ptr = 0u;
    v2 = -1;
    v4 = 0;
    v5 = 4;
    *(_QWORD *)((char *)&v6 + 4) = 0xFFFFFFFFLL;
    sub_97E78((pthread_mutex_t *)a1, a2, (unsigned __int64)&v2);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
  }
}
