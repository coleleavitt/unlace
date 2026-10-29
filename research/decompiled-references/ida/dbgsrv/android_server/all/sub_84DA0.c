/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84DA0
// Address: 0x0000000000084DA0

//----- (0000000000084DA0) ----------------------------------------------------
__int64 __fastcall sub_84DA0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int i; // w8
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x9
  char v11[8]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v12; // [xsp+10h] [xbp-60h]
  char v13[8]; // [xsp+18h] [xbp-58h] BYREF
  __int64 v14; // [xsp+20h] [xbp-50h]
  __int64 v15; // [xsp+28h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_84AEC(a1, a2, a3 & 1);
  for ( i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        i == 9766;
        i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL) )
  {
    v13[0] = 1;
    v14 = 0;
    result = sub_84AEC(a1, (__int64)v13, 1);
    v7 = *(_QWORD *)(a2 + 8);
    v8 = v14;
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 8) = (v7 != 0) & (unsigned __int8)(v8 != 0);
  }
  if ( i == 31868 )
  {
    do
    {
      v11[0] = 1;
      v12 = 0;
      result = sub_84AEC(a1, (__int64)v11, 1);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 9766 )
      {
        do
        {
          v13[0] = 1;
          v14 = 0;
          result = sub_84AEC(a1, (__int64)v13, 1);
          v11[0] = 0;
          v9 = (v12 != 0) & (unsigned __int8)(v14 != 0);
          v12 = v9;
        }
        while ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 9766 );
      }
      else
      {
        v9 = v12;
      }
      v10 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = (v9 | v10) != 0;
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 31868 );
  }
  return result;
}
