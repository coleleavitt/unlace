__int64 __fastcall sub_DBBD80(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  unsigned int *v9; // rsi
  unsigned int *v10; // rdi
  __int64 v11; // r12
  unsigned int v12; // ecx
  unsigned __int32 v13; // r15d
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // kr00_8
  __int64 v21; // r13
  int v22; // ecx
  __int64 v23; // rsi
  __int64 *v24; // r13
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // r9
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rax
  size_t v36; // r12
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r10
  __int64 v43; // rsi
  int v44; // r8d
  __int64 v45; // rax
  unsigned int *v46; // rdi
  bool v47; // al
  unsigned int *v48; // rdi
  __int64 v49; // rax
  unsigned int v50; // r14d
  __int64 v51; // r10
  __int64 *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned int v56; // ecx
  int v57; // r11d
  __int64 v58; // rdi
  unsigned int v59; // edx
  int v60; // eax
  __int64 v61; // rax
  __int64 *v62; // rdx
  __int64 *v63; // rax
  __int64 v64; // rdi
  unsigned int v65; // r9d
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // ebx
  __int64 v70; // r13
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rdx
  unsigned int v74; // edx
  unsigned int v75; // eax
  unsigned int v76; // edx
  unsigned int v77; // eax
  unsigned int *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __m128i v81; // xmm0
  __m128i *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rcx
  __m128i si128; // xmm0
  __m128i *v87; // rax
  _QWORD *v88; // rdx
  __m128i *v89; // rdi
  const __m128i *v90; // r9
  __int64 v91; // rdx
  const __m128i *v92; // r10
  __int64 v93; // rdx
  __m128i *v94; // rsi
  __m128i *v95; // rdx
  unsigned int v96; // edx
  unsigned int v97; // eax
  unsigned int v98; // edx
  unsigned int v99; // eax
  unsigned int *v100; // rax
  unsigned int v101; // edx
  unsigned int v102; // eax
  unsigned int v103; // edx
  unsigned int v104; // eax
  unsigned int *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  _DWORD *v108; // [rsp+0h] [rbp-A8h]
  unsigned int v109; // [rsp+8h] [rbp-A0h]
  unsigned int v110; // [rsp+8h] [rbp-A0h]
  unsigned int v111; // [rsp+8h] [rbp-A0h]
  unsigned int v112; // [rsp+8h] [rbp-A0h]
  unsigned int v113; // [rsp+8h] [rbp-A0h]
  unsigned int v114; // [rsp+8h] [rbp-A0h]
  unsigned int v116; // [rsp+18h] [rbp-90h]
  unsigned int v117; // [rsp+18h] [rbp-90h]
  __int64 v118; // [rsp+20h] [rbp-88h]
  __int64 v119; // [rsp+28h] [rbp-80h]
  __int64 v120[11]; // [rsp+50h] [rbp-58h] BYREF

  v9 = (unsigned int *)a1[4];
  v108 = nullptr;
  v10 = &v9[12 * a3];
  v11 = v10[1];
  v12 = *v10;
  v13 = v10[2];
  v14 = *((_QWORD *)v10 + 2);
  v15 = *((_QWORD *)v10 + 3);
  v16 = v10[8];
  v17 = v10[9];
  v18 = v10[10];
  v19 = v10[11];
LABEL_2:
  while ( 2 )
  {
    v20 = a5;
    a5 = v12;
    switch ( v12 )
    {
      case 0u:
        if ( v108 )
        {
          v44 = *(v108 - 1);
          if ( v44 )
          {
            v45 = (unsigned int)(v44 - 1);
            a5 = v45;
            v46 = &v108[12 * v45];
            v12 = *v46;
            v11 = v46[1];
            v13 = v46[2];
            v14 = *((_QWORD *)v46 + 2);
            v15 = *((_QWORD *)v46 + 3);
            v16 = v46[8];
            v17 = v46[9];
            v18 = v46[10];
            v19 = v46[11];
            *(v108 - 1) = a5;
            continue;
          }
          v68 = 0;
LABEL_48:
          sub_186B220(v108 - 2);
        }
        else
        {
          return 0;
        }
        return v68;
      case 1u:
      case 2u:
      case 3u:
        v21 = *(_QWORD *)(a1[5] + 8 * v16);
        if ( *(_WORD *)(v21 + 4) || *(_DWORD *)(v21 + 24) != *(_DWORD *)(v15 + 24) )
          goto LABEL_52;
        v109 = v12;
        if ( !(unsigned __int8)sub_DBA420((__int64)a1, *(_QWORD *)(v15 + 16), *(_QWORD *)(v21 + 16)) )
          goto LABEL_66;
        if ( v109 != 2 )
        {
          if ( v109 == 3 )
          {
            v84 = a1[5];
            *(_QWORD *)(v84 + 8LL * (unsigned int)v11) = *(_QWORD *)(v21 + 32);
            *(_QWORD *)(v84 + 8LL * (unsigned int)(v11 + 1)) = *(_QWORD *)(v21 + 40);
            if ( v108 )
            {
              v85 = (unsigned int)*(v108 - 1);
              if ( (_DWORD)v85 == *(v108 - 2) )
              {
                v96 = 3 * v85 + 1;
                v97 = v96 & 0xFFFFFFFE;
                v98 = v96 >> 1;
                v99 = 16 * (v98 + v97) + 8;
                if ( 48 * (int)v85 + 8 >= v99 || (unsigned int)v85 >= v98 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v120, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v120);
                  sub_233E40((__int64)v120);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v113 = v98;
                v100 = (unsigned int *)sub_186B300(v108 - 2, v99);
                v85 = v100[1];
                v108 = v100 + 2;
                *v100 = v113;
              }
            }
            else
            {
              v106 = (_QWORD *)sub_186B270(0x68u);
              v85 = 0;
              *v106 = 2;
              v108 = v106 + 1;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_18B68F0);
            v87 = (__m128i *)&v108[12 * v85];
            v87->m128i_i32[0] = 5;
            v87->m128i_i32[1] = v11;
            v87->m128i_i32[2] = v13;
            v87[1].m128i_i64[0] = v21;
            v87[1].m128i_i64[1] = 0;
            v87[2] = si128;
            ++*(v108 - 1);
          }
          else
          {
            v22 = *(_DWORD *)(v21 + 24);
            if ( v22 )
            {
              v23 = a1[5];
              v24 = (__int64 *)(v21 + 32);
              v25 = v11 + v22;
              do
              {
                v26 = *v24;
                v27 = (unsigned int)v11;
                LODWORD(v11) = v11 + 1;
                ++v24;
                *(_QWORD *)(v23 + 8 * v27) = v26;
              }
              while ( (_DWORD)v11 != v25 );
            }
          }
          v9 = (unsigned int *)a1[4];
          goto LABEL_34;
        }
        if ( v108 )
        {
          v80 = (unsigned int)*(v108 - 1);
          if ( (_DWORD)v80 == *(v108 - 2) )
          {
            v101 = 3 * v80 + 1;
            v102 = v101 & 0xFFFFFFFE;
            v103 = v101 >> 1;
            v104 = 16 * (v103 + v102) + 8;
            if ( 48 * (int)v80 + 8 >= v104 || (unsigned int)v80 >= v103 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v120, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v120);
              sub_233E40((__int64)v120);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v114 = v103;
            v105 = (unsigned int *)sub_186B300(v108 - 2, v104);
            v80 = v105[1];
            v108 = v105 + 2;
            *v105 = v114;
          }
        }
        else
        {
          v107 = (_QWORD *)sub_186B270(0x68u);
          v80 = 0;
          *v107 = 2;
          v108 = v107 + 1;
        }
        v81 = _mm_load_si128((const __m128i *)&xmmword_18B6720);
        v82 = (__m128i *)&v108[12 * v80];
        v82->m128i_i32[0] = 4;
        v82->m128i_i32[1] = v11;
        v82->m128i_i32[2] = v13;
        v82[1].m128i_i64[0] = v21;
        v82[1].m128i_i64[1] = 0;
        v82[2] = v81;
        ++*(v108 - 1);
LABEL_66:
        v9 = (unsigned int *)a1[4];
        goto LABEL_52;
      case 4u:
        v50 = *(_DWORD *)(v14 + 24);
        if ( v50 )
        {
          v51 = a1[5];
          v52 = (__int64 *)(v14 + 32);
          v53 = v11;
          do
          {
            v54 = *v52;
            v55 = v53++;
            ++v52;
            *(_QWORD *)(v51 + 8 * v55) = v54;
          }
          while ( v53 != (_DWORD)v11 + v50 );
          if ( v50 == 1 )
          {
            a5 = 1;
          }
          else
          {
            v56 = 2;
            LODWORD(a5) = 1;
            v57 = v11 - 1;
            do
            {
              v58 = v57 + v56;
              a5 = (v56 - 1) * (unsigned int)a5;
              v59 = v18 / (unsigned int)a5 % v56;
              v60 = v57 + v56++;
              v61 = v60 - v59;
              v62 = (__int64 *)(v51 + 8 * v58);
              v63 = (__int64 *)(v51 + 8 * v61);
              v64 = *v62;
              *v62 = *v63;
              *v63 = v64;
            }
            while ( v50 >= v56 );
          }
          if ( v18 < (unsigned int)a5 * v50 )
          {
            v65 = v18 + 1;
            if ( v108 )
            {
              v66 = (unsigned int)*(v108 - 1);
              if ( (_DWORD)v66 == *(v108 - 2) )
              {
                v74 = 3 * v66 + 1;
                v75 = v74 & 0xFFFFFFFE;
                v76 = v74 >> 1;
                v77 = 16 * (v76 + v75) + 8;
                if ( 48 * (int)v66 + 8 >= v77 || (unsigned int)v66 >= v76 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v120, "Overflow encountered when expanding vector");
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, v120);
                  sub_233E40((__int64)v120);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v117 = v76;
                v111 = v65;
                v78 = (unsigned int *)sub_186B300(v108 - 2, v77);
                v65 = v111;
                v108 = v78 + 2;
                *v78 = v117;
                v67 = (__int64)&v78[12 * v78[1] + 2];
                v9 = (unsigned int *)a1[4];
              }
              else
              {
                v67 = (__int64)&v108[12 * v66];
              }
            }
            else
            {
              v112 = v65;
              v79 = (_QWORD *)sub_186B270(0x68u);
              v9 = (unsigned int *)a1[4];
              v65 = v112;
              *v79 = 2;
              v67 = (__int64)(v79 + 1);
              v108 = (_DWORD *)v67;
            }
            *(_DWORD *)v67 = 4;
            *(_DWORD *)(v67 + 4) = v11;
            *(_DWORD *)(v67 + 8) = v13;
            *(_QWORD *)(v67 + 16) = v14;
            *(_QWORD *)(v67 + 24) = 0;
            *(_QWORD *)(v67 + 32) = 0;
            *(_DWORD *)(v67 + 40) = v65;
            *(_DWORD *)(v67 + 44) = 0;
            ++*(v108 - 1);
          }
        }
        goto LABEL_34;
      case 5u:
        v49 = a1[5];
        *(_QWORD *)(v49 + 8LL * (unsigned int)(v11 + 1)) = *(_QWORD *)(v14 + 32);
        *(_QWORD *)(v49 + 8 * v11) = *(_QWORD *)(v14 + 40);
        goto LABEL_34;
      case 6u:
      case 7u:
        v28 = a1[5];
        a5 = (unsigned int)v16;
        v29 = *(_QWORD *)(v28 + 8LL * (unsigned int)v16);
        if ( *(_WORD *)(v29 + 4) )
          goto LABEL_52;
        a5 = *(unsigned int *)(v29 + 24);
        if ( *(_DWORD *)(v15 + 24) != (_DWORD)a5 )
          goto LABEL_52;
        if ( v12 == 7 )
        {
          if ( *(_QWORD *)(v29 + 16) != *(_QWORD *)(*(_QWORD *)(v28 + 8 * v17) + 16LL) )
          {
LABEL_52:
            v12 = *v9;
            v11 = v9[1];
            v13 = v9[2];
            v14 = *((_QWORD *)v9 + 2);
            v15 = *((_QWORD *)v9 + 3);
            v16 = v9[8];
            v17 = v9[9];
            v18 = v9[10];
            v19 = v9[11];
            continue;
          }
          v30 = 0;
          if ( !(_DWORD)a5 )
            goto LABEL_34;
        }
        else
        {
          v30 = 0;
          if ( !(_DWORD)a5 )
            goto LABEL_19;
        }
        do
        {
          v31 = *(_QWORD *)(v29 + 8 * v30 + 32);
          v32 = (unsigned int)(v11 + v30++);
          *(_QWORD *)(v28 + 8 * v32) = v31;
        }
        while ( (unsigned int)v30 < (unsigned int)a5 );
        if ( v12 != 6 )
          goto LABEL_34;
LABEL_19:
        v33 = *(_QWORD *)(v15 + 16);
        v34 = *(unsigned int *)(a4 + 8);
        v110 = 2 * v34;
        if ( 3 * (int)v34 >= (unsigned int)(4 * (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 16))) )
        {
          v116 = v34 - 1;
          v35 = *(_QWORD *)a4;
          v36 = 16 * v34;
          v37 = *(_QWORD *)a4 + 16 * v34;
          goto LABEL_21;
        }
        v36 = 16LL * v110;
        v35 = sub_186B270(v36);
        v88 = (_QWORD *)v35;
        if ( v110 )
        {
          do
          {
            *v88 = 0;
            v88 += 2;
            *((_DWORD *)v88 - 2) = 0;
          }
          while ( v88 != (_QWORD *)(v35 + 16LL * v110) );
        }
        v37 = v35 + v36;
        v89 = *(__m128i **)a4;
        v116 = v110 - 1;
        v90 = v89;
        v91 = *(unsigned int *)(a4 + 8);
        v92 = (const __m128i *)(*(_QWORD *)a4 + v91 * 16);
        if ( v89 == &v89[v91] )
          goto LABEL_96;
        break;
      case 8u:
        v47 = *(_QWORD *)(a1[5] + 8 * v16) == v15;
        goto LABEL_33;
      case 9u:
        v70 = *(_QWORD *)(a1[5] + 8 * v16);
        if ( *(_WORD *)(v70 + 4) != 1 )
          goto LABEL_52;
        v71 = a1[7];
        v72 = 8 * v19;
        v73 = 0;
        do
        {
          if ( v73 == v72 )
          {
            *(_QWORD *)(a1[6] + v73) = v15;
            *(_QWORD *)(v71 + v73) = v70;
            goto LABEL_34;
          }
          a5 = *(_QWORD *)(v71 + v73);
          v73 += 8;
        }
        while ( a5 != v70 );
        goto LABEL_52;
      case 0xAu:
        v47 = *(_QWORD *)(a1[7] + 8 * v19) == *(_QWORD *)(a1[5] + 8 * v16);
LABEL_33:
        if ( v47 )
          goto LABEL_34;
        goto LABEL_52;
      case 0xBu:
        v68 = 1;
        if ( v108 )
          goto LABEL_48;
        return v68;
      default:
        a5 = v20;
        goto LABEL_52;
    }
    break;
  }
  while ( 1 )
  {
    if ( v90->m128i_i64[0] > 1uLL )
    {
      v93 = 16LL * (*(_DWORD *)(v90->m128i_i64[0] + 12) & v116);
      v94 = (__m128i *)(v35 + v93);
      if ( v36 == v93 )
      {
LABEL_90:
        if ( (__m128i *)v35 == v94 )
        {
LABEL_111:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v95 = (__m128i *)v35;
        while ( v95->m128i_i64[0] )
        {
          if ( v94 == ++v95 )
            goto LABEL_111;
        }
      }
      else
      {
        v95 = (__m128i *)(v35 + v93);
        while ( v95->m128i_i64[0] )
        {
          if ( (__m128i *)v37 == ++v95 )
            goto LABEL_90;
        }
      }
      *v95 = _mm_loadu_si128(v90);
    }
    if ( v92 == ++v90 )
    {
      v89 = *(__m128i **)a4;
LABEL_96:
      if ( v89 )
      {
        v119 = v35 + v36;
        v118 = v35;
        sub_186B220(v89);
        v37 = v119;
        v35 = v118;
      }
      *(_QWORD *)a4 = v35;
      *(_DWORD *)(a4 + 8) = v110;
      *(_DWORD *)(a4 + 16) = 0;
LABEL_21:
      v38 = *(_DWORD *)(v33 + 12);
      v39 = 16LL * (v38 & v116);
      v40 = v35 + v39;
      if ( v39 != v36 )
      {
        v41 = v35 + v39;
        v42 = 0;
        while ( 1 )
        {
          v43 = *(_QWORD *)v41;
          if ( *(_QWORD *)v41 > 1u )
          {
            if ( *(_DWORD *)(v43 + 12) == v38 && v33 == v43 )
            {
              *(_QWORD *)v41 = v33;
              v9 = (unsigned int *)a1[4];
              *(_DWORD *)(v41 + 8) = v16;
              goto LABEL_34;
            }
          }
          else
          {
            if ( !v43 )
            {
              if ( v42 )
                goto LABEL_107;
              v42 = v41;
              goto LABEL_108;
            }
            v42 = v41;
          }
          v41 += 16;
          if ( v41 == v37 )
            goto LABEL_70;
        }
      }
      v42 = 0;
      while ( 1 )
      {
LABEL_70:
        if ( v40 == v35 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v83 = *(_QWORD *)v35;
        if ( *(_QWORD *)v35 > 1u )
        {
          if ( *(_DWORD *)(v83 + 12) == v38 && v33 == v83 )
          {
            *(_QWORD *)v35 = v33;
            v9 = (unsigned int *)a1[4];
            *(_DWORD *)(v35 + 8) = v16;
            goto LABEL_34;
          }
        }
        else
        {
          if ( !v83 )
          {
            if ( v42 )
LABEL_107:
              --*(_DWORD *)(a4 + 16);
            else
              v42 = v35;
LABEL_108:
            v9 = (unsigned int *)a1[4];
            *(_QWORD *)v42 = v33;
            *(_DWORD *)(v42 + 8) = v16;
            ++*(_DWORD *)(a4 + 12);
LABEL_34:
            v48 = &v9[12 * v13];
            v12 = *v48;
            v11 = v48[1];
            v13 = v48[2];
            v14 = *((_QWORD *)v48 + 2);
            v15 = *((_QWORD *)v48 + 3);
            v16 = v48[8];
            v17 = v48[9];
            v18 = v48[10];
            v19 = v48[11];
            goto LABEL_2;
          }
          v42 = v35;
        }
        v35 += 16;
      }
    }
  }
}

