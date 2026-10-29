__int64 __fastcall sub_3527B0(__m128i *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD **v10; // rbx
  _DWORD *v11; // rsi
  _DWORD *v12; // rdx
  char v13; // al
  _DWORD *v14; // rdx
  _DWORD *v15; // rax
  unsigned int *v16; // rbp
  unsigned int *v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // esi
  unsigned int **v20; // rax
  unsigned int v21; // ecx
  char *v22; // r8
  __int64 v23; // rdi
  unsigned int **v24; // rcx
  char *v25; // r13
  unsigned int *v26; // rdx
  void *v27; // rbx
  unsigned int *v28; // rdx
  void *v29; // rdi
  int v30; // eax
  unsigned int v31; // esi
  __int64 v32; // rdx
  unsigned int **v33; // rax
  int v34; // ecx
  unsigned int **v35; // r8
  __int64 v36; // rdi
  unsigned int **v37; // rcx
  unsigned int **i; // r13
  unsigned int *v39; // rdx
  void *v40; // rbx
  unsigned int *v41; // rdx
  void *v42; // rdi
  int v43; // eax
  void *v44; // rdi
  char *v45; // r13
  unsigned int v46; // eax
  void *v47; // rbp
  unsigned int v48; // eax
  void *v49; // r14
  unsigned int v50; // ebp
  void *v51; // r14
  void *v52; // rbp
  void *v53; // rbp
  __int64 *j; // r13
  _DWORD *v55; // rdx
  _DWORD *v56; // rsi
  int v57; // r8d
  int v58; // r9d
  _DWORD *v59; // rax
  unsigned int v60; // eax
  __int64 *v61; // rbx
  __m128d v62; // xmm0
  char *v63; // r15
  _DWORD *v64; // r13
  __int64 v65; // r12
  unsigned __int8 v66; // al
  __int64 v67; // rdx
  __int64 v68; // rbx
  __int64 v69; // r14
  __int64 v70; // rbx
  char *v71; // rbp
  char v72; // dl
  char v73; // al
  __m128i v74; // xmm0
  char v75; // dl
  _DWORD *v76; // rax
  __int64 v77; // r12
  __m128i *v78; // r14
  _DWORD *v79; // rbx
  __int64 v80; // r15
  unsigned __int8 v81; // al
  __int64 v82; // rdx
  __int64 *v83; // rax
  __int64 v84; // rbp
  __int64 *v85; // r13
  char v86; // dl
  __int64 *v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rdx
  void *v90; // [rsp+0h] [rbp-F8h]
  __int64 *v91; // [rsp+8h] [rbp-F0h]
  __int64 *v92; // [rsp+10h] [rbp-E8h]
  int v93[2]; // [rsp+10h] [rbp-E8h]
  char *v94; // [rsp+18h] [rbp-E0h]
  __int64 v95; // [rsp+18h] [rbp-E0h]
  char v96[8]; // [rsp+18h] [rbp-E0h]
  void *v97; // [rsp+20h] [rbp-D8h]
  void *v98; // [rsp+20h] [rbp-D8h]
  int *v99; // [rsp+20h] [rbp-D8h]
  __int64 v100; // [rsp+20h] [rbp-D8h]
  __int64 v101; // [rsp+20h] [rbp-D8h]
  int *v102; // [rsp+28h] [rbp-D0h]
  __int64 v103; // [rsp+28h] [rbp-D0h]
  __int64 *v104; // [rsp+30h] [rbp-C8h]
  __int64 v105; // [rsp+30h] [rbp-C8h]
  bool v106; // [rsp+30h] [rbp-C8h]
  int v107[2]; // [rsp+38h] [rbp-C0h]
  __int64 *v108; // [rsp+40h] [rbp-B8h]
  __int64 *v109; // [rsp+48h] [rbp-B0h]
  char *v110; // [rsp+50h] [rbp-A8h]
  int v111[2]; // [rsp+58h] [rbp-A0h]
  int v112; // [rsp+58h] [rbp-A0h]
  int v113; // [rsp+60h] [rbp-98h]
  char v114[8]; // [rsp+68h] [rbp-90h] BYREF
  char v115[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v116; // [rsp+78h] [rbp-80h]
  int v117; // [rsp+80h] [rbp-78h] BYREF
  char v118; // [rsp+84h] [rbp-74h]
  __int64 v119; // [rsp+88h] [rbp-70h]
  unsigned int *v120; // [rsp+90h] [rbp-68h] BYREF
  __int64 v121; // [rsp+98h] [rbp-60h] BYREF
  __int64 v122; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v123; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v124; // [rsp+B0h] [rbp-48h]

  result = a2 - (char *)a1;
  v110 = a2;
  *(_QWORD *)v111 = a3;
  if ( a2 - (char *)a1 > 128 )
  {
    v91 = (__int64 *)&v120;
    v108 = &v121;
    v109 = &v123;
    v94 = v115;
    while ( 1 )
    {
      v7 = result;
      v8 = result >> 4;
      v9 = v7 >> 3;
      if ( !*(_QWORD *)v111 )
        break;
      v10 = (_DWORD **)a1 + v8;
      v11 = (_DWORD *)a1->m128i_i64[1];
      v12 = *v10;
      v112 = v111[0] - 1;
      v92 = &a1->m128i_i64[1];
      v120 = (unsigned int *)a4;
      v13 = sub_34A870(v91, v11, v12);
      v14 = *((_DWORD **)v110 - 1);
      if ( v13 )
      {
        if ( (unsigned __int8)sub_34A870(v91, *v10, v14) )
        {
          v15 = (_DWORD *)a1->m128i_i64[0];
          a1->m128i_i64[0] = (__int64)*v10;
          *v10 = v15;
          v16 = (unsigned int *)a1->m128i_i64[0];
        }
        else
        {
          v73 = sub_34A870(v91, (_DWORD *)a1->m128i_i64[1], *((_DWORD **)v110 - 1));
          v74 = _mm_loadl_epi64(a1);
          if ( v73 )
          {
            a1->m128i_i64[0] = *((_QWORD *)v110 - 1);
            *((_QWORD *)v110 - 1) = v74.m128i_i64[0];
            v16 = (unsigned int *)a1->m128i_i64[0];
          }
          else
          {
            v16 = (unsigned int *)a1->m128i_i64[1];
            *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, v74);
          }
        }
      }
      else if ( (unsigned __int8)sub_34A870(v91, (_DWORD *)a1->m128i_i64[1], v14) )
      {
        v62 = (__m128d)_mm_loadu_si128(a1);
        v16 = (unsigned int *)a1->m128i_i64[1];
        *(__m128d *)a1 = _mm_shuffle_pd(v62, v62, 1);
      }
      else
      {
        v75 = sub_34A870(v91, *v10, *((_DWORD **)v110 - 1));
        v76 = (_DWORD *)a1->m128i_i64[0];
        if ( v75 )
        {
          a1->m128i_i64[0] = *((_QWORD *)v110 - 1);
          *((_QWORD *)v110 - 1) = v76;
        }
        else
        {
          a1->m128i_i64[0] = (__int64)*v10;
          *v10 = v76;
        }
        v16 = (unsigned int *)a1->m128i_i64[0];
      }
      *(_QWORD *)v107 = v110;
      while ( 2 )
      {
        while ( 2 )
        {
          v17 = (unsigned int *)*v92;
          v121 = 0;
          v123 = 1;
          v18 = *(unsigned int *)(a4 + 224);
          v19 = v17[3];
          v20 = *(unsigned int ***)(a4 + 216);
          v120 = v17;
          v122 = 0;
          v21 = v18 - 1;
          v18 *= 40;
          v124 = 0;
          v22 = (char *)v20 + v18;
          v23 = 40LL * (v19 & v21);
          v24 = &v20[(unsigned __int64)v23 / 8];
          if ( v23 == v18 )
          {
LABEL_16:
            while ( v24 != v20 )
            {
              v28 = *v20;
              if ( (unsigned __int64)*v20 > 1 )
              {
                if ( v28[3] == v19 && v17 == v28 )
                {
                  v25 = (char *)v20;
                  goto LABEL_25;
                }
              }
              else if ( !v28 )
              {
                break;
              }
              v20 += 5;
            }
LABEL_15:
            v27 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v108);
            sub_182CBA0(v27, v109);
            v115[4] &= 0xFCu;
            v118 &= 0xFCu;
            *(_DWORD *)v115 = 0;
            v116 = 0;
            v117 = 1;
            v119 = 0;
            BUG();
          }
          v25 = (char *)&v20[(unsigned __int64)v23 / 8];
          while ( 1 )
          {
            v26 = *(unsigned int **)v25;
            if ( *(_QWORD *)v25 > 1u )
              break;
            if ( !v26 )
              goto LABEL_15;
LABEL_12:
            v25 += 40;
            if ( v22 == v25 )
              goto LABEL_16;
          }
          if ( v26[3] != v19 || v17 != v26 )
            goto LABEL_12;
LABEL_25:
          v97 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v108);
          sub_182CBA0(v97, v109);
          v115[4] &= 0xFCu;
          v29 = qword_1C7F2C0;
          v118 &= 0xFCu;
          *(_DWORD *)v115 = 0;
          v116 = 0;
          v117 = 1;
          v119 = 0;
          if ( (v25[12] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v94, v25 + 8);
            if ( (v25[28] & 1) != 0 )
              goto LABEL_45;
LABEL_27:
            v30 = *((_DWORD *)v25 + 6);
            v118 &= ~1u;
            v117 = v30;
          }
          else
          {
            *(_DWORD *)v115 = *((_DWORD *)v25 + 2);
            if ( (v25[28] & 1) == 0 )
              goto LABEL_27;
LABEL_45:
            sub_182C690(v29, &v117, v25 + 24);
          }
          v121 = 0;
          v123 = 1;
          v31 = v16[3];
          v32 = *(unsigned int *)(a4 + 224);
          v33 = *(unsigned int ***)(a4 + 216);
          v120 = v16;
          v122 = 0;
          v124 = 0;
          v34 = v32 - 1;
          v32 *= 40;
          v35 = (unsigned int **)((char *)v33 + v32);
          v36 = 40LL * (v31 & v34);
          v37 = &v33[(unsigned __int64)v36 / 8];
          if ( v36 != v32 )
          {
            for ( i = &v33[(unsigned __int64)v36 / 8]; v35 != i; i += 5 )
            {
              v39 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( v39[3] == v31 && v39 == v16 )
                  goto LABEL_47;
              }
              else if ( !v39 )
              {
                goto LABEL_35;
              }
            }
          }
          if ( v33 == v37 )
          {
LABEL_35:
            v40 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v108);
            sub_182CBA0(v40, v109);
            BYTE4(v120) &= 0xFCu;
            BYTE4(v122) &= 0xFCu;
            LODWORD(v120) = 0;
            v121 = 0;
            LODWORD(v122) = 1;
            v123 = 0;
            BUG();
          }
          while ( 2 )
          {
            v41 = *v33;
            if ( (unsigned __int64)*v33 <= 1 )
            {
              if ( !v41 )
                goto LABEL_35;
              goto LABEL_40;
            }
            if ( v41[3] != v31 || v41 != v16 )
            {
LABEL_40:
              v33 += 5;
              if ( v37 == v33 )
                goto LABEL_35;
              continue;
            }
            break;
          }
          i = v33;
LABEL_47:
          v98 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v108);
          sub_182CBA0(v98, v109);
          BYTE4(v120) &= 0xFCu;
          v42 = qword_1C7F2C0;
          BYTE4(v122) &= 0xFCu;
          LODWORD(v120) = 0;
          v121 = 0;
          LODWORD(v122) = 1;
          v123 = 0;
          if ( (*((_BYTE *)i + 12) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v91, i + 1);
          else
            LODWORD(v120) = *((_DWORD *)i + 2);
          if ( (*((_BYTE *)i + 28) & 1) != 0 )
          {
            sub_182C690(v42, &v122, i + 3);
          }
          else
          {
            v43 = *((_DWORD *)i + 6);
            BYTE4(v122) &= ~1u;
            LODWORD(v122) = v43;
          }
          v44 = qword_1C7F2C0;
          if ( (v122 & 0x100000000LL) != 0 || (_DWORD)v122 != 1 || (v118 & 1) != 0 || v117 != 1 )
          {
            v45 = v94;
            LOBYTE(v46) = sub_1848D40(qword_1C7F2C0, v91, v94);
            v44 = qword_1C7F2C0;
          }
          else if ( (BYTE4(v120) & 1) != 0 || (v115[4] & 1) != 0 )
          {
            v45 = v94;
            v60 = sub_182C7B0(qword_1C7F2C0, v91, v94);
            v44 = qword_1C7F2C0;
            v46 = v60 >> 31;
          }
          else
          {
            v45 = v94;
            LOBYTE(v46) = (int)v120 < *(_DWORD *)v115;
          }
          if ( (_BYTE)v46 )
          {
            sub_182CBA0(v44, v91);
            sub_182CBA0(v44, &v122);
            v47 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v45);
            sub_182CBA0(v47, &v117);
            goto LABEL_56;
          }
          if ( (v115[4] & 1) != 0 || (BYTE4(v120) & 1) != 0 )
          {
            if ( !(unsigned int)sub_182C7B0(v44, v45, v91) )
              goto LABEL_62;
            goto LABEL_68;
          }
          if ( *(_DWORD *)v115 != (_DWORD)v120 )
            goto LABEL_68;
LABEL_62:
          if ( (v118 & 1) != 0 || (v122 & 0x100000000LL) != 0 )
          {
            if ( (unsigned int)sub_182C7B0(v44, &v117, &v122) )
              goto LABEL_68;
LABEL_65:
            v48 = *v17;
            v49 = qword_1C7F2C0;
            v104 = &v122;
            v50 = *v16;
            v102 = &v117;
            LODWORD(v99) = v48;
            sub_182CBA0(qword_1C7F2C0, v91);
            sub_182CBA0(v49, &v122);
            v51 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v45);
            sub_182CBA0(v51, &v117);
            if ( v50 >= (unsigned int)v99 )
              goto LABEL_69;
LABEL_56:
            ++v92;
            v16 = (unsigned int *)a1->m128i_i64[0];
            continue;
          }
          break;
        }
        if ( v117 == (_DWORD)v122 )
          goto LABEL_65;
LABEL_68:
        v52 = qword_1C7F2C0;
        v102 = (int *)&v122;
        v99 = &v117;
        sub_182CBA0(qword_1C7F2C0, v91);
        sub_182CBA0(v52, &v122);
        v53 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v45);
        sub_182CBA0(v53, &v117);
LABEL_69:
        for ( j = (__int64 *)(*(_QWORD *)v107 - 8LL); ; --j )
        {
          v55 = (_DWORD *)*j;
          v56 = (_DWORD *)a1->m128i_i64[0];
          *(_QWORD *)v114 = a4;
          if ( !(unsigned __int8)sub_34A870((__int64 *)v114, v56, v55) )
            break;
        }
        *(_QWORD *)v107 = j;
        if ( v92 < j )
        {
          v59 = (_DWORD *)*v92;
          *v92++ = *j;
          *j = (__int64)v59;
          v16 = (unsigned int *)a1->m128i_i64[0];
          continue;
        }
        break;
      }
      v61 = v92;
      sub_3527B0(
        (int)v92,
        (int)v110,
        v112,
        a4,
        v57,
        v58,
        v90,
        (int)v91,
        (int)v92,
        (int)v94,
        (int)v99,
        (int)v102,
        (int)v104,
        (int)j,
        (int)v108,
        (int)v109,
        (int)v110,
        v112,
        v113,
        v114[0]);
      result = (char *)v61 - (char *)a1;
      if ( (char *)v61 - (char *)a1 <= 128 )
        return result;
      v110 = *(char **)v93;
    }
    *(_QWORD *)v96 = a4;
    v101 = v8 - 1;
    v77 = v8 - 1;
    v103 = (v9 - 1) >> 1;
    v78 = a1;
    v106 = (v9 & 1) == 0;
    while ( 1 )
    {
      v79 = (_DWORD *)v78->m128i_i64[v77];
      *(_QWORD *)v115 = *(_QWORD *)v96;
      if ( v77 >= v103 )
      {
        v83 = &v78->m128i_i64[v77];
        v80 = v77;
      }
      else
      {
        v80 = v77;
        do
        {
          v81 = sub_34A870((__int64 *)v115, (_DWORD *)v78[v80 + 1].m128i_i64[0], (_DWORD *)v78[v80].m128i_i64[1]);
          v82 = v80;
          v80 = 2 * (v80 + 1) - v81;
          v83 = &v78->m128i_i64[v80];
          v78->m128i_i64[v82] = *v83;
        }
        while ( v103 > v80 );
      }
      if ( v101 == v80 && v106 )
      {
        v88 = v78[v80].m128i_i64[1];
        v80 = 2 * v80 + 1;
        *v83 = v88;
        v83 = &v78->m128i_i64[v80];
      }
      v84 = (v80 - 1) >> 1;
      v120 = *(unsigned int **)v115;
      if ( v77 >= v80 )
      {
        *v83 = (__int64)v79;
        goto LABEL_120;
      }
      while ( 1 )
      {
        v85 = &v78->m128i_i64[v84];
        v86 = sub_34A870(v91, (_DWORD *)*v85, v79);
        v87 = &v78->m128i_i64[v80];
        if ( !v86 )
          break;
        v80 = v84;
        *v87 = *v85;
        if ( v77 >= v84 )
          goto LABEL_119;
        v84 = (v84 - 1) / 2;
      }
      v85 = &v78->m128i_i64[v80];
LABEL_119:
      *v85 = (__int64)v79;
      if ( !v77 )
        break;
LABEL_120:
      --v77;
    }
    v63 = (char *)v78;
    result = v110 - (char *)v78;
    if ( v110 - (char *)v78 > 8 )
    {
      v105 = *(_QWORD *)v96;
      while ( 1 )
      {
        v110 -= 8;
        v64 = *(_DWORD **)v110;
        *(_QWORD *)v110 = *(_QWORD *)v63;
        v100 = v110 - v63;
        *(_QWORD *)v115 = v105;
        v95 = ((v110 - v63) >> 3) & 1;
        if ( v110 - v63 <= 16 )
          break;
        v65 = 0;
        do
        {
          v66 = sub_34A870((__int64 *)v115, *(_DWORD **)&v63[16 * v65 + 16], *(_DWORD **)&v63[16 * v65 + 8]);
          v67 = v65;
          v68 = 2 * (v65 + 1) - v66;
          v69 = 8 * v68;
          v65 = v68;
          result = (__int64)&v63[8 * v68];
          *(_QWORD *)&v63[8 * v67] = *(_QWORD *)result;
        }
        while ( v68 < (((v110 - v63) >> 3) - 1) / 2 );
        if ( !v95 )
          goto LABEL_123;
        v120 = *(unsigned int **)v115;
        v70 = (v68 - 1) / 2;
        if ( v65 )
        {
LABEL_96:
          v71 = &v63[8 * v70];
          v72 = sub_34A870(v91, *(_DWORD **)v71, v64);
          result = (__int64)&v63[v69];
          if ( v72 )
          {
            v65 = v70;
            *(_QWORD *)result = *(_QWORD *)v71;
            v70 = (v70 - 1) / 2;
            if ( v65 )
              goto LABEL_95;
            result = (__int64)v71;
            *(_QWORD *)v71 = v64;
            if ( v100 <= 8 )
              return result;
          }
          else
          {
LABEL_97:
            *(_QWORD *)result = v64;
            if ( v100 <= 8 )
              return result;
          }
        }
        else
        {
          *(_QWORD *)result = v64;
        }
      }
      result = (__int64)v63;
      if ( v95 )
        goto LABEL_97;
      v65 = 0;
LABEL_123:
      if ( v65 == (((v110 - v63) >> 3) - 2) / 2 )
      {
        v89 = 2 * v65 + 2;
        v69 = 8 * v89 - 8;
        *(_QWORD *)result = *(_QWORD *)&v63[8 * v89 - 8];
        v70 = (v89 >> 1) - 1;
        v120 = *(unsigned int **)v115;
        goto LABEL_96;
      }
      v120 = *(unsigned int **)v115;
      v70 = (v65 - 1) / 2;
      if ( !v65 )
        goto LABEL_97;
LABEL_95:
      v69 = 8 * v65;
      goto LABEL_96;
    }
  }
  return result;
}

