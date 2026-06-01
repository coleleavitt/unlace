/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000631DC
// Address: 0x00000001000631DC

//----- (00000001000631DC) ----------------------------------------------------
void __fastcall sub_1000631DC(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  char *v16; // x8
  void *v17; // [xsp+8h] [xbp-38h] BYREF
  __int64 v18; // [xsp+10h] [xbp-30h]
  __int64 v19; // [xsp+18h] [xbp-28h]
  char *v20; // [xsp+20h] [xbp-20h]

  v19 = 0;
  v20 = &a9;
  v17 = nullptr;
  v18 = 0;
  sub_10000BACC((char **)&v17, a1, &a9);
  if ( v18 )
    LOBYTE(v16) = (_BYTE)v17;
  else
    v16 = &byte_10007AE40;
  sub_100065520("%s\n", v9, v10, v11, v12, v13, v14, v15, (char)v16);
  sub_10000F540();
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
  }
}
// 10006323C: variable 'v9' is possibly undefined
// 10006323C: variable 'v10' is possibly undefined
// 10006323C: variable 'v11' is possibly undefined
// 10006323C: variable 'v12' is possibly undefined
// 10006323C: variable 'v13' is possibly undefined
// 10006323C: variable 'v14' is possibly undefined
// 10006323C: variable 'v15' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
