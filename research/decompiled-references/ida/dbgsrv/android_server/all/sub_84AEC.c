/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84AEC
// Address: 0x0000000000084AEC

//----- (0000000000084AEC) ----------------------------------------------------
__int64 __fastcall sub_84AEC(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int i; // w8
  __int64 v7; // x8
  char v8[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v9; // [xsp+10h] [xbp-50h]
  char v10[8]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v11; // [xsp+20h] [xbp-40h]
  __int64 v12; // [xsp+28h] [xbp-38h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_8461C(a1, a2, a3 & 1);
  for ( i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        i == 94;
        i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL) )
  {
    v10[0] = 1;
    v11 = 0;
    result = sub_8461C(a1, (__int64)v10, 1);
    *(_QWORD *)(a2 + 8) ^= v11;
  }
  if ( i == 124 )
  {
    do
    {
      v8[0] = 1;
      v9 = 0;
      result = sub_8461C(a1, (__int64)v8, 1);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 94 )
      {
        do
        {
          v10[0] = 1;
          v11 = 0;
          result = sub_8461C(a1, (__int64)v10, 1);
          v7 = v11 ^ v9;
          v9 ^= v11;
        }
        while ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 94 );
      }
      else
      {
        v7 = v9;
      }
      *(_QWORD *)(a2 + 8) |= v7;
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 124 );
  }
  return result;
}
