void __fastcall sub_8CBFA0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rdx
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
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int *v19; // rax
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // r14
  void *v23; // rdi
  __int64 v24; // rdx
  void *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // rdx
  void *v28; // rdi
  __int64 v29; // rdx
  void *v30; // r13
  void *v31; // r13
  void *v32; // r13
  void *v33; // r13
  char v34; // r13
  void *v35; // r13
  void *v36; // [rsp+8h] [rbp-230h]
  void *v37; // [rsp+8h] [rbp-230h]
  void *v38; // [rsp+8h] [rbp-230h]
  __int64 v39; // [rsp+40h] [rbp-1F8h]
  void *v40; // [rsp+48h] [rbp-1F0h]
  _QWORD v41[2]; // [rsp+60h] [rbp-1D8h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-1C8h] BYREF
  int v43; // [rsp+80h] [rbp-1B8h] BYREF
  char v44; // [rsp+84h] [rbp-1B4h]
  __int64 v45; // [rsp+88h] [rbp-1B0h]
  int v46; // [rsp+90h] [rbp-1A8h] BYREF
  char v47; // [rsp+94h] [rbp-1A4h]
  __int64 v48; // [rsp+98h] [rbp-1A0h]
  int v49; // [rsp+A0h] [rbp-198h] BYREF
  char v50; // [rsp+A4h] [rbp-194h]
  __int64 v51; // [rsp+A8h] [rbp-190h]
  int v52; // [rsp+B0h] [rbp-188h] BYREF
  char v53; // [rsp+B4h] [rbp-184h]
  __int64 v54; // [rsp+B8h] [rbp-180h]
  int v55; // [rsp+C0h] [rbp-178h] BYREF
  char v56; // [rsp+C4h] [rbp-174h]
  __int64 v57; // [rsp+C8h] [rbp-170h]
  int v58; // [rsp+D0h] [rbp-168h] BYREF
  char v59; // [rsp+D4h] [rbp-164h]
  __int64 v60; // [rsp+D8h] [rbp-160h]
  int v61; // [rsp+E0h] [rbp-158h] BYREF
  char v62; // [rsp+E4h] [rbp-154h]
  __int64 v63; // [rsp+E8h] [rbp-150h]
  int v64; // [rsp+F0h] [rbp-148h] BYREF
  char v65; // [rsp+F4h] [rbp-144h]
  __int64 v66; // [rsp+F8h] [rbp-140h]
  int v67; // [rsp+100h] [rbp-138h] BYREF
  char v68; // [rsp+104h] [rbp-134h]
  __int64 v69; // [rsp+108h] [rbp-130h]
  int v70; // [rsp+110h] [rbp-128h] BYREF
  char v71; // [rsp+114h] [rbp-124h]
  __int64 v72; // [rsp+118h] [rbp-120h]
  int v73; // [rsp+120h] [rbp-118h] BYREF
  char v74; // [rsp+124h] [rbp-114h]
  __int64 v75; // [rsp+128h] [rbp-110h]
  int v76; // [rsp+130h] [rbp-108h] BYREF
  char v77; // [rsp+134h] [rbp-104h]
  __int64 v78; // [rsp+138h] [rbp-100h]
  int v79[8]; // [rsp+140h] [rbp-F8h] BYREF
  char v80[32]; // [rsp+160h] [rbp-D8h] BYREF
  char v81[32]; // [rsp+180h] [rbp-B8h] BYREF
  char v82[32]; // [rsp+1A0h] [rbp-98h] BYREF
  char v83[16]; // [rsp+1C0h] [rbp-78h] BYREF
  _BYTE v84[16]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v85; // [rsp+1E0h] [rbp-58h] BYREF
  __int64 v86; // [rsp+1E8h] [rbp-50h]
  __int64 v87; // [rsp+1F0h] [rbp-48h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp-40h]

  v85 = 1;
  v86 = 0;
  v87 = 1;
  v88 = 0;
  sub_182CBA0(qword_1C7F2C0, &v87);
  LODWORD(v85) = *(_DWORD *)(a1 + 744);
  v2 = *(_QWORD *)(a1 + 752);
  *(_DWORD *)(a1 + 744) = 1;
  v3 = v86;
  v86 = v2;
  LOBYTE(v2) = *(_BYTE *)(a1 + 748);
  *(_QWORD *)(a1 + 752) = v3;
  LOBYTE(v3) = v2 & 0xFC;
  v4 = *(_BYTE *)(a1 + 764);
  BYTE4(v85) = v2 & 3;
  LODWORD(v2) = *(_DWORD *)(a1 + 760);
  *(_BYTE *)(a1 + 748) = v3;
  LODWORD(v87) = v2;
  v5 = *(_QWORD *)(a1 + 768);
  *(_QWORD *)(a1 + 768) = v88;
  v88 = v5;
  LOBYTE(v5) = BYTE4(v87);
  *(_DWORD *)(a1 + 760) = 1;
  *(_BYTE *)(a1 + 764) = v4 & 0xFC | v5 & 2;
  BYTE4(v87) = v4 & 1 | v4 & 2 | v5 & 0xFC;
  sub_25A130((char *)&v85);
  sub_8CBD20(a1 + 208, *(_DWORD *)(a1 + 580), *(_DWORD *)(a1 + 584));
  v6 = *(_QWORD *)(a1 + 248);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = 0;
      v39 = 56 * v7;
      while ( 1 )
      {
        v17 = v8 + v6;
        if ( *(_BYTE *)(v17 + 48) )
        {
          v41[0] = 0;
          v41[1] = 0;
          v42[0] = 1;
          v42[1] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v41, (int *)(v17 + 8));
          v18 = *(_QWORD *)(a1 + 232);
          v19 = (unsigned int *)(v8 + *(_QWORD *)(a1 + 248));
          v20 = v19[1];
          v21 = *v19;
          LODWORD(v85) = 0;
          BYTE4(v85) &= 0xFCu;
          v22 = 32 * v20;
          BYTE4(v87) &= 0xFCu;
          v86 = 0;
          LODWORD(v87) = 1;
          v88 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v85, (int *)(v22 + v18));
          v44 &= 0xFCu;
          v23 = qword_1C7F2C0;
          v47 &= 0xFCu;
          v43 = 0;
          v45 = 0;
          v46 = 1;
          v48 = 0;
          if ( (v85 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v43, &v85);
          else
            v43 = v85;
          if ( (v87 & 0x100000000LL) != 0 )
          {
            sub_182C690(v23, &v46, &v87);
          }
          else
          {
            v47 &= ~1u;
            v46 = v87;
          }
          v36 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v85);
          sub_182CBA0(v36, &v87);
          v24 = *(_QWORD *)(a1 + 232);
          BYTE4(v85) &= 0xFCu;
          BYTE4(v87) &= 0xFCu;
          LODWORD(v85) = 0;
          v86 = 0;
          LODWORD(v87) = 1;
          v88 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v85, (int *)(v22 + v24));
          v25 = qword_1C7F2C0;
          v49 = 0;
          v50 &= 0xFCu;
          v53 &= 0xFCu;
          v51 = 0;
          v52 = 1;
          v54 = 0;
          if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v49, &qword_1C7F2A0);
          else
            v49 = qword_1C7F2A0;
          if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
          {
            sub_182C690(v25, &v52, &qword_1C7F2B0);
          }
          else
          {
            v53 &= ~1u;
            v52 = qword_1C7F2B0;
          }
          v26 = 32 * v21;
          v37 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v85);
          sub_182CBA0(v37, &v87);
          v27 = *(_QWORD *)(a1 + 232);
          BYTE4(v85) &= 0xFCu;
          BYTE4(v87) &= 0xFCu;
          LODWORD(v85) = 0;
          v86 = 0;
          LODWORD(v87) = 1;
          v88 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v85, (int *)(v26 + v27));
          v56 &= 0xFCu;
          v28 = qword_1C7F2C0;
          v59 &= 0xFCu;
          v55 = 0;
          v57 = 0;
          v58 = 1;
          v60 = 0;
          if ( (v85 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v55, &v85);
          else
            v55 = v85;
          if ( (v87 & 0x100000000LL) != 0 )
          {
            sub_182C690(v28, &v58, &v87);
          }
          else
          {
            v59 &= ~1u;
            v58 = v87;
          }
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v85);
          sub_182CBA0(v38, &v87);
          v29 = *(_QWORD *)(a1 + 232);
          BYTE4(v85) &= 0xFCu;
          BYTE4(v87) &= 0xFCu;
          LODWORD(v85) = 0;
          v86 = 0;
          LODWORD(v87) = 1;
          v88 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v85, (int *)(v26 + v29));
          v62 &= 0xFCu;
          v30 = qword_1C7F2C0;
          v65 &= 0xFCu;
          v61 = 0;
          v63 = 0;
          v64 = 1;
          v66 = 0;
          if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v61, &qword_1C7F2A0);
          else
            v61 = qword_1C7F2A0;
          if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
          {
            sub_182C690(v30, &v64, &qword_1C7F2B0);
          }
          else
          {
            v65 &= ~1u;
            v64 = qword_1C7F2B0;
          }
          v31 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v85);
          sub_182CBA0(v31, &v87);
          v68 &= 0xFCu;
          v32 = qword_1C7F2C0;
          v71 &= 0xFCu;
          v67 = 0;
          v69 = 0;
          v70 = 1;
          v72 = 0;
          if ( (v41[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v67, v41);
          else
            v67 = v41[0];
          if ( (v42[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v32, &v70, v42);
          }
          else
          {
            v71 &= ~1u;
            v70 = v42[0];
          }
          v74 &= 0xFCu;
          v33 = qword_1C7F2C0;
          v77 &= 0xFCu;
          v73 = 0;
          v75 = 0;
          v76 = 1;
          v78 = 0;
          if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v73, &qword_1C7F2A0);
          else
            v73 = qword_1C7F2A0;
          if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
          {
            sub_182C690(v33, &v76, &qword_1C7F2B0);
          }
          else
          {
            v77 &= ~1u;
            v76 = qword_1C7F2B0;
          }
          sub_27B340((__int64)v83, (__int64)&v55, &v67);
          if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v43, (__int64)v83) )
          {
            sub_27B340((__int64)&v85, (__int64)&v61, &v73);
            v34 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v85, (__int64)&v49);
            sub_25A130((char *)&v85);
            v40 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v83);
            sub_182CBA0(v40, v84);
            if ( v34 )
            {
              sub_3EBB80((__int64)v81, (__int64)&v49, (__int64)&v61);
              sub_3EBB80((__int64)v82, (__int64)v81, (__int64)&v73);
              v85 = 2;
              v86 = 0;
              v87 = 1;
              v88 = 0;
              sub_182CBA0(qword_1C7F2C0, &v87);
              BYTE4(v87) &= ~1u;
              LODWORD(v87) = 1;
              sub_3EBE30((__int64)v83, (__int64)&v85, (__int64)v82);
              v35 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v85);
              sub_182CBA0(v35, &v87);
              sub_27B340((__int64)v80, (__int64)&v55, &v67);
              sub_3EBB80((__int64)&v85, (__int64)v80, (__int64)&v43);
              sub_27B620((__int64)v79, (__int64)&v85, (__int64)v83);
              sub_25A130((char *)&v85);
              sub_25A130(v80);
              sub_25A130(v83);
              sub_25A130(v82);
              sub_25A130(v81);
              if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v79, a1 + 744) )
                sub_27B950((__int64)qword_1C7F2C0, a1 + 744, v79);
              sub_25A130((char *)v79);
            }
          }
          else
          {
            v9 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v83);
            sub_182CBA0(v9, v84);
          }
          v10 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v73);
          sub_182CBA0(v10, &v76);
          v11 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v67);
          sub_182CBA0(v11, &v70);
          v12 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v61);
          sub_182CBA0(v12, &v64);
          v13 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v55);
          sub_182CBA0(v13, &v58);
          v14 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v49);
          sub_182CBA0(v14, &v52);
          v15 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v43);
          sub_182CBA0(v15, &v46);
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v41);
          sub_182CBA0(v16, v42);
        }
        v8 += 56;
        if ( v39 == v8 )
          break;
        v6 = *(_QWORD *)(a1 + 248);
      }
    }
  }
}

