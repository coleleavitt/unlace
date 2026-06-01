/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F3E0
// Address: 0x000000010001F3E0

//----- (000000010001F3E0) ----------------------------------------------------
char __fastcall sub_10001F3E0(__int64 a1, int a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  natural_t v29[2]; // [rsp+4h] [rbp-35Ch] BYREF
  int v30; // [rsp+Ch] [rbp-354h]
  char v31; // [rsp+10h] [rbp-350h]
  __int16 v32; // [rsp+12h] [rbp-34Eh]
  int v33; // [rsp+14h] [rbp-34Ch]
  __int16 v34; // [rsp+18h] [rbp-348h]
  int v35; // [rsp+1Ch] [rbp-344h]
  __int16 v36; // [rsp+20h] [rbp-340h]
  __int64 v37; // [rsp+24h] [rbp-33Ch]
  __int128 v38; // [rsp+2Ch] [rbp-334h]
  __int128 v39; // [rsp+3Ch] [rbp-324h]
  __int128 v40; // [rsp+4Ch] [rbp-314h]
  __int128 v41; // [rsp+5Ch] [rbp-304h]
  __int128 v42; // [rsp+6Ch] [rbp-2F4h]
  __int128 v43; // [rsp+7Ch] [rbp-2E4h]
  __int128 v44; // [rsp+8Ch] [rbp-2D4h]
  __int128 v45; // [rsp+9Ch] [rbp-2C4h]
  __int128 v46; // [rsp+ACh] [rbp-2B4h]
  __int128 v47; // [rsp+BCh] [rbp-2A4h]
  __int128 v48; // [rsp+CCh] [rbp-294h]
  __int128 v49; // [rsp+DCh] [rbp-284h]
  __int128 v50; // [rsp+ECh] [rbp-274h]
  __int128 v51; // [rsp+FCh] [rbp-264h]
  __int128 v52; // [rsp+10Ch] [rbp-254h]
  __int128 v53; // [rsp+11Ch] [rbp-244h]
  __int128 v54; // [rsp+12Ch] [rbp-234h]
  __int128 v55; // [rsp+13Ch] [rbp-224h]
  __int128 v56; // [rsp+14Ch] [rbp-214h]
  __int128 v57; // [rsp+15Ch] [rbp-204h]
  __int128 v58; // [rsp+16Ch] [rbp-1F4h]
  __int128 v59; // [rsp+17Ch] [rbp-1E4h]
  __int128 v60; // [rsp+18Ch] [rbp-1D4h]
  __int128 v61; // [rsp+19Ch] [rbp-1C4h]
  __int128 v62; // [rsp+250h] [rbp-110h]
  __int128 v63; // [rsp+260h] [rbp-100h]
  __int128 v64; // [rsp+270h] [rbp-F0h]
  __int128 v65; // [rsp+280h] [rbp-E0h]
  __int128 v66; // [rsp+290h] [rbp-D0h]
  __int128 v67; // [rsp+2A0h] [rbp-C0h]
  __int128 v68; // [rsp+2B0h] [rbp-B0h]
  __int128 v69; // [rsp+2C0h] [rbp-A0h]
  __int128 v70; // [rsp+2D0h] [rbp-90h]
  __int128 v71; // [rsp+2E0h] [rbp-80h]
  __int128 v72; // [rsp+2F0h] [rbp-70h]
  __int128 v73; // [rsp+300h] [rbp-60h]
  __int128 v74; // [rsp+310h] [rbp-50h]
  __int128 v75; // [rsp+320h] [rbp-40h]
  __int128 v76; // [rsp+330h] [rbp-30h]
  __int128 v77; // [rsp+340h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 1233) == 1 )
  {
    if ( sub_10001F850(a1, a2, v29) )
    {
      *(_DWORD *)a3 = v30;
      *(_BYTE *)(a3 + 4) = v31;
      *(_WORD *)(a3 + 6) = v32;
      *(_DWORD *)(a3 + 8) = v33;
      *(_WORD *)(a3 + 12) = v34;
      *(_DWORD *)(a3 + 16) = v35;
      *(_WORD *)(a3 + 20) = v36;
      *(_QWORD *)(a3 + 24) = v37;
      *(_OWORD *)(a3 + 144) = v45;
      *(_OWORD *)(a3 + 128) = v44;
      *(_OWORD *)(a3 + 112) = v43;
      *(_OWORD *)(a3 + 96) = v42;
      v4 = v38;
      v5 = v39;
      v6 = v40;
      *(_OWORD *)(a3 + 80) = v41;
      *(_OWORD *)(a3 + 64) = v6;
      *(_OWORD *)(a3 + 48) = v5;
      *(_OWORD *)(a3 + 32) = v4;
      v7 = v47;
      v8 = v48;
      v9 = v49;
      *(_OWORD *)(a3 + 160) = v46;
      *(_OWORD *)(a3 + 176) = v7;
      *(_OWORD *)(a3 + 192) = v8;
      *(_OWORD *)(a3 + 208) = v9;
      *(_OWORD *)(a3 + 224) = v50;
      *(_OWORD *)(a3 + 240) = v51;
      *(_OWORD *)(a3 + 256) = v52;
      *(_OWORD *)(a3 + 272) = v53;
      v10 = v63;
      v11 = v64;
      v12 = v65;
      *(_OWORD *)(a3 + 416) = v62;
      *(_OWORD *)(a3 + 432) = v10;
      *(_OWORD *)(a3 + 448) = v11;
      *(_OWORD *)(a3 + 464) = v12;
      *(_OWORD *)(a3 + 480) = v66;
      *(_OWORD *)(a3 + 496) = v67;
      *(_OWORD *)(a3 + 512) = v68;
      *(_OWORD *)(a3 + 528) = v69;
      v13 = v55;
      v14 = v56;
      v15 = v57;
      *(_OWORD *)(a3 + 288) = v54;
      *(_OWORD *)(a3 + 304) = v13;
      *(_OWORD *)(a3 + 320) = v14;
      *(_OWORD *)(a3 + 336) = v15;
      *(_OWORD *)(a3 + 352) = v58;
      *(_OWORD *)(a3 + 368) = v59;
      *(_OWORD *)(a3 + 400) = v61;
      *(_OWORD *)(a3 + 384) = v60;
      v16 = v71;
      v17 = v72;
      v18 = v73;
      *(_OWORD *)(a3 + 544) = v70;
      *(_OWORD *)(a3 + 560) = v16;
      *(_OWORD *)(a3 + 576) = v17;
      *(_OWORD *)(a3 + 592) = v18;
      *(_OWORD *)(a3 + 608) = v74;
      *(_OWORD *)(a3 + 624) = v75;
      *(_OWORD *)(a3 + 640) = v76;
      *(_OWORD *)(a3 + 656) = v77;
      return 1;
    }
  }
  else if ( sub_10001F920(a1, a2, v29) )
  {
    *(_DWORD *)a3 = v30;
    *(_BYTE *)(a3 + 4) = v31;
    *(_WORD *)(a3 + 6) = v32;
    *(_DWORD *)(a3 + 8) = v33;
    *(_WORD *)(a3 + 12) = v34;
    *(_DWORD *)(a3 + 16) = v35;
    *(_WORD *)(a3 + 20) = v36;
    *(_QWORD *)(a3 + 24) = v37;
    *(_OWORD *)(a3 + 144) = v45;
    *(_OWORD *)(a3 + 128) = v44;
    *(_OWORD *)(a3 + 112) = v43;
    *(_OWORD *)(a3 + 96) = v42;
    v19 = v38;
    v20 = v39;
    v21 = v40;
    *(_OWORD *)(a3 + 80) = v41;
    *(_OWORD *)(a3 + 64) = v21;
    *(_OWORD *)(a3 + 48) = v20;
    *(_OWORD *)(a3 + 32) = v19;
    v22 = v47;
    v23 = v48;
    v24 = v49;
    *(_OWORD *)(a3 + 160) = v46;
    *(_OWORD *)(a3 + 176) = v22;
    *(_OWORD *)(a3 + 192) = v23;
    *(_OWORD *)(a3 + 208) = v24;
    *(_OWORD *)(a3 + 224) = v50;
    *(_OWORD *)(a3 + 240) = v51;
    *(_OWORD *)(a3 + 256) = v52;
    *(_OWORD *)(a3 + 272) = v53;
    v25 = v63;
    v26 = v64;
    v27 = v65;
    *(_OWORD *)(a3 + 416) = v62;
    *(_OWORD *)(a3 + 432) = v25;
    *(_OWORD *)(a3 + 448) = v26;
    *(_OWORD *)(a3 + 464) = v27;
    *(_OWORD *)(a3 + 480) = v66;
    *(_OWORD *)(a3 + 496) = v67;
    *(_OWORD *)(a3 + 512) = v68;
    *(_OWORD *)(a3 + 528) = v69;
    return 1;
  }
  return 0;
}
