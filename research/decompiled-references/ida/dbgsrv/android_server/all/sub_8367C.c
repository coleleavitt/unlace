/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8367C
// Address: 0x000000000008367C

//----- (000000000008367C) ----------------------------------------------------
__int64 __fastcall sub_8367C(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int v6; // w8
  unsigned __int8 v7[8]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v8; // [xsp+10h] [xbp-40h]
  __int64 v9; // [xsp+18h] [xbp-38h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_834A4(a1, (unsigned __int8 *)a2, a3 & 1);
  while ( 1 )
  {
    while ( 1 )
    {
      v7[0] = 1;
      v8 = 0;
      v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
      if ( v6 != 45 )
        break;
      result = sub_834A4(a1, v7, 1);
      *(_QWORD *)(a2 + 8) -= v8;
    }
    if ( v6 != 43 )
      break;
    result = sub_834A4(a1, v7, 1);
    *(_QWORD *)(a2 + 8) += v8;
  }
  return result;
}
