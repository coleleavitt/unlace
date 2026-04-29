__int64 __fastcall sub_12EA80(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v7; // r14
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // r15d
  unsigned __int8 v12; // dl
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  _DWORD *v23; // rax
  __int16 v24; // ax
  unsigned int v25; // r9d
  __int128 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __m128 *v32; // r11
  int v33; // eax
  int v34; // edx
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rcx
  __m128 *v43; // r11
  __int64 v44; // rcx
  __int64 v45; // r8
  bool v46; // bl
  int v47; // edx
  __int32 v48; // eax
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rax
  __m128 *v53; // rax
  __m128 *v54; // r15
  __int128 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int32 v59; // r15d
  char v60; // r9
  __int64 v61; // rbx
  __int64 v62; // rsi
  int *v63; // rcx
  __int128 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // [rsp+18h] [rbp-1A8h]
  __m128 *v67; // [rsp+18h] [rbp-1A8h]
  __int64 v68; // [rsp+20h] [rbp-1A0h]
  unsigned int v69; // [rsp+20h] [rbp-1A0h]
  unsigned __int64 v70; // [rsp+28h] [rbp-198h]
  unsigned __int8 *v71; // [rsp+28h] [rbp-198h]
  unsigned __int64 v72; // [rsp+30h] [rbp-190h]
  _DWORD *v73; // [rsp+30h] [rbp-190h]
  __int64 v74; // [rsp+30h] [rbp-190h]
  char v75; // [rsp+38h] [rbp-188h]
  __m128 *v76; // [rsp+38h] [rbp-188h]
  __int64 v78; // [rsp+48h] [rbp-178h]
  unsigned __int8 v79; // [rsp+48h] [rbp-178h]
  __int64 v80; // [rsp+48h] [rbp-178h]
  __m128 *v81; // [rsp+48h] [rbp-178h]
  int v82; // [rsp+48h] [rbp-178h]
  char v83; // [rsp+48h] [rbp-178h]
  char v84; // [rsp+48h] [rbp-178h]
  __int64 v85; // [rsp+50h] [rbp-170h] BYREF
  __int64 v86; // [rsp+58h] [rbp-168h] BYREF
  __int64 v87; // [rsp+68h] [rbp-158h] BYREF
  _QWORD v88[2]; // [rsp+70h] [rbp-150h] BYREF
  __int64 v89[2]; // [rsp+80h] [rbp-140h] BYREF
  __int64 v90; // [rsp+90h] [rbp-130h]
  __int64 v91; // [rsp+98h] [rbp-128h]
  __m128 v92; // [rsp+B0h] [rbp-110h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-100h]
  unsigned __int8 *v94; // [rsp+C8h] [rbp-F8h]
  __int64 v95; // [rsp+D0h] [rbp-F0h]
  __int64 v96; // [rsp+D8h] [rbp-E8h]
  unsigned int v97; // [rsp+E0h] [rbp-E0h]
  __m128 v98; // [rsp+F0h] [rbp-D0h] BYREF
  __int64 v99; // [rsp+100h] [rbp-C0h]
  __int64 v100; // [rsp+108h] [rbp-B8h]
  __int64 v101; // [rsp+110h] [rbp-B0h]
  __int64 v102; // [rsp+118h] [rbp-A8h]
  unsigned int v103; // [rsp+120h] [rbp-A0h]
  __m128 v104; // [rsp+130h] [rbp-90h] BYREF
  _DWORD *v105; // [rsp+140h] [rbp-80h]
  __int64 v106; // [rsp+148h] [rbp-78h]
  unsigned __int64 v107; // [rsp+150h] [rbp-70h] BYREF
  __int64 v108; // [rsp+158h] [rbp-68h]
  _QWORD v109[2]; // [rsp+160h] [rbp-60h] BYREF
  _QWORD v110[10]; // [rsp+170h] [rbp-50h] BYREF

  v7 = a5;
  v9 = (__int64)a2;
  v86 = a4;
  v85 = a6;
  v110[3] = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( a5 | a3 )
    {
      if ( !under_debugger )
        sub_383060(51557);
LABEL_207:
      BUG();
    }
    v10 = v86;
    if ( v86 )
    {
      v78 = v85;
      if ( v85 )
        goto LABEL_6;
    }
LABEL_51:
    if ( !under_debugger )
      sub_383060(50294);
    goto LABEL_207;
  }
  v10 = v86;
  if ( !v86 )
    goto LABEL_51;
  v78 = v85;
  if ( !v85 )
    goto LABEL_51;
  if ( a5 | a3 )
  {
    sub_1217B0(a2, a3, v86);
    sub_1217B0(a2, v7, v85);
  }
LABEL_6:
  v11 = a7 & 1;
  v75 = a7 & 1;
  if ( (a7 & 1) == 0 )
  {
    if ( *(_DWORD *)(v10 + 4) != *(_DWORD *)(v78 + 4) )
      goto LABEL_32;
    v12 = *(_BYTE *)v10;
    goto LABEL_20;
  }
  v12 = *(_BYTE *)v10;
  if ( *(_BYTE *)v10 == 4 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( (unsigned int)(*(_DWORD *)v13 - 8) > 1 || *(_DWORD *)(v13 + 36) < *(_DWORD *)(v78 + 4) )
        break;
      v12 = *(_BYTE *)(v13 + 32);
      v10 = v13 + 32;
      if ( v12 != 4 )
        goto LABEL_13;
    }
    v12 = *(_BYTE *)v10;
LABEL_13:
    v86 = v10;
    if ( *(_BYTE *)v78 != 4 )
      goto LABEL_19;
  }
  else
  {
    v86 = v10;
    if ( *(_BYTE *)v78 != 4 )
    {
      v85 = v78;
      goto LABEL_32;
    }
  }
  v14 = v78;
  do
  {
    v15 = *(_QWORD *)(v14 + 8);
    if ( (unsigned int)(*(_DWORD *)v15 - 8) > 1 )
      break;
    if ( *(_DWORD *)(v15 + 36) < *(_DWORD *)(v10 + 4) )
      break;
    v14 = v15 + 32;
  }
  while ( *(_BYTE *)(v15 + 32) == 4 );
  v78 = v14;
LABEL_19:
  v85 = v78;
LABEL_20:
  if ( v12 == 4 && (unsigned int)(**(_DWORD **)(v10 + 8) - 8) <= 1 )
  {
    v17 = v78;
    v18 = v7;
    v16 = v10;
    v19 = a3;
  }
  else
  {
    v16 = v78;
    if ( *(_BYTE *)v78 != 4 || (unsigned int)(**(_DWORD **)(v78 + 8) - 8) > 1 )
      goto LABEL_32;
    v17 = v10;
    v18 = a3;
    v19 = v7;
  }
  if ( a2 )
  {
    v66 = v16;
    v72 = v19;
    v68 = v17;
    v70 = v18;
    if ( (unsigned __int8)sub_12EA80(a1, (_DWORD)a2, v19, (unsigned int)*(_QWORD *)(v16 + 8) + 32, v18, v17, 1) )
    {
      v20 = *(_QWORD *)(v66 + 8);
      v21 = a2[4].m128i_i64[0];
      v98.m128_u64[1] = v72;
      v98.m128_u64[0] = (unsigned __int64)a2;
      v101 = 0;
      v100 = v20 + 32;
      v102 = 0;
      v103 = 0;
      v99 = 0;
      sub_12A160(v21, &v98, 0);
      v22 = a2[4].m128i_i64[0];
      v104.m128_u64[0] = (unsigned __int64)a2;
      v73 = (_DWORD *)v99;
      v104.m128_u64[1] = v70;
      v106 = v68;
      v107 = 0;
      v108 = 0;
      LODWORD(v109[0]) = 0;
      v105 = nullptr;
      sub_12A160(v22, &v104, 0);
      if ( v73 )
      {
        if ( v105 == v73 )
        {
          v23 = *(_DWORD **)(v66 + 8);
          if ( *v73 == *v23 && v73[9] <= v23[9] )
            return 1;
        }
      }
    }
  }
LABEL_32:
  v24 = *(_WORD *)(v10 + 2);
  if ( v24 && *(_WORD *)(v78 + 2) == v24 && (v75 || *(_DWORD *)(v10 + 4) == *(_DWORD *)(v78 + 4)) )
    return 1;
  if ( sub_1255D0((unsigned __int8 *)v10, a1, v78, a7 & 1) )
  {
    if ( (a7 & 2) != 0 )
      return 1;
    *((_QWORD *)&v27 + 1) = a3;
    *(_QWORD *)&v27 = v9;
    if ( (unsigned __int8)sub_124EC0(v27, v10, v7, v78) )
      return 1;
  }
  LOBYTE(v25) = a3 == 0 && a3 == v7;
  if ( (_BYTE)v25 )
    return 0;
  if ( !v9 )
  {
    if ( !under_debugger )
      sub_383060(51660);
    goto LABEL_207;
  }
  if ( *(_DWORD *)(v10 + 4) != -1 && *(_DWORD *)(v78 + 4) != -1 )
  {
    v88[1] = 0;
    v88[0] = 0xFFFFFFFF00000000LL;
    if ( *(_DWORD *)(v10 + 4) != *(_DWORD *)(v78 + 4) )
    {
      if ( (a7 & 1) == 0 )
      {
LABEL_47:
        v79 = v25;
        sub_11CDA0((__int64)v88);
        return v79;
      }
      if ( sub_12C420(a1, (unsigned __int64)v88, (unsigned __int64 *)&v86, &v85, a3, v7) )
        goto LABEL_63;
    }
    if ( (v71 = (unsigned __int8 *)v86, v80 = v85, *(_BYTE *)v86 == 4)
      && *(_BYTE *)v85 == 4
      && (unsigned __int8)sub_130620(a1, v9, a3, *(_QWORD *)(v86 + 8), v7, *(_QWORD *)(v85 + 8), v11)
      || (unsigned __int8)sub_12E4F0(v9, a3, v7, v71, (unsigned __int8 *)v80, v11) )
    {
LABEL_63:
      LOBYTE(v25) = 1;
      goto LABEL_47;
    }
    v28 = *(_QWORD *)(v9 + 64);
    v92.m128_u64[0] = v9;
    v94 = v71;
    v92.m128_u64[1] = a3;
    v93 = 0;
    v95 = 0;
    v96 = 0;
    v97 = 0;
    sub_12A160(v28, &v92, 0);
    v29 = *(_QWORD *)(v9 + 64);
    v98.m128_u64[0] = v9;
    v98.m128_u64[1] = v7;
    v69 = v97;
    v100 = v80;
    v74 = v93;
    v99 = 0;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    sub_12A160(v29, &v98, 0);
    v32 = (__m128 *)v99;
    LOBYTE(v25) = 0;
    if ( !(v99 | v74) )
      goto LABEL_47;
    v33 = v103;
    if ( v74 == v99 && v69 == v103 )
    {
LABEL_67:
      LOBYTE(v25) = 1;
      goto LABEL_47;
    }
    if ( v74 )
    {
      if ( v99 )
      {
        v34 = *(_DWORD *)v99;
        v35 = *(unsigned int *)v74;
        v36 = v35;
        if ( (_DWORD)v35 == *(_DWORD *)v99 )
          goto LABEL_94;
        if ( v34 == 10 )
        {
          if ( (v69 == 2 || v69 == 1 && v75) && *(_BYTE *)(v99 + 32) == 4 && (_DWORD)v35 == **(_DWORD **)(v99 + 40) )
          {
            v69 = 1;
            v34 = *(_DWORD *)v74;
            v32 = *(__m128 **)(v99 + 40);
          }
        }
        else if ( v34 == 11 && v69 == 3 )
        {
          if ( *(_BYTE *)(v99 + 32) == 4 && (v34 = **(_DWORD **)(v99 + 40), (_DWORD)v35 == v34) )
          {
            v69 = 1;
            v32 = *(__m128 **)(v99 + 40);
          }
          else
          {
            v69 = 3;
            v34 = 11;
          }
        }
        if ( (_DWORD)v35 == 10 )
        {
          if ( v103 != 2 && (v103 != 1 || !v75) )
          {
            if ( (a7 & 1) != 0 )
            {
LABEL_85:
              if ( (unsigned int)(v34 - 8) <= 1 )
              {
                do
                {
                  if ( v32[2].m128_i8[0] != 4 )
                    break;
                  v32 = (__m128 *)v32[2].m128_u64[1];
                }
                while ( (unsigned int)(v32->m128_i32[0] - 8) <= 1 );
              }
LABEL_89:
              v35 = v32->m128_u32[0];
              if ( *(_DWORD *)v74 != (_DWORD)v35 )
              {
LABEL_90:
                if ( v69 != 1 || v33 != 1 )
                  goto LABEL_47;
                v81 = v32;
                if ( !(unsigned __int8)sub_1322F0(v9, v74, v32, v35, v31, 0) )
                {
                  LOBYTE(v25) = sub_1322F0(v9, v81, v74, v38, v39, v40);
                  goto LABEL_47;
                }
                goto LABEL_67;
              }
LABEL_94:
              if ( v69 != 2 )
                goto LABEL_95;
              goto LABEL_146;
            }
            if ( v32->m128_i32[0] != 10 )
              goto LABEL_90;
            if ( v69 == 2 )
            {
LABEL_146:
              v69 = 2;
              v75 |= *(_DWORD *)(v74 + 68) > *(_DWORD *)(v100 + 4);
LABEL_95:
              if ( v33 == 2 )
                v75 |= v32[4].m128_i32[1] > *((_DWORD *)v94 + 1);
              goto LABEL_97;
            }
            goto LABEL_97;
          }
        }
        else if ( (_DWORD)v35 != 11 || v103 != 3 )
        {
          if ( (a7 & 1) == 0 )
            goto LABEL_89;
          goto LABEL_80;
        }
        if ( *(_BYTE *)(v74 + 32) != 4 || (v63 = *(int **)(v74 + 40), v34 != *v63) )
        {
          if ( (a7 & 1) == 0 )
            goto LABEL_89;
          goto LABEL_85;
        }
        v74 = *(_QWORD *)(v74 + 40);
        if ( (a7 & 1) != 0 )
        {
          v36 = *v63;
          v33 = 1;
LABEL_80:
          if ( (unsigned int)(v36 - 8) <= 1 )
          {
            v37 = v74;
            do
            {
              if ( *(_BYTE *)(v37 + 32) != 4 )
                break;
              v37 = *(_QWORD *)(v37 + 40);
            }
            while ( (unsigned int)(*(_DWORD *)v37 - 8) <= 1 );
            v74 = v37;
          }
          goto LABEL_85;
        }
        v33 = 1;
        if ( v69 == 2 )
          v75 |= v63[17] > *(_DWORD *)(v100 + 4);
LABEL_97:
        v82 = v33;
        v67 = v32;
        v107 = 0xFFFFFFFF00000000LL;
        v108 = 0;
        v109[0] = 0xFFFFFFFF00000000LL;
        v109[1] = 0;
        v110[0] = 0xFFFFFFFF00000000LL;
        v110[1] = 0;
        sub_330970(&v104, -1);
        v42 = v69;
        v43 = v67;
        if ( v82 != v69 )
        {
          if ( !v75 )
            goto LABEL_127;
          if ( v69 == 3 || v82 == 3 )
          {
            if ( v69 == 2 || v82 == 2 || *((_DWORD *)v94 + 1) == *(_DWORD *)(v100 + 4) )
              goto LABEL_127;
            if ( v69 == 1 )
            {
              v62 = v74;
              v61 = (__int64)v67;
            }
            else
            {
              v61 = v74;
              v62 = (__int64)v67;
            }
            if ( *(_DWORD *)(v62 + 68) <= *(_DWORD *)(v61 + 68) )
              goto LABEL_127;
            sub_1253A0((__int64)&v104, v62);
            sub_12B6F0((__int64)&v104, a1, 11, *(_DWORD *)(v61 + 68), 1);
            v43 = v67;
            if ( v69 == 1 )
              v74 = (__int64)&v104;
            else
              v43 = &v104;
          }
        }
        v76 = v43;
        if ( *(_DWORD *)v74 != 1
          && !sub_11F430((_BYTE *)v74, *(_QWORD *)(a1 + 96), 0, v42, v41, 0)
          && v76->m128_i32[0] != 1 )
        {
          v46 = sub_11F430(v76, *(_QWORD *)(a1 + 96), 0, v44, v45, 0);
          if ( !v46 )
          {
            v47 = *(_DWORD *)(v74 + 68);
            v48 = v76[4].m128_i32[1];
            if ( v47 == v48 || v47 >= *((_DWORD *)v94 + 1) && v48 >= *(_DWORD *)(v100 + 4) )
            {
              if ( (__m128 *)v74 == v76 )
              {
                v46 = 1;
              }
              else if ( *(_DWORD *)v74 != 61
                     && v76->m128_i32[0] != 61
                     && (unsigned __int8)sub_130620(
                                           *(_QWORD *)(*(_QWORD *)(v9 + 480) + 112LL),
                                           0,
                                           0,
                                           v74,
                                           0,
                                           (_DWORD)v76,
                                           1) )
              {
                sub_124680((__int64)v89, v9, v74, 1u);
                v49 = v92.m128_i64[1];
                v50 = v98.m128_i64[1];
                if ( v92.m128_u64[0] == v98.m128_u64[0] )
                {
                  *((_QWORD *)&v64 + 1) = v92.m128_u64[1];
                  *(_QWORD *)&v64 = v9;
                  if ( !(unsigned __int8)sub_124EC0(v64, (__int64)v94, v98.m128_i64[1], v100) )
                  {
LABEL_198:
                    if ( v90 )
                    {
                      v91 = 0;
                      qfree(v90);
                    }
                    qfree(v89[0]);
                    goto LABEL_201;
                  }
                  if ( v50 )
                  {
                    v65 = *(_QWORD *)(v50 + 8);
                    if ( v65 )
                    {
                      while ( v49 != v65 )
                      {
                        v65 = *(_QWORD *)(v65 + 8);
                        if ( !v65 )
                          goto LABEL_196;
                      }
                      v49 = v50;
                      v50 = v65;
                    }
                  }
LABEL_196:
                  v58 = sub_A9AA0(v9, v89, v49, v50, 1u);
                }
                else
                {
                  while ( 1 )
                  {
                    if ( v92.m128_u64[0] == v9 )
                      goto LABEL_119;
                    if ( v98.m128_u64[0] == v9 )
                      break;
                    if ( *(_DWORD *)(v9 + 352) != 1 )
                    {
                      if ( !under_debugger )
                        sub_383060(52396);
                      goto LABEL_207;
                    }
                    v51 = *(_QWORD *)(v9 + 64);
                    v52 = **(unsigned int **)(v9 + 344);
                    if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 64) )
                      sub_11B900(&v104);
                    v9 = *(_QWORD *)(*(_QWORD *)(v51 + 528) + 8 * v52);
                  }
                  if ( v92.m128_u64[0] == v9 )
                  {
LABEL_119:
                    v50 = v92.m128_i64[1];
                    v53 = &v92;
                    v54 = &v98;
                  }
                  else
                  {
                    v54 = &v92;
                    v53 = &v98;
                  }
                  *((_QWORD *)&v55 + 1) = v89;
                  *(_QWORD *)&v55 = v9;
                  sub_123EA0(v55, v53[1].m128_i64[1], 1, 0xFFFF0000);
                  while ( v9 != v54->m128_u64[0] )
                  {
                    if ( sub_A9AA0(v9, v89, *(_QWORD *)(v9 + 48), v50, 1u) )
                      goto LABEL_198;
                    if ( *(_DWORD *)(v9 + 352) != 1 )
                    {
                      if ( !under_debugger )
                        sub_383060(52397);
                      goto LABEL_207;
                    }
                    v56 = *(_QWORD *)(v9 + 64);
                    v57 = **(unsigned int **)(v9 + 344);
                    if ( (unsigned int)v57 >= *(_DWORD *)(v56 + 64) )
                      sub_11B900(v9);
                    v9 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8 * v57);
                  }
                  v58 = sub_A9AA0(v9, v89, v54->m128_i64[1], v50, 1u);
                }
                v46 = v58 == 0;
                goto LABEL_198;
              }
LABEL_201:
              sub_7CCD0((__int64)&v104);
              LOBYTE(v25) = v46;
              goto LABEL_47;
            }
          }
        }
LABEL_127:
        sub_11CDA0((__int64)v110);
        sub_11CDA0((__int64)v109);
        sub_11CDA0((__int64)&v107);
        LOBYTE(v25) = 0;
        goto LABEL_47;
      }
      if ( v74 == v101 )
        goto LABEL_47;
      v59 = v92.m128_i32[2];
    }
    else
    {
      if ( v95 == v99 )
        goto LABEL_47;
      v69 = v103;
      LODWORD(v7) = a3;
      v74 = v99;
      v59 = v98.m128_i32[2];
      v80 = (__int64)v71;
    }
    if ( *(_DWORD *)v74 == 4 )
    {
      sub_123A40((__int64)&v104, (unsigned __int8 *)(v74 + 32), v30, v74);
      if ( v69 != 3 || (v60 = sub_1279B0((unsigned __int64)&v104, a1, *(_QWORD *)(v74 + 24), *(_DWORD *)(v80 + 4))) != 0 )
        v60 = sub_12EA80(
                a1,
                v9,
                v59,
                (unsigned int)&v104,
                v7,
                v80,
                a7 | (unsigned int)(unsigned __int8)(v75 | (v69 == 2)));
      v84 = v60;
      sub_11CDA0((__int64)&v104);
      LOBYTE(v25) = v84;
    }
    else if ( (unsigned int)(*(_DWORD *)v74 - 8) > 1 )
    {
      if ( v69 != 3 && v75 )
      {
        v104 = (__m128)0xFFFFFFFF00000000LL;
        v87 = (__int64)v94;
        v89[0] = v100;
        v83 = sub_12C420(a1, (unsigned __int64)&v104, (unsigned __int64 *)&v87, v89, v92.m128_i64[1], v98.m128_i64[1]);
        sub_11CDA0((__int64)&v104);
        LOBYTE(v25) = v83;
      }
    }
    else if ( *(_DWORD *)(v80 + 4) <= *(_DWORD *)(v74 + 36) && v69 != 3 )
    {
      LOBYTE(v25) = sub_12EA80(a1, v9, v59, (int)v74 + 32, v7, v80, 1);
    }
    goto LABEL_47;
  }
  return v25;
}
