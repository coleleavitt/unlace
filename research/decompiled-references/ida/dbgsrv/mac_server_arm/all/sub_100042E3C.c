/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100042E3C
// Address: 0x0000000100042E3C

//----- (0000000100042E3C) ----------------------------------------------------
__int64 __fastcall sub_100042E3C(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  int v6; // w8
  __int64 v7; // x9
  unsigned __int64 v8; // x10
  char v9[8]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v10; // [xsp+10h] [xbp-30h]

  result = sub_100042B00(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9[0] = 1;
        v10 = 0;
        v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
        if ( v6 != 37 )
          break;
        result = sub_100042B00(a1, (__int64)v9, 1);
        if ( !v10 )
LABEL_18:
          longjmp((int *)(a1 + 344), 86);
        if ( (*(_BYTE *)a2 & 1) != 0 || v9[0] == 1 )
        {
          v7 = *(_QWORD *)(a2 + 8);
          v8 = v7 / (unsigned __int64)v10;
        }
        else
        {
          v7 = *(_QWORD *)(a2 + 8);
          v8 = v7 / v10;
        }
        *(_QWORD *)(a2 + 8) = v7 - v8 * v10;
      }
      if ( v6 != 47 )
        break;
      result = sub_100042B00(a1, (__int64)v9, 1);
      if ( !v10 )
        goto LABEL_18;
      if ( (*(_BYTE *)a2 & 1) != 0 || v9[0] == 1 )
        *(_QWORD *)(a2 + 8) /= (unsigned __int64)v10;
      else
        *(__int64 *)(a2 + 8) /= v10;
    }
    if ( v6 != 42 )
      return result;
    result = sub_100042B00(a1, (__int64)v9, 1);
    *(_QWORD *)(a2 + 8) *= v10;
  }
}
