/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EDBC
// Address: 0x000000010005EDBC

//----- (000000010005EDBC) ----------------------------------------------------
void __fastcall sub_10005EDBC(
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
  sub_10000B1A0((char **)&v17, a1, &a9);
  if ( v18 )
    LOBYTE(v16) = (_BYTE)v17;
  else
    v16 = &byte_100075A30;
  sub_100060EB4("%s\n", v9, v10, v11, v12, v13, v14, v15, (char)v16);
  sub_10000EA94();
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
  }
}
// 10005EE18: variable 'v9' is possibly undefined
// 10005EE18: variable 'v10' is possibly undefined
// 10005EE18: variable 'v11' is possibly undefined
// 10005EE18: variable 'v12' is possibly undefined
// 10005EE18: variable 'v13' is possibly undefined
// 10005EE18: variable 'v14' is possibly undefined
// 10005EE18: variable 'v15' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
