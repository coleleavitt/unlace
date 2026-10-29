/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004238
// Address: 0x0000000100004238

//----- (0000000100004238) ----------------------------------------------------
__int64 __fastcall sub_100004238(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  int v12; // w8
  char v14; // w0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  char v21[1024]; // [xsp+8h] [xbp-428h] BYREF

  while ( 1 )
  {
    while ( !sub_100004360(a1 + 120, a2) )
    {
      if ( *(_DWORD *)(a1 + 1556) != 4 )
      {
        sub_100002FA4(a1, a3);
        if ( *(_QWORD *)(a1 + 160) )
          continue;
      }
      return 0;
    }
    v12 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( v12 != 5 )
      break;
    if ( !sub_100003510((_QWORD *)a1, a2, v6, v7, v8, v9, v10, v11) && (sub_100004084((_QWORD *)a1, a2) & 1) == 0 )
      goto LABEL_11;
  }
  if ( v12 == 11 )
    *(_BYTE *)(a1 + 1928) = 0;
LABEL_11:
  copy_debug_event(a1 + 168, a2);
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    v14 = sub_1000599D8(a2, v21, 0x400u);
    sub_1000593FC(a1, "GDE1: %s\n", v15, v16, v17, v18, v19, v20, v14);
  }
  if ( *(_QWORD *)(a1 + 160) )
    return 2;
  else
    return 1;
}
// 100004294: variable 'v6' is possibly undefined
// 100004294: variable 'v7' is possibly undefined
// 100004294: variable 'v8' is possibly undefined
// 100004294: variable 'v9' is possibly undefined
// 100004294: variable 'v10' is possibly undefined
// 100004294: variable 'v11' is possibly undefined
// 10000431C: variable 'v15' is possibly undefined
// 10000431C: variable 'v16' is possibly undefined
// 10000431C: variable 'v17' is possibly undefined
// 10000431C: variable 'v18' is possibly undefined
// 10000431C: variable 'v19' is possibly undefined
// 10000431C: variable 'v20' is possibly undefined
