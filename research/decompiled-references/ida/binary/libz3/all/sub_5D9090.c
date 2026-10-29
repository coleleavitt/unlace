__int64 __fastcall sub_5D9090(__int64 a1)
{
  unsigned __int8 v1; // al
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  _OWORD *v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  __int64 v15; // r12
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // r12
  _OWORD *v25; // rax
  _OWORD *v26; // rax
  _OWORD *v27; // rax
  __int64 v28; // r12
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // r12
  _QWORD *v36; // rax
  _QWORD *v37; // r12
  unsigned __int64 v38; // rax
  _OWORD *v39; // rax
  _OWORD *v40; // rax
  _OWORD *v41; // rax
  __int64 v42; // r12
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  _QWORD *v46; // rax
  _QWORD *v47; // r12
  unsigned __int64 v48; // rax
  _OWORD *v49; // rax
  _OWORD *v50; // rax
  _OWORD *v51; // rax
  __int64 v52; // r12
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  _QWORD *v56; // rax
  _QWORD *v57; // r12
  unsigned __int64 v58; // rax
  _OWORD *v59; // rax
  _OWORD *v60; // rax
  _OWORD *v61; // rax
  __int64 v62; // r12
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  _QWORD *v66; // rax
  __int64 v67; // r12
  unsigned __int64 v68; // rax
  _OWORD *v69; // rax
  _OWORD *v70; // rax
  _OWORD *v71; // rax
  __int64 v72; // r12
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  __int64 v76; // r12
  __int64 v77; // r12
  __int64 v78; // r12
  __int64 v79; // r12
  __int64 v80; // r12
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  unsigned __int8 v85; // [rsp+Fh] [rbp-59h]
  _BYTE v86[88]; // [rsp+10h] [rbp-58h] BYREF

  v1 = *(_BYTE *)(a1 + 2986);
  *(_BYTE *)(a1 + 2986) = 0;
  v85 = v1;
  sub_6440D0(v86, a1);
  sub_64E850(a1);
  sub_644170(v86);
  v2 = (_QWORD *)sub_186B270(0x38u);
  v2[1] = 45000;
  v3 = v2;
  v2[2] = 0;
  v2[4] = a1;
  v2[5] = 0;
  *v2 = &off_1C52468;
  v4 = *(_QWORD *)a1;
  v3[6] = 0;
  v3[3] = v4;
  sub_644270(v86, v3);
  v5 = sub_186B270(0x1A8u);
  sub_5C8F60(v5, (unsigned __int64 *)a1, 40000);
  sub_644270(v86, v5);
  if ( (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "xform.instantiate_arrays", *(_QWORD *)(a1 + 32) + 8LL, 0) )
  {
    v6 = sub_186B270(0xD8u);
    sub_617270(v6, a1, 34999);
    sub_644270(v86, v6);
  }
  if ( (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "xform.transform_arrays", *(_QWORD *)(a1 + 32) + 8LL, 0) )
  {
    v7 = sub_186B270(0x58u);
    sub_5E84E0(v7, a1, 34998);
    sub_644270(v86, v7);
  }
  if ( (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "xform.quantify_arrays", *(_QWORD *)(a1 + 32) + 8LL, 0) )
  {
    v8 = sub_186B270(0x80u);
    sub_624540(v8, a1, 38000);
    sub_644270(v86, v8);
  }
  v9 = sub_186B270(0x180u);
  sub_5EB400(v9, a1, 37000);
  sub_644270(v86, v9);
  if ( (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "datalog.subsumption", *(_QWORD *)(a1 + 32) + 8LL, 1) )
  {
    v10 = (_QWORD *)sub_186B270(0x88u);
    v10[1] = 35005;
    v11 = v10;
    v10[2] = 0;
    v10[4] = a1;
    v10[6] = 0;
    *v10 = &off_1C528C0;
    v10[3] = *(_QWORD *)a1;
    v10[5] = a1 + 656;
    v12 = (_OWORD *)sub_186B270(0x40u);
    v11[7] = v12;
    *((_DWORD *)v11 + 18) = 0;
    v11[8] = 8;
    *v12 = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[3] = 0;
    v13 = (_OWORD *)sub_186B270(0x80u);
    v11[10] = v13;
    v11[11] = 8;
    *((_DWORD *)v11 + 24) = 0;
    *v13 = 0;
    v13[1] = 0;
    v13[2] = 0;
    v13[3] = 0;
    v13[4] = 0;
    v13[5] = 0;
    v13[6] = 0;
    v13[7] = 0;
    v14 = (_OWORD *)sub_186B270(0x80u);
    v11[13] = v14;
    v11[14] = 8;
    *((_DWORD *)v11 + 30) = 0;
    *((_BYTE *)v11 + 129) = 1;
    *v14 = 0;
    v14[1] = 0;
    v14[2] = 0;
    v14[3] = 0;
    v14[4] = 0;
    v14[5] = 0;
    v14[6] = 0;
    v14[7] = 0;
    sub_644270(v86, v11);
  }
  v15 = sub_186B270(0x688u);
  sub_5D9D40(v15, a1, 35000, v16, v17, v18);
  sub_644270(v86, v15);
  v19 = (_QWORD *)sub_186B270(0x38u);
  v19[1] = 34990;
  v20 = v19;
  v19[2] = 0;
  v19[4] = a1;
  v19[5] = 0;
  *v19 = &off_1C52468;
  v21 = *(_QWORD *)a1;
  v20[6] = 0;
  v20[3] = v21;
  sub_644270(v86, v20);
  v22 = sub_186B270(0x1A8u);
  sub_5C8F60(v22, (unsigned __int64 *)a1, 34980);
  sub_644270(v86, v22);
  if ( (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "datalog.subsumption", *(_QWORD *)(a1 + 32) + 8LL, 1) )
  {
    v23 = (_QWORD *)sub_186B270(0x88u);
    v23[1] = 34975;
    v24 = v23;
    v23[2] = 0;
    v23[4] = a1;
    v23[6] = 0;
    *v23 = &off_1C528C0;
    v23[3] = *(_QWORD *)a1;
    v23[5] = a1 + 656;
    v25 = (_OWORD *)sub_186B270(0x40u);
    v24[7] = v25;
    *((_DWORD *)v24 + 18) = 0;
    v24[8] = 8;
    *v25 = 0;
    v25[1] = 0;
    v25[2] = 0;
    v25[3] = 0;
    v26 = (_OWORD *)sub_186B270(0x80u);
    v24[10] = v26;
    v24[11] = 8;
    *((_DWORD *)v24 + 24) = 0;
    *v26 = 0;
    v26[1] = 0;
    v26[2] = 0;
    v26[3] = 0;
    v26[4] = 0;
    v26[5] = 0;
    v26[6] = 0;
    v26[7] = 0;
    v27 = (_OWORD *)sub_186B270(0x80u);
    v24[13] = v27;
    v24[14] = 8;
    *((_DWORD *)v24 + 30) = 0;
    *((_BYTE *)v24 + 129) = 1;
    *v27 = 0;
    v27[1] = 0;
    v27[2] = 0;
    v27[3] = 0;
    v27[4] = 0;
    v27[5] = 0;
    v27[6] = 0;
    v27[7] = 0;
    sub_644270(v86, v24);
  }
  v28 = sub_186B270(0x688u);
  sub_5D9D40(v28, a1, 34970, v29, v30, v31);
  sub_644270(v86, v28);
  v32 = (_QWORD *)sub_186B270(0x38u);
  v32[1] = 34960;
  v33 = v32;
  v32[2] = 0;
  v32[4] = a1;
  v32[5] = 0;
  *v32 = &off_1C52468;
  v34 = *(_QWORD *)a1;
  v33[6] = 0;
  v33[3] = v34;
  sub_644270(v86, v33);
  v35 = sub_186B270(0x1A8u);
  sub_5C8F60(v35, (unsigned __int64 *)a1, 34950);
  sub_644270(v86, v35);
  if ( (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "datalog.subsumption", *(_QWORD *)(a1 + 32) + 8LL, 1) )
  {
    v36 = (_QWORD *)sub_186B270(0x88u);
    v36[1] = 34940;
    v37 = v36;
    v36[2] = 0;
    v36[4] = a1;
    v36[5] = a1 + 656;
    *v36 = &off_1C528C0;
    v38 = *(_QWORD *)a1;
    v37[6] = 0;
    v37[3] = v38;
    v39 = (_OWORD *)sub_186B270(0x40u);
    v37[7] = v39;
    *((_DWORD *)v37 + 18) = 0;
    v37[8] = 8;
    *v39 = 0;
    v39[1] = 0;
    v39[2] = 0;
    v39[3] = 0;
    v40 = (_OWORD *)sub_186B270(0x80u);
    v37[10] = v40;
    v37[11] = 8;
    *((_DWORD *)v37 + 24) = 0;
    *v40 = 0;
    v40[1] = 0;
    v40[2] = 0;
    v40[3] = 0;
    v40[4] = 0;
    v40[5] = 0;
    v40[6] = 0;
    v40[7] = 0;
    v41 = (_OWORD *)sub_186B270(0x80u);
    v37[13] = v41;
    v37[14] = 8;
    *((_DWORD *)v37 + 30) = 0;
    *((_BYTE *)v37 + 129) = 1;
    *v41 = 0;
    v41[1] = 0;
    v41[2] = 0;
    v41[3] = 0;
    v41[4] = 0;
    v41[5] = 0;
    v41[6] = 0;
    v41[7] = 0;
    sub_644270(v86, v37);
    v42 = sub_186B270(0x688u);
    sub_5D9D40(v42, a1, 34930, v43, v44, v45);
    sub_644270(v86, v42);
    v46 = (_QWORD *)sub_186B270(0x88u);
    v46[1] = 34920;
    v47 = v46;
    v46[2] = 0;
    v46[4] = a1;
    v46[5] = a1 + 656;
    *v46 = &off_1C528C0;
    v48 = *(_QWORD *)a1;
    v47[6] = 0;
    v47[3] = v48;
    v49 = (_OWORD *)sub_186B270(0x40u);
    v47[7] = v49;
    v47[8] = 8;
    *((_DWORD *)v47 + 18) = 0;
    *v49 = 0;
    v49[1] = 0;
    v49[2] = 0;
    v49[3] = 0;
    v50 = (_OWORD *)sub_186B270(0x80u);
    v47[10] = v50;
    v47[11] = 8;
    *((_DWORD *)v47 + 24) = 0;
    *v50 = 0;
    v50[1] = 0;
    v50[2] = 0;
    v50[3] = 0;
    v50[4] = 0;
    v50[5] = 0;
    v50[6] = 0;
    v50[7] = 0;
    v51 = (_OWORD *)sub_186B270(0x80u);
    v47[13] = v51;
    v47[14] = 8;
    *((_DWORD *)v47 + 30) = 0;
    *((_BYTE *)v47 + 129) = 1;
    *v51 = 0;
    v51[1] = 0;
    v51[2] = 0;
    v51[3] = 0;
    v51[4] = 0;
    v51[5] = 0;
    v51[6] = 0;
    v51[7] = 0;
    sub_644270(v86, v47);
    v52 = sub_186B270(0x688u);
    sub_5D9D40(v52, a1, 34910, v53, v54, v55);
    sub_644270(v86, v52);
    v56 = (_QWORD *)sub_186B270(0x88u);
    v56[1] = 34900;
    v57 = v56;
    v56[2] = 0;
    v56[4] = a1;
    v56[5] = a1 + 656;
    *v56 = &off_1C528C0;
    v58 = *(_QWORD *)a1;
    v57[6] = 0;
    v57[3] = v58;
    v59 = (_OWORD *)sub_186B270(0x40u);
    v57[7] = v59;
    v57[8] = 8;
    *((_DWORD *)v57 + 18) = 0;
    *v59 = 0;
    v59[1] = 0;
    v59[2] = 0;
    v59[3] = 0;
    v60 = (_OWORD *)sub_186B270(0x80u);
    v57[10] = v60;
    v57[11] = 8;
    *((_DWORD *)v57 + 24) = 0;
    *v60 = 0;
    v60[1] = 0;
    v60[2] = 0;
    v60[3] = 0;
    v60[4] = 0;
    v60[5] = 0;
    v60[6] = 0;
    v60[7] = 0;
    v61 = (_OWORD *)sub_186B270(0x80u);
    v57[13] = v61;
    v57[14] = 8;
    *((_DWORD *)v57 + 30) = 0;
    *((_BYTE *)v57 + 129) = 1;
    *v61 = 0;
    v61[1] = 0;
    v61[2] = 0;
    v61[3] = 0;
    v61[4] = 0;
    v61[5] = 0;
    v61[6] = 0;
    v61[7] = 0;
    sub_644270(v86, v57);
    v62 = sub_186B270(0x688u);
    sub_5D9D40(v62, a1, 34890, v63, v64, v65);
    sub_644270(v86, v62);
    v66 = (_QWORD *)sub_186B270(0x88u);
    v66[1] = 34880;
    v67 = (__int64)v66;
    v66[2] = 0;
    v66[4] = a1;
    v66[5] = a1 + 656;
    *v66 = &off_1C528C0;
    v68 = *(_QWORD *)a1;
    *(_QWORD *)(v67 + 48) = 0;
    *(_QWORD *)(v67 + 24) = v68;
    v69 = (_OWORD *)sub_186B270(0x40u);
    *(_QWORD *)(v67 + 56) = v69;
    *(_QWORD *)(v67 + 64) = 8;
    *(_DWORD *)(v67 + 72) = 0;
    *v69 = 0;
    v69[1] = 0;
    v69[2] = 0;
    v69[3] = 0;
    v70 = (_OWORD *)sub_186B270(0x80u);
    *(_QWORD *)(v67 + 80) = v70;
    *(_QWORD *)(v67 + 88) = 8;
    *(_DWORD *)(v67 + 96) = 0;
    *v70 = 0;
    v70[1] = 0;
    v70[2] = 0;
    v70[3] = 0;
    v70[4] = 0;
    v70[5] = 0;
    v70[6] = 0;
    v70[7] = 0;
    v71 = (_OWORD *)sub_186B270(0x80u);
    *(_QWORD *)(v67 + 104) = v71;
    *(_QWORD *)(v67 + 112) = 8;
    *(_DWORD *)(v67 + 120) = 0;
    *(_BYTE *)(v67 + 129) = 1;
    *v71 = 0;
    v71[1] = 0;
    v71[2] = 0;
    v71[3] = 0;
    v71[4] = 0;
    v71[5] = 0;
    v71[6] = 0;
    v71[7] = 0;
  }
  else
  {
    v67 = sub_186B270(0x688u);
    sub_5D9D40(v67, a1, 34930, v82, v83, v84);
  }
  sub_644270(v86, v67);
  v72 = sub_186B270(0x20u);
  sub_6067F0(v72, a1, 35000, v73, v74, v75);
  sub_644270(v86, v72);
  v76 = sub_186B270(0xC40u);
  sub_5DC8A0(v76, a1, 36010);
  sub_644270(v86, v76);
  v77 = sub_186B270(0x78u);
  sub_61EB40(v77, a1, 36030);
  sub_644270(v86, v77);
  if ( !(unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "xform.quantify_arrays", *(_QWORD *)(a1 + 32) + 8LL, 0) )
  {
    v78 = sub_186B270(0x220u);
    sub_5E8330(v78, a1, 35999);
    sub_644270(v86, v78);
  }
  if ( (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "xform.magic", *(_QWORD *)(a1 + 32) + 8LL, 0) )
  {
    v79 = sub_186B270(0x28u);
    sub_6226A0(v79, a1, 36020);
    sub_644270(v86, v79);
  }
  v80 = sub_186B270(0x40u);
  sub_603CC0(v80, a1, 35010);
  sub_644270(v86, v80);
  sub_64C400(a1, v86);
  sub_6440F0(v86);
  *(_BYTE *)(a1 + 2986) = v85;
  return v85;
}

