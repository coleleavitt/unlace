__int64 __fastcall sub_12A5C0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
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
  __int64 v30; // r8
  __m128 *v31; // r11
  int v32; // eax
  int v33; // edx
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rcx
  __m128 *v42; // r11
  __int64 v43; // rcx
  __int64 v44; // r8
  bool v45; // bl
  int v46; // edx
  __int32 v47; // eax
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // rsi
  __int64 v51; // rax
  __m128 *v52; // rax
  __m128 *v53; // r15
  __int128 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int32 v58; // r15d
  char v59; // r9
  __int64 v60; // rbx
  __int64 v61; // rsi
  int *v62; // rcx
  __int128 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // [rsp+18h] [rbp-1A8h]
  __m128 *v66; // [rsp+18h] [rbp-1A8h]
  __int64 v67; // [rsp+20h] [rbp-1A0h]
  unsigned int v68; // [rsp+20h] [rbp-1A0h]
  unsigned __int64 v69; // [rsp+28h] [rbp-198h]
  unsigned __int8 *v70; // [rsp+28h] [rbp-198h]
  unsigned __int64 v71; // [rsp+30h] [rbp-190h]
  _DWORD *v72; // [rsp+30h] [rbp-190h]
  __int64 v73; // [rsp+30h] [rbp-190h]
  char v74; // [rsp+38h] [rbp-188h]
  __m128 *v75; // [rsp+38h] [rbp-188h]
  __int64 v77; // [rsp+48h] [rbp-178h]
  unsigned __int8 v78; // [rsp+48h] [rbp-178h]
  __int64 v79; // [rsp+48h] [rbp-178h]
  __m128 *v80; // [rsp+48h] [rbp-178h]
  int v81; // [rsp+48h] [rbp-178h]
  char v82; // [rsp+48h] [rbp-178h]
  char v83; // [rsp+48h] [rbp-178h]
  __int64 v84; // [rsp+50h] [rbp-170h] BYREF
  __int64 v85; // [rsp+58h] [rbp-168h] BYREF
  __int64 v86; // [rsp+68h] [rbp-158h] BYREF
  _QWORD v87[2]; // [rsp+70h] [rbp-150h] BYREF
  __int64 v88[2]; // [rsp+80h] [rbp-140h] BYREF
  __int64 v89; // [rsp+90h] [rbp-130h]
  __int64 v90; // [rsp+98h] [rbp-128h]
  __m128 v91; // [rsp+B0h] [rbp-110h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-100h]
  unsigned __int8 *v93; // [rsp+C8h] [rbp-F8h]
  __int64 v94; // [rsp+D0h] [rbp-F0h]
  __int64 v95; // [rsp+D8h] [rbp-E8h]
  unsigned int v96; // [rsp+E0h] [rbp-E0h]
  __m128 v97; // [rsp+F0h] [rbp-D0h] BYREF
  __int64 v98; // [rsp+100h] [rbp-C0h]
  __int64 v99; // [rsp+108h] [rbp-B8h]
  __int64 v100; // [rsp+110h] [rbp-B0h]
  __int64 v101; // [rsp+118h] [rbp-A8h]
  unsigned int v102; // [rsp+120h] [rbp-A0h]
  __m128 v103; // [rsp+130h] [rbp-90h] BYREF
  _DWORD *v104; // [rsp+140h] [rbp-80h]
  __int64 v105; // [rsp+148h] [rbp-78h]
  unsigned __int64 v106; // [rsp+150h] [rbp-70h] BYREF
  __int64 v107; // [rsp+158h] [rbp-68h]
  _QWORD v108[2]; // [rsp+160h] [rbp-60h] BYREF
  _QWORD v109[10]; // [rsp+170h] [rbp-50h] BYREF

  v7 = a5;
  v9 = (__int64)a2;
  v85 = a4;
  v84 = a6;
  v109[3] = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( a5 | a3 )
    {
      if ( !under_debugger )
        sub_37DDE0(51557);
LABEL_207:
      BUG();
    }
    v10 = v85;
    if ( v85 )
    {
      v77 = v84;
      if ( v84 )
        goto LABEL_6;
    }
LABEL_51:
    if ( !under_debugger )
      sub_37DDE0(50294);
    goto LABEL_207;
  }
  v10 = v85;
  if ( !v85 )
    goto LABEL_51;
  v77 = v84;
  if ( !v84 )
    goto LABEL_51;
  if ( a5 | a3 )
  {
    sub_11D2F0(a2, a3, v85);
    sub_11D2F0(a2, v7, v84);
  }
LABEL_6:
  v11 = a7 & 1;
  v74 = a7 & 1;
  if ( (a7 & 1) == 0 )
  {
    if ( *(_DWORD *)(v10 + 4) != *(_DWORD *)(v77 + 4) )
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
      if ( (unsigned int)(*(_DWORD *)v13 - 8) > 1 || *(_DWORD *)(v13 + 36) < *(_DWORD *)(v77 + 4) )
        break;
      v12 = *(_BYTE *)(v13 + 32);
      v10 = v13 + 32;
      if ( v12 != 4 )
        goto LABEL_13;
    }
    v12 = *(_BYTE *)v10;
LABEL_13:
    v85 = v10;
    if ( *(_BYTE *)v77 != 4 )
      goto LABEL_19;
  }
  else
  {
    v85 = v10;
    if ( *(_BYTE *)v77 != 4 )
    {
      v84 = v77;
      goto LABEL_32;
    }
  }
  v14 = v77;
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
  v77 = v14;
LABEL_19:
  v84 = v77;
LABEL_20:
  if ( v12 == 4 && (unsigned int)(**(_DWORD **)(v10 + 8) - 8) <= 1 )
  {
    v17 = v77;
    v18 = v7;
    v16 = v10;
    v19 = a3;
  }
  else
  {
    v16 = v77;
    if ( *(_BYTE *)v77 != 4 || (unsigned int)(**(_DWORD **)(v77 + 8) - 8) > 1 )
      goto LABEL_32;
    v17 = v10;
    v18 = a3;
    v19 = v7;
  }
  if ( a2 )
  {
    v65 = v16;
    v71 = v19;
    v67 = v17;
    v69 = v18;
    if ( (unsigned __int8)sub_12A5C0(a1, (_DWORD)a2, v19, (unsigned int)*(_QWORD *)(v16 + 8) + 32, v18, v17, 1) )
    {
      v20 = *(_QWORD *)(v65 + 8);
      v21 = a2[4].m128i_i64[0];
      v97.m128_u64[1] = v71;
      v97.m128_u64[0] = (unsigned __int64)a2;
      v100 = 0;
      v99 = v20 + 32;
      v101 = 0;
      v102 = 0;
      v98 = 0;
      sub_125CA0(v21, &v97, 0);
      v22 = a2[4].m128i_i64[0];
      v103.m128_u64[0] = (unsigned __int64)a2;
      v72 = (_DWORD *)v98;
      v103.m128_u64[1] = v69;
      v105 = v67;
      v106 = 0;
      v107 = 0;
      LODWORD(v108[0]) = 0;
      v104 = nullptr;
      sub_125CA0(v22, &v103, 0);
      if ( v72 )
      {
        if ( v104 == v72 )
        {
          v23 = *(_DWORD **)(v65 + 8);
          if ( *v72 == *v23 && v72[9] <= v23[9] )
            return 1;
        }
      }
    }
  }
LABEL_32:
  v24 = *(_WORD *)(v10 + 2);
  if ( v24 && *(_WORD *)(v77 + 2) == v24 && (v74 || *(_DWORD *)(v10 + 4) == *(_DWORD *)(v77 + 4)) )
    return 1;
  if ( sub_121110((unsigned __int8 *)v10, a1, v77, v11) )
  {
    if ( (a7 & 2) != 0 )
      return 1;
    *((_QWORD *)&v27 + 1) = a3;
    *(_QWORD *)&v27 = v9;
    if ( (unsigned __int8)sub_120A00(v27, v10, v7, v77) )
      return 1;
  }
  LOBYTE(v25) = a3 == 0 && a3 == v7;
  if ( (_BYTE)v25 )
    return 0;
  if ( !v9 )
  {
    if ( !under_debugger )
      sub_37DDE0(51660);
    goto LABEL_207;
  }
  if ( *(_DWORD *)(v10 + 4) != -1 && *(_DWORD *)(v77 + 4) != -1 )
  {
    v87[1] = 0;
    v87[0] = 0xFFFFFFFF00000000LL;
    if ( *(_DWORD *)(v10 + 4) != *(_DWORD *)(v77 + 4) )
    {
      if ( (a7 & 1) == 0 )
      {
LABEL_47:
        v78 = v25;
        sub_1188E0((__int64)v87);
        return v78;
      }
      if ( sub_127F60(a1, (unsigned __int64)v87, (unsigned __int64 *)&v85, &v84, a3, v7) )
        goto LABEL_63;
    }
    if ( (v70 = (unsigned __int8 *)v85, v79 = v84, *(_BYTE *)v85 == 4)
      && *(_BYTE *)v84 == 4
      && (unsigned __int8)sub_12C160(a1, v9, a3, *(_QWORD *)(v85 + 8), v7, *(_QWORD *)(v84 + 8), v11)
      || (unsigned __int8)sub_12A030(v9, a3, v7, v70, (unsigned __int8 *)v79, v11) )
    {
LABEL_63:
      LOBYTE(v25) = 1;
      goto LABEL_47;
    }
    v28 = *(_QWORD *)(v9 + 64);
    v91.m128_u64[0] = v9;
    v93 = v70;
    v91.m128_u64[1] = a3;
    v92 = 0;
    v94 = 0;
    v95 = 0;
    v96 = 0;
    sub_125CA0(v28, &v91, 0);
    v29 = *(_QWORD *)(v9 + 64);
    v97.m128_u64[0] = v9;
    v97.m128_u64[1] = v7;
    v68 = v96;
    v99 = v79;
    v73 = v92;
    v98 = 0;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    sub_125CA0(v29, &v97, 0);
    v31 = (__m128 *)v98;
    LOBYTE(v25) = 0;
    if ( !(v98 | v73) )
      goto LABEL_47;
    v32 = v102;
    if ( v73 == v98 && v68 == v102 )
    {
LABEL_67:
      LOBYTE(v25) = 1;
      goto LABEL_47;
    }
    if ( v73 )
    {
      if ( v98 )
      {
        v33 = *(_DWORD *)v98;
        v34 = *(unsigned int *)v73;
        v35 = v34;
        if ( (_DWORD)v34 == *(_DWORD *)v98 )
          goto LABEL_94;
        if ( v33 == 10 )
        {
          if ( (v68 == 2 || v68 == 1 && v74) && *(_BYTE *)(v98 + 32) == 4 && (_DWORD)v34 == **(_DWORD **)(v98 + 40) )
          {
            v68 = 1;
            v33 = *(_DWORD *)v73;
            v31 = *(__m128 **)(v98 + 40);
          }
        }
        else if ( v33 == 11 && v68 == 3 )
        {
          if ( *(_BYTE *)(v98 + 32) == 4 && (v33 = **(_DWORD **)(v98 + 40), (_DWORD)v34 == v33) )
          {
            v68 = 1;
            v31 = *(__m128 **)(v98 + 40);
          }
          else
          {
            v68 = 3;
            v33 = 11;
          }
        }
        if ( (_DWORD)v34 == 10 )
        {
          if ( v102 != 2 && (v102 != 1 || !v74) )
          {
            if ( (a7 & 1) != 0 )
            {
LABEL_85:
              if ( (unsigned int)(v33 - 8) <= 1 )
              {
                do
                {
                  if ( v31[2].m128_i8[0] != 4 )
                    break;
                  v31 = (__m128 *)v31[2].m128_u64[1];
                }
                while ( (unsigned int)(v31->m128_i32[0] - 8) <= 1 );
              }
LABEL_89:
              v34 = v31->m128_u32[0];
              if ( *(_DWORD *)v73 != (_DWORD)v34 )
              {
LABEL_90:
                if ( v68 != 1 || v32 != 1 )
                  goto LABEL_47;
                v80 = v31;
                if ( !(unsigned __int8)sub_12DE30(v9, v73, v31, v34, v30, 0) )
                {
                  LOBYTE(v25) = sub_12DE30(v9, v80, v73, v37, v38, v39);
                  goto LABEL_47;
                }
                goto LABEL_67;
              }
LABEL_94:
              if ( v68 != 2 )
                goto LABEL_95;
              goto LABEL_146;
            }
            if ( v31->m128_i32[0] != 10 )
              goto LABEL_90;
            if ( v68 == 2 )
            {
LABEL_146:
              v68 = 2;
              v74 |= *(_DWORD *)(v73 + 68) > *(_DWORD *)(v99 + 4);
LABEL_95:
              if ( v32 == 2 )
                v74 |= v31[4].m128_i32[1] > *((_DWORD *)v93 + 1);
              goto LABEL_97;
            }
            goto LABEL_97;
          }
        }
        else if ( (_DWORD)v34 != 11 || v102 != 3 )
        {
          if ( (a7 & 1) == 0 )
            goto LABEL_89;
          goto LABEL_80;
        }
        if ( *(_BYTE *)(v73 + 32) != 4 || (v62 = *(int **)(v73 + 40), v33 != *v62) )
        {
          if ( (a7 & 1) == 0 )
            goto LABEL_89;
          goto LABEL_85;
        }
        v73 = *(_QWORD *)(v73 + 40);
        if ( (a7 & 1) != 0 )
        {
          v35 = *v62;
          v32 = 1;
LABEL_80:
          if ( (unsigned int)(v35 - 8) <= 1 )
          {
            v36 = v73;
            do
            {
              if ( *(_BYTE *)(v36 + 32) != 4 )
                break;
              v36 = *(_QWORD *)(v36 + 40);
            }
            while ( (unsigned int)(*(_DWORD *)v36 - 8) <= 1 );
            v73 = v36;
          }
          goto LABEL_85;
        }
        v32 = 1;
        if ( v68 == 2 )
          v74 |= v62[17] > *(_DWORD *)(v99 + 4);
LABEL_97:
        v81 = v32;
        v66 = v31;
        v106 = 0xFFFFFFFF00000000LL;
        v107 = 0;
        v108[0] = 0xFFFFFFFF00000000LL;
        v108[1] = 0;
        v109[0] = 0xFFFFFFFF00000000LL;
        v109[1] = 0;
        sub_32B5A0(&v103, -1);
        v41 = v68;
        v42 = v66;
        if ( v81 != v68 )
        {
          if ( !v74 )
            goto LABEL_127;
          if ( v68 == 3 || v81 == 3 )
          {
            if ( v68 == 2 || v81 == 2 || *((_DWORD *)v93 + 1) == *(_DWORD *)(v99 + 4) )
              goto LABEL_127;
            if ( v68 == 1 )
            {
              v61 = v73;
              v60 = (__int64)v66;
            }
            else
            {
              v60 = v73;
              v61 = (__int64)v66;
            }
            if ( *(_DWORD *)(v61 + 68) <= *(_DWORD *)(v60 + 68) )
              goto LABEL_127;
            sub_120EE0((__int64)&v103, v61);
            sub_127230((__int64)&v103, a1, 11, *(_DWORD *)(v60 + 68), 1);
            v42 = v66;
            if ( v68 == 1 )
              v73 = (__int64)&v103;
            else
              v42 = &v103;
          }
        }
        v75 = v42;
        if ( *(_DWORD *)v73 != 1
          && !sub_11AF70((_BYTE *)v73, *(_QWORD *)(a1 + 96), 0, v41, v40, 0)
          && v75->m128_i32[0] != 1 )
        {
          v45 = sub_11AF70(v75, *(_QWORD *)(a1 + 96), 0, v43, v44, 0);
          if ( !v45 )
          {
            v46 = *(_DWORD *)(v73 + 68);
            v47 = v75[4].m128_i32[1];
            if ( v46 == v47 || v46 >= *((_DWORD *)v93 + 1) && v47 >= *(_DWORD *)(v99 + 4) )
            {
              if ( (__m128 *)v73 == v75 )
              {
                v45 = 1;
              }
              else if ( *(_DWORD *)v73 != 61
                     && v75->m128_i32[0] != 61
                     && (unsigned __int8)sub_12C160(
                                           *(_QWORD *)(*(_QWORD *)(v9 + 480) + 112LL),
                                           0,
                                           0,
                                           v73,
                                           0,
                                           (_DWORD)v75,
                                           1) )
              {
                sub_1201C0((__int64)v88, v9, v73, 1u);
                v48 = v91.m128_i64[1];
                v49 = v97.m128_i64[1];
                if ( v91.m128_u64[0] == v97.m128_u64[0] )
                {
                  *((_QWORD *)&v63 + 1) = v91.m128_u64[1];
                  *(_QWORD *)&v63 = v9;
                  if ( !(unsigned __int8)sub_120A00(v63, (__int64)v93, v97.m128_i64[1], v99) )
                  {
LABEL_198:
                    if ( v89 )
                    {
                      v90 = 0;
                      qfree(v89);
                    }
                    qfree(v88[0]);
                    goto LABEL_201;
                  }
                  if ( v49 )
                  {
                    v64 = *(_QWORD *)(v49 + 8);
                    if ( v64 )
                    {
                      while ( v48 != v64 )
                      {
                        v64 = *(_QWORD *)(v64 + 8);
                        if ( !v64 )
                          goto LABEL_196;
                      }
                      v48 = v49;
                      v49 = v64;
                    }
                  }
LABEL_196:
                  v57 = sub_A55E0(v9, v88, v48, v49, 1u);
                }
                else
                {
                  while ( 1 )
                  {
                    if ( v91.m128_u64[0] == v9 )
                      goto LABEL_119;
                    if ( v97.m128_u64[0] == v9 )
                      break;
                    if ( *(_DWORD *)(v9 + 352) != 1 )
                    {
                      if ( !under_debugger )
                        sub_37DDE0(52396);
                      goto LABEL_207;
                    }
                    v50 = *(_QWORD *)(v9 + 64);
                    v51 = **(unsigned int **)(v9 + 344);
                    if ( (unsigned int)v51 >= *(_DWORD *)(v50 + 64) )
                      sub_117440(&v103);
                    v9 = *(_QWORD *)(*(_QWORD *)(v50 + 528) + 8 * v51);
                  }
                  if ( v91.m128_u64[0] == v9 )
                  {
LABEL_119:
                    v49 = v91.m128_i64[1];
                    v52 = &v91;
                    v53 = &v97;
                  }
                  else
                  {
                    v53 = &v91;
                    v52 = &v97;
                  }
                  *((_QWORD *)&v54 + 1) = v88;
                  *(_QWORD *)&v54 = v9;
                  sub_11F9E0(v54, v52[1].m128_i64[1], 1u, 0xFFFF0000);
                  while ( v9 != v53->m128_u64[0] )
                  {
                    if ( sub_A55E0(v9, v88, *(_QWORD *)(v9 + 48), v49, 1u) )
                      goto LABEL_198;
                    if ( *(_DWORD *)(v9 + 352) != 1 )
                    {
                      if ( !under_debugger )
                        sub_37DDE0(52397);
                      goto LABEL_207;
                    }
                    v55 = *(_QWORD *)(v9 + 64);
                    v56 = **(unsigned int **)(v9 + 344);
                    if ( (unsigned int)v56 >= *(_DWORD *)(v55 + 64) )
                      sub_117440(v9);
                    v9 = *(_QWORD *)(*(_QWORD *)(v55 + 528) + 8 * v56);
                  }
                  v57 = sub_A55E0(v9, v88, v53->m128_i64[1], v49, 1u);
                }
                v45 = v57 == 0;
                goto LABEL_198;
              }
LABEL_201:
              sub_78950((__int64)&v103);
              LOBYTE(v25) = v45;
              goto LABEL_47;
            }
          }
        }
LABEL_127:
        sub_1188E0((__int64)v109);
        sub_1188E0((__int64)v108);
        sub_1188E0((__int64)&v106);
        LOBYTE(v25) = 0;
        goto LABEL_47;
      }
      if ( v73 == v100 )
        goto LABEL_47;
      v58 = v91.m128_i32[2];
    }
    else
    {
      if ( v94 == v98 )
        goto LABEL_47;
      v68 = v102;
      LODWORD(v7) = a3;
      v73 = v98;
      v58 = v97.m128_i32[2];
      v79 = (__int64)v70;
    }
    if ( *(_DWORD *)v73 == 4 )
    {
      sub_11F580((__int64)&v103, (unsigned __int8 *)(v73 + 32));
      if ( v68 != 3 || (v59 = sub_1234F0((unsigned __int64)&v103, a1, *(_QWORD *)(v73 + 24), *(_DWORD *)(v79 + 4))) != 0 )
        v59 = sub_12A5C0(
                a1,
                v9,
                v58,
                (unsigned int)&v103,
                v7,
                v79,
                a7 | (unsigned int)(unsigned __int8)(v74 | (v68 == 2)));
      v83 = v59;
      sub_1188E0((__int64)&v103);
      LOBYTE(v25) = v83;
    }
    else if ( (unsigned int)(*(_DWORD *)v73 - 8) > 1 )
    {
      if ( v68 != 3 && v74 )
      {
        v103 = (__m128)0xFFFFFFFF00000000LL;
        v86 = (__int64)v93;
        v88[0] = v99;
        v82 = sub_127F60(a1, (unsigned __int64)&v103, (unsigned __int64 *)&v86, v88, v91.m128_i64[1], v97.m128_i64[1]);
        sub_1188E0((__int64)&v103);
        LOBYTE(v25) = v82;
      }
    }
    else if ( *(_DWORD *)(v79 + 4) <= *(_DWORD *)(v73 + 36) && v68 != 3 )
    {
      LOBYTE(v25) = sub_12A5C0(a1, v9, v58, (int)v73 + 32, v7, v79, 1);
    }
    goto LABEL_47;
  }
  return v25;
}
