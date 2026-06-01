__int64 __fastcall sub_851190(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  char v5; // al
  int v8; // ecx
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned int v11; // esi
  unsigned int v12; // r12d
  __int64 v13; // r11
  int v14; // r13d
  int v15; // esi
  __int64 *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  void **v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  unsigned __int8 **v28; // rbx
  void *v29; // rax
  __int64 result; // rax
  __int64 v31; // rdx
  unsigned __int8 **v32; // rax
  unsigned int v33; // edx
  __m128i v34; // xmm0
  _QWORD *v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rsi
  int v40; // r14d
  int v41; // eax
  __int64 v42; // r9
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r13
  unsigned __int8 **v45; // rax
  unsigned __int8 **v46; // rbp
  char v47; // al
  char v48; // al
  unsigned int v49; // r14d
  __int64 v50; // r13
  unsigned __int8 **v51; // rbx
  unsigned __int8 **v52; // rax
  __int64 v53; // rax
  __int64 *v54; // r8
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r9
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // esi
  __int64 v65; // r8
  unsigned __int64 v66; // r9
  __int64 v67; // rdi
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rax
  int v70; // eax
  __int64 v71; // r13
  unsigned int *v72; // rbx
  unsigned int v73; // eax
  __int64 v74; // rsi
  char v75; // bl
  __int64 v76; // rbp
  unsigned int *v77; // rbx
  unsigned int v78; // eax
  __int64 v79; // rsi
  unsigned __int64 v80; // rbx
  __int64 *v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int8 **v88; // rdi
  unsigned __int8 **v89; // rbx
  unsigned __int8 **v90; // rax
  unsigned __int64 v91; // r9
  unsigned __int8 **v92; // rbx
  __int64 v93; // rbp
  unsigned __int8 v95; // [rsp+8h] [rbp-120h]
  __int64 v97; // [rsp+18h] [rbp-110h]
  __int64 v98; // [rsp+18h] [rbp-110h]
  __int64 v99; // [rsp+20h] [rbp-108h]
  __int64 v100; // [rsp+20h] [rbp-108h]
  __int64 *v101; // [rsp+20h] [rbp-108h]
  __int64 *v102; // [rsp+20h] [rbp-108h]
  __int64 v103; // [rsp+20h] [rbp-108h]
  __int64 v104; // [rsp+20h] [rbp-108h]
  __int64 v105; // [rsp+20h] [rbp-108h]
  __int64 v106; // [rsp+20h] [rbp-108h]
  unsigned __int64 v108; // [rsp+30h] [rbp-F8h]
  __int64 v109; // [rsp+38h] [rbp-F0h]
  __int64 v110; // [rsp+38h] [rbp-F0h]
  __int64 v111; // [rsp+38h] [rbp-F0h]
  __int64 v112; // [rsp+38h] [rbp-F0h]
  __int64 v113; // [rsp+38h] [rbp-F0h]
  __int64 v114; // [rsp+38h] [rbp-F0h]
  __int64 v115; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v116; // [rsp+40h] [rbp-E8h]
  __int64 v117; // [rsp+48h] [rbp-E0h]
  __int64 v118[4]; // [rsp+50h] [rbp-D8h] BYREF
  void *v119; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v120; // [rsp+78h] [rbp-B0h]
  char v121; // [rsp+7Ch] [rbp-ACh]
  void *ptr[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v123; // [rsp+A0h] [rbp-88h]
  _QWORD v124[16]; // [rsp+A8h] [rbp-80h] BYREF

  v5 = *(_BYTE *)a4;
  if ( (*(_BYTE *)a4 & 1) != 0 )
    return 0;
  if ( (v5 & 2) != 0
    || (v8 = *(_DWORD *)(a4 + 32), v8 == 1) && (v5 & 4) != 0
    || (v5 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * ((*(_DWORD *)a4 >> 4) - 1)) == *(_QWORD *)(a4 + 8) )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
      goto LABEL_62;
    v31 = !sub_820300(a4) ? 2173 : 2169;
LABEL_36:
    v32 = (unsigned __int8 **)sub_A2E130(a1, a2, v31, 0);
    if ( v32 )
      sub_823450(v32, *(int *)(a5 + 24));
    return 0;
  }
  v9 = a3[1].m128i_i64[0];
  v10 = a3[1].m128i_u64[1];
  v11 = *(_DWORD *)v9;
  if ( (*(_BYTE *)(v9 + 4) & 1) != 0 && v11 <= 1 )
    return 0;
  v12 = 0;
  v13 = 0;
  v14 = v8;
  v108 = 0;
  v97 = a4;
  if ( v11 )
    goto LABEL_25;
LABEL_8:
  v15 = *(_DWORD *)(a5 + 24);
  if ( v15 != 8 || v12 != v14 )
  {
    if ( !v12 || v15 != 10 )
    {
LABEL_28:
      if ( !*(_BYTE *)(a1 + 962) )
      {
        v28 = (unsigned __int8 **)sub_A2E130(a1, a2, 2171, 0);
        if ( v28 )
        {
          sub_823450(v28, *(int *)(a5 + 24));
          sub_823450(v28, *(_DWORD *)v9 == 1);
          v29 = (void *)sub_AC7B80(a2);
          LOBYTE(ptr[1]) = 1;
          ptr[0] = v29;
          sub_839C90((__int64 *)v28, (__int64 *)ptr);
        }
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v16 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v10 & 1) != 0
      || (v17 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL], (v17 & 1) != 0)
      || (((unsigned __int8)v10 | (unsigned __int8)v17) & 4) != 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47
        && (v109 = v13,
            v34 = _mm_loadu_si128(a3),
            v123 = *(_QWORD *)(v97 + 24),
            v124[0] = v12,
            *(__m128i *)ptr = v34,
            v35 = sub_84A740((__int64 *)(a1 + 872), (__int64 *)ptr),
            v16 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL),
            v13 = v109,
            v35)
        && *((_DWORD *)v35 + 8) )
      {
        v36 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] | v10 & 7;
        v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
        v10 = v36 & 0xFFFFFFFFFFFFFFFALL;
        v16 = (__int64 *)v37;
        if ( v12 == v14 )
        {
LABEL_54:
          v17 = v16[1];
          goto LABEL_55;
        }
      }
      else if ( v12 == v14 )
      {
        goto LABEL_43;
      }
LABEL_14:
      v18 = *v16;
      v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v12 != v14 - 1 )
        goto LABEL_15;
      if ( (_BYTE)v19 != 14 )
      {
        if ( (unsigned __int8)(v19 - 2) > 4u )
        {
          v39 = 8LL * v12;
          goto LABEL_81;
        }
LABEL_16:
        v21 = sub_6D9A50(*(_QWORD **)(a1 + 16), v10);
        v22 = v21;
        if ( !v21 || (unsigned int)*(unsigned __int8 *)(v21 + 16) - 2 > 1 )
          JUMPOUT(0x53657C);
        v23 = *(void ***)(v21 + 40);
        v24 = *(_QWORD *)(*(_QWORD *)(v97 + 24) + 8LL * v12);
        v25 = *(_BYTE *)(v21 + 19);
        if ( (v25 & 2) != 0 )
        {
          LODWORD(ptr[1]) = *((_DWORD *)v23 + 2);
          if ( LODWORD(ptr[1]) <= 0x40 )
          {
            ptr[0] = *v23;
            goto LABEL_21;
          }
          v111 = v22;
          sub_2585B30(ptr);
          v22 = v111;
        }
        else
        {
          LODWORD(ptr[1]) = 8 * ((v25 >> 2) & 0x1F);
          if ( SLODWORD(ptr[1]) <= 64 )
          {
            ptr[0] = v23;
LABEL_21:
            if ( (void *)v24 >= ptr[0] )
              goto LABEL_74;
            goto LABEL_22;
          }
          v110 = v22;
          sub_2585A50(ptr, v23, 0);
          v22 = v110;
        }
        v40 = (int)ptr[1];
        if ( LODWORD(ptr[1]) <= 0x40 )
          goto LABEL_21;
        v100 = v22;
        v41 = sub_2587400(ptr);
        v22 = v100;
        if ( (unsigned int)(v40 - v41) <= 0x40 )
        {
          if ( v24 >= *(_QWORD *)ptr[0] )
          {
            if ( ptr[0] )
              operator delete[](ptr[0]);
LABEL_74:
            if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
              goto LABEL_62;
            v31 = 2169;
            goto LABEL_36;
          }
        }
        else if ( !ptr[0] )
        {
          goto LABEL_22;
        }
        operator delete[](ptr[0]);
        v22 = v100;
LABEL_22:
        v26 = *(unsigned int *)(v9 + 16);
        v10 = *(_QWORD *)(v22 + 32);
        if ( v24 >= v26 )
        {
          v99 = v22;
          v33 = *(_DWORD *)(a5 + 24);
          if ( v33 <= 1 || v33 == 10 )
          {
            v13 = 0;
            v9 = *(_QWORD *)(v9 + 8) + 56 * v26;
          }
          else
          {
            v38 = sub_8124E0(a2);
            if ( !(unsigned __int8)sub_838500(a1, v99, v38) )
              return 0;
            sub_81FAA0(v9, v24);
            v13 = 0;
            v9 = *(_QWORD *)(v9 + 8) + 56LL * (unsigned int)v24;
          }
        }
        else
        {
          v13 = 0;
          v9 = *(_QWORD *)(v9 + 8) + 56 * v24;
        }
        goto LABEL_24;
      }
LABEL_43:
      if ( (v10 & 4) != 0 )
        goto LABEL_44;
      goto LABEL_54;
    }
    if ( v12 != v14 )
      goto LABEL_14;
LABEL_55:
    if ( (v17 & 4) != 0 )
    {
LABEL_44:
      if ( *(_DWORD *)(a5 + 24) > 4u )
        goto LABEL_56;
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
        goto LABEL_62;
      v49 = 0;
      if ( v108 )
      {
        v49 = *(_DWORD *)(v108 + 24);
        v50 = 2;
LABEL_92:
        v51 = (unsigned __int8 **)sub_A2E130(a1, a2, 2174, 1);
        if ( v51 )
        {
          sub_823450(v51, *(int *)(a5 + 24));
          sub_823450(v51, v50);
          sub_8356A0(v51, v108, 0xAu);
        }
        v52 = (unsigned __int8 **)sub_A2DD70(a1, v49, 2304);
        if ( v52 )
          sub_823450(v52, v50);
        return 0;
      }
      v87 = a3->m128i_i64[0];
      if ( a3->m128i_i64[0] )
      {
        if ( (v87 & 3) == 0 )
        {
          v50 = 1;
          v108 = v87 & 0xFFFFFFFFFFFFFFFCLL;
          v49 = *(_DWORD *)((v87 & 0xFFFFFFFFFFFFFFFCLL) + 24);
          goto LABEL_92;
        }
        if ( (a3->m128i_i64[0] & 3) == 1 && (v87 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          v49 = sub_8124E0(v87 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v50 = 0;
      goto LABEL_92;
    }
LABEL_56:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
    {
      v112 = v13;
      v101 = v16;
      v47 = sub_82E820(a3, a1, *(_DWORD *)(a5 + 24));
      v16 = v101;
      v13 = v112;
      if ( !v47 )
      {
        v48 = sub_836740(a1, a2, *(_DWORD *)(a5 + 24), v10);
        v16 = v101;
        v13 = v112;
        if ( v48 )
          return 0;
      }
    }
    if ( v12 == v14 )
      break;
    v18 = *v16;
    v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_15:
    v20 = (unsigned int)(v19 - 2);
    if ( (unsigned __int8)(v19 - 2) <= 4u )
      goto LABEL_16;
    v39 = 8LL * v12;
    if ( (_BYTE)v19 == 14 )
    {
      v80 = *(_QWORD *)(*(_QWORD *)(v97 + 24) + 8LL * v12);
      if ( v80 <= 1 )
      {
        if ( *(_BYTE *)(v18 + 16) != 14 )
          sub_B0D320(v18);
        if ( *(_DWORD *)v9 == 5 )
        {
          v93 = v9 + 8;
          if ( v80 )
            v93 = v9 + 24;
          v120 = *(_DWORD *)(v93 + 8);
          if ( v120 > 0x40 )
            sub_2585B30(&v119);
          else
            v119 = *(void **)v93;
          v121 = *(_BYTE *)(v93 + 12);
          sub_835320((__int64)ptr, (__int64 *)&v119);
          sub_6A01B0(*(_QWORD *)(a5 + 16), (__int64)ptr);
          if ( LODWORD(ptr[0]) > 1 )
            sub_69F740((__int64)ptr);
          if ( v120 > 0x40 && v119 )
            operator delete[](v119);
        }
        else
        {
          v81 = (__int64 *)(v9 + 8);
          if ( v80 )
            v81 = (__int64 *)(v9 + 32);
          sub_835150((__int64)v118, v81, v20);
          BYTE4(ptr[0]) &= ~1u;
          LODWORD(ptr[0]) = 0;
          sub_8203A0((__int64)&ptr[1]);
          LODWORD(ptr[0]) = 3;
          v83 = sub_2575D20(&ptr[1], 0, v82);
          if ( v118[0] == v83 )
            sub_257D000(&v119, v118, v84, v85);
          else
            sub_2576960(&v119, v118);
          sub_834250((__int64 *)&ptr[1], (__int64 *)&v119, v86);
          sub_5FF3B0((__int64 *)&v119);
          sub_6A01B0(*(_QWORD *)(a5 + 16), (__int64)ptr);
          if ( LODWORD(ptr[0]) > 1 )
            sub_69F740((__int64)ptr);
          sub_5FF3B0(v118);
        }
        return 1;
      }
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
      {
        v88 = (unsigned __int8 **)sub_A2E130(a1, a2, 2169, 0);
        if ( v88 )
          sub_823450(v88, *(int *)(a5 + 24));
        return 0;
      }
LABEL_62:
      sub_A2E130(a1, a2, 110, 0);
      return 0;
    }
LABEL_81:
    if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 56 <= 1 )
    {
      v42 = *(_QWORD *)(v97 + 24);
LABEL_83:
      v43 = *(_QWORD *)(v42 + v39);
      v44 = *(unsigned int *)(v18 + 20);
      if ( v44 != v43 )
      {
        if ( v44 < v43 )
        {
          v45 = (unsigned __int8 **)sub_A2E240(a1, a2, 2179, 0);
          v46 = v45;
          if ( v45 )
          {
            sub_8356A0(v45, v43, 3u);
            sub_823450(v46, 0);
            sub_8356A0(v46, v44, 3u);
          }
          return 0;
        }
        v76 = *(_QWORD *)(v18 + 32);
        sub_6A63E0(*(_QWORD *)(a5 + 16), *(_QWORD *)(v9 + 8) + 56 * v43);
        result = 1;
        if ( *(_DWORD *)(a5 + 24) != 1 )
        {
          v77 = *(unsigned int **)(a5 + 16);
          v78 = sub_8124E0(*(_QWORD *)(a5 + 8));
          v79 = *(_QWORD *)a5;
          ptr[1] = byte_8;
          ptr[0] = v124;
          LODWORD(v123) = 0;
          BYTE4(v123) = 1;
          result = sub_849100(1, v79, v78, v76, v77, 0, 0, (__int64)ptr);
          if ( !BYTE4(v123) )
          {
            v95 = result;
            free(ptr[0]);
            return v95;
          }
        }
        return result;
      }
      goto LABEL_74;
    }
    v113 = v39;
    v102 = v16;
    v53 = sub_820370(v18);
    v54 = v102;
    v18 = v53;
    v42 = *(_QWORD *)(v97 + 24);
    v55 = *(_QWORD *)(v42 + v39);
    if ( v18 )
      goto LABEL_83;
    v56 = v55 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v55 <= 7 || (*(_BYTE *)(v56 + 28) & 0x7Fu) - 47 > 2 )
    {
      v67 = sub_B0E910(*v102);
      v68 = *(_QWORD *)(*(_QWORD *)(v97 + 24) + v39) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(*(_QWORD *)(v97 + 24) + v113) <= 7u )
      {
        v68 = 0;
      }
      else if ( (*(_BYTE *)(v68 + 28) & 0x7Fu) - 57 >= 3 )
      {
        v68 = 0;
      }
      v9 = *(_QWORD *)(v9 + 8) + 56LL * (unsigned int)sub_84C340(v67, v68);
      v69 = sub_6E8B00(*(_QWORD *)(a1 + 16), v68);
      v10 = sub_81F6C0(v10, v69, 0);
    }
    else
    {
      if ( (*(_BYTE *)(v56 + 68) & 2) != 0 )
      {
        v116 = v55 & 0xFFFFFFFFFFFFFFF8LL;
        v57 = sub_82E820(a3, a1, *(_DWORD *)(a5 + 24));
        v54 = v102;
        v56 = v116;
        if ( !v57 )
        {
          v90 = (unsigned __int8 **)sub_A2E130(a1, a2, 2167, 1);
          v91 = v116;
          v92 = v90;
          if ( v90 )
          {
            sub_823450(v90, *(int *)(a5 + 24));
            sub_8356A0(v92, v116, 0xAu);
            v91 = v116;
          }
          sub_A2DD70(a1, *(unsigned int *)(v91 + 24), 105);
          return 0;
        }
      }
      v114 = v56;
      v58 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v54 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v59 = v114;
      if ( *(_BYTE *)(v58 + 73) >> 5 == 2 )
      {
        v60 = *(_QWORD *)(v9 + 8);
        if ( !v60 )
          goto LABEL_108;
        v61 = *(_QWORD *)(v9 + 8);
        if ( *(char *)(v60 + 29) < 0 )
        {
          v103 = *(_QWORD *)(v9 + 8);
          v62 = sub_77A0C0(v103);
          v59 = v114;
          v60 = v103;
          v61 = v62;
        }
        v63 = v59;
        if ( *(char *)(v59 + 29) < 0 )
        {
          v117 = v60;
          v115 = v61;
          v104 = v59;
          v63 = sub_77A0C0(v59);
          v60 = v117;
          v61 = v115;
          v59 = v104;
        }
        if ( v63 != v61 )
        {
LABEL_108:
          v64 = *(_DWORD *)(a5 + 24);
          if ( v14 - 1 != v12 || v64 != 8 )
          {
            v106 = v60;
            v98 = v59;
            if ( v64 != 10 )
            {
              v89 = (unsigned __int8 **)sub_A2E130(a1, a2, 2166, 0);
              if ( v89 )
              {
                sub_823450(v89, *(int *)(a5 + 24));
                sub_8356A0(v89, v98, 0xAu);
                sub_823450(v89, v106 == 0);
                sub_8356A0(v89, v106, 0xAu);
              }
            }
            return 0;
          }
          BYTE4(ptr[0]) &= ~1u;
          v105 = v59;
          LODWORD(ptr[0]) = 0;
          sub_6A6470(v9, v59, (__int64)ptr);
          v59 = v105;
          if ( LODWORD(ptr[0]) > 1 )
          {
            sub_69F740((__int64)ptr);
            v59 = v105;
          }
        }
        v9 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v70 = sub_83D880(v114);
        v59 = v114;
        v9 = *(_QWORD *)(v9 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v9 + 16) + v70);
      }
      v10 = sub_81F6C0(v10, *(_QWORD *)(v59 + 48), (*(_BYTE *)(v59 + 68) & 2) != 0);
      if ( (v65 & 4) != 0 )
      {
        v108 = v66;
      }
      else
      {
        if ( (byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v66 = v108;
        v108 = v66;
      }
    }
LABEL_24:
    v11 = *(_DWORD *)v9;
    ++v12;
    if ( !*(_DWORD *)v9 )
      goto LABEL_8;
LABEL_25:
    if ( v11 == 1 )
    {
      v27 = *(_DWORD *)(a5 + 24);
      if ( v27 <= 4 && v27 - 1 > 1 )
        goto LABEL_28;
    }
  }
  v71 = v13;
  sub_6A63E0(*(_QWORD *)(a5 + 16), v9);
  if ( *(_DWORD *)(a5 + 24) == 1 )
    return 1;
  v72 = *(unsigned int **)(a5 + 16);
  v73 = sub_8124E0(*(_QWORD *)(a5 + 8));
  v74 = *(_QWORD *)a5;
  ptr[1] = byte_8;
  ptr[0] = v124;
  LODWORD(v123) = 0;
  BYTE4(v123) = 1;
  v75 = sub_849100(1, v74, v73, v10, v72, 0, 0, (__int64)ptr);
  if ( !BYTE4(v123) )
    free(ptr[0]);
  if ( v75 )
  {
    if ( ((1LL << *(_DWORD *)(a5 + 24)) & 0x4E3) == 0 && v71 && (*(_BYTE *)(v71 + 68) & 1) != 0 )
      return sub_824FF0(a1, a2, v9, v71);
    return 1;
  }
  return 0;
}

