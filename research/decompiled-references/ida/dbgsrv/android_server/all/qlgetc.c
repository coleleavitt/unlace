/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetc
// Address: 0x00000000000B9DD8

//----- (00000000000B9DD8) ----------------------------------------------------
__int64 __fastcall qlgetc(__int64 a1)
{
  size_t v1; // x0
  _BYTE dest[4]; // [xsp+4h] [xbp-1Ch] BYREF
  __int64 v4; // [xsp+8h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( *(int *)a1 < 2 )
    v1 = qfread(*(FILE **)(a1 + 8), dest, 1u);
  else
    v1 = sub_B9818((pthread_mutex_t *)a1, dest, 1u);
  if ( v1 == 1 )
    return dest[0];
  else
    return 0xFFFFFFFFLL;
}
