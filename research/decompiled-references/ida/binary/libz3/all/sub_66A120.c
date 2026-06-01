__m128i *__fastcall sub_66A120(__int64 a1)
{
  __m128i *v2; // r13
  __m128i *v4; // rax
  void *v5; // rbx
  int *v6; // rcx
  int *v7; // rbp
  _QWORD *v8; // rax
  __m128 *v9; // rdx
  int v10; // eax
  int *v11; // rsi
  void *v12; // rbx
  __m128 v13; // xmm0
  _DWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // r15
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // ecx
  char *v22; // rdx
  int v23; // esi
  __int64 v24; // r10
  char *v25; // rcx
  __int64 v26; // r10
  char *v27; // rdi
  char *j; // rbp
  __int64 v29; // rax
  void *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r14
  bool v40; // zf
  void *v41; // rbp
  _QWORD *v42; // rax
  __int64 v43; // rax
  void *v44; // r14
  int v45; // r8d
  int v46; // r9d
  void *v47; // r14
  int v48; // eax
  int v49; // eax
  unsigned int v50; // r14d
  size_t v51; // rdi
  __int64 v52; // rax
  _QWORD *v53; // r15
  _DWORD *v54; // r9
  __int64 v55; // r10
  __int64 v56; // rdx
  _QWORD *v57; // rdi
  _QWORD *i; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 *v62; // rdx
  __int64 *v63; // rbx
  int *v64; // r15
  __int64 *v65; // rbp
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdi
  char **exception; // r13
  __int64 v71; // rdx
  void *v72; // [rsp+0h] [rbp-B8h] BYREF
  int v73[2]; // [rsp+8h] [rbp-B0h]
  int *v74; // [rsp+10h] [rbp-A8h]
  _DWORD *v75; // [rsp+18h] [rbp-A0h]
  _QWORD *v76; // [rsp+20h] [rbp-98h]
  _QWORD *v77; // [rsp+28h] [rbp-90h]
  int v78[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v79; // [rsp+38h] [rbp-80h]
  int v80[2]; // [rsp+40h] [rbp-78h] BYREF
  void *v81; // [rsp+48h] [rbp-70h]
  __int64 v82; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v83[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v84[10]; // [rsp+68h] [rbp-50h] BYREF

  if ( !*(_DWORD *)(a1 + 252) )
  {
    v2 = *(__m128i **)(a1 + 208);
    if ( !v2 )
      return v2;
    if ( !v2[-1].m128i_i32[3] )
      return nullptr;
  }
  v4 = (__m128i *)sub_186B270(0x50u);
  v5 = *(void **)(a1 + 120);
  v6 = *(int **)(a1 + 208);
  v2 = v4;
  v4->m128i_i32[2] = 0;
  v4[1].m128i_i64[0] = 0;
  v4[1].m128i_i8[8] = 1;
  v72 = v5;
  strcpy(&v4[3].m128i_i8[8], "bounded_int2bv");
  v4->m128i_i64[0] = (__int64)&off_1C60CE8;
  v4[3].m128i_i64[0] = 14;
  v4[4].m128i_i64[1] = 0;
  v4[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)&v4[3].m128i_u64[1]);
  if ( v6 )
  {
    *(_QWORD *)v73 = &v6[2 * *(v6 - 1)];
    if ( *(int **)v73 != v6 )
    {
      v7 = v6;
      if ( *(_QWORD *)v6 )
        ++*(_DWORD *)(*(_QWORD *)v6 + 8LL);
      v8 = (_QWORD *)sub_186B270(0x58u);
      v9 = (__m128 *)(v8 + 1);
      *v8 = 2;
      v10 = 1;
      v2[4].m128i_i64[1] = (__int64)v9;
      v11 = (int *)v9;
      while ( 1 )
      {
        v12 = v72;
        v9[1].m128_u64[0] = 0;
        v7 += 2;
        v13 = _mm_loadh_ps((const double *)&v72);
        v9[2].m128_i32[0] = 0;
        v9[1].m128_u64[1] = (unsigned __int64)v12;
        *v9 = v13;
        *(v11 - 1) = v10;
        if ( *(int **)v73 == v7 )
          break;
        v14 = *(_DWORD **)v7;
        v72 = (void *)v2[2].m128i_i64[0];
        if ( v14 )
          ++v14[2];
        v15 = *(v11 - 1);
        if ( v15 == *(v11 - 2) )
        {
          v50 = (3 * v15 + 1) >> 1;
          v51 = 40 * v50 + 8;
          if ( 40 * v15 + 8 >= (unsigned int)v51 || v15 >= v50 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_107D5E(&v82, "Overflow encountered when expanding vector", v71);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v82);
            sub_233E40((__int64)&v82);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = sub_186B270(v51);
          v53 = (_QWORD *)v2[4].m128i_i64[1];
          v54 = (_DWORD *)v52;
          v11 = (int *)(v52 + 8);
          if ( v53 )
          {
            v55 = *((unsigned int *)v53 - 1);
            v56 = v52 + 8;
            *(_DWORD *)(v52 + 4) = v55;
            v57 = &v53[5 * v55];
            for ( i = v53; v57 != i; *(_DWORD *)(v56 - 8) = *((_DWORD *)i - 2) )
            {
              v59 = i[1];
              i += 5;
              v56 += 40;
              *(_QWORD *)(v56 - 32) = v59;
              v60 = *(i - 5);
              *(i - 5) = 0;
              *(_QWORD *)(v56 - 40) = v60;
              *(_QWORD *)(v56 - 16) = *(i - 2);
              v61 = *(i - 3);
              *(i - 3) = 0;
              *(_QWORD *)(v56 - 24) = v61;
            }
            if ( (_DWORD)v55 )
            {
              v74 = v7;
              v62 = &v53[5 * v55];
              v75 = v14;
              v63 = v53;
              v64 = v11;
              v76 = v54;
              v65 = v62;
              do
              {
                while ( 1 )
                {
                  v68 = v63[2];
                  if ( v68 )
                  {
                    v69 = v63[3];
                    v40 = (*(_DWORD *)(v68 + 8))-- == 1;
                    if ( v40 )
                      sub_15D7BC0(v69, v68);
                  }
                  v66 = *v63;
                  if ( *v63 )
                  {
                    v67 = v63[1];
                    v40 = (*(_DWORD *)(v66 + 8))-- == 1;
                    if ( v40 )
                      break;
                  }
                  v63 += 5;
                  if ( v63 == v65 )
                    goto LABEL_80;
                }
                sub_15D7BC0(v67, v66);
                v63 += 5;
              }
              while ( v63 != v65 );
LABEL_80:
              v11 = v64;
              v7 = v74;
              v54 = v76;
              v53 = (_QWORD *)v2[4].m128i_i64[1];
            }
            v75 = v54;
            v74 = v11;
            sub_186B220(v53 - 1);
            v54 = v75;
            v11 = v74;
            v9 = (__m128 *)&v74[10 * v75[1]];
            v10 = v75[1] + 1;
          }
          else
          {
            *(_DWORD *)(v52 + 4) = 0;
            v9 = (__m128 *)(v52 + 8);
            v10 = 1;
          }
          v2[4].m128i_i64[1] = (__int64)v11;
          *v54 = v50;
        }
        else
        {
          v16 = v15;
          v10 = v15 + 1;
          v9 = (__m128 *)&v11[10 * v16];
        }
      }
    }
  }
  v17 = *(_QWORD **)(a1 + 240);
  v18 = &v17[2 * *(unsigned int *)(a1 + 248)];
  if ( v17 != v18 )
  {
    while ( *v17 <= 1u )
    {
      v17 += 2;
      if ( v18 == v17 )
        return v2;
    }
    if ( v18 == v17 )
      return v2;
    v76 = v83;
    v77 = v84;
    v72 = v78;
    v74 = v80;
    v75 = (_DWORD *)(a1 + 128);
    while ( 1 )
    {
      v19 = *(unsigned int *)(a1 + 296);
      *(_QWORD *)v80 = 1;
      v20 = v17[1];
      v83[0] = 0;
      v84[0] = 1;
      v21 = v19 - 1;
      v22 = *(char **)(a1 + 288);
      v23 = *(_DWORD *)(v20 + 12);
      v19 *= 40;
      *(_QWORD *)v78 = 0;
      v79 = 0;
      v82 = v20;
      v81 = nullptr;
      v24 = 5LL * (v23 & v21);
      v25 = &v22[v19];
      v83[1] = 0;
      v26 = 8 * v24;
      v84[1] = 0;
      v27 = &v22[v26];
      if ( v26 != v19 )
      {
        for ( j = &v22[v26]; v25 != j; j += 40 )
        {
          v29 = *(_QWORD *)j;
          if ( *(_QWORD *)j > 1u )
          {
            if ( *(_DWORD *)(v29 + 12) == v23 && v20 == v29 )
              goto LABEL_58;
          }
          else if ( !v29 )
          {
            goto LABEL_29;
          }
        }
      }
      if ( v22 == v27 )
      {
LABEL_29:
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v76);
        sub_182CBA0(v30, v77);
        sub_1872CE0("");
        sub_1873130(114, 192);
      }
      while ( 1 )
      {
        v43 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 > 1u )
          break;
        if ( !v43 )
          goto LABEL_29;
LABEL_53:
        v22 += 40;
        if ( v27 == v22 )
          goto LABEL_29;
      }
      if ( *(_DWORD *)(v43 + 12) != v23 || v20 != v43 )
        goto LABEL_53;
      j = v22;
LABEL_58:
      v44 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v76);
      sub_182CBA0(v44, v77);
      v47 = qword_1C7F2C0;
      if ( (j[12] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v72, j + 8);
      }
      else
      {
        v48 = *((_DWORD *)j + 2);
        LOBYTE(v78[1]) &= ~1u;
        v78[0] = v48;
      }
      if ( (j[28] & 1) != 0 )
      {
        sub_182C690(v47, v74, j + 24);
      }
      else
      {
        v49 = *((_DWORD *)j + 6);
        LOBYTE(v80[1]) &= ~1u;
        v80[0] = v49;
      }
      v31 = sub_15DC610(
              *(_QWORD *)(a1 + 120),
              v17[1],
              0,
              0,
              v45,
              v46,
              (int)v72,
              *(_QWORD *)(a1 + 120),
              (int)v74,
              (int)v75,
              (int)v76,
              (char)v77,
              v78[0],
              v79,
              v80[0],
              v81);
      v32 = sub_16747F0(v75, v31);
      v36 = v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      if ( !v78[0] )
        goto LABEL_40;
      v37 = *(_QWORD *)(a1 + 160);
      if ( !v37 )
      {
        sub_16669E0(a1 + 152);
        v37 = *(_QWORD *)(a1 + 160);
      }
      sub_166A700(v37, (_DWORD)v72, 1, v33, v34, v35);
      v38 = sub_15E1B70(*(_QWORD *)(a1 + 152));
      v39 = v38;
      if ( !v38 )
      {
        if ( !v36 )
        {
          sub_13333D0((_DWORD)v2, *v17, 0, v33, v34, v35, (__int64)v72);
          goto LABEL_43;
        }
LABEL_37:
        v40 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v40 )
          sub_15D7BC0(*(_QWORD *)v73, v36);
        v36 = v39;
LABEL_40:
        sub_13333D0((_DWORD)v2, *v17, v36, v33, v34, v35, (__int64)v72);
        if ( v36 )
          goto LABEL_41;
        goto LABEL_43;
      }
      ++*(_DWORD *)(v38 + 8);
      if ( v36 )
        goto LABEL_37;
      sub_13333D0((_DWORD)v2, *v17, v38, v33, v34, v35, (__int64)v72);
      v36 = v39;
LABEL_41:
      v40 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(*(_QWORD *)v73, v36);
LABEL_43:
      v41 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v72);
      sub_182CBA0(v41, v74);
      v42 = v17 + 2;
      if ( v18 != v17 + 2 )
      {
        while ( 1 )
        {
          v17 = v42;
          if ( *v42 > 1u )
            break;
          v42 += 2;
          if ( v18 == v42 )
            return v2;
        }
        if ( v18 != v42 )
          continue;
      }
      return v2;
    }
  }
  return v2;
}

