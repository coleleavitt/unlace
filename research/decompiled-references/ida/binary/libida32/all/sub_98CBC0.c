void __fastcall sub_98CBC0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int *v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 *v24; // rsi
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r15
  __int64 v31; // rdx
  int v32; // eax
  __int64 *v33; // rcx
  unsigned __int64 v34; // rdi
  unsigned int v35; // r14d
  unsigned int v36; // esi
  __int64 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rdx
  __int64 *v46; // r10
  __int64 v47; // r9
  _QWORD *v48; // rsi
  __int64 *v49; // rdx
  int v50; // r11d
  __int64 v51; // rsi
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 v54; // r14
  unsigned int v55; // edi
  __int64 v56; // rsi
  __int64 v57; // r8
  int v58; // edi
  __int64 v59; // rax
  int v60; // edi
  int v61; // esi
  __int64 v62; // rdi
  __int64 v63; // rcx
  int v64; // r10d
  int v65; // esi
  int v66; // r9d
  __int64 v67; // rsi
  __int64 v68; // r10
  int v69; // r10d
  __int32 v70; // r14d
  __int32 v71; // eax
  __int32 v72; // eax
  unsigned __int64 v73; // rdi
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // r11
  __int64 v77; // rdx
  int v78; // r9d
  __int64 *v79; // r10
  _QWORD *i; // rdx
  __int64 *v81; // rax
  __int64 v82; // rsi
  __int64 v83; // r12
  __int64 v84; // rbp
  __int64 v85; // rdx
  unsigned int v86; // edi
  _QWORD *v87; // rsi
  __int64 v88; // r8
  __int64 v89; // rax
  int v90; // ecx
  int v91; // eax
  unsigned int v92; // r14d
  __int64 *v93; // rdi
  __int64 v94; // rcx
  _QWORD *v95; // rcx
  _QWORD *v96; // rdx
  __int64 v97; // rdx
  _QWORD *j; // rdx
  _QWORD *v99; // rcx
  __int64 v100; // rcx
  unsigned __int64 v102; // [rsp+18h] [rbp-C0h]
  unsigned int v103; // [rsp+18h] [rbp-C0h]
  __int64 *v104; // [rsp+18h] [rbp-C0h]
  int v105; // [rsp+18h] [rbp-C0h]
  __int64 *v106; // [rsp+20h] [rbp-B8h]
  unsigned int v107; // [rsp+20h] [rbp-B8h]
  int v108; // [rsp+28h] [rbp-B0h]
  int v109; // [rsp+30h] [rbp-A8h]
  __m128i v110[2]; // [rsp+40h] [rbp-98h] BYREF
  __m128i v111; // [rsp+60h] [rbp-78h] BYREF
  __m128i v112; // [rsp+70h] [rbp-68h]
  __m128i v113; // [rsp+80h] [rbp-58h]
  __int64 v114; // [rsp+90h] [rbp-48h]

  v6 = *(_QWORD *)(a2 + 8);
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned int *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    v8 = (__int64)&v7[2 * *v7 + 2];
    v9 = (__int64 *)(v7 + 2);
    if ( (__int64 *)v8 == v9 )
      return;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_5:
        v11 = *v9;
        if ( (*(_BYTE *)(*v9 + 28) & 0x7Fu) - 40 > 6 )
          goto LABEL_4;
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
          goto LABEL_4;
        v13 = sub_F3F530(v12);
        if ( !v13 || (*(_BYTE *)(v13 + 29) & 1) == 0 )
          goto LABEL_4;
        v14 = sub_B68690(v13);
        v15 = *(__int64 **)v14;
        v16 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
        if ( *(_QWORD *)v14 >= v16 )
        {
          if ( v15 == (__int64 *)v16 )
            goto LABEL_4;
          if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 184 )
          {
            v40 = (__int64 *)(v16 + 8);
            while ( v15 != v40 )
            {
              v41 = *v40++;
              if ( *(_WORD *)(v41 + 36) == 184 )
                goto LABEL_14;
            }
            goto LABEL_4;
          }
        }
        else
        {
          v17 = *(__int64 **)v14;
          while ( *(_WORD *)(*v17 + 36) != 184 )
          {
            if ( (__int64 *)v16 == ++v17 )
              goto LABEL_4;
          }
          if ( (__int64 *)v16 == v17 )
            goto LABEL_4;
        }
LABEL_14:
        if ( (unsigned __int8)sub_B4F880(v11) )
          break;
LABEL_41:
        v30 = *(_QWORD *)(a1 + 8);
        a5 = *(unsigned int *)(v30 + 32);
        v33 = *(__int64 **)(v30 + 16);
        if ( !(_DWORD)a5 )
          goto LABEL_42;
LABEL_26:
        v34 = (unsigned int)(a5 - 1);
        v35 = ((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4);
        v36 = v34 & v35;
        v37 = &v33[2 * ((unsigned int)v34 & v35)];
        v38 = *v37;
        if ( v11 != *v37 )
        {
          v69 = 1;
          a6 = 0;
          if ( v38 != -4096 )
          {
            while ( 1 )
            {
              if ( !a6 && v38 == -8192 )
                a6 = (__int64)v37;
              v36 = v34 & (v69 + v36);
              v37 = &v33[2 * v36];
              v38 = *v37;
              if ( v11 == *v37 )
                goto LABEL_27;
              if ( v38 == -4096 )
                break;
              ++v69;
            }
            if ( a6 )
              v37 = (__int64 *)a6;
          }
          v61 = *(_DWORD *)(v30 + 24) + 1;
          a6 = (unsigned int)(4 * v61);
          if ( (unsigned int)a6 >= 3 * (int)a5 )
          {
LABEL_42:
            v106 = v33;
            v103 = a5;
            v42 = (((((((unsigned int)(2 * a5 - 1) | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * a5 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * a5 - 1) | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * a5 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * a5 - 1) | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * a5 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * a5 - 1) | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * a5 - 1)
                | ((unsigned __int64)(unsigned int)(2 * a5 - 1) >> 1);
            v43 = ((v42 >> 16) | v42) + 1;
            if ( (unsigned int)v43 < 0x40 )
              LODWORD(v43) = 64;
            *(_DWORD *)(v30 + 32) = v43;
            v44 = sub_220C370(16LL * (unsigned int)v43, 8, 64, v33, a5, a6);
            *(_QWORD *)(v30 + 16) = v44;
            if ( v106 )
            {
              *(_QWORD *)(v30 + 24) = 0;
              v45 = (_QWORD *)v44;
              v46 = &v106[2 * v103];
              v47 = *(unsigned int *)(v30 + 32);
              v48 = (_QWORD *)(v44 + 16 * v47);
              if ( (_QWORD *)v44 != v48 )
              {
                do
                {
                  *v45 = -4096;
                  v45 += 2;
                }
                while ( v48 != v45 );
              }
              v49 = v106;
              v50 = v47 - 1;
              if ( v106 != v46 )
              {
                v51 = v8;
                v52 = v11;
                v53 = v51;
                do
                {
                  v54 = *v49;
                  if ( *v49 != -4096 && v54 != -8192 )
                  {
                    if ( !(_DWORD)v47 )
                    {
                      *(_QWORD *)&dword_0 = *v49;
                      BUG();
                    }
                    v55 = v50 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
                    v56 = v44 + 16LL * v55;
                    v57 = *(_QWORD *)v56;
                    if ( *(_QWORD *)v56 != v54 && v57 != -4096 )
                    {
                      v108 = 1;
                      v100 = 0;
                      while ( 1 )
                      {
                        if ( !v100 && v57 == -8192 )
                          v100 = v56;
                        v55 = v50 & (v108 + v55);
                        v56 = v44 + 16LL * v55;
                        v57 = *(_QWORD *)v56;
                        if ( v54 == *(_QWORD *)v56 )
                          break;
                        if ( v57 == -4096 )
                        {
                          if ( v100 )
                            v56 = v100;
                          break;
                        }
                        ++v108;
                      }
                    }
                    v58 = *((_DWORD *)v49 + 2);
                    *(_QWORD *)v56 = v54;
                    *(_DWORD *)(v56 + 8) = v58;
                    ++*(_DWORD *)(v30 + 24);
                  }
                  v49 += 2;
                }
                while ( v46 != v49 );
                v59 = v53;
                v11 = v52;
                v8 = v59;
              }
              operator delete();
              v44 = *(_QWORD *)(v30 + 16);
              v60 = *(_DWORD *)(v30 + 32);
              v61 = *(_DWORD *)(v30 + 24) + 1;
            }
            else
            {
              v94 = *(unsigned int *)(v30 + 32);
              *(_QWORD *)(v30 + 24) = 0;
              v60 = v94;
              v95 = (_QWORD *)(v44 + 16 * v94);
              if ( (_QWORD *)v44 != v95 )
              {
                v96 = (_QWORD *)v44;
                do
                {
                  *v96 = -4096;
                  v96 += 2;
                }
                while ( v95 != v96 );
              }
              v61 = 1;
            }
            if ( !v60 )
            {
LABEL_148:
              ++*(_DWORD *)(v30 + 24);
              BUG();
            }
            a5 = (unsigned int)(v60 - 1);
            LODWORD(v62) = a5 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
            v37 = (__int64 *)(v44 + 16LL * (unsigned int)v62);
            v63 = *v37;
            if ( v11 != *v37 )
            {
              v64 = 1;
              a6 = 0;
              if ( v63 == -4096 )
                goto LABEL_60;
              while ( 1 )
              {
                if ( !a6 && v63 == -8192 )
                  a6 = (__int64)v37;
                v62 = (unsigned int)a5 & ((_DWORD)v62 + v64);
                v37 = (__int64 *)(v44 + 16 * v62);
                v63 = *v37;
                if ( v11 == *v37 )
                  break;
                if ( v63 == -4096 )
                {
                  if ( !a6 )
                    goto LABEL_60;
                  v63 = *(_QWORD *)a6;
                  v37 = (__int64 *)a6;
                  break;
                }
                ++v64;
              }
            }
          }
          else
          {
            a6 = (unsigned int)a5 >> 3;
            if ( (int)a5 - *(_DWORD *)(v30 + 28) - v61 > (unsigned int)a6 )
            {
              v63 = *v37;
              goto LABEL_69;
            }
            v107 = a5;
            v104 = v33;
            v73 = (v34 >> 1) | v34;
            v74 = (((((((v73 | (v73 >> 2)) >> 4) | v73 | (v73 >> 2)) >> 8) | ((v73 | (v73 >> 2)) >> 4)
                                                                           | v73
                                                                           | (v73 >> 2)) >> 16)
                 | ((((v73 | (v73 >> 2)) >> 4) | v73 | (v73 >> 2)) >> 8)
                 | ((v73 | (v73 >> 2)) >> 4)
                 | v73
                 | (v73 >> 2))
                + 1;
            if ( (unsigned int)v74 < 0x40 )
              LODWORD(v74) = 64;
            *(_DWORD *)(v30 + 32) = v74;
            v75 = (_QWORD *)sub_220C370(16LL * (unsigned int)v74, 8, 64, v33, a5, a6);
            a5 = v107;
            v76 = v75;
            *(_QWORD *)(v30 + 16) = v75;
            if ( v104 )
            {
              v77 = *(unsigned int *)(v30 + 32);
              *(_QWORD *)(v30 + 24) = 0;
              v78 = v77;
              v79 = &v104[2 * v107];
              for ( i = &v75[2 * v77]; i != v75; v75 += 2 )
                *v75 = -4096;
              v81 = v104;
              v105 = v78 - 1;
              v82 = v8;
              v83 = v11;
              v84 = v82;
              do
              {
                v85 = *v81;
                if ( *v81 != -8192 && v85 != -4096 )
                {
                  if ( !v78 )
                  {
                    *(_QWORD *)&dword_0 = *v81;
                    BUG();
                  }
                  v86 = v105 & (((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4));
                  v87 = &v76[2 * v86];
                  v88 = *v87;
                  if ( *v87 != v85 && v88 != -4096 )
                  {
                    v109 = 1;
                    v99 = nullptr;
                    while ( 1 )
                    {
                      if ( v88 == -8192 && !v99 )
                        v99 = v87;
                      v86 = v105 & (v109 + v86);
                      ++v109;
                      v87 = &v76[2 * v86];
                      v88 = *v87;
                      if ( v85 == *v87 )
                        break;
                      if ( v88 == -4096 )
                      {
                        if ( v99 )
                          v87 = v99;
                        break;
                      }
                    }
                  }
                  *v87 = v85;
                  *((_DWORD *)v87 + 2) = *((_DWORD *)v81 + 2);
                  ++*(_DWORD *)(v30 + 24);
                }
                v81 += 2;
              }
              while ( v79 != v81 );
              v89 = v84;
              v11 = v83;
              v8 = v89;
              operator delete();
              v76 = *(_QWORD **)(v30 + 16);
              v90 = *(_DWORD *)(v30 + 32);
              v61 = *(_DWORD *)(v30 + 24) + 1;
            }
            else
            {
              v97 = *(unsigned int *)(v30 + 32);
              *(_QWORD *)(v30 + 24) = 0;
              v90 = v97;
              for ( j = &v75[2 * v97]; j != v75; v75 += 2 )
                *v75 = -4096;
              v61 = 1;
            }
            if ( !v90 )
              goto LABEL_148;
            v91 = v90 - 1;
            v92 = (v90 - 1) & v35;
            v37 = &v76[2 * v92];
            v63 = *v37;
            if ( v11 != *v37 )
            {
              a5 = 1;
              v93 = nullptr;
              if ( v63 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v93 && v63 == -8192 )
                    v93 = v37;
                  a6 = (unsigned int)(a5 + 1);
                  a5 = v91 & (v92 + (unsigned int)a5);
                  v92 = a5;
                  v37 = &v76[2 * (unsigned int)a5];
                  v63 = *v37;
                  if ( v11 == *v37 )
                    goto LABEL_69;
                  if ( v63 == -4096 )
                  {
                    if ( !v93 )
                      break;
                    v63 = *v93;
                    v37 = v93;
                    goto LABEL_69;
                  }
                  LODWORD(a5) = a6;
                }
              }
LABEL_60:
              *(_DWORD *)(v30 + 24) = v61;
LABEL_71:
              *v37 = v11;
              *((_DWORD *)v37 + 2) = 0;
              goto LABEL_27;
            }
          }
LABEL_69:
          *(_DWORD *)(v30 + 24) = v61;
          if ( v63 != -4096 )
            --*(_DWORD *)(v30 + 28);
          goto LABEL_71;
        }
LABEL_27:
        ++v9;
        *((_DWORD *)v37 + 2) = 1;
        if ( (__int64 *)v8 == v9 )
        {
LABEL_28:
          v39 = *(_QWORD *)(a2 + 8);
          if ( v39 && (v39 & 1) == 0 && (*(_BYTE *)(v39 + 28) & 0x7Fu) - 40 <= 6 )
          {
            v111.m128i_i64[0] = a2;
            v112.m128i_i64[0] = v39;
            v111.m128i_i32[2] = 4;
            sub_988660(v110, a1 + 16, v111.m128i_i64, (const __m128i *)&v111.m128i_u64[1], a5, a6);
          }
          return;
        }
      }
      v18 = sub_B4F900(v11);
      v19 = sub_BD7BC0(v18);
      if ( (*(_WORD *)v19 & 0x1FF) == 0x3C && (*(_DWORD *)v19 & 0x80000) == 0 )
        v19 = *(_QWORD *)(v19 + 16);
      v20 = sub_BD7CB0(v19);
      v21 = *(unsigned int *)(a1 + 32);
      v22 = *(_QWORD *)(a1 + 16);
      if ( (_DWORD)v21 )
      {
        v23 = (v21 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
        v24 = (__int64 *)(v22 + ((unsigned __int64)v23 << 6));
        v25 = *v24;
        if ( v20 == *v24 )
          goto LABEL_20;
        v65 = 1;
        if ( v25 != -4096 )
          break;
      }
LABEL_64:
      sub_9885F0((__m128 *)&v111, (_QWORD *)(v22 + (v21 << 6)), (_QWORD *)(v22 + (v21 << 6)), a1 + 16, 1);
      v26 = v111.m128i_i64[0];
LABEL_21:
      v102 = v26;
      v27 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
      sub_9885F0((__m128 *)&v111, v27, v27, a1 + 16, 1);
      if ( v111.m128i_i64[0] == v102 )
        goto LABEL_41;
      v30 = *(_QWORD *)(a1 + 8);
      v111 = _mm_loadu_si128((const __m128i *)(v102 + 8));
      v112 = _mm_loadu_si128((const __m128i *)(v102 + 24));
      v113 = _mm_loadu_si128((const __m128i *)(v102 + 40));
      v31 = *(_QWORD *)(v102 + 56);
      v114 = v31;
      v32 = *(_DWORD *)(v102 + 8);
      switch ( v32 )
      {
        case 4:
          v71 = sub_98A100(v30, v111.m128i_i64[1]);
          v30 = *(_QWORD *)(a1 + 8);
          v70 = v71;
          break;
        case 5:
          v72 = sub_98C240(v30, v111.m128i_i64[1]);
          v30 = *(_QWORD *)(a1 + 8);
          v70 = v72;
          break;
        case 1:
          v70 = v111.m128i_i32[2];
          break;
        default:
          goto LABEL_25;
      }
      if ( !v70 )
      {
LABEL_25:
        a5 = *(unsigned int *)(v30 + 32);
        v33 = *(__int64 **)(v30 + 16);
        if ( !(_DWORD)a5 )
          goto LABEL_42;
        goto LABEL_26;
      }
      v110[0].m128i_i64[0] = v11;
      *(_DWORD *)sub_987DF0(v30 + 16, v110[0].m128i_i64, v31, v28, v29, (_QWORD *)a6) = v70;
LABEL_4:
      if ( (__int64 *)v8 == ++v9 )
        goto LABEL_28;
    }
    while ( 1 )
    {
      v66 = v65 + 1;
      v67 = ((_DWORD)v21 - 1) & (v23 + v65);
      v23 = v67;
      v24 = (__int64 *)(v22 + (v67 << 6));
      v68 = *v24;
      if ( v20 == *v24 )
        break;
      v65 = v66;
      if ( v68 == -4096 )
        goto LABEL_64;
    }
LABEL_20:
    sub_9885F0((__m128 *)&v111, v24, (_QWORD *)((v21 << 6) + v22), a1 + 16, 1);
    v26 = v111.m128i_i64[0];
    goto LABEL_21;
  }
  if ( v6 )
  {
    v8 = a2 + 16;
    v9 = (__int64 *)(a2 + 8);
    goto LABEL_5;
  }
}

