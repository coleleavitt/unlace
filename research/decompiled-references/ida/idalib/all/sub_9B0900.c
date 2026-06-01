void __fastcall sub_9B0900(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 *v45; // rcx
  _QWORD *v46; // rdx
  __int64 *v47; // r10
  __int64 v48; // r9
  _QWORD *v49; // rsi
  __int64 *v50; // rdx
  int v51; // r11d
  __int64 v52; // rsi
  __int64 v53; // r12
  __int64 v54; // rbp
  __int64 v55; // r14
  unsigned int v56; // edi
  __int64 v57; // rsi
  __int64 v58; // r8
  int v59; // edi
  __int64 v60; // rax
  int v61; // edi
  int v62; // esi
  __int64 v63; // rdi
  __int64 v64; // rcx
  int v65; // r10d
  int v66; // esi
  int v67; // r9d
  __int64 v68; // rsi
  __int64 v69; // r10
  int v70; // r10d
  __int32 v71; // r14d
  __int32 v72; // eax
  __int32 v73; // eax
  unsigned __int64 v74; // rdi
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // r11
  __int64 v78; // rdx
  int v79; // r9d
  __int64 *v80; // r10
  _QWORD *i; // rdx
  __int64 *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // r12
  __int64 v85; // rbp
  __int64 v86; // rdx
  unsigned int v87; // edi
  _QWORD *v88; // rsi
  __int64 v89; // r8
  __int64 v90; // rax
  int v91; // ecx
  int v92; // eax
  unsigned int v93; // r14d
  __int64 *v94; // rdi
  __int64 v95; // rcx
  _QWORD *v96; // rcx
  _QWORD *v97; // rdx
  __int64 v98; // rdx
  _QWORD *j; // rdx
  _QWORD *v100; // rcx
  __int64 v101; // rcx
  unsigned __int64 v103; // [rsp+18h] [rbp-C0h]
  unsigned int v104; // [rsp+18h] [rbp-C0h]
  __int64 v105; // [rsp+18h] [rbp-C0h]
  __int64 *v106; // [rsp+18h] [rbp-C0h]
  int v107; // [rsp+18h] [rbp-C0h]
  __int64 *v108; // [rsp+20h] [rbp-B8h]
  unsigned int v109; // [rsp+20h] [rbp-B8h]
  __int64 v110; // [rsp+20h] [rbp-B8h]
  __int64 *v111; // [rsp+28h] [rbp-B0h]
  int v112; // [rsp+28h] [rbp-B0h]
  int v113; // [rsp+30h] [rbp-A8h]
  __m128i v114[2]; // [rsp+40h] [rbp-98h] BYREF
  __m128i v115; // [rsp+60h] [rbp-78h] BYREF
  __m128i v116; // [rsp+70h] [rbp-68h]
  __m128i v117; // [rsp+80h] [rbp-58h]
  __int64 v118; // [rsp+90h] [rbp-48h]

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
        v13 = sub_F63270(v12);
        if ( !v13 || (*(_BYTE *)(v13 + 29) & 1) == 0 )
          goto LABEL_4;
        v14 = sub_B8C3D0(v13);
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
        if ( (unsigned __int8)sub_B735C0(v11) )
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
          v70 = 1;
          a6 = 0;
          if ( v38 != -4096 )
          {
            while ( 1 )
            {
              if ( !a6 && v38 == -8192 )
                a6 = (__int64)v37;
              v36 = v34 & (v70 + v36);
              v37 = &v33[2 * v36];
              v38 = *v37;
              if ( v11 == *v37 )
                goto LABEL_27;
              if ( v38 == -4096 )
                break;
              ++v70;
            }
            if ( a6 )
              v37 = (__int64 *)a6;
          }
          v62 = *(_DWORD *)(v30 + 24) + 1;
          a6 = (unsigned int)(4 * v62);
          if ( (unsigned int)a6 >= 3 * (int)a5 )
          {
LABEL_42:
            v108 = v33;
            v104 = a5;
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
            v44 = sub_22300B0(16LL * (unsigned int)v43, 8, 64, v33, a5, a6);
            v45 = v108;
            *(_QWORD *)(v30 + 16) = v44;
            if ( v108 )
            {
              *(_QWORD *)(v30 + 24) = 0;
              v46 = (_QWORD *)v44;
              v105 = 2LL * v104;
              v47 = &v108[v105];
              v48 = *(unsigned int *)(v30 + 32);
              v49 = (_QWORD *)(v44 + 16 * v48);
              if ( (_QWORD *)v44 != v49 )
              {
                do
                {
                  *v46 = -4096;
                  v46 += 2;
                }
                while ( v49 != v46 );
              }
              v50 = v108;
              v51 = v48 - 1;
              if ( v108 != v47 )
              {
                v52 = v8;
                v53 = v11;
                v54 = v52;
                do
                {
                  v55 = *v50;
                  if ( *v50 != -4096 && v55 != -8192 )
                  {
                    if ( !(_DWORD)v48 )
                    {
                      *(_QWORD *)&dword_0 = *v50;
                      BUG();
                    }
                    v56 = v51 & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
                    v57 = v44 + 16LL * v56;
                    v58 = *(_QWORD *)v57;
                    if ( *(_QWORD *)v57 != v55 && v58 != -4096 )
                    {
                      v112 = 1;
                      v101 = 0;
                      while ( 1 )
                      {
                        if ( !v101 && v58 == -8192 )
                          v101 = v57;
                        v56 = v51 & (v112 + v56);
                        v57 = v44 + 16LL * v56;
                        v58 = *(_QWORD *)v57;
                        if ( v55 == *(_QWORD *)v57 )
                          break;
                        if ( v58 == -4096 )
                        {
                          if ( v101 )
                            v57 = v101;
                          break;
                        }
                        ++v112;
                      }
                    }
                    v59 = *((_DWORD *)v50 + 2);
                    *(_QWORD *)v57 = v55;
                    *(_DWORD *)(v57 + 8) = v59;
                    ++*(_DWORD *)(v30 + 24);
                  }
                  v50 += 2;
                }
                while ( v47 != v50 );
                v60 = v54;
                v45 = v108;
                v11 = v53;
                v8 = v60;
              }
              operator delete(v45, v105 * 8, 8);
              v44 = *(_QWORD *)(v30 + 16);
              v61 = *(_DWORD *)(v30 + 32);
              v62 = *(_DWORD *)(v30 + 24) + 1;
            }
            else
            {
              v95 = *(unsigned int *)(v30 + 32);
              *(_QWORD *)(v30 + 24) = 0;
              v61 = v95;
              v96 = (_QWORD *)(v44 + 16 * v95);
              if ( (_QWORD *)v44 != v96 )
              {
                v97 = (_QWORD *)v44;
                do
                {
                  *v97 = -4096;
                  v97 += 2;
                }
                while ( v96 != v97 );
              }
              v62 = 1;
            }
            if ( !v61 )
            {
LABEL_148:
              ++*(_DWORD *)(v30 + 24);
              BUG();
            }
            a5 = (unsigned int)(v61 - 1);
            LODWORD(v63) = a5 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
            v37 = (__int64 *)(v44 + 16LL * (unsigned int)v63);
            v64 = *v37;
            if ( v11 != *v37 )
            {
              v65 = 1;
              a6 = 0;
              if ( v64 == -4096 )
                goto LABEL_60;
              while ( 1 )
              {
                if ( !a6 && v64 == -8192 )
                  a6 = (__int64)v37;
                v63 = (unsigned int)a5 & ((_DWORD)v63 + v65);
                v37 = (__int64 *)(v44 + 16 * v63);
                v64 = *v37;
                if ( v11 == *v37 )
                  break;
                if ( v64 == -4096 )
                {
                  if ( !a6 )
                    goto LABEL_60;
                  v64 = *(_QWORD *)a6;
                  v37 = (__int64 *)a6;
                  break;
                }
                ++v65;
              }
            }
          }
          else
          {
            a6 = (unsigned int)a5 >> 3;
            if ( (int)a5 - *(_DWORD *)(v30 + 28) - v62 > (unsigned int)a6 )
            {
              v64 = *v37;
              goto LABEL_69;
            }
            v109 = a5;
            v106 = v33;
            v74 = (v34 >> 1) | v34;
            v75 = (((((((v74 | (v74 >> 2)) >> 4) | v74 | (v74 >> 2)) >> 8) | ((v74 | (v74 >> 2)) >> 4)
                                                                           | v74
                                                                           | (v74 >> 2)) >> 16)
                 | ((((v74 | (v74 >> 2)) >> 4) | v74 | (v74 >> 2)) >> 8)
                 | ((v74 | (v74 >> 2)) >> 4)
                 | v74
                 | (v74 >> 2))
                + 1;
            if ( (unsigned int)v75 < 0x40 )
              LODWORD(v75) = 64;
            *(_DWORD *)(v30 + 32) = v75;
            v76 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v75, 8, 64, v33, a5, a6);
            a5 = v109;
            v77 = v76;
            *(_QWORD *)(v30 + 16) = v76;
            if ( v106 )
            {
              v78 = *(unsigned int *)(v30 + 32);
              *(_QWORD *)(v30 + 24) = 0;
              v79 = v78;
              v110 = 2LL * v109;
              v80 = &v106[v110];
              for ( i = &v76[2 * v78]; i != v76; v76 += 2 )
                *v76 = -4096;
              v111 = v106;
              v82 = v106;
              v107 = v79 - 1;
              v83 = v8;
              v84 = v11;
              v85 = v83;
              do
              {
                v86 = *v82;
                if ( *v82 != -8192 && v86 != -4096 )
                {
                  if ( !v79 )
                  {
                    *(_QWORD *)&dword_0 = *v82;
                    BUG();
                  }
                  v87 = v107 & (((unsigned int)v86 >> 9) ^ ((unsigned int)v86 >> 4));
                  v88 = &v77[2 * v87];
                  v89 = *v88;
                  if ( *v88 != v86 && v89 != -4096 )
                  {
                    v113 = 1;
                    v100 = nullptr;
                    while ( 1 )
                    {
                      if ( v89 == -8192 && !v100 )
                        v100 = v88;
                      v87 = v107 & (v113 + v87);
                      ++v113;
                      v88 = &v77[2 * v87];
                      v89 = *v88;
                      if ( v86 == *v88 )
                        break;
                      if ( v89 == -4096 )
                      {
                        if ( v100 )
                          v88 = v100;
                        break;
                      }
                    }
                  }
                  *v88 = v86;
                  *((_DWORD *)v88 + 2) = *((_DWORD *)v82 + 2);
                  ++*(_DWORD *)(v30 + 24);
                }
                v82 += 2;
              }
              while ( v80 != v82 );
              v90 = v85;
              v11 = v84;
              v8 = v90;
              operator delete(v111, v110 * 8, 8);
              v77 = *(_QWORD **)(v30 + 16);
              v91 = *(_DWORD *)(v30 + 32);
              v62 = *(_DWORD *)(v30 + 24) + 1;
            }
            else
            {
              v98 = *(unsigned int *)(v30 + 32);
              *(_QWORD *)(v30 + 24) = 0;
              v91 = v98;
              for ( j = &v76[2 * v98]; j != v76; v76 += 2 )
                *v76 = -4096;
              v62 = 1;
            }
            if ( !v91 )
              goto LABEL_148;
            v92 = v91 - 1;
            v93 = (v91 - 1) & v35;
            v37 = &v77[2 * v93];
            v64 = *v37;
            if ( v11 != *v37 )
            {
              a5 = 1;
              v94 = nullptr;
              if ( v64 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v94 && v64 == -8192 )
                    v94 = v37;
                  a6 = (unsigned int)(a5 + 1);
                  a5 = v92 & (v93 + (unsigned int)a5);
                  v93 = a5;
                  v37 = &v77[2 * (unsigned int)a5];
                  v64 = *v37;
                  if ( v11 == *v37 )
                    goto LABEL_69;
                  if ( v64 == -4096 )
                  {
                    if ( !v94 )
                      break;
                    v64 = *v94;
                    v37 = v94;
                    goto LABEL_69;
                  }
                  LODWORD(a5) = a6;
                }
              }
LABEL_60:
              *(_DWORD *)(v30 + 24) = v62;
LABEL_71:
              *v37 = v11;
              *((_DWORD *)v37 + 2) = 0;
              goto LABEL_27;
            }
          }
LABEL_69:
          *(_DWORD *)(v30 + 24) = v62;
          if ( v64 != -4096 )
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
            v115.m128i_i64[0] = a2;
            v116.m128i_i64[0] = v39;
            v115.m128i_i32[2] = 4;
            sub_9AC3A0(v114, a1 + 16, v115.m128i_i64, (const __m128i *)&v115.m128i_u64[1], a5, a6);
          }
          return;
        }
      }
      v18 = sub_B73640(v11);
      v19 = sub_BFB900(v18);
      if ( (*(_WORD *)v19 & 0x1FF) == 0x3C && (*(_DWORD *)v19 & 0x80000) == 0 )
        v19 = *(_QWORD *)(v19 + 16);
      v20 = sub_BFB9F0(v19);
      v21 = *(unsigned int *)(a1 + 32);
      v22 = *(_QWORD *)(a1 + 16);
      if ( (_DWORD)v21 )
      {
        v23 = (v21 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
        v24 = (__int64 *)(v22 + ((unsigned __int64)v23 << 6));
        v25 = *v24;
        if ( v20 == *v24 )
          goto LABEL_20;
        v66 = 1;
        if ( v25 != -4096 )
          break;
      }
LABEL_64:
      sub_9AC330((__m128 *)&v115, (_QWORD *)(v22 + (v21 << 6)), (_QWORD *)(v22 + (v21 << 6)), a1 + 16, 1);
      v26 = v115.m128i_i64[0];
LABEL_21:
      v103 = v26;
      v27 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
      sub_9AC330((__m128 *)&v115, v27, v27, a1 + 16, 1);
      if ( v115.m128i_i64[0] == v103 )
        goto LABEL_41;
      v30 = *(_QWORD *)(a1 + 8);
      v115 = _mm_loadu_si128((const __m128i *)(v103 + 8));
      v116 = _mm_loadu_si128((const __m128i *)(v103 + 24));
      v117 = _mm_loadu_si128((const __m128i *)(v103 + 40));
      v31 = *(_QWORD *)(v103 + 56);
      v118 = v31;
      v32 = *(_DWORD *)(v103 + 8);
      switch ( v32 )
      {
        case 4:
          v72 = sub_9ADE40(v30, v115.m128i_i64[1]);
          v30 = *(_QWORD *)(a1 + 8);
          v71 = v72;
          break;
        case 5:
          v73 = sub_9AFF80(v30, v115.m128i_i64[1]);
          v30 = *(_QWORD *)(a1 + 8);
          v71 = v73;
          break;
        case 1:
          v71 = v115.m128i_i32[2];
          break;
        default:
          goto LABEL_25;
      }
      if ( !v71 )
      {
LABEL_25:
        a5 = *(unsigned int *)(v30 + 32);
        v33 = *(__int64 **)(v30 + 16);
        if ( !(_DWORD)a5 )
          goto LABEL_42;
        goto LABEL_26;
      }
      v114[0].m128i_i64[0] = v11;
      *(_DWORD *)sub_9ABB30(v30 + 16, v114[0].m128i_i64, v31, v28, v29, (_QWORD *)a6) = v71;
LABEL_4:
      if ( (__int64 *)v8 == ++v9 )
        goto LABEL_28;
    }
    while ( 1 )
    {
      v67 = v66 + 1;
      v68 = ((_DWORD)v21 - 1) & (v23 + v66);
      v23 = v68;
      v24 = (__int64 *)(v22 + (v68 << 6));
      v69 = *v24;
      if ( v20 == *v24 )
        break;
      v66 = v67;
      if ( v69 == -4096 )
        goto LABEL_64;
    }
LABEL_20:
    sub_9AC330((__m128 *)&v115, v24, (_QWORD *)((v21 << 6) + v22), a1 + 16, 1);
    v26 = v115.m128i_i64[0];
    goto LABEL_21;
  }
  if ( v6 )
  {
    v8 = a2 + 16;
    v9 = (__int64 *)(a2 + 8);
    goto LABEL_5;
  }
}
