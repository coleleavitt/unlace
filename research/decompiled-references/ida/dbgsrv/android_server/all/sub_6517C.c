/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6517C
// Address: 0x000000000006517C

//----- (000000000006517C) ----------------------------------------------------
__int64 __fastcall sub_6517C(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // w21
  _QWORD *v7; // x20
  void *v8; // x0
  __int128 v10; // [xsp+0h] [xbp-210h] BYREF
  _UNKNOWN **v11; // [xsp+10h] [xbp-200h]
  __int64 (__fastcall **v12)(); // [xsp+18h] [xbp-1F8h]
  char v13; // [xsp+20h] [xbp-1F0h]
  __int64 v14; // [xsp+28h] [xbp-1E8h] BYREF
  __int128 v15; // [xsp+30h] [xbp-1E0h]
  __int16 v16; // [xsp+40h] [xbp-1D0h]
  __int64 v17; // [xsp+48h] [xbp-1C8h]
  char v18; // [xsp+50h] [xbp-1C0h]
  __int128 v19; // [xsp+58h] [xbp-1B8h]
  __int64 v20; // [xsp+68h] [xbp-1A8h]
  __int128 v21; // [xsp+70h] [xbp-1A0h]
  __int128 v22; // [xsp+80h] [xbp-190h]
  __int128 v23; // [xsp+90h] [xbp-180h]
  __int128 v24; // [xsp+A0h] [xbp-170h]
  __int128 v25; // [xsp+B0h] [xbp-160h]
  __int128 v26; // [xsp+C0h] [xbp-150h]
  int v27; // [xsp+D0h] [xbp-140h]
  char v28; // [xsp+D4h] [xbp-13Ch]
  int v29; // [xsp+D8h] [xbp-138h]
  char v30; // [xsp+DCh] [xbp-134h]
  __int128 v31; // [xsp+E0h] [xbp-130h]
  __int128 v32; // [xsp+F0h] [xbp-120h]
  __int128 v33; // [xsp+100h] [xbp-110h]
  __int128 v34; // [xsp+110h] [xbp-100h]
  __int128 v35; // [xsp+120h] [xbp-F0h]
  __int128 v36; // [xsp+130h] [xbp-E0h]
  __int128 v37; // [xsp+140h] [xbp-D0h]
  __int128 v38; // [xsp+150h] [xbp-C0h]
  __int128 v39; // [xsp+160h] [xbp-B0h]
  __int128 v40; // [xsp+170h] [xbp-A0h]
  __int128 v41; // [xsp+180h] [xbp-90h]
  __int128 v42; // [xsp+190h] [xbp-80h]
  __int64 v43; // [xsp+1A0h] [xbp-70h]
  __int64 v44; // [xsp+1A8h] [xbp-68h]
  __int64 v45; // [xsp+1B0h] [xbp-60h]
  __int64 v46; // [xsp+1B8h] [xbp-58h]
  int v47; // [xsp+1C0h] [xbp-50h]
  char v48; // [xsp+1C4h] [xbp-4Ch]
  __int64 v49; // [xsp+1C8h] [xbp-48h]

  v49 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = &off_15CE30;
  v12 = &off_15CF90;
  v10 = (unsigned __int64)sub_65164;
  v13 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0u;
  v15 = 0u;
  v16 = 0;
  v14 = 0;
  v20 = a1;
  v25 = 0u;
  v26 = 0u;
  v23 = 0u;
  v24 = 0u;
  v21 = 0u;
  v22 = 0u;
  v27 = 0;
  v28 = -90;
  v29 = 0;
  v30 = 0;
  v41 = 0u;
  v42 = 0u;
  v39 = 0u;
  v40 = 0u;
  v37 = 0u;
  v38 = 0u;
  v35 = 0u;
  v36 = 0u;
  v33 = 0u;
  v34 = 0u;
  v31 = 0u;
  v32 = 0u;
  v43 = a2;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = -1;
  v48 = a4 & 1;
  sub_85ED4(*(_QWORD *)(a1 + 32), (__int64)&v10);
  set_qerrno(0);
  v6 = sub_87E40((__int64)&v10, 0);
  if ( (v6 & 1) == 0 )
  {
    sub_65300(*(const char **)(a1 + 32), (__int64)&v14, a3);
    v7 = *((_QWORD **)&v26 + 1);
    if ( *((_QWORD *)&v26 + 1) )
    {
      v8 = **((void ***)&v26 + 1);
      if ( **((_QWORD **)&v26 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v26 + 1) + 8LL) = 0;
        qfree(v8);
        *v7 = 0;
        v7[2] = 0;
      }
    }
    sub_5E994((__int64)&v10);
  }
  sub_85ED4(*(_QWORD *)(a1 + 32), 0);
  sub_655A0(&v10);
  return v6 & 1;
}
// 15CE30: using guessed type _UNKNOWN *off_15CE30;
// 15CF90: using guessed type __int64 (__fastcall *off_15CF90)();
