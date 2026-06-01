__int64 __fastcall sub_8F0CA0(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        _WORD *a3,
        __int64 a4,
        _WORD *a5,
        __int64 a6,
        _WORD *a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10,
        int a11,
        int a12)
{
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  int *v15; // rdx
  int v16; // esi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // esi
  int *v21; // rdx
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  int *v26; // r8
  int v27; // r10d
  int v28; // eax
  __int64 v29; // r11
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // edi
  unsigned __int64 v34; // rdx
  int v35; // ecx
  unsigned __int64 v36; // rdx
  unsigned int v37; // r10d
  _QWORD *v38; // rax
  int v39; // ebx
  char v40; // cl
  unsigned int v41; // edi
  unsigned __int64 v42; // rax
  int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned int v45; // edi
  __int64 v46; // rcx
  _QWORD *v47; // rax
  char v48; // cl
  int v49; // edi
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r10
  int v52; // esi
  unsigned int v53; // edi
  unsigned int v54; // r11d
  unsigned int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // r12
  __int64 v58; // rbx
  unsigned int v59; // r15d
  char *v60; // rdi
  __int64 v61; // rbp
  int v62; // esi
  unsigned __int64 v63; // r13
  char *v64; // rdi
  __int64 v65; // rbp
  int v66; // esi
  unsigned __int64 v67; // r13
  char *v68; // rbp
  __int64 v69; // rdi
  unsigned int v70; // esi
  unsigned __int64 v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // r14
  unsigned int v74; // ebp
  unsigned __int64 v75; // rdx
  unsigned int v76; // ecx
  __int64 v77; // rcx
  unsigned int v78; // r15d
  unsigned __int64 v79; // rdx
  unsigned int v80; // ecx
  char v81; // si
  unsigned __int64 v82; // rdx
  unsigned int v83; // edi
  _QWORD *v84; // rax
  int v85; // esi
  char v86; // cl
  unsigned int v87; // esi
  unsigned __int64 v88; // r10
  char v89; // cl
  unsigned int v90; // edi
  unsigned __int64 v91; // r10
  _QWORD *v92; // rax
  int v93; // esi
  char v94; // cl
  unsigned int v95; // esi
  unsigned __int64 v96; // rdx
  unsigned int v97; // ecx
  unsigned __int64 v98; // rdx
  _QWORD *v99; // rax
  int v100; // esi
  char *v101; // rax
  __int64 result; // rax
  char v103; // cl
  char v104; // cl
  unsigned int v105; // r15d
  unsigned __int64 v106; // r13
  unsigned int v107; // ecx
  unsigned __int64 v108; // rdx
  __int64 v109; // [rsp+10h] [rbp-B0h]
  __int64 v110; // [rsp+18h] [rbp-A8h]
  __int64 v111; // [rsp+20h] [rbp-A0h]
  _WORD *v115; // [rsp+50h] [rbp-70h]
  _WORD *v116; // [rsp+58h] [rbp-68h]
  _WORD *v117; // [rsp+60h] [rbp-60h]
  char *v118; // [rsp+68h] [rbp-58h]
  char *v119; // [rsp+70h] [rbp-50h]
  char *v120; // [rsp+78h] [rbp-48h]
  unsigned __int8 v121; // [rsp+83h] [rbp-3Dh]
  int v122; // [rsp+84h] [rbp-3Ch]
  int v123; // [rsp+88h] [rbp-38h]
  int v124; // [rsp+8Ch] [rbp-34h]

  if ( a12 )
    return sub_8F0150(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v12 = (unsigned __int64)a1 + a2 - 8;
  if ( a2 <= 8 )
    return -70;
  v13 = *(unsigned __int8 *)(a4 + a10 - 1);
  v117 = a3 + 2;
  v14 = 8;
  v124 = (unsigned __int16)*a3;
  if ( *a3 )
    v14 = 4LL * (1 << (*a3 - 1)) + 4;
  v120 = (char *)a3 + v14;
  v15 = (int *)((char *)&a3[4 * (unsigned __int8)v13] + v14);
  v123 = (unsigned __int16)*a5;
  v16 = v15[1];
  HIWORD(v17) = (unsigned int)(v16 + 0x8000) >> 16;
  LOWORD(v17) = 0;
  v18 = (unsigned __int16)v117[*v15 + ((__int64)(unsigned int)(v17 - v16) >> SBYTE2(v17))];
  v116 = a5 + 2;
  v19 = 8;
  v111 = v18;
  v20 = *(unsigned __int8 *)(a6 + a10 - 1);
  if ( *a5 )
    v19 = 4LL * (1 << (*a5 - 1)) + 4;
  v119 = (char *)a5 + v19;
  v21 = (int *)((char *)&a5[4 * *(unsigned __int8 *)(a6 + a10 - 1)] + v19);
  v22 = v21[1];
  v122 = (unsigned __int16)*a7;
  HIWORD(v23) = (unsigned int)(v22 + 0x8000) >> 16;
  LOWORD(v23) = 0;
  v109 = (unsigned __int16)v116[*v21 + ((__int64)(unsigned int)(v23 - v22) >> SBYTE2(v23))];
  v24 = *(unsigned __int8 *)(a8 + a10 - 1);
  v115 = a7 + 2;
  v25 = 8;
  if ( *a7 )
    v25 = 4LL * (1 << (*a7 - 1)) + 4;
  v118 = (char *)a7 + v25;
  v26 = (int *)((char *)&a7[4 * (unsigned __int8)v24] + v25);
  v27 = v26[1];
  HIWORD(v28) = (unsigned int)(v27 + 0x8000) >> 16;
  LOWORD(v28) = 0;
  v110 = (unsigned __int16)v115[*v26 + ((__int64)(unsigned int)(v28 - v27) >> SBYTE2(v28))];
  v29 = byte_23B3820[v24];
  v30 = byte_23B3820[v24];
  v31 = a9 + 8 * a10 - 8;
  v32 = byte_23B37E0[v13];
  v33 = v30 + byte_23B37E0[v13];
  v34 = (*(unsigned __int16 *)(v31 + 6) & (unsigned __int64)dword_23B3860[v32]) << v30;
  v35 = *(_DWORD *)v31;
  v36 = dword_23B3860[v29] & (unsigned __int64)*(unsigned __int16 *)(v31 + 4) | v34;
  if ( a11 )
  {
    if ( v20 <= 0x37 )
    {
      v36 |= (unsigned __int64)(dword_23B3860[*(unsigned __int8 *)(a6 + a10 - 1)] & v35) << v33;
      v38 = a1;
    }
    else
    {
      v37 = v20 - 56;
      v38 = a1;
      v20 = 56;
      if ( v37 )
      {
        v39 = v35;
        v40 = v33;
        v41 = v37 + v33;
        v42 = (unsigned __int64)(dword_23B3860[v37] & v39) << v40;
        v43 = 8 * (v41 >> 3);
        v44 = v42 | v36;
        v38 = (unsigned __int64 *)((char *)a1 + (v41 >> 3));
        *a1 = v44;
        if ( v12 < (unsigned __int64)v38 )
          v38 = (_QWORD *)v12;
        v33 = v41 & 7;
        v36 = v44 >> v43;
      }
    }
    v45 = v20 + v33;
  }
  else
  {
    v103 = v33;
    v45 = v20 + v33;
    v36 |= (unsigned __int64)(dword_23B3860[*(unsigned __int8 *)(a6 + a10 - 1)] & *(_DWORD *)v31) << v103;
    v38 = a1;
  }
  *v38 = v36;
  v46 = v45 >> 3;
  v47 = (_QWORD *)((char *)v38 + v46);
  v48 = 8 * v46;
  if ( v12 <= (unsigned __int64)v47 )
    v47 = (_QWORD *)v12;
  v49 = v45 & 7;
  v50 = v36 >> v48;
  v51 = a10 - 2;
  if ( a10 >= 2 )
  {
    v52 = v49;
    do
    {
      v56 = *(unsigned __int8 *)(a6 + v51);
      v121 = *(_BYTE *)(a8 + v51);
      v57 = byte_23B3820[v121];
      v58 = *(unsigned __int8 *)(a4 + v51);
      v54 = (unsigned __int8)v56;
      v59 = byte_23B37E0[(unsigned __int8)v58];
      v60 = &v119[8 * v56];
      LOBYTE(v56) = v52;
      v61 = (v109 + *((unsigned int *)v60 + 1)) >> 16;
      v62 = v61 + v52;
      v63 = (unsigned __int64)((unsigned int)v109 & dword_23B3860[v61]) << v56;
      LOBYTE(v56) = v62;
      v109 = (unsigned __int16)v116[*(int *)v60 + (v109 >> ((unsigned int)(v109 + *((_DWORD *)v60 + 1)) >> 16))];
      v64 = &v120[8 * v58];
      v65 = (v111 + *((unsigned int *)v64 + 1)) >> 16;
      v66 = v65 + v62;
      v67 = ((unsigned __int64)((unsigned int)v111 & dword_23B3860[v65]) << v56) | v63;
      LOBYTE(v56) = v66;
      v111 = (unsigned __int16)v117[*(int *)v64 + (v111 >> ((unsigned int)(v111 + *((_DWORD *)v64 + 1)) >> 16))];
      v68 = &v118[8 * v121];
      v69 = (v110 + *((unsigned int *)v68 + 1)) >> 16;
      v70 = v69 + v66;
      v71 = (unsigned __int64)((unsigned int)v110 & dword_23B3860[v69]) << v56;
      v72 = *(int *)v68;
      v73 = v110 >> ((unsigned int)(v110 + *((_DWORD *)v68 + 1)) >> 16);
      v74 = v54 + v57 + v59;
      v75 = v71 | v67 | v50;
      v110 = (unsigned __int16)v115[v72 + v73];
      if ( v74 > 0x1E )
      {
        *v47 = v75;
        v76 = v70 >> 3;
        v47 = (_QWORD *)((char *)v47 + (v70 >> 3));
        if ( v12 <= (unsigned __int64)v47 )
          v47 = (_QWORD *)v12;
        v70 &= 7u;
        v75 >>= 8 * (unsigned __int8)v76;
      }
      v77 = v59;
      v78 = v57 + v70 + v59;
      v79 = ((*(unsigned __int16 *)(a9 + 8 * v51 + 6) & (unsigned __int64)dword_23B3860[v77]) << ((unsigned __int8)v57
                                                                                                + (unsigned __int8)v70))
          | ((*(unsigned __int16 *)(a9 + 8 * v51 + 4) & (unsigned __int64)dword_23B3860[v57]) << v70)
          | v75;
      if ( v74 > 0x38 )
      {
        *v47 = v79;
        v80 = v78 >> 3;
        v47 = (_QWORD *)((char *)v47 + (v78 >> 3));
        if ( v12 <= (unsigned __int64)v47 )
          v47 = (_QWORD *)v12;
        v78 &= 7u;
        v79 >>= 8 * (unsigned __int8)v80;
      }
      if ( a11 && v54 > 0x37 )
      {
        v53 = v54 - 56;
        v54 = 56;
        if ( v53 )
        {
          v104 = v78;
          v105 = v53 + v78;
          v106 = (unsigned __int64)(dword_23B3860[v53] & *(_DWORD *)(a9 + 8 * v51)) << v104;
          v107 = v105 >> 3;
          v108 = v106 | v79;
          *v47 = v108;
          v47 = (_QWORD *)((char *)v47 + (v105 >> 3));
          if ( v12 <= (unsigned __int64)v47 )
            v47 = (_QWORD *)v12;
          v78 = v105 & 7;
          v79 = v108 >> (8 * (unsigned __int8)v107);
        }
      }
      else
      {
        v79 |= (unsigned __int64)(dword_23B3860[v54] & *(_DWORD *)(a9 + 8 * v51)) << v78;
      }
      *v47 = v79;
      v55 = (v54 + v78) >> 3;
      v47 = (_QWORD *)((char *)v47 + v55);
      if ( v12 <= (unsigned __int64)v47 )
        v47 = (_QWORD *)v12;
      v52 = ((_BYTE)v54 + (_BYTE)v78) & 7;
      --v51;
      v50 = v79 >> (8 * (unsigned __int8)v55);
    }
    while ( a10 > v51 );
    v49 = ((_BYTE)v54 + (_BYTE)v78) & 7;
  }
  v81 = v49 + v124;
  v82 = ((unsigned __int64)((unsigned int)v111 & dword_23B3860[v124]) << v49) | v50;
  v83 = (unsigned int)(v49 + v124) >> 3;
  *v47 = v82;
  v84 = (_QWORD *)((char *)v47 + v83);
  if ( v12 <= (unsigned __int64)v84 )
    v84 = (_QWORD *)v12;
  v85 = v81 & 7;
  v86 = v85;
  v87 = v123 + v85;
  v88 = (unsigned __int64)((unsigned int)v109 & dword_23B3860[v123]) << v86;
  v89 = 8 * v83;
  v90 = v87 >> 3;
  v91 = (v82 >> v89) | v88;
  *v84 = v91;
  v92 = (_QWORD *)((char *)v84 + (v87 >> 3));
  if ( v12 <= (unsigned __int64)v92 )
    v92 = (_QWORD *)v12;
  v93 = v87 & 7;
  v94 = v93;
  v95 = v122 + v93;
  v96 = (unsigned __int64)((unsigned int)v110 & dword_23B3860[v122]) << v94;
  v97 = v95 >> 3;
  v98 = (v91 >> (8 * (unsigned __int8)v90)) | v96;
  *v92 = v98;
  v99 = (_QWORD *)((char *)v92 + (v95 >> 3));
  if ( v12 <= (unsigned __int64)v99 )
    v99 = (_QWORD *)v12;
  v100 = v95 & 7;
  *v99 = (v98 >> (8 * (unsigned __int8)v97)) | (1LL << v100);
  v101 = (char *)v99 + ((unsigned int)(v100 + 1) >> 3);
  if ( v12 <= (unsigned __int64)v101 )
    return -70;
  result = ((((_BYTE)v100 + 1) & 7) != 0) + v101 - (char *)a1;
  if ( !result )
    return -70;
  return result;
}

