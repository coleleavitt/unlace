/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043684
// Address: 0x0000000100043684

//----- (0000000100043684) ----------------------------------------------------
__int64 __fastcall sub_100043684(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  int i; // w8
  bool v7; // zf
  __int64 v8; // x8
  __int64 v9; // x23
  char v10[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v11; // [xsp+10h] [xbp-50h]
  char v12[8]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v13; // [xsp+20h] [xbp-40h]

  result = sub_10004336C(a1, a2, a3);
  for ( i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
        i == 124;
        i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL) )
  {
    v12[0] = 1;
    v13 = 0;
    result = sub_10004336C(a1, (__int64)v12, 1);
    *(_QWORD *)(a2 + 8) |= v13;
  }
  if ( i == 9766 )
  {
    do
    {
      v10[0] = 1;
      v11 = 0;
      result = sub_10004336C(a1, (__int64)v10, 1);
      v9 = v11;
      if ( *(_WORD *)(*(_QWORD *)(a1 + 536) + 24LL) == 124 )
      {
        do
        {
          v12[0] = 1;
          v13 = 0;
          result = sub_10004336C(a1, (__int64)v12, 1);
          v9 |= v13;
        }
        while ( *(_WORD *)(*(_QWORD *)(a1 + 536) + 24LL) == 124 );
        v11 = v9;
      }
      if ( *(_QWORD *)(a2 + 8) )
        v7 = v9 == 0;
      else
        v7 = 1;
      v8 = !v7;
      *(_QWORD *)(a2 + 8) = v8;
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 536) + 24LL) == 9766 );
  }
  return result;
}
