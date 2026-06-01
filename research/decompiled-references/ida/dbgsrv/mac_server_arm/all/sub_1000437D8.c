/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000437D8
// Address: 0x00000001000437D8

//----- (00000001000437D8) ----------------------------------------------------
__int64 __fastcall sub_1000437D8(__int64 a1, __int64 a2)
{
  __int64 v4; // x23
  __int128 v5; // q0
  __int128 v6; // q2
  __int128 v7; // q3
  __int128 v8; // q4
  __int128 v9; // q1
  __int128 v10; // q3
  __int128 v11; // q1
  __int128 v12; // q1
  __int64 *v13; // x22
  char v14; // w24
  char v15; // w25
  void *v16; // x26
  __int64 v17; // x27
  __int64 v18; // x28
  void *v19; // x24
  __int64 i; // x8
  __int64 v21; // x8
  void *v22; // x8
  __int64 v23; // x10
  __int128 v24; // q0
  __int128 v25; // q1
  __int128 v26; // q3
  __int128 v27; // q0
  __int128 v28; // q1
  __int128 v29; // q2
  __int128 v30; // q1
  __int128 v31; // q1
  __int128 v33; // [xsp+0h] [xbp-1C0h]
  unsigned int v34; // [xsp+14h] [xbp-1ACh]
  char *v35; // [xsp+18h] [xbp-1A8h] BYREF
  void *v36; // [xsp+20h] [xbp-1A0h]
  __int128 v37; // [xsp+28h] [xbp-198h]
  void *v38; // [xsp+38h] [xbp-188h] BYREF
  __int128 v39; // [xsp+40h] [xbp-180h]
  __int128 v40; // [xsp+50h] [xbp-170h]
  __int128 v41; // [xsp+60h] [xbp-160h]
  __int128 v42; // [xsp+70h] [xbp-150h]
  __int128 v43; // [xsp+80h] [xbp-140h]
  __int128 v44; // [xsp+90h] [xbp-130h]
  __int128 v45; // [xsp+A0h] [xbp-120h]
  __int128 v46; // [xsp+B0h] [xbp-110h]
  __int128 v47; // [xsp+C0h] [xbp-100h]
  __int128 v48; // [xsp+D0h] [xbp-F0h]
  __int128 v49; // [xsp+E0h] [xbp-E0h]
  __int128 v50; // [xsp+F0h] [xbp-D0h]
  __int128 v51; // [xsp+100h] [xbp-C0h]
  void *v52; // [xsp+118h] [xbp-A8h] BYREF
  __int64 v53; // [xsp+120h] [xbp-A0h]
  __int64 v54; // [xsp+128h] [xbp-98h]
  __int16 v55; // [xsp+130h] [xbp-90h]
  __int64 v56; // [xsp+138h] [xbp-88h]
  char v57; // [xsp+140h] [xbp-80h]
  __int64 v58; // [xsp+148h] [xbp-78h]
  __int64 v59; // [xsp+150h] [xbp-70h]

  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v53 = 0;
  v54 = 0;
  v52 = nullptr;
  v55 = 0;
  v4 = *(_QWORD *)(a1 + 536);
  if ( v4 )
  {
    v5 = *(_OWORD *)(a1 + 472);
    v6 = *(_OWORD *)(a1 + 504);
    v7 = *(_OWORD *)(a1 + 520);
    v49 = *(_OWORD *)(a1 + 488);
    v50 = v6;
    v51 = v7;
    v8 = *(_OWORD *)(a1 + 408);
    v9 = *(_OWORD *)(a1 + 440);
    v10 = *(_OWORD *)(a1 + 456);
    v45 = *(_OWORD *)(a1 + 424);
    v46 = v9;
    v47 = v10;
    v48 = v5;
    v11 = *(_OWORD *)(a1 + 360);
    v40 = *(_OWORD *)(a1 + 344);
    v41 = v11;
    v12 = *(_OWORD *)(a1 + 392);
    v42 = *(_OWORD *)(a1 + 376);
    v43 = v12;
    v44 = v8;
  }
  *(_QWORD *)(a1 + 536) = &v52;
  v13 = (__int64 *)(a1 + 56);
  v38 = *(void **)(a1 + 56);
  v39 = *(_OWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v33 = *(_OWORD *)(a1 + 200);
  v14 = *(_BYTE *)(a1 + 128);
  v15 = *(_BYTE *)(a1 + 84);
  *(_QWORD *)(a1 + 200) = sub_10003E38C;
  *(_QWORD *)(a1 + 208) = &v35;
  v16 = *(void **)(a1 + 248);
  v17 = *(_QWORD *)(a1 + 256);
  v35 = &byte_10008E2F5;
  v36 = v16;
  v18 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)&v37 = v17;
  *((_QWORD *)&v37 + 1) = v18;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 544) = 0;
  v34 = setjmp((int *)(a1 + 344));
  if ( v34 )
    set_qerrno();
  else
    sub_10004299C(a1, a2, 1);
  if ( !v34 && (v55 != 1 || *(_BYTE *)(a1 + 544) == 1) )
    v34 = set_qerrno();
  *(_BYTE *)(a1 + 84) = v15;
  *(_BYTE *)(a1 + 128) = v14;
  *(_OWORD *)(a1 + 200) = v33;
  v19 = *(void **)(a1 + 248);
  v36 = v19;
  v37 = *(_OWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 248) = v16;
  *(_QWORD *)(a1 + 256) = v17;
  *(_QWORD *)(a1 + 264) = v18;
  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v21 = *(_QWORD *)(a1 + 56) + 56 * i;
    *(_QWORD *)a1 = *(_QWORD *)(v21 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v21 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v21 - 8);
    sub_10003D524(v13);
  }
  v22 = *(void **)(a1 + 56);
  v23 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = v38;
  *(_OWORD *)(a1 + 64) = v39;
  v38 = v22;
  *(_QWORD *)&v39 = 0;
  *((_QWORD *)&v39 + 1) = v23;
  if ( v4 )
  {
    v24 = v49;
    v25 = v50;
    v26 = v47;
    *(_OWORD *)(a1 + 472) = v48;
    *(_OWORD *)(a1 + 488) = v24;
    v27 = v51;
    *(_OWORD *)(a1 + 504) = v25;
    *(_OWORD *)(a1 + 520) = v27;
    v28 = v45;
    v29 = v46;
    *(_OWORD *)(a1 + 408) = v44;
    *(_OWORD *)(a1 + 424) = v28;
    *(_OWORD *)(a1 + 440) = v29;
    *(_OWORD *)(a1 + 456) = v26;
    v30 = v41;
    *(_OWORD *)(a1 + 344) = v40;
    *(_OWORD *)(a1 + 360) = v30;
    v31 = v43;
    *(_OWORD *)(a1 + 376) = v42;
    *(_OWORD *)(a1 + 392) = v31;
  }
  *(_QWORD *)(a1 + 536) = v4;
  if ( v19 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v19);
    v36 = nullptr;
    v22 = v38;
  }
  if ( v22 )
  {
    sub_100044E2C(&v38, 0);
    qfree(v38);
  }
  if ( v52 )
  {
    v53 = 0;
    qfree(v52);
  }
  return v34;
}
// 10008E2F5: using guessed type char byte_10008E2F5;
