/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84C30
// Address: 0x0000000000084C30

//----- (0000000000084C30) ----------------------------------------------------
__int64 __fastcall sub_84C30(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int i; // w8
  __int64 v7; // x8
  __int64 v8; // x9
  char v9[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v10; // [xsp+10h] [xbp-50h]
  char v11[8]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v12; // [xsp+20h] [xbp-40h]
  __int64 v13; // [xsp+28h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_847CC(a1, a2, a3 & 1);
  for ( i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        i == 124;
        i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL) )
  {
    v11[0] = 1;
    v12 = 0;
    result = sub_847CC(a1, (__int64)v11, 1);
    *(_QWORD *)(a2 + 8) |= v12;
  }
  if ( i == 9766 )
  {
    do
    {
      v9[0] = 1;
      v10 = 0;
      result = sub_847CC(a1, (__int64)v9, 1);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 124 )
      {
        do
        {
          v11[0] = 1;
          v12 = 0;
          result = sub_847CC(a1, (__int64)v11, 1);
          v7 = v12 | v10;
          v10 |= v12;
        }
        while ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 124 );
      }
      else
      {
        v7 = v10;
      }
      v8 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = (v8 != 0) & (unsigned __int8)(v7 != 0);
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 9766 );
  }
  return result;
}
