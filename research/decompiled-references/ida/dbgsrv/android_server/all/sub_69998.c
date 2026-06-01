/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69998
// Address: 0x0000000000069998

//----- (0000000000069998) ----------------------------------------------------
__int64 __fastcall sub_69998(__int64 result, int a2)
{
  __int64 v2; // x9
  unsigned __int64 v3; // x8
  __int64 *v4; // x0
  __int64 v5; // x1
  unsigned __int64 v6; // x8
  __int64 v7; // x9

  v2 = *(_QWORD *)(result + 128);
  v3 = *(_QWORD *)(result + 112) + a2;
  *(_QWORD *)(result + 112) = v3;
  if ( v3 >= *(_QWORD *)(v2 + 8) )
  {
    sub_3B1DC("interr: bad idc move_ip");
    if ( v5 && (v6 = v4[1]) != 0 )
    {
      v7 = *v4;
      result = 0;
      while ( *(_QWORD *)(v7 + 8 * result) != v5 )
      {
        if ( ++result >= v6 )
          return -1;
      }
    }
    else
    {
      return -1;
    }
  }
  return result;
}
// 699C8: variable 'v5' is possibly undefined
// 699CC: variable 'v4' is possibly undefined
