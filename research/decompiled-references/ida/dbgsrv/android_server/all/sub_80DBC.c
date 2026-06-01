/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80DBC
// Address: 0x0000000000080DBC

//----- (0000000000080DBC) ----------------------------------------------------
__int64 __fastcall sub_80DBC(void *a1, char a2, __int64 a3)
{
  _BYTE v6[4]; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a2 & 1) == 0 )
    sub_8005C(a1, a3);
  if ( (sub_8055C((__int64)a1, a3) & 1) != 0 )
    return 2;
  if ( (unsigned int)sub_801FC((__int64)a1, a3, v6) )
    return 0xFFFFFFFFLL;
  return v6[0];
}
