/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmake_full_path
// Address: 0x00000001000736F8

//----- (00000001000736F8) ----------------------------------------------------
unsigned __int64 __fastcall qmake_full_path(unsigned __int64 a1, __int64 a2, char *a3)
{
  char *v6; // x22
  int v7; // w8
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  char v14; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  int v22; // w0
  char v23; // w1
  int v24; // w2
  char v25[1024]; // [xsp+18h] [xbp-438h] BYREF

  v6 = realpath_DARWIN_EXTSN(a3, v25);
  if ( v6 )
    goto LABEL_7;
  v7 = (unsigned __int8)*a3;
  if ( v7 == 47 || v7 == 92 )
  {
    v6 = a3;
LABEL_7:
    qustrncpy(a1, (__int64)v6, a2);
    return a1;
  }
  if ( getcwd(v25, 0x400u) )
  {
    v6 = v25;
    qmakepath(v25, 1024, v25, v8, v9, v10, v11, v12, a3);
    goto LABEL_7;
  }
  v14 = qerrstr(-1);
  v22 = sub_10002EBB8("getcwd: %s", v15, v16, v17, v18, v19, v20, v21, v14);
  return sub_1000737E8(v22, v23, v24);
}
// 100073784: variable 'v8' is possibly undefined
// 100073784: variable 'v9' is possibly undefined
// 100073784: variable 'v10' is possibly undefined
// 100073784: variable 'v11' is possibly undefined
// 100073784: variable 'v12' is possibly undefined
// 1000737E4: variable 'v15' is possibly undefined
// 1000737E4: variable 'v16' is possibly undefined
// 1000737E4: variable 'v17' is possibly undefined
// 1000737E4: variable 'v18' is possibly undefined
// 1000737E4: variable 'v19' is possibly undefined
// 1000737E4: variable 'v20' is possibly undefined
// 1000737E4: variable 'v21' is possibly undefined
// 1000737E5: variable 'v23' is possibly undefined
// 1000737E5: variable 'v24' is possibly undefined
