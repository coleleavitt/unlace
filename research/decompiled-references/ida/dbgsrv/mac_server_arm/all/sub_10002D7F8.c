/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D7F8
// Address: 0x000000010002D7F8

//----- (000000010002D7F8) ----------------------------------------------------
__int64 __fastcall sub_10002D7F8(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v9; // w29
  unsigned __int64 v10; // x8
  char *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7

  v10 = *(_QWORD *)(result + 112) + (int)a2;
  *(_QWORD *)(result + 112) = v10;
  if ( v10 >= *(_QWORD *)(*(_QWORD *)(result + 128) + 8LL) )
  {
    v11 = (char *)sub_10002D82C("interr: bad idc move_ip", a2, a3, a4, a5, a6, a7, a8, v9);
    return sub_10002D82C(v11, v12, v13, v14, v15, v16, v17, v18, a9);
  }
  return result;
}
// 10002D828: variable 'v9' is possibly undefined
// 10002D829: variable 'v12' is possibly undefined
// 10002D829: variable 'v13' is possibly undefined
// 10002D829: variable 'v14' is possibly undefined
// 10002D829: variable 'v15' is possibly undefined
// 10002D829: variable 'v16' is possibly undefined
// 10002D829: variable 'v17' is possibly undefined
// 10002D829: variable 'v18' is possibly undefined
