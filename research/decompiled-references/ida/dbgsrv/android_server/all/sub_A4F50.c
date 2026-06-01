/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4F50
// Address: 0x00000000000A4F50

//----- (00000000000A4F50) ----------------------------------------------------
bool __fastcall sub_A4F50(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x8
  unsigned int v5; // w22
  unsigned int v7; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v8; // [xsp+8h] [xbp-38h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a2[1];
  if ( v4 )
    v5 = v4 - 1;
  else
    v5 = 0;
  v7 = bswap32(v5);
  if ( (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a1 + 64LL))(a1, &v7, 4) != 4 )
    return 0;
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *a2, v5) == v5;
  return 1;
}
