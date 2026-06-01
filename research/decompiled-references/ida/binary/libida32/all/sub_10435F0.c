__int64 __fastcall sub_10435F0(__int64 a1, __int64 a2, void *a3, size_t a4)
{
  size_t v5; // rax
  __int64 v6; // rsi
  __int64 *v7; // rbp
  __int64 *v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _DWORD *v18; // r13
  unsigned __int64 v19; // rcx
  size_t v20; // r14
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // r13
  void *v24; // rax
  void *v25; // rdx
  void *v26; // rax
  char *v27; // rdx
  size_t v28; // rax
  __int64 v29; // rdx
  char **v30; // rbp
  char *v31; // rsi
  __m128i *v32; // rsi
  __int64 v33; // rax
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  char *v37; // rsi
  char *v38; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rcx
  void *v45; // r13
  size_t v46; // r14
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  char *v50; // rdx
  char *v51; // rax
  bool v52; // cc
  char *v53; // rax
  size_t v54; // r13
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r13
  __int64 v58; // rsi
  __int64 v59; // rdx
  void *v60; // r13
  size_t v61; // r14
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  char *v64; // rax
  char *v65; // rax
  size_t v66; // r13
  char *v67; // rax
  void *v68; // rdx
  char *v69; // r13
  __int64 v70; // rsi
  __int64 v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  _BYTE *v76; // rsi
  size_t v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  size_t v82; // rax
  size_t v83; // r13
  void *v84; // rax
  void *v85; // rdx
  __int64 v86; // rdx
  size_t v87; // rax
  unsigned __int64 v88; // rcx
  _BYTE *v89; // r9
  int v90; // eax
  char *v91; // rsi
  unsigned __int64 v92; // rax
  char v93; // [rsp+Fh] [rbp-141h]
  _BYTE *v94; // [rsp+28h] [rbp-128h]
  unsigned __int64 v95; // [rsp+30h] [rbp-120h]
  void *s1; // [rsp+38h] [rbp-118h] BYREF
  size_t n; // [rsp+40h] [rbp-110h]
  void *v98; // [rsp+48h] [rbp-108h] BYREF
  char *v99; // [rsp+50h] [rbp-100h]
  void *ptr; // [rsp+58h] [rbp-F8h] BYREF
  __int64 v101; // [rsp+60h] [rbp-F0h]
  _BYTE v102[16]; // [rsp+68h] [rbp-E8h] BYREF
  void *v103[2]; // [rsp+78h] [rbp-D8h] BYREF
  char *v104; // [rsp+88h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+90h] [rbp-C0h]
  __int128 v106; // [rsp+98h] [rbp-B8h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-A8h]
  __int128 v108; // [rsp+B0h] [rbp-A0h]
  __int64 v109; // [rsp+C0h] [rbp-90h]
  __int64 v110; // [rsp+C8h] [rbp-88h]
  __m128i v111; // [rsp+D8h] [rbp-78h] BYREF
  __m128i v112; // [rsp+E8h] [rbp-68h] BYREF
  char v113; // [rsp+108h] [rbp-48h]

  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  s1 = a3;
  n = a4;
  if ( a4 == j__strlen("default") && (!n || !memcmp(s1, "default", n)) )
    return a1;
  ptr = v102;
  v101 = 0x100000000LL;
  v5 = j__strlen(",");
  sub_2223490(&s1, &ptr, ",", v5, 0xFFFFFFFFLL, 1);
  v6 = *(_QWORD *)(a2 + 208);
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  sub_2277A40(&v106, v6 + 232, a1);
  v7 = (__int64 *)((char *)ptr + 16 * (unsigned int)v101);
  if ( v7 != ptr )
  {
    v93 = 0;
    v8 = (__int64 *)ptr;
    while ( 1 )
    {
      v9 = 0;
      v10 = sub_2223270(v8, asc_22BE270, 6, 0);
      v11 = v8[1];
      if ( v10 < v11 )
      {
        v9 = v11 - v10;
        v11 = v10;
      }
      v12 = *v8 + v11;
      v111.m128i_i64[1] = v9;
      v111.m128i_i64[0] = v12;
      v13 = sub_22233F0(&v111, asc_22BE270, 6, -1);
      v14 = v111.m128i_u64[1];
      v15 = v13 + 1;
      if ( v15 > v111.m128i_i64[1] )
        v15 = v111.m128i_u64[1];
      v16 = v15;
      v17 = v111.m128i_i64[1] - v9;
      v18 = (_DWORD *)v111.m128i_i64[0];
      v19 = v17 + v16;
      *v8 = v111.m128i_i64[0];
      if ( v19 <= v14 )
        v14 = v19;
      v20 = v14;
      v8[1] = v14;
      if ( v14 <= 6 )
      {
        if ( v14 > 4 )
          goto LABEL_15;
LABEL_16:
        v21 = j__strlen("cpu=");
        if ( v21 > v20 || v21 && memcmp(v18, "cpu=", v21) )
        {
          v72 = j__strlen("tune=");
          if ( v72 > v20 || v72 && memcmp(v18, "tune=", v72) )
          {
            v75 = j__strlen("+");
            if ( v75 > v20 || v75 && memcmp(v18, "+", v75) )
            {
              if ( !(unsigned __int8)sub_2275730(&v106, *v8, v8[1], 1) )
              {
                v87 = j__strlen("no-");
                v88 = v8[1];
                v89 = (_BYTE *)*v8;
                if ( v87 > v88 )
                {
                  if ( v89 )
                    goto LABEL_113;
                  LOBYTE(v104) = 0;
                  v103[1] = nullptr;
                  v103[0] = &v104;
LABEL_114:
                  v91 = "+";
                }
                else
                {
                  if ( v87 )
                  {
                    v95 = v8[1];
                    v94 = (_BYTE *)*v8;
                    v90 = memcmp((const void *)*v8, "no-", v87);
                    v89 = v94;
                    v88 = v95;
                    if ( v90 )
                    {
LABEL_113:
                      v103[0] = &v104;
                      sub_103ABE0(v103, v89, (__int64)&v89[v88]);
                      goto LABEL_114;
                    }
                  }
                  v92 = 0;
                  if ( v88 > 2 )
                  {
                    v92 = v88 - 3;
                    v88 = 3;
                  }
                  if ( &v89[v88] )
                  {
                    v103[0] = &v104;
                    sub_103ABE0(v103, &v89[v88], (__int64)&v89[v88 + v92]);
                  }
                  else
                  {
                    LOBYTE(v104) = 0;
                    v103[1] = nullptr;
                    v103[0] = &v104;
                  }
                  v91 = "-";
                }
                sub_E5B030(&v111, v91, v103);
                sub_A5EF20(a1, &v111);
                if ( (__m128i *)v111.m128i_i64[0] != &v112 )
                  operator delete((void *)v111.m128i_i64[0]);
                if ( v103[0] != &v104 )
                  operator delete(v103[0]);
              }
            }
            else
            {
              sub_10432B0(*v8, v8[1], a1, (__int64)&v106);
            }
          }
          else if ( *(_QWORD *)(a1 + 48) )
          {
            v73 = j__strlen("tune=");
            *(_QWORD *)(a1 + 72) = "tune=";
            *(_QWORD *)(a1 + 80) = v73;
          }
          else
          {
            v82 = j__strlen("=");
            sub_103B480(&v111, v8, (__int64)"=", v82);
            v83 = j__strlen(asc_22BE270);
            v84 = (void *)sub_9C8980(&v112, (__int64)asc_22BE270, v83);
            v103[1] = v85;
            v103[0] = v84;
            *(_QWORD *)(a1 + 40) = sub_9C89B0((__int64)v103, (__int64)asc_22BE270, v83);
            *(_QWORD *)(a1 + 48) = v86;
          }
LABEL_22:
          v8 += 2;
          if ( v7 == v8 )
            break;
        }
        else
        {
          if ( !*(_QWORD *)(a1 + 32) )
          {
            v22 = j__strlen("=");
            sub_103B480(&v111, v8, (__int64)"=", v22);
            v23 = j__strlen(asc_22BE270);
            v24 = (void *)sub_9C8980(&v112, (__int64)asc_22BE270, v23);
            v103[1] = v25;
            v103[0] = v24;
            v26 = (void *)sub_9C89B0((__int64)v103, (__int64)asc_22BE270, v23);
            v99 = v27;
            v98 = v26;
            v28 = j__strlen("+");
            sub_103B480(v103, (__int64 *)&v98, (__int64)"+", v28);
            *(__m128i *)(a1 + 24) = _mm_load_si128((const __m128i *)v103);
            sub_2274FB0(&v111);
            if ( v113 )
            {
              sub_2275630(&v106, &v111);
              sub_10432B0((__int64)v104, v105, a1, (__int64)&v106);
            }
            goto LABEL_22;
          }
          v8 += 2;
          v74 = j__strlen("cpu=");
          *(_QWORD *)(a1 + 72) = "cpu=";
          *(_QWORD *)(a1 + 80) = v74;
          if ( v7 == v8 )
            break;
        }
      }
      else
      {
        if ( *v18 == 1634562150 && *((_WORD *)v18 + 2) == 26740 && *((_BYTE *)v18 + 6) == 61 )
          goto LABEL_22;
        if ( v14 <= 0x11
          || *(_QWORD *)v18 ^ 0x702D68636E617262LL | *((_QWORD *)v18 + 1) ^ 0x6F69746365746F72LL
          || *((_WORD *)v18 + 8) != 15726 )
        {
LABEL_15:
          if ( *v18 != 1751347809 || *((_BYTE *)v18 + 4) != 61 )
            goto LABEL_16;
          if ( v93 )
          {
            v77 = j__strlen("arch=");
            *(_QWORD *)(a1 + 72) = "arch=";
            *(_QWORD *)(a1 + 80) = v77;
          }
          v54 = j__strlen("=");
          v55 = sub_2222D70(v8, "=", v54, 0);
          if ( v55 == -1 )
          {
            v78 = *v8;
            v79 = v8[1];
            v112 = 0u;
            v111.m128i_i64[0] = v78;
            v111.m128i_i64[1] = v79;
          }
          else
          {
            v56 = v8[1];
            v57 = v55 + v54;
            if ( v57 > v56 )
            {
              v57 = v8[1];
              v58 = 0;
            }
            else
            {
              v58 = v56 - v57;
            }
            v59 = *v8;
            v112.m128i_i64[1] = v58;
            if ( v55 > v56 )
              v55 = v56;
            v111.m128i_i64[0] = v59;
            v111.m128i_i64[1] = v55;
            v112.m128i_i64[0] = v59 + v57;
          }
          v60 = nullptr;
          v61 = j__strlen(asc_22BE270);
          v62 = sub_2223270(&v112, asc_22BE270, v61, 0);
          v63 = v112.m128i_i64[1];
          if ( v62 < v112.m128i_i64[1] )
          {
            v60 = (void *)(v112.m128i_i64[1] - v62);
            v63 = v62;
          }
          v103[0] = (void *)(v112.m128i_i64[0] + v63);
          v103[1] = v60;
          v64 = (char *)(sub_22233F0(v103, asc_22BE270, v61, -1) + 1);
          v98 = v103[0];
          if ( v64 > v103[1] )
            v64 = (char *)v103[1];
          v65 = &v64[(char *)v103[1] - (char *)v60];
          if ( v65 > v103[1] )
            v65 = (char *)v103[1];
          v99 = v65;
          v66 = j__strlen("+");
          v67 = (char *)sub_2222D70(&v98, "+", v66, 0);
          if ( v67 == (char *)-1LL )
          {
            v104 = nullptr;
            v105 = 0;
            v103[0] = v98;
            v103[1] = v99;
          }
          else
          {
            v69 = &v67[v66];
            if ( v69 > v99 )
            {
              v69 = v99;
              v70 = 0;
            }
            else
            {
              v70 = v99 - v69;
            }
            v68 = v98;
            v105 = v70;
            if ( v67 > v99 )
              v67 = v99;
            v103[0] = v98;
            v103[1] = v67;
            v104 = &v69[(_QWORD)v98];
          }
          v71 = sub_2274CD0(v103[0], v103[1], v68);
          if ( v71 )
          {
            sub_22756C0(&v106, v71);
            sub_10432B0((__int64)v104, v105, a1, (__int64)&v106);
          }
          v8 += 2;
          v93 = 1;
          if ( v7 == v8 )
            break;
        }
        else
        {
          LOBYTE(v103[0]) = 61;
          v40 = sub_2222D70(v8, v103, 1, 0);
          if ( v40 == -1 )
          {
            v80 = *v8;
            v81 = v8[1];
            v112 = 0u;
            v111.m128i_i64[0] = v80;
            v111.m128i_i64[1] = v81;
          }
          else
          {
            v41 = v8[1];
            v42 = v40 + 1;
            if ( v40 + 1 > v41 )
            {
              v42 = v8[1];
              v43 = 0;
            }
            else
            {
              v43 = v41 - v42;
            }
            v44 = *v8;
            v112.m128i_i64[1] = v43;
            if ( v40 > v41 )
              v40 = v41;
            v111.m128i_i64[0] = v44;
            v111.m128i_i64[1] = v40;
            v112.m128i_i64[0] = v42 + v44;
          }
          v45 = nullptr;
          v46 = j__strlen(asc_22BE270);
          v47 = sub_2223270(&v112, asc_22BE270, v46, 0);
          v48 = v112.m128i_i64[1];
          if ( v47 < v112.m128i_i64[1] )
          {
            v45 = (void *)(v112.m128i_i64[1] - v47);
            v48 = v47;
          }
          v103[0] = (void *)(v112.m128i_i64[0] + v48);
          v103[1] = v45;
          v49 = sub_22233F0(v103, asc_22BE270, v46, -1);
          v50 = (char *)v103[1];
          v51 = (char *)(v49 + 1);
          v52 = v51 <= v103[1];
          *(void **)(a1 + 56) = v103[0];
          if ( !v52 )
            v51 = v50;
          v53 = &v51[v50 - (_BYTE *)v45];
          if ( v53 > v50 )
            v53 = v50;
          v8 += 2;
          *(_QWORD *)(a1 + 64) = v53;
          if ( v7 == v8 )
            break;
        }
      }
    }
  }
  if ( v110 )
  {
    v29 = *(_QWORD *)(v110 + 48);
    if ( v29 )
    {
      v76 = *(_BYTE **)(v110 + 40);
      v111.m128i_i64[0] = (__int64)&v112;
      sub_103ABE0(&v111, v76, (__int64)&v76[v29]);
      sub_A5EF20(a1, &v111);
      if ( (__m128i *)v111.m128i_i64[0] != &v112 )
        operator delete((void *)v111.m128i_i64[0]);
    }
  }
  v30 = (char **)&unk_2B17528;
  do
  {
    v34 = v30[6];
    if ( v34 )
    {
      v35 = 1LL << *(_DWORD *)v30;
      v36 = *(_DWORD *)v30 >> 6;
      if ( (v35 & *((_QWORD *)&v108 + v36)) != 0 )
      {
        if ( (v35 & *((_QWORD *)&v106 + v36)) != 0 )
        {
          v31 = v30[5];
          v111.m128i_i64[0] = (__int64)&v112;
          sub_103ABE0(&v111, v31, (__int64)&v34[(_QWORD)v31]);
          v32 = *(__m128i **)(a1 + 8);
          if ( v32 != *(__m128i **)(a1 + 16) )
          {
            v32->m128i_i64[0] = (__int64)v32[1].m128i_i64;
            v33 = v111.m128i_i64[0];
            if ( (__m128i *)v111.m128i_i64[0] != &v112 )
              goto LABEL_28;
LABEL_36:
            v32[1] = _mm_load_si128(&v112);
LABEL_29:
            v32->m128i_i64[1] = v111.m128i_i64[1];
            *(_QWORD *)(a1 + 8) += 32LL;
            goto LABEL_30;
          }
        }
        else
        {
          v37 = v30[7];
          v38 = v30[8];
          v111.m128i_i64[0] = (__int64)&v112;
          sub_103ABE0(&v111, v37, (__int64)&v38[(_QWORD)v37]);
          v32 = *(__m128i **)(a1 + 8);
          if ( v32 != *(__m128i **)(a1 + 16) )
          {
            v32->m128i_i64[0] = (__int64)v32[1].m128i_i64;
            v33 = v111.m128i_i64[0];
            if ( (__m128i *)v111.m128i_i64[0] == &v112 )
              goto LABEL_36;
LABEL_28:
            v32->m128i_i64[0] = v33;
            v32[1].m128i_i64[0] = v112.m128i_i64[0];
            goto LABEL_29;
          }
        }
        sub_A5EC30((void ***)a1, v32, &v111);
        if ( (__m128i *)v111.m128i_i64[0] != &v112 )
          operator delete((void *)v111.m128i_i64[0]);
      }
    }
LABEL_30:
    v30 += 14;
  }
  while ( v30 != &off_2B1B038 );
  if ( ptr != v102 )
    free(ptr);
  return a1;
}

