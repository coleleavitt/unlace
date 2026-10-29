void __fastcall sub_8D9A90(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r15
  void *v9; // r13
  void *v10; // r13
  void *v11; // r13
  void *v12; // r13
  void *v13; // r13
  void *v14; // r13
  void *v15; // r13
  void *v16; // r13
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // r13
  unsigned int *v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r14
  int *v24; // r13
  int v25; // eax
  void *v26; // rdi
  int *v27; // r14
  int v28; // eax
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r13
  void *v32; // rdi
  int v33; // eax
  int *v34; // r13
  int v35; // eax
  void *v36; // r13
  void *v37; // r13
  void *v38; // r13
  char v39; // r13
  void *v40; // r13
  void *v41; // [rsp+8h] [rbp-250h]
  unsigned int v42; // [rsp+10h] [rbp-248h]
  __int64 v43; // [rsp+10h] [rbp-248h]
  void *v44; // [rsp+10h] [rbp-248h]
  void *v45; // [rsp+20h] [rbp-238h]
  void *v46; // [rsp+20h] [rbp-238h]
  __int64 v47; // [rsp+48h] [rbp-210h]
  void *v48; // [rsp+50h] [rbp-208h]
  int v49; // [rsp+60h] [rbp-1F8h] BYREF
  char v50; // [rsp+64h] [rbp-1F4h]
  __int64 v51; // [rsp+68h] [rbp-1F0h]
  int v52; // [rsp+70h] [rbp-1E8h] BYREF
  char v53; // [rsp+74h] [rbp-1E4h]
  __int64 v54; // [rsp+78h] [rbp-1E0h]
  int v55; // [rsp+80h] [rbp-1D8h] BYREF
  char v56; // [rsp+84h] [rbp-1D4h]
  __int64 v57; // [rsp+88h] [rbp-1D0h]
  int v58; // [rsp+90h] [rbp-1C8h] BYREF
  char v59; // [rsp+94h] [rbp-1C4h]
  __int64 v60; // [rsp+98h] [rbp-1C0h]
  int v61; // [rsp+A0h] [rbp-1B8h] BYREF
  char v62; // [rsp+A4h] [rbp-1B4h]
  __int64 v63; // [rsp+A8h] [rbp-1B0h]
  int v64; // [rsp+B0h] [rbp-1A8h] BYREF
  char v65; // [rsp+B4h] [rbp-1A4h]
  __int64 v66; // [rsp+B8h] [rbp-1A0h]
  int v67; // [rsp+C0h] [rbp-198h] BYREF
  char v68; // [rsp+C4h] [rbp-194h]
  __int64 v69; // [rsp+C8h] [rbp-190h]
  int v70; // [rsp+D0h] [rbp-188h] BYREF
  char v71; // [rsp+D4h] [rbp-184h]
  __int64 v72; // [rsp+D8h] [rbp-180h]
  int v73; // [rsp+E0h] [rbp-178h] BYREF
  char v74; // [rsp+E4h] [rbp-174h]
  __int64 v75; // [rsp+E8h] [rbp-170h]
  int v76; // [rsp+F0h] [rbp-168h] BYREF
  char v77; // [rsp+F4h] [rbp-164h]
  __int64 v78; // [rsp+F8h] [rbp-160h]
  int v79; // [rsp+100h] [rbp-158h] BYREF
  char v80; // [rsp+104h] [rbp-154h]
  __int64 v81; // [rsp+108h] [rbp-150h]
  int v82; // [rsp+110h] [rbp-148h] BYREF
  char v83; // [rsp+114h] [rbp-144h]
  __int64 v84; // [rsp+118h] [rbp-140h]
  int v85[8]; // [rsp+120h] [rbp-138h] BYREF
  char v86[32]; // [rsp+140h] [rbp-118h] BYREF
  char v87[32]; // [rsp+160h] [rbp-F8h] BYREF
  char v88[32]; // [rsp+180h] [rbp-D8h] BYREF
  int v89; // [rsp+1A0h] [rbp-B8h] BYREF
  char v90; // [rsp+1A4h] [rbp-B4h]
  __int64 v91; // [rsp+1A8h] [rbp-B0h]
  int v92; // [rsp+1B0h] [rbp-A8h] BYREF
  char v93; // [rsp+1B4h] [rbp-A4h]
  __int64 v94; // [rsp+1B8h] [rbp-A0h]
  _QWORD v95[2]; // [rsp+1C0h] [rbp-98h] BYREF
  _QWORD v96[2]; // [rsp+1D0h] [rbp-88h] BYREF
  int v97; // [rsp+1E0h] [rbp-78h]
  __int64 v98; // [rsp+1F0h] [rbp-68h] BYREF
  __int64 v99; // [rsp+1F8h] [rbp-60h]
  __int64 v100; // [rsp+200h] [rbp-58h] BYREF
  __int64 v101; // [rsp+208h] [rbp-50h]
  int v102; // [rsp+210h] [rbp-48h]

  v98 = 1;
  v99 = 0;
  v100 = 1;
  v101 = 0;
  sub_182CBA0(qword_1C7F2C0, &v100);
  LODWORD(v98) = *(_DWORD *)(a1 + 752);
  v2 = *(_QWORD *)(a1 + 760);
  *(_DWORD *)(a1 + 752) = 1;
  v3 = v99;
  v99 = v2;
  LOBYTE(v2) = *(_BYTE *)(a1 + 756);
  *(_QWORD *)(a1 + 760) = v3;
  LOBYTE(v3) = v2 & 0xFC;
  v4 = *(_BYTE *)(a1 + 772);
  BYTE4(v98) = v2 & 3;
  LODWORD(v2) = *(_DWORD *)(a1 + 768);
  *(_BYTE *)(a1 + 756) = v3;
  LODWORD(v100) = v2;
  v5 = *(_QWORD *)(a1 + 776);
  *(_QWORD *)(a1 + 776) = v101;
  v101 = v5;
  LOBYTE(v5) = BYTE4(v100);
  *(_DWORD *)(a1 + 768) = 1;
  *(_BYTE *)(a1 + 772) = v4 & 0xFC | v5 & 2;
  BYTE4(v100) = v4 & 1 | v4 & 2 | v5 & 0xFC;
  sub_25A130((char *)&v98);
  sub_8D97C0(a1 + 216, *(_DWORD *)(a1 + 588), *(_DWORD *)(a1 + 592));
  v6 = *(_QWORD *)(a1 + 256);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = 0;
      v47 = v7 << 6;
      while ( 1 )
      {
        v17 = v8 + v6;
        if ( *(_BYTE *)(v17 + 56) )
        {
          v95[0] = 0;
          v95[1] = 0;
          v96[0] = 1;
          v96[1] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v95, (int *)(v17 + 8));
          v18 = *(_DWORD *)(v17 + 40);
          v19 = *(_QWORD *)(a1 + 240);
          v97 = v18;
          v20 = (unsigned int *)(v8 + *(_QWORD *)(a1 + 256));
          v21 = *v20;
          v22 = v20[1];
          LODWORD(v98) = 0;
          BYTE4(v98) &= 0xFCu;
          v42 = v21;
          v23 = 40 * v22;
          BYTE4(v100) &= 0xFCu;
          v99 = 0;
          v24 = (int *)(40 * v22 + v19);
          LODWORD(v100) = 1;
          v101 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v98, v24);
          v25 = v24[8];
          v50 &= 0xFCu;
          v53 &= 0xFCu;
          v26 = qword_1C7F2C0;
          v102 = v25;
          v49 = 0;
          v51 = 0;
          v52 = 1;
          v54 = 0;
          if ( (v98 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v49, &v98);
          else
            v49 = v98;
          if ( (v100 & 0x100000000LL) != 0 )
          {
            sub_182C690(v26, &v52, &v100);
          }
          else
          {
            v53 &= ~1u;
            v52 = v100;
          }
          v41 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v98);
          sub_182CBA0(v41, &v100);
          v27 = (int *)(*(_QWORD *)(a1 + 240) + v23);
          BYTE4(v98) &= 0xFCu;
          BYTE4(v100) &= 0xFCu;
          LODWORD(v98) = 0;
          v99 = 0;
          LODWORD(v100) = 1;
          v101 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v98, v27);
          v28 = v27[8];
          v91 = 0;
          v90 &= 0xFCu;
          v102 = v28;
          v89 = v28;
          v93 &= 0xFCu;
          v92 = 1;
          v94 = 0;
          sub_182CBA0(qword_1C7F2C0, &v92);
          v93 &= ~1u;
          v29 = qword_1C7F2C0;
          v56 &= 0xFCu;
          v59 &= 0xFCu;
          v92 = 1;
          v55 = 0;
          v57 = 0;
          v58 = 1;
          v60 = 0;
          if ( (v90 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v55, &v89);
          else
            v55 = v89;
          if ( (v93 & 1) != 0 )
          {
            sub_182C690(v29, &v58, &v92);
          }
          else
          {
            v59 &= ~1u;
            v58 = v92;
          }
          v45 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v89);
          sub_182CBA0(v45, &v92);
          v46 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v98);
          sub_182CBA0(v46, &v100);
          v30 = *(_QWORD *)(a1 + 240);
          BYTE4(v98) &= 0xFCu;
          BYTE4(v100) &= 0xFCu;
          LODWORD(v98) = 0;
          v31 = 40LL * v42;
          v99 = 0;
          v43 = v31 + v30;
          LODWORD(v100) = 1;
          v101 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v98, (int *)(v31 + v30));
          v32 = qword_1C7F2C0;
          v61 = 0;
          v62 &= 0xFCu;
          v33 = *(_DWORD *)(v43 + 32);
          v65 &= 0xFCu;
          v63 = 0;
          v102 = v33;
          v64 = 1;
          v66 = 0;
          if ( (v98 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v61, &v98);
          else
            v61 = v98;
          if ( (v100 & 0x100000000LL) != 0 )
          {
            sub_182C690(v32, &v64, &v100);
          }
          else
          {
            v65 &= ~1u;
            v64 = v100;
          }
          v44 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v98);
          sub_182CBA0(v44, &v100);
          v34 = (int *)(*(_QWORD *)(a1 + 240) + v31);
          BYTE4(v98) &= 0xFCu;
          BYTE4(v100) &= 0xFCu;
          LODWORD(v98) = 0;
          v99 = 0;
          LODWORD(v100) = 1;
          v101 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v98, v34);
          v35 = v34[8];
          v91 = 0;
          v90 &= 0xFCu;
          v93 &= 0xFCu;
          v102 = v35;
          v92 = 1;
          v94 = 0;
          v89 = v35;
          sub_182CBA0(qword_1C7F2C0, &v92);
          v93 &= ~1u;
          v68 &= 0xFCu;
          v71 &= 0xFCu;
          v92 = 1;
          v67 = 0;
          v69 = 0;
          v70 = 1;
          v72 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v67, &v89);
          v36 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v89);
          sub_182CBA0(v36, &v92);
          v37 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v98);
          sub_182CBA0(v37, &v100);
          v74 &= 0xFCu;
          v77 &= 0xFCu;
          v73 = 0;
          v75 = 0;
          v76 = 1;
          v78 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v73, (int *)v95);
          v99 = 0;
          BYTE4(v98) &= 0xFCu;
          BYTE4(v100) &= 0xFCu;
          LODWORD(v100) = 1;
          v101 = 0;
          LODWORD(v98) = v97;
          sub_182CBA0(qword_1C7F2C0, &v100);
          BYTE4(v100) &= ~1u;
          v80 &= 0xFCu;
          v83 &= 0xFCu;
          LODWORD(v100) = 1;
          v79 = 0;
          v81 = 0;
          v82 = 1;
          v84 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v79, (int *)&v98);
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v98);
          sub_182CBA0(v38, &v100);
          sub_27B340((__int64)&v89, (__int64)&v61, &v73);
          if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v49, (__int64)&v89) )
          {
            sub_27B340((__int64)&v98, (__int64)&v67, &v79);
            v39 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v98, (__int64)&v55);
            sub_25A130((char *)&v98);
            v48 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v89);
            sub_182CBA0(v48, &v92);
            if ( v39 )
            {
              sub_3EBB80((__int64)v87, (__int64)&v55, (__int64)&v67);
              sub_3EBB80((__int64)v88, (__int64)v87, (__int64)&v79);
              v98 = 2;
              v99 = 0;
              v100 = 1;
              v101 = 0;
              sub_182CBA0(qword_1C7F2C0, &v100);
              BYTE4(v100) &= ~1u;
              LODWORD(v100) = 1;
              sub_3EBE30((__int64)&v89, (__int64)&v98, (__int64)v88);
              v40 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v98);
              sub_182CBA0(v40, &v100);
              sub_27B340((__int64)v86, (__int64)&v61, &v73);
              sub_3EBB80((__int64)&v98, (__int64)v86, (__int64)&v49);
              sub_27B620((__int64)v85, (__int64)&v98, (__int64)&v89);
              sub_25A130((char *)&v98);
              sub_25A130(v86);
              sub_25A130((char *)&v89);
              sub_25A130(v88);
              sub_25A130(v87);
              if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v85, a1 + 752) )
                sub_27B950((__int64)qword_1C7F2C0, a1 + 752, v85);
              sub_25A130((char *)v85);
            }
          }
          else
          {
            v9 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v89);
            sub_182CBA0(v9, &v92);
          }
          v10 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v79);
          sub_182CBA0(v10, &v82);
          v11 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v73);
          sub_182CBA0(v11, &v76);
          v12 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v67);
          sub_182CBA0(v12, &v70);
          v13 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v61);
          sub_182CBA0(v13, &v64);
          v14 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v55);
          sub_182CBA0(v14, &v58);
          v15 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v49);
          sub_182CBA0(v15, &v52);
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v95);
          sub_182CBA0(v16, v96);
        }
        v8 += 64;
        if ( v47 == v8 )
          break;
        v6 = *(_QWORD *)(a1 + 256);
      }
    }
  }
}

