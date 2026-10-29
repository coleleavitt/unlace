__int64 __fastcall sub_8F0150(
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
        int a11)
{
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  int *v14; // rsi
  int v15; // edi
  int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // r11
  __int64 v19; // rcx
  int *v20; // rsi
  int v21; // edi
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rsi
  int *v25; // rdi
  int v26; // r8d
  int v27; // ecx
  __int64 v28; // rcx
  unsigned int v29; // r9d
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // edi
  unsigned int v35; // r8d
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdx
  unsigned int v38; // edi
  unsigned int v39; // r8d
  _QWORD *v40; // rdx
  int v41; // edi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r9
  __int64 v44; // r13
  int v45; // esi
  unsigned int v46; // r8d
  unsigned int v47; // ebx
  unsigned int v48; // edi
  __int64 v49; // r8
  __int64 v50; // rdi
  __int64 v51; // r12
  char *v52; // rdi
  unsigned int v53; // r14d
  __int64 v54; // r11
  unsigned __int64 v55; // r15
  int v56; // esi
  char *v57; // rdi
  __int64 v58; // r8
  unsigned __int64 v59; // r11
  int v60; // esi
  unsigned __int64 v61; // r15
  char *v62; // r8
  __int64 v63; // rdi
  unsigned __int64 v64; // r11
  unsigned int v65; // esi
  unsigned __int64 v66; // r11
  unsigned int v67; // r15d
  unsigned __int64 v68; // rax
  unsigned int v69; // edi
  int v70; // r8d
  unsigned __int64 v71; // rax
  __int64 v72; // rsi
  unsigned int v73; // r14d
  unsigned __int64 v74; // rax
  unsigned int v75; // esi
  unsigned int v76; // edi
  unsigned __int64 v77; // r8
  unsigned int v78; // edi
  unsigned __int64 v79; // rax
  unsigned int v80; // r9d
  unsigned __int64 *v81; // rdx
  int v82; // edi
  unsigned __int64 *v83; // rsi
  char v84; // dl
  unsigned __int64 v85; // r8
  unsigned int v86; // r9d
  _QWORD *v87; // rax
  char v88; // di
  unsigned int v89; // edx
  unsigned __int64 v90; // rcx
  unsigned int v91; // esi
  _QWORD *v92; // rax
  int v93; // edx
  char *v94; // rax
  __int64 result; // rax
  unsigned int v96; // esi
  unsigned __int64 v97; // rdx
  unsigned int v98; // edi
  unsigned __int64 v99; // r8
  unsigned int v100; // eax
  unsigned __int64 v101; // rdi
  unsigned int v102; // r14d
  unsigned __int64 v103; // rax
  unsigned int v104; // esi
  unsigned __int64 v105; // r8
  __int64 v106; // [rsp+0h] [rbp-90h]
  _WORD *v108; // [rsp+10h] [rbp-80h]
  _WORD *v109; // [rsp+18h] [rbp-78h]
  _WORD *v110; // [rsp+20h] [rbp-70h]
  char *v112; // [rsp+30h] [rbp-60h]
  char *v113; // [rsp+38h] [rbp-58h]
  char *v114; // [rsp+40h] [rbp-50h]
  unsigned int v116; // [rsp+54h] [rbp-3Ch]
  unsigned int v117; // [rsp+58h] [rbp-38h]
  unsigned int v118; // [rsp+5Ch] [rbp-34h]

  v11 = (unsigned __int64)a1 + a2 - 8;
  if ( a2 <= 8 )
    return -70;
  v12 = *(unsigned __int8 *)(a4 + a10 - 1);
  v118 = (unsigned __int16)*a3;
  v110 = a3 + 2;
  v13 = 8;
  if ( *a3 )
    v13 = 4LL * (1 << (*a3 - 1)) + 4;
  v14 = (int *)((char *)&a3[4 * (unsigned __int8)v12] + v13);
  v114 = (char *)a3 + v13;
  v15 = v14[1];
  HIWORD(v16) = (unsigned int)(v15 + 0x8000) >> 16;
  LOWORD(v16) = 0;
  v17 = (unsigned __int16)v110[*v14 + ((__int64)(unsigned int)(v16 - v15) >> SBYTE2(v16))];
  v18 = *(unsigned __int8 *)(a6 + a10 - 1);
  v109 = a5 + 2;
  v19 = 8;
  v117 = (unsigned __int16)*a5;
  if ( *a5 )
    v19 = 4LL * (1 << (*a5 - 1)) + 4;
  v20 = (int *)((char *)&a5[4 * v18] + v19);
  v113 = (char *)a5 + v19;
  v21 = v20[1];
  HIWORD(v22) = (unsigned int)(v21 + 0x8000) >> 16;
  LOWORD(v22) = 0;
  v23 = 8;
  v106 = (unsigned __int16)v109[*v20 + ((__int64)(unsigned int)(v22 - v21) >> SBYTE2(v22))];
  v24 = *(unsigned __int8 *)(a8 + a10 - 1);
  v108 = a7 + 2;
  v116 = (unsigned __int16)*a7;
  if ( *a7 )
    v23 = 4LL * (1 << (*a7 - 1)) + 4;
  v25 = (int *)((char *)&a7[4 * (unsigned __int8)v24] + v23);
  v112 = (char *)a7 + v23;
  v26 = v25[1];
  HIWORD(v27) = (unsigned int)(v26 + 0x8000) >> 16;
  LOWORD(v27) = 0;
  v28 = (unsigned __int16)v108[*v25 + ((__int64)(unsigned int)(v27 - v26) >> SBYTE2(v27))];
  v29 = byte_23B3820[v24];
  v30 = a9 + 8 * a10 - 8;
  v31 = byte_23B37E0[v12];
  v32 = *(unsigned __int16 *)(v30 + 6);
  v33 = dword_23B3860[v31];
  LODWORD(v25) = v31;
  LODWORD(v31) = *(unsigned __int16 *)(v30 + 4);
  v34 = v29 + (_DWORD)v25;
  v35 = *(_DWORD *)v30;
  v36 = ((v32 & v33) << v29) | (unsigned int)v31 & dword_23B3860[v29];
  if ( a11 )
  {
    if ( (unsigned int)v18 > 0x37 )
    {
      v96 = v18 - 56;
      v37 = a1;
      LODWORD(v18) = 56;
      if ( v96 )
      {
        v97 = (unsigned __int64)(dword_23B3860[v96] & v35) << v34;
        v98 = v96 + v34;
        v99 = v36 | v97;
        *a1 = v36 | v97;
        v100 = v98 >> 3;
        v37 = (unsigned __int64 *)((char *)a1 + (v98 >> 3));
        if ( v11 < (unsigned __int64)v37 )
          v37 = (_QWORD *)v11;
        v34 = v98 & 7;
        v36 = v99 >> (8 * (unsigned __int8)v100);
      }
    }
    else
    {
      v37 = a1;
      v36 |= (unsigned __int64)(dword_23B3860[(unsigned int)v18] & v35) << v34;
    }
    v38 = v18 + v34;
  }
  else
  {
    v37 = a1;
    v105 = (unsigned __int64)(dword_23B3860[(unsigned int)v18] & v35) << v34;
    v38 = v18 + v34;
    v36 |= v105;
  }
  *v37 = v36;
  v39 = v38 >> 3;
  v40 = (_QWORD *)((char *)v37 + (v38 >> 3));
  if ( v11 <= (unsigned __int64)v40 )
    v40 = (_QWORD *)v11;
  v41 = v38 & 7;
  v42 = v36 >> (8 * (unsigned __int8)v39);
  v43 = a10 - 2;
  if ( a10 >= 2 )
  {
    v44 = v17;
    v45 = v41;
    do
    {
      v49 = *(unsigned __int8 *)(a4 + v43);
      v50 = *(unsigned __int8 *)(a6 + v43);
      v51 = byte_23B3820[*(unsigned __int8 *)(a8 + v43)];
      v47 = (unsigned __int8)v50;
      v52 = &v113[8 * v50];
      v53 = byte_23B37E0[(unsigned __int8)v49];
      v54 = (v106 + *((unsigned int *)v52 + 1)) >> 16;
      v55 = (unsigned __int64)((unsigned int)v106 & dword_23B3860[v54]) << v45;
      v56 = v54 + v45;
      v106 = (unsigned __int16)v109[*(int *)v52 + (v106 >> ((unsigned int)(v106 + *((_DWORD *)v52 + 1)) >> 16))];
      v57 = &v114[8 * v49];
      v58 = (v44 + *((unsigned int *)v57 + 1)) >> 16;
      v59 = (unsigned __int64)((unsigned int)v44 & dword_23B3860[v58]) << v56;
      v60 = v58 + v56;
      v61 = v59 | v55;
      v44 = (unsigned __int16)v110[*(int *)v57 + (v44 >> ((unsigned int)(v44 + *((_DWORD *)v57 + 1)) >> 16))];
      v62 = &v112[8 * *(unsigned __int8 *)(a8 + v43)];
      v63 = (v28 + *((unsigned int *)v62 + 1)) >> 16;
      v64 = (unsigned __int64)((unsigned int)v28 & dword_23B3860[v63]) << v60;
      v65 = v63 + v60;
      v66 = v61 | v64;
      v67 = v47 + v51 + v53;
      v68 = v66 | v42;
      v28 = (unsigned __int16)v108[*(int *)v62 + (v28 >> ((unsigned int)(v28 + *((_DWORD *)v62 + 1)) >> 16))];
      if ( v67 > 0x1E )
      {
        *v40 = v68;
        v69 = v65 >> 3;
        v40 = (_QWORD *)((char *)v40 + (v65 >> 3));
        if ( v11 <= (unsigned __int64)v40 )
          v40 = (_QWORD *)v11;
        v65 &= 7u;
        v68 >>= 8 * (unsigned __int8)v69;
      }
      v70 = v51 + v65;
      v71 = ((dword_23B3860[v51] & (unsigned __int64)*(unsigned __int16 *)(a9 + 8 * v43 + 4)) << v65) | v68;
      v72 = v53;
      v73 = v70 + v53;
      v74 = ((dword_23B3860[v72] & (unsigned __int64)*(unsigned __int16 *)(a9 + 8 * v43 + 6)) << v70) | v71;
      if ( v67 > 0x38 )
      {
        *v40 = v74;
        v75 = v73 >> 3;
        v40 = (_QWORD *)((char *)v40 + (v73 >> 3));
        if ( v11 <= (unsigned __int64)v40 )
          v40 = (_QWORD *)v11;
        v73 &= 7u;
        v74 >>= 8 * (unsigned __int8)v75;
      }
      v76 = *(_DWORD *)(a9 + 8 * v43);
      if ( a11 && v47 > 0x37 )
      {
        v46 = v47 - 56;
        v47 = 56;
        if ( v46 )
        {
          v101 = (unsigned __int64)(dword_23B3860[v46] & v76) << v73;
          v102 = v46 + v73;
          v103 = v101 | v74;
          *v40 = v103;
          v104 = v102 >> 3;
          v40 = (_QWORD *)((char *)v40 + (v102 >> 3));
          if ( v11 <= (unsigned __int64)v40 )
            v40 = (_QWORD *)v11;
          v73 = v102 & 7;
          v74 = v103 >> (8 * (unsigned __int8)v104);
        }
      }
      else
      {
        v74 |= (unsigned __int64)(dword_23B3860[v47] & v76) << v73;
      }
      *v40 = v74;
      v48 = (v47 + v73) >> 3;
      v40 = (_QWORD *)((char *)v40 + v48);
      if ( v11 <= (unsigned __int64)v40 )
        v40 = (_QWORD *)v11;
      v45 = ((_BYTE)v47 + (_BYTE)v73) & 7;
      --v43;
      v42 = v74 >> (8 * (unsigned __int8)v48);
    }
    while ( a10 > v43 );
    LODWORD(v17) = v44;
    v41 = v45;
  }
  v77 = (unsigned __int64)((unsigned int)v17 & dword_23B3860[v118]) << v41;
  v78 = v118 + v41;
  v79 = v77 | v42;
  *v40 = v79;
  v80 = v78 >> 3;
  v81 = (_QWORD *)((char *)v40 + (v78 >> 3));
  if ( v11 <= (unsigned __int64)v81 )
    v81 = (unsigned __int64 *)v11;
  v82 = v78 & 7;
  v83 = v81;
  v84 = v117 + v82;
  v85 = (v79 >> (8 * (unsigned __int8)v80)) | ((unsigned __int64)((unsigned int)v106 & dword_23B3860[v117]) << v82);
  v86 = (v117 + v82) >> 3;
  *v83 = v85;
  v87 = (unsigned __int64 *)((char *)v83 + v86);
  if ( v11 <= (unsigned __int64)v87 )
    v87 = (_QWORD *)v11;
  v88 = v84 & 7;
  v89 = v116 + (v84 & 7);
  v90 = (v85 >> (8 * (unsigned __int8)v86)) | ((unsigned __int64)(dword_23B3860[v116] & (unsigned int)v28) << v88);
  v91 = v89 >> 3;
  *v87 = v90;
  v92 = (_QWORD *)((char *)v87 + (v89 >> 3));
  if ( v11 <= (unsigned __int64)v92 )
    v92 = (_QWORD *)v11;
  v93 = v89 & 7;
  *v92 = (v90 >> (8 * (unsigned __int8)v91)) | (1LL << v93);
  v94 = (char *)v92 + ((unsigned int)(v93 + 1) >> 3);
  if ( v11 <= (unsigned __int64)v94 )
    return -70;
  result = ((((_BYTE)v93 + 1) & 7) != 0) + v94 - (char *)a1;
  if ( !result )
    return -70;
  return result;
}

