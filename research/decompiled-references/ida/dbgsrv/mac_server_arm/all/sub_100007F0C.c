/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007F0C
// Address: 0x0000000100007F0C

//----- (0000000100007F0C) ----------------------------------------------------
void __fastcall sub_100007F0C(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // x8
  char *v6; // x9
  char *v7; // x0
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  __int64 (__fastcall **v13)(); // [xsp+8h] [xbp-88h] BYREF
  int v14; // [xsp+10h] [xbp-80h]
  __int64 v15; // [xsp+14h] [xbp-7Ch]
  __int64 v16; // [xsp+1Ch] [xbp-74h]
  __int64 v17; // [xsp+24h] [xbp-6Ch]
  void *v18[2]; // [xsp+30h] [xbp-60h]
  __int128 v19; // [xsp+40h] [xbp-50h]
  __int128 v20; // [xsp+50h] [xbp-40h]
  __int64 v21; // [xsp+60h] [xbp-30h]
  __int64 v22; // [xsp+68h] [xbp-28h]
  _BYTE *v23; // [xsp+70h] [xbp-20h]

  v6 = (char *)a3[2];
  v5 = a3[3];
  v14 = 16;
  if ( v5 )
    v7 = v6;
  else
    v7 = &byte_100075A30;
  v15 = 0;
  v17 = 0;
  v16 = 0;
  *(_OWORD *)v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v13 = off_100098C20;
  v21 = a1;
  v22 = a2;
  v23 = qbasename(v7);
  sub_100005000(a1, (__int64)&v13, a3, v8, v9, v10, v11, v12);
  v13 = off_100098B90;
  if ( v18[1] )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18[1]);
  }
}
// 100007F8C: variable 'v8' is possibly undefined
// 100007F8C: variable 'v9' is possibly undefined
// 100007F8C: variable 'v10' is possibly undefined
// 100007F8C: variable 'v11' is possibly undefined
// 100007F8C: variable 'v12' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 100098B90: using guessed type __int64 (__fastcall *off_100098B90[8])();
// 100098C20: using guessed type __int64 (__fastcall *off_100098C20[8])();
