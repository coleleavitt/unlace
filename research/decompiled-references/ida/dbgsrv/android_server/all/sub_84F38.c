/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84F38
// Address: 0x0000000000084F38

//----- (0000000000084F38) ----------------------------------------------------
__int64 __fastcall sub_84F38(__int64 a1, __int64 a2)
{
  __int128 *v3; // x20
  __int128 v4; // q0
  __int128 v5; // q2
  __int128 v6; // q3
  __int128 v7; // q0
  __int128 v8; // q2
  __int128 v9; // q3
  __int128 v10; // q1
  __int128 v11; // q2
  __int128 v12; // q3
  __int128 v13; // q1
  __int128 v14; // q2
  __int128 v15; // q3
  __int64 v16; // x27
  char v17; // w21
  char v18; // w22
  __int64 v19; // x9
  __int64 v20; // x25
  __int64 v21; // x29
  __int64 v22; // x23
  __int64 v23; // x28
  __int64 v24; // x26
  __int64 v25; // x8
  void *v26; // x22
  __int64 v27; // x8
  __int64 v28; // x0
  int v29; // w9
  void *v30; // x23
  __int128 v31; // q1
  __int128 v32; // q2
  __int128 v33; // q3
  __int128 v34; // q1
  __int128 v35; // q2
  __int128 v36; // q3
  __int128 v37; // q1
  __int128 v38; // q2
  __int128 v39; // q3
  __int128 v40; // q1
  __int128 v41; // q2
  __int128 v42; // q3
  __int64 v45; // [xsp+18h] [xbp-1E8h]
  void *ptr; // [xsp+20h] [xbp-1E0h]
  __int64 v47; // [xsp+28h] [xbp-1D8h]
  unsigned int v48; // [xsp+44h] [xbp-1BCh]
  char *v49; // [xsp+48h] [xbp-1B8h] BYREF
  __int128 v50; // [xsp+50h] [xbp-1B0h]
  __int128 v51; // [xsp+60h] [xbp-1A0h]
  __int128 v52; // [xsp+70h] [xbp-190h]
  __int128 v53; // [xsp+80h] [xbp-180h]
  __int128 v54; // [xsp+90h] [xbp-170h]
  __int128 v55; // [xsp+A0h] [xbp-160h]
  __int128 v56; // [xsp+B0h] [xbp-150h]
  __int128 v57; // [xsp+C0h] [xbp-140h]
  __int128 v58; // [xsp+D0h] [xbp-130h]
  __int128 v59; // [xsp+E0h] [xbp-120h]
  __int128 v60; // [xsp+F0h] [xbp-110h]
  __int128 v61; // [xsp+100h] [xbp-100h]
  __int128 v62; // [xsp+110h] [xbp-F0h]
  __int128 v63; // [xsp+120h] [xbp-E0h]
  __int128 v64; // [xsp+130h] [xbp-D0h]
  __int128 v65; // [xsp+140h] [xbp-C0h]
  void *v66; // [xsp+158h] [xbp-A8h] BYREF
  __int64 v67; // [xsp+160h] [xbp-A0h]
  __int64 v68; // [xsp+168h] [xbp-98h]
  __int16 v69; // [xsp+170h] [xbp-90h]
  __int64 v70; // [xsp+178h] [xbp-88h]
  char v71; // [xsp+180h] [xbp-80h]
  __int64 v72; // [xsp+188h] [xbp-78h]
  __int64 v73; // [xsp+190h] [xbp-70h]
  __int64 v74; // [xsp+198h] [xbp-68h]

  v3 = (__int128 *)(a1 + 344);
  v74 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v67 = 0;
  v68 = 0;
  v66 = nullptr;
  v69 = 0;
  v47 = *(_QWORD *)(a1 + 600);
  if ( v47 )
  {
    v4 = *(_OWORD *)(a1 + 392);
    v6 = *v3;
    v5 = *(_OWORD *)(a1 + 360);
    v52 = *(_OWORD *)(a1 + 376);
    v53 = v4;
    v50 = v6;
    v51 = v5;
    v7 = *(_OWORD *)(a1 + 456);
    v9 = *(_OWORD *)(a1 + 408);
    v8 = *(_OWORD *)(a1 + 424);
    v56 = *(_OWORD *)(a1 + 440);
    v57 = v7;
    v54 = v9;
    v55 = v8;
    v10 = *(_OWORD *)(a1 + 520);
    v11 = *(_OWORD *)(a1 + 472);
    v12 = *(_OWORD *)(a1 + 488);
    v60 = *(_OWORD *)(a1 + 504);
    v61 = v10;
    v58 = v11;
    v59 = v12;
    v13 = *(_OWORD *)(a1 + 584);
    v14 = *(_OWORD *)(a1 + 536);
    v15 = *(_OWORD *)(a1 + 552);
    v64 = *(_OWORD *)(a1 + 568);
    v65 = v13;
    v62 = v14;
    v63 = v15;
  }
  v16 = *(_QWORD *)(a1 + 64);
  v17 = *(_BYTE *)(a1 + 128);
  v18 = *(_BYTE *)(a1 + 84);
  ptr = *(void **)(a1 + 56);
  v19 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 600) = &v66;
  v45 = v19;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v21 = *(_QWORD *)(a1 + 200);
  v20 = *(_QWORD *)(a1 + 208);
  v49 = "";
  v22 = *(_QWORD *)(a1 + 248);
  v23 = *(_QWORD *)(a1 + 256);
  v24 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 200) = sub_7D9B8;
  *(_QWORD *)(a1 + 208) = &v49;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 608) = 0;
  v48 = setjmp((struct __jmp_buf_tag *)(a1 + 344));
  if ( v48 )
    set_qerrno(v48);
  else
    sub_82FE8(a1, a2, 1);
  if ( !v48 && (v69 != 1 || *(_BYTE *)(a1 + 608)) )
    v48 = set_qerrno(0x2Fu);
  *(_BYTE *)(a1 + 84) = v18;
  v25 = *(_QWORD *)(a1 + 64);
  v26 = *(void **)(a1 + 248);
  *(_BYTE *)(a1 + 128) = v17;
  *(_QWORD *)(a1 + 200) = v21;
  *(_QWORD *)(a1 + 208) = v20;
  *(_QWORD *)(a1 + 248) = v22;
  *(_QWORD *)(a1 + 256) = v23;
  for ( *(_QWORD *)(a1 + 264) = v24; v25; v25 = *(_QWORD *)(a1 + 64) )
  {
    v27 = v25 - 1;
    v28 = *(_QWORD *)(a1 + 56) + 56 * v27;
    *(_QWORD *)a1 = *(_QWORD *)(v28 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v28 + 32);
    v29 = *(_DWORD *)(v28 + 48);
    *(_QWORD *)(a1 + 64) = v27;
    *(_DWORD *)(a1 + 80) = v29;
    sub_39570(v28);
  }
  v30 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = ptr;
  *(_QWORD *)(a1 + 64) = v16;
  *(_QWORD *)(a1 + 72) = v45;
  if ( v47 )
  {
    v31 = v53;
    v32 = v50;
    v33 = v51;
    v3[2] = v52;
    v3[3] = v31;
    *v3 = v32;
    v3[1] = v33;
    v34 = v57;
    v35 = v54;
    v36 = v55;
    v3[6] = v56;
    v3[7] = v34;
    v3[4] = v35;
    v3[5] = v36;
    v37 = v61;
    v38 = v58;
    v39 = v59;
    v3[10] = v60;
    v3[11] = v37;
    v3[8] = v38;
    v3[9] = v39;
    v40 = v65;
    v41 = v62;
    v42 = v63;
    v3[14] = v64;
    v3[15] = v40;
    v3[12] = v41;
    v3[13] = v42;
  }
  *(_QWORD *)(a1 + 600) = v47;
  if ( v26 )
    qfree(v26);
  if ( v30 )
    qfree(v30);
  if ( v66 )
  {
    v67 = 0;
    qfree(v66);
    v66 = nullptr;
    v68 = 0;
  }
  return v48;
}
