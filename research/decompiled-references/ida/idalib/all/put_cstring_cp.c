__int64 __fastcall put_cstring_cp(__int64 *a1, unsigned int a2, const char *a3, size_t a4, char a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rbp
  unsigned __int64 v33; // r12
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rbp
  unsigned __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rbp
  unsigned __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rbp
  unsigned __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rbp
  unsigned __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rbp
  unsigned __int64 v53; // r12
  __int64 v54; // r13
  __int64 v55; // rsi
  __int64 v56; // rbp
  unsigned __int64 v57; // r12
  __int64 v58; // r13
  __int64 v59; // rsi
  __int64 v60; // rbp
  unsigned __int64 v61; // r12
  __int64 v62; // r13
  __int64 v63; // rsi
  __int64 v64; // rbp
  unsigned __int64 v65; // r12
  __int64 v66; // r13
  __int64 v67; // rsi
  __int64 v68; // rbp
  unsigned __int64 v69; // r12
  __int64 v70; // r13
  __int64 v71; // rsi
  __int64 v72; // rbp
  unsigned __int64 v73; // r12
  __int64 v74; // r13
  __int64 v75; // rsi
  __int64 v76; // rbp
  unsigned __int64 v77; // r12
  __int64 v78; // r13
  __int64 v79; // rsi
  __int64 v80; // rbp
  unsigned __int64 v81; // r12
  __int64 v82; // r13
  __int64 v83; // rsi
  int v84; // ecx
  bool v85; // r15
  __int64 v86; // rbp
  __int64 v87; // r13
  unsigned __int64 v88; // r12
  __int64 v89; // rsi
  __int64 v90; // rbp
  const char *v91; // r15
  size_t v92; // rax
  __int64 v93; // r8
  unsigned __int64 v94; // r14
  __int64 v95; // r13
  __int64 v96; // rsi
  __int64 v97; // r13
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  size_t v118; // rax
  size_t v119; // r13
  __int64 v120; // rbp
  size_t v121; // r15
  size_t v122; // r14
  __int64 v123; // rax
  __int64 v124; // rbp
  size_t v125; // r13
  __int64 v126; // rax
  int v127; // [rsp+8h] [rbp-40h]
  __int64 v128; // [rsp+8h] [rbp-40h]

  v8 = a1[1];
  v9 = v8 + 15;
  if ( !v8 )
    v9 = 16;
  if ( a1[2] < v9 )
  {
    *a1 = qvector_reserve(a1, *a1, v9, 1);
    if ( a2 <= 0x22 )
      goto LABEL_5;
  }
  else if ( a2 <= 0x22 )
  {
LABEL_5:
    if ( a2 > 6 )
    {
      switch ( a2 )
      {
        case 7u:
          v18 = a1[1];
          if ( v18 )
          {
            v19 = v18 + 1;
            v20 = a1[1];
            --v18;
          }
          else
          {
            v20 = 1;
            v19 = 2;
          }
          v21 = *a1;
          if ( a1[2] < v19 )
          {
            v116 = qvector_reserve(a1, v21, v19, 1);
            *a1 = v116;
            v21 = v116;
          }
          a1[1] = v19;
          *(_BYTE *)(v21 + v18) = 92;
          *(_BYTE *)(*a1 + v20) = 0;
          v22 = a1[1];
          if ( v22 )
          {
            v23 = v22 + 1;
            v24 = a1[1];
            --v22;
          }
          else
          {
            v24 = 1;
            v23 = 2;
          }
          v25 = *a1;
          if ( a1[2] < v23 )
          {
            v115 = qvector_reserve(a1, v25, v23, 1);
            *a1 = v115;
            v25 = v115;
          }
          a1[1] = v23;
          *(_BYTE *)(v25 + v22) = 97;
          *(_BYTE *)(*a1 + v24) = 0;
          return 2;
        case 8u:
          v28 = a1[1];
          if ( v28 )
          {
            v29 = v28 + 1;
            v30 = a1[1];
            --v28;
          }
          else
          {
            v30 = 1;
            v29 = 2;
          }
          v31 = *a1;
          if ( a1[2] < v29 )
          {
            v114 = qvector_reserve(a1, v31, v29, 1);
            *a1 = v114;
            v31 = v114;
          }
          a1[1] = v29;
          *(_BYTE *)(v31 + v28) = 92;
          *(_BYTE *)(*a1 + v30) = 0;
          v32 = a1[1];
          if ( v32 )
          {
            v33 = v32 + 1;
            v34 = a1[1];
            --v32;
          }
          else
          {
            v34 = 1;
            v33 = 2;
          }
          v35 = *a1;
          if ( a1[2] < v33 )
          {
            v113 = qvector_reserve(a1, v35, v33, 1);
            *a1 = v113;
            v35 = v113;
          }
          a1[1] = v33;
          *(_BYTE *)(v35 + v32) = 98;
          *(_BYTE *)(*a1 + v34) = 0;
          return 2;
        case 9u:
          v36 = a1[1];
          if ( v36 )
          {
            v37 = v36 + 1;
            v38 = a1[1];
            --v36;
          }
          else
          {
            v38 = 1;
            v37 = 2;
          }
          v39 = *a1;
          if ( a1[2] < v37 )
          {
            v112 = qvector_reserve(a1, v39, v37, 1);
            *a1 = v112;
            v39 = v112;
          }
          a1[1] = v37;
          *(_BYTE *)(v39 + v36) = 92;
          *(_BYTE *)(*a1 + v38) = 0;
          v40 = a1[1];
          if ( v40 )
          {
            v41 = v40 + 1;
            v42 = a1[1];
            --v40;
          }
          else
          {
            v42 = 1;
            v41 = 2;
          }
          v43 = *a1;
          if ( a1[2] < v41 )
          {
            v111 = qvector_reserve(a1, v43, v41, 1);
            *a1 = v111;
            v43 = v111;
          }
          a1[1] = v41;
          *(_BYTE *)(v43 + v40) = 116;
          *(_BYTE *)(*a1 + v42) = 0;
          return 2;
        case 0xAu:
          v44 = a1[1];
          if ( v44 )
          {
            v45 = v44 + 1;
            v46 = a1[1];
            --v44;
          }
          else
          {
            v46 = 1;
            v45 = 2;
          }
          v47 = *a1;
          if ( a1[2] < v45 )
          {
            v110 = qvector_reserve(a1, v47, v45, 1);
            *a1 = v110;
            v47 = v110;
          }
          a1[1] = v45;
          *(_BYTE *)(v47 + v44) = 92;
          *(_BYTE *)(*a1 + v46) = 0;
          v48 = a1[1];
          if ( v48 )
          {
            v49 = v48 + 1;
            v50 = a1[1];
            --v48;
          }
          else
          {
            v50 = 1;
            v49 = 2;
          }
          v51 = *a1;
          if ( a1[2] < v49 )
          {
            v109 = qvector_reserve(a1, v51, v49, 1);
            *a1 = v109;
            v51 = v109;
          }
          a1[1] = v49;
          *(_BYTE *)(v51 + v48) = 110;
          *(_BYTE *)(*a1 + v50) = 0;
          return 2;
        case 0xBu:
          v52 = a1[1];
          if ( v52 )
          {
            v53 = v52 + 1;
            v54 = a1[1];
            --v52;
          }
          else
          {
            v54 = 1;
            v53 = 2;
          }
          v55 = *a1;
          if ( a1[2] < v53 )
          {
            v108 = qvector_reserve(a1, v55, v53, 1);
            *a1 = v108;
            v55 = v108;
          }
          a1[1] = v53;
          *(_BYTE *)(v55 + v52) = 92;
          *(_BYTE *)(*a1 + v54) = 0;
          v56 = a1[1];
          if ( v56 )
          {
            v57 = v56 + 1;
            v58 = a1[1];
            --v56;
          }
          else
          {
            v58 = 1;
            v57 = 2;
          }
          v59 = *a1;
          if ( a1[2] < v57 )
          {
            v107 = qvector_reserve(a1, v59, v57, 1);
            *a1 = v107;
            v59 = v107;
          }
          a1[1] = v57;
          *(_BYTE *)(v59 + v56) = 118;
          *(_BYTE *)(*a1 + v58) = 0;
          return 2;
        case 0xCu:
          v60 = a1[1];
          if ( v60 )
          {
            v61 = v60 + 1;
            v62 = a1[1];
            --v60;
          }
          else
          {
            v62 = 1;
            v61 = 2;
          }
          v63 = *a1;
          if ( a1[2] < v61 )
          {
            v106 = qvector_reserve(a1, v63, v61, 1);
            *a1 = v106;
            v63 = v106;
          }
          a1[1] = v61;
          *(_BYTE *)(v63 + v60) = 92;
          *(_BYTE *)(*a1 + v62) = 0;
          v64 = a1[1];
          if ( v64 )
          {
            v65 = v64 + 1;
            v66 = a1[1];
            --v64;
          }
          else
          {
            v66 = 1;
            v65 = 2;
          }
          v67 = *a1;
          if ( a1[2] < v65 )
          {
            v105 = qvector_reserve(a1, v67, v65, 1);
            *a1 = v105;
            v67 = v105;
          }
          a1[1] = v65;
          *(_BYTE *)(v67 + v64) = 102;
          *(_BYTE *)(*a1 + v66) = 0;
          return 2;
        case 0xDu:
          v68 = a1[1];
          if ( v68 )
          {
            v69 = v68 + 1;
            v70 = a1[1];
            --v68;
          }
          else
          {
            v70 = 1;
            v69 = 2;
          }
          v71 = *a1;
          if ( a1[2] < v69 )
          {
            v104 = qvector_reserve(a1, v71, v69, 1);
            *a1 = v104;
            v71 = v104;
          }
          a1[1] = v69;
          *(_BYTE *)(v71 + v68) = 92;
          *(_BYTE *)(*a1 + v70) = 0;
          v72 = a1[1];
          if ( v72 )
          {
            v73 = v72 + 1;
            v74 = a1[1];
            --v72;
          }
          else
          {
            v74 = 1;
            v73 = 2;
          }
          v75 = *a1;
          if ( a1[2] < v73 )
          {
            v103 = qvector_reserve(a1, v75, v73, 1);
            *a1 = v103;
            v75 = v103;
          }
          a1[1] = v73;
          *(_BYTE *)(v75 + v72) = 114;
          *(_BYTE *)(*a1 + v74) = 0;
          return 2;
        case 0x22u:
          v76 = a1[1];
          if ( v76 )
          {
            v77 = v76 + 1;
            v78 = a1[1];
            --v76;
          }
          else
          {
            v78 = 1;
            v77 = 2;
          }
          v79 = *a1;
          if ( a1[2] < v77 )
          {
            v102 = qvector_reserve(a1, v79, v77, 1);
            *a1 = v102;
            v79 = v102;
          }
          a1[1] = v77;
          *(_BYTE *)(v79 + v76) = 92;
          *(_BYTE *)(*a1 + v78) = 0;
          v80 = a1[1];
          if ( v80 )
          {
            v81 = v80 + 1;
            v82 = a1[1];
            --v80;
          }
          else
          {
            v82 = 1;
            v81 = 2;
          }
          v83 = *a1;
          if ( a1[2] < v81 )
          {
            v101 = qvector_reserve(a1, v83, v81, 1);
            *a1 = v101;
            v83 = v101;
          }
          a1[1] = v81;
          *(_BYTE *)(v83 + v80) = 34;
          *(_BYTE *)(*a1 + v82) = 0;
          return 2;
        default:
          v84 = a5 & 1;
          if ( a2 <= 0x1F )
            goto LABEL_93;
          v85 = 0;
          break;
      }
      goto LABEL_115;
    }
    v84 = a5 & 1;
    goto LABEL_93;
  }
  if ( a2 == 92 )
  {
    v10 = a1[1];
    if ( v10 )
    {
      v11 = v10 + 1;
      v12 = a1[1];
      --v10;
    }
    else
    {
      v12 = 1;
      v11 = 2;
    }
    v13 = *a1;
    if ( a1[2] < v11 )
    {
      v100 = qvector_reserve(a1, v13, v11, 1);
      *a1 = v100;
      v13 = v100;
    }
    a1[1] = v11;
    *(_BYTE *)(v13 + v10) = 92;
    *(_BYTE *)(*a1 + v12) = 0;
    v14 = a1[1];
    if ( v14 )
    {
      v15 = v14 + 1;
      v16 = a1[1];
      --v14;
    }
    else
    {
      v16 = 1;
      v15 = 2;
    }
    v17 = *a1;
    if ( a1[2] < v15 )
    {
      v99 = qvector_reserve(a1, v17, v15, 1);
      *a1 = v99;
      v17 = v99;
    }
    a1[1] = v15;
    *(_BYTE *)(v17 + v14) = 92;
    *(_BYTE *)(*a1 + v16) = 0;
    return 2;
  }
  else
  {
    v84 = a5 & 1;
    if ( a2 != -1 )
    {
      v85 = a2 == 255;
      if ( (a5 & 2) == 0 || a2 != 255 )
      {
LABEL_115:
        v127 = v84;
        if ( (unsigned __int8)is_cp_graphical(a2) )
        {
          if ( a4 == -1 )
          {
            if ( a3 )
            {
              v118 = strlen(a3);
              v119 = v118;
              v120 = (a1[1] == 0) + a1[1] - 1;
              v121 = v118 + v120;
              v122 = v118 + (a1[1] == 0) + a1[1];
              if ( a1[2] < v122 )
                *a1 = qvector_reserve(a1, *a1, v118 + (a1[1] == 0) + a1[1], 1);
              v123 = *a1;
              a1[1] = v122;
              *(_BYTE *)(v123 + v121) = 0;
              memmove((void *)(v120 + *a1), a3, v119);
            }
          }
          else
          {
            v124 = a1[1];
            v125 = a4;
            if ( v124 )
            {
              --v124;
              v125 = a4 + v124;
            }
            if ( a1[2] < v125 + 1 )
              *a1 = qvector_reserve(a1, *a1, v125 + 1, 1);
            v126 = *a1;
            a1[1] = v125 + 1;
            *(_BYTE *)(v126 + v125) = 0;
            memmove((void *)(v124 + *a1), a3, a4);
          }
          return 1;
        }
        if ( !v127 )
        {
          if ( a2 > 0x7F && !v85 )
          {
            sub_35A910(a1);
            return 6;
          }
          goto LABEL_94;
        }
LABEL_120:
        v86 = a1[1];
        if ( v86 )
        {
          v87 = v86 + 2;
          v88 = v86 + 3;
          --v86;
        }
        else
        {
          v88 = 4;
          v87 = 3;
        }
        v89 = *a1;
        if ( a1[2] < v88 )
        {
          v117 = qvector_reserve(a1, v89, v88, 1);
          *a1 = v117;
          v89 = v117;
        }
        a1[1] = v88;
        *(_BYTE *)(v89 + v87) = 0;
        v90 = *a1 + v86;
        *(_WORD *)v90 = -16401;
        *(_BYTE *)(v90 + 2) = -67;
        return 1;
      }
LABEL_93:
      if ( !v84 )
      {
LABEL_94:
        sub_35A910(a1);
        return 4;
      }
      goto LABEL_120;
    }
    v91 = &a3[a4];
    if ( a4 == -1 )
    {
      v92 = strlen(a3);
      v84 = a5 & 1;
      v91 = &a3[v92];
    }
    v26 = 0;
    if ( a3 < v91 )
    {
      v26 = 0;
      if ( *a3 )
      {
        if ( v84 )
        {
          do
          {
            v95 = a1[1];
            if ( v95 )
            {
              v93 = v95 + 2;
              v94 = v95 + 3;
              --v95;
            }
            else
            {
              v94 = 4;
              v93 = 3;
            }
            v96 = *a1;
            if ( a1[2] < v94 )
            {
              v128 = v93;
              v98 = qvector_reserve(a1, v96, v94, 1);
              v93 = v128;
              *a1 = v98;
              v96 = v98;
            }
            a1[1] = v94;
            ++a3;
            ++v26;
            *(_BYTE *)(v96 + v93) = 0;
            v97 = *a1 + v95;
            *(_WORD *)v97 = -16401;
            *(_BYTE *)(v97 + 2) = -67;
          }
          while ( a3 != v91 && *a3 );
        }
        else
        {
          do
          {
            ++a3;
            sub_35A910(a1);
            v26 += 4;
          }
          while ( v91 != a3 && *a3 );
        }
      }
    }
  }
  return v26;
}
