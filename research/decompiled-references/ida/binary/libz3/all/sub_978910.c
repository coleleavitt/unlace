__int64 __fastcall sub_978910(unsigned int *a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r9
  int *v5; // r15
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbp
  int *v10; // r13
  unsigned int v11; // ebx
  int v12; // r14d
  bool v13; // al
  unsigned int *v14; // r11
  int v15; // ebp
  unsigned int v16; // r12d
  bool v17; // al
  char *v18; // r11
  unsigned int *v19; // r9
  bool v20; // al
  int *v21; // rsi
  __int64 v22; // r14
  char *v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // ebp
  __int64 v32; // r10
  __int64 v33; // r12
  __int64 v34; // r10
  int v35; // r8d
  __int64 v36; // r12
  __int64 v37; // r15
  __int64 v38; // r14
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // r10
  int v42; // r8d
  __int64 v43; // r12
  __int64 v44; // r10
  unsigned int v45; // r14d
  __int64 v46; // rbx
  __int64 v47; // rbp
  __int64 v48; // r12
  bool v49; // al
  bool v50; // al
  __int64 v51; // r10
  int v52; // r8d
  __int64 v53; // r14
  int *v54; // rsi
  __int64 v55; // r8
  int *v56; // r13
  unsigned int v57; // r12d
  __int64 v58; // r10
  int v59; // esi
  __int64 v60; // rbp
  __int64 v61; // r15
  __int64 v62; // r14
  __int64 v63; // rbx
  __int64 v64; // rbp
  __int64 v65; // r10
  __int64 v66; // r11
  __int64 v67; // r10
  int v68; // esi
  __int64 v69; // rbp
  __int64 v70; // r10
  unsigned int v71; // r14d
  __int64 v72; // rbx
  __int64 v73; // r10
  int v74; // esi
  __int64 v75; // r10
  int v76; // r8d
  __int64 v77; // r10
  int v78; // esi
  __int64 v79; // rbx
  char *v80; // r12
  int v81; // ecx
  unsigned int *v82; // [rsp+8h] [rbp-A0h]
  unsigned int *v83; // [rsp+8h] [rbp-A0h]
  unsigned int v84; // [rsp+8h] [rbp-A0h]
  unsigned int v85; // [rsp+8h] [rbp-A0h]
  unsigned int v86; // [rsp+8h] [rbp-A0h]
  unsigned int v87; // [rsp+8h] [rbp-A0h]
  unsigned int *v88; // [rsp+10h] [rbp-98h]
  unsigned int *v89; // [rsp+10h] [rbp-98h]
  __int64 v90; // [rsp+10h] [rbp-98h]
  int *v91; // [rsp+10h] [rbp-98h]
  int v92; // [rsp+18h] [rbp-90h]
  __int64 v93; // [rsp+18h] [rbp-90h]
  __int64 v94; // [rsp+20h] [rbp-88h]
  __int64 v95; // [rsp+20h] [rbp-88h]
  __int64 v96; // [rsp+20h] [rbp-88h]
  __int64 v97; // [rsp+28h] [rbp-80h]
  __int64 v98; // [rsp+28h] [rbp-80h]
  __int64 v99; // [rsp+28h] [rbp-80h]
  __int64 v100; // [rsp+28h] [rbp-80h]
  __int64 v101; // [rsp+30h] [rbp-78h]
  __int64 v102; // [rsp+30h] [rbp-78h]
  __int64 v103; // [rsp+30h] [rbp-78h]
  __int64 v104; // [rsp+30h] [rbp-78h]
  __int64 v105; // [rsp+38h] [rbp-70h]
  __int64 v106; // [rsp+38h] [rbp-70h]
  char *v107; // [rsp+40h] [rbp-68h]
  char *v108; // [rsp+40h] [rbp-68h]
  int *v110; // [rsp+50h] [rbp-58h]
  int v111; // [rsp+50h] [rbp-58h]
  unsigned int *v112; // [rsp+58h] [rbp-50h]
  int *v114; // [rsp+68h] [rbp-40h]

  v4 = a1;
  v5 = a2;
  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 64 )
    return result;
  while ( 2 )
  {
    v7 = result;
    v8 = result >> 3;
    v9 = v7 >> 2;
    if ( !a3 )
    {
      v79 = v8 - 1;
      v80 = (char *)v4;
      while ( 1 )
      {
        sub_9782D0((__int64)v80, v79, v9, *(_DWORD *)&v80[4 * v79], a4);
        if ( !v79 )
          break;
        --v79;
      }
      for ( result = (char *)v5 - v80;
            (char *)v5 - v80 > 4;
            result = sub_9782D0((__int64)v80, 0, ((char *)v5 - v80) >> 2, v81, a4) )
      {
        v81 = *--v5;
        *v5 = *(_DWORD *)v80;
      }
      return result;
    }
    v10 = (int *)&v4[v8];
    v11 = v4[1];
    v12 = *v10;
    --a3;
    v88 = v4 + 1;
    v82 = v4;
    v13 = sub_969020(a4, v11, *v10);
    v14 = v88;
    v15 = *(v5 - 1);
    v89 = v82;
    v16 = *v82;
    v83 = v14;
    if ( v13 )
    {
      v17 = sub_969020(a4, v12, v15);
      v18 = (char *)v83;
      v19 = v89;
      if ( !v17 )
      {
        v20 = sub_969020(a4, v11, v15);
        v18 = (char *)v83;
        v19 = v89;
        if ( !v20 )
        {
LABEL_6:
          *(_QWORD *)v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v16)).m128i_u64[0];
          goto LABEL_7;
        }
LABEL_36:
        *v19 = v15;
        *(v5 - 1) = v16;
        v11 = *v19;
        goto LABEL_7;
      }
    }
    else
    {
      v49 = sub_969020(a4, v11, v15);
      v18 = (char *)v83;
      v19 = v89;
      if ( v49 )
        goto LABEL_6;
      v50 = sub_969020(a4, v12, v15);
      v18 = (char *)v83;
      v19 = v89;
      if ( v50 )
        goto LABEL_36;
    }
    *v19 = v12;
    *v10 = v16;
    v11 = *v19;
LABEL_7:
    v107 = v18;
    v21 = v5;
    v112 = v19;
    v114 = v5;
    v22 = *(_QWORD *)a4;
    while ( 2 )
    {
      v23 = v107;
      v110 = v21;
      v24 = v22;
      v25 = *(unsigned int *)(a4 + 8);
      v26 = v25 - 1;
      v27 = 24 * v25;
      v28 = v22 + v27;
      v29 = 24LL * (v26 & v11);
      v30 = v22 + v29;
      while ( 2 )
      {
        v31 = *(_DWORD *)v23;
        v32 = 24LL * (v26 & *(_DWORD *)v23);
        v33 = v24 + v32;
        if ( v32 != v27 )
        {
          v34 = v24 + v32;
          do
          {
            v35 = *(_DWORD *)(v34 + 4);
            if ( v35 == 2 )
            {
              if ( v31 == *(_DWORD *)v34 && v31 == *(_DWORD *)(v34 + 8) )
              {
                v36 = *(_QWORD *)(v34 + 16);
                if ( !v36 )
                  goto LABEL_87;
                goto LABEL_17;
              }
            }
            else if ( !v35 )
            {
              goto LABEL_107;
            }
            v34 += 24;
          }
          while ( v28 != v34 );
        }
        if ( v24 == v33 )
          goto LABEL_107;
        v75 = v24;
        while ( 1 )
        {
          v76 = *(_DWORD *)(v75 + 4);
          if ( v76 != 2 )
          {
            if ( !v76 )
              goto LABEL_107;
            goto LABEL_82;
          }
          if ( v31 == *(_DWORD *)v75 && v31 == *(_DWORD *)(v75 + 8) )
            break;
LABEL_82:
          v75 += 24;
          if ( v33 == v75 )
            goto LABEL_107;
        }
        v36 = *(_QWORD *)(v75 + 16);
        if ( !v36 )
        {
LABEL_87:
          LODWORD(v37) = 0;
          goto LABEL_21;
        }
LABEL_17:
        v37 = *(unsigned int *)(v36 - 4);
        if ( (_DWORD)v37 )
        {
          v38 = v36 + 4 * v37;
          LODWORD(v37) = 0;
          v94 = v28;
          v97 = v30;
          v101 = v29;
          v84 = v11;
          v39 = v36;
          v40 = v27;
          do
          {
            v39 += 4;
            LODWORD(v37) = __popcountdi2() + v37;
          }
          while ( v38 != v39 );
          v11 = v84;
          v27 = v40;
          v28 = v94;
          v30 = v97;
          v29 = v101;
        }
LABEL_21:
        if ( v27 != v29 )
        {
          v41 = v30;
          do
          {
            v42 = *(_DWORD *)(v41 + 4);
            if ( v42 == 2 )
            {
              if ( v11 == *(_DWORD *)v41 && v11 == *(_DWORD *)(v41 + 8) )
              {
                v43 = *(_QWORD *)(v41 + 16);
                if ( !v43 )
                  goto LABEL_45;
                goto LABEL_29;
              }
            }
            else if ( !v42 )
            {
              goto LABEL_107;
            }
            v41 += 24;
          }
          while ( v28 != v41 );
        }
        if ( v24 == v30 )
          goto LABEL_107;
        v51 = v24;
        while ( 2 )
        {
          v52 = *(_DWORD *)(v51 + 4);
          if ( v52 != 2 )
          {
            if ( !v52 )
              goto LABEL_107;
LABEL_40:
            v51 += 24;
            if ( v30 == v51 )
              goto LABEL_107;
            continue;
          }
          break;
        }
        if ( v11 != *(_DWORD *)v51 || v11 != *(_DWORD *)(v51 + 8) )
          goto LABEL_40;
        v43 = *(_QWORD *)(v51 + 16);
        if ( !v43 )
          break;
LABEL_29:
        v44 = *(unsigned int *)(v43 - 4);
        if ( (_DWORD)v44 )
        {
          v45 = 0;
          v98 = v28;
          v102 = v30;
          v105 = v29;
          v85 = v11;
          v46 = v43 + 4 * v44;
          v92 = v31;
          v47 = v43;
          v48 = v27;
          do
          {
            v47 += 4;
            v45 += __popcountdi2();
          }
          while ( v46 != v47 );
          v11 = v85;
          v31 = v92;
          v27 = v48;
          v28 = v98;
          v30 = v102;
          v29 = v105;
          if ( (unsigned int)v37 < v45 )
          {
            v23 += 4;
            continue;
          }
        }
        break;
      }
LABEL_45:
      v53 = v24;
      v54 = v110;
      v108 = v23;
      v111 = v31;
      v55 = v53;
      v56 = v54 - 1;
      v57 = *(v54 - 1);
      if ( v27 == v29 )
      {
LABEL_70:
        if ( v55 != v30 )
        {
          v73 = v55;
          while ( 1 )
          {
            v74 = *(_DWORD *)(v73 + 4);
            if ( v74 == 2 )
            {
              if ( v11 == *(_DWORD *)v73 && v11 == *(_DWORD *)(v73 + 8) )
              {
                v60 = *(_QWORD *)(v73 + 16);
                if ( !v60 )
                {
LABEL_78:
                  LODWORD(v61) = 0;
                  goto LABEL_57;
                }
                goto LABEL_53;
              }
            }
            else if ( !v74 )
            {
              goto LABEL_107;
            }
            v73 += 24;
            if ( v30 == v73 )
              goto LABEL_107;
          }
        }
        goto LABEL_107;
      }
      while ( 2 )
      {
        v58 = v30;
        while ( 2 )
        {
          v59 = *(_DWORD *)(v58 + 4);
          if ( v59 != 2 )
          {
            if ( !v59 )
              goto LABEL_107;
LABEL_48:
            v58 += 24;
            if ( v28 == v58 )
              goto LABEL_70;
            continue;
          }
          break;
        }
        if ( v11 != *(_DWORD *)v58 || v11 != *(_DWORD *)(v58 + 8) )
          goto LABEL_48;
        v60 = *(_QWORD *)(v58 + 16);
        if ( !v60 )
          goto LABEL_78;
LABEL_53:
        v61 = *(unsigned int *)(v60 - 4);
        if ( (_DWORD)v61 )
        {
          v90 = v55;
          v62 = v60 + 4 * v61;
          LODWORD(v61) = 0;
          v95 = v28;
          v99 = v30;
          v103 = v29;
          v86 = v11;
          v63 = v60;
          v64 = v27;
          do
          {
            v63 += 4;
            LODWORD(v61) = __popcountdi2() + v61;
          }
          while ( v63 != v62 );
          v11 = v86;
          v55 = v90;
          v27 = v64;
          v28 = v95;
          v30 = v99;
          v29 = v103;
        }
LABEL_57:
        v65 = 24LL * (v26 & v57);
        v66 = v55 + v65;
        if ( v27 != v65 )
        {
          v67 = v55 + v65;
          do
          {
            v68 = *(_DWORD *)(v67 + 4);
            if ( v68 == 2 )
            {
              if ( v57 == *(_DWORD *)v67 && v57 == *(_DWORD *)(v67 + 8) )
              {
                v69 = *(_QWORD *)(v67 + 16);
                if ( !v69 )
                  goto LABEL_96;
                goto LABEL_65;
              }
            }
            else if ( !v68 )
            {
              goto LABEL_107;
            }
            v67 += 24;
          }
          while ( v28 != v67 );
        }
        if ( v55 == v66 )
LABEL_107:
          BUG();
        v77 = v55;
        while ( 1 )
        {
          v78 = *(_DWORD *)(v77 + 4);
          if ( v78 != 2 )
          {
            if ( !v78 )
              goto LABEL_107;
            goto LABEL_91;
          }
          if ( v57 == *(_DWORD *)v77 && v57 == *(_DWORD *)(v77 + 8) )
            break;
LABEL_91:
          v77 += 24;
          if ( v66 == v77 )
            goto LABEL_107;
        }
        v69 = *(_QWORD *)(v77 + 16);
        if ( !v69 )
          break;
LABEL_65:
        v70 = *(unsigned int *)(v69 - 4);
        if ( (_DWORD)v70 )
        {
          v93 = v55;
          v71 = 0;
          v96 = v28;
          v100 = v30;
          v104 = v27;
          v106 = v29;
          v87 = v11;
          v72 = v69 + 4 * v70;
          v91 = v56;
          do
          {
            v69 += 4;
            v71 += __popcountdi2();
          }
          while ( v69 != v72 );
          v11 = v87;
          v55 = v93;
          v28 = v96;
          v30 = v100;
          v27 = v104;
          v29 = v106;
          if ( (unsigned int)v61 < v71 )
          {
            --v56;
            v57 = *(v91 - 1);
            if ( v104 == v106 )
              goto LABEL_70;
            continue;
          }
        }
        break;
      }
LABEL_96:
      v21 = v56;
      v22 = v55;
      if ( v108 < (char *)v56 )
      {
        *(_DWORD *)v108 = v57;
        v107 = v108 + 4;
        *v56 = v111;
        v11 = *v112;
        continue;
      }
      break;
    }
    sub_978910(v108, v114, a3, a4);
    v4 = v112;
    result = v108 - (char *)v112;
    if ( v108 - (char *)v112 > 64 )
    {
      v5 = (int *)v108;
      continue;
    }
    return result;
  }
}

