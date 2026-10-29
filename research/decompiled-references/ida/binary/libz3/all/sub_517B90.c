__int64 **__fastcall sub_517B90(_QWORD *a1, const void *a2, const void *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  _BYTE *v6; // rbx
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD *); // rax
  __int64 **v9; // r14
  _DWORD *v10; // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  char v12; // al
  __int64 (__fastcall *v13)(__int64); // rax
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ebp
  int v18; // r12d
  __int64 **v19; // rbx
  _QWORD *v20; // r14
  unsigned int v21; // r15d
  _DWORD *v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // r15d
  _DWORD *v31; // r13
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // ecx
  int *v39; // rbx
  unsigned int *v40; // r12
  unsigned int v41; // r13d
  int v42; // r15d
  __int64 (__fastcall *v43)(__int64); // rax
  char v44; // al
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // r15d
  unsigned int v49; // eax
  unsigned int v50; // esi
  __int64 *v51; // r8
  unsigned int v52; // edx
  __m128i *(__fastcall *v53)(__m128i *, __int64, const __m128i *, const __m128i *, char *); // rax
  __int64 v54; // rsi
  unsigned int v55; // edi
  __int64 v56; // rdx
  __int64 v57; // rdi
  unsigned int v58; // esi
  const __m128i *v59; // rdi
  __int64 v60; // r8
  unsigned int v61; // r9d
  const __m128i *v62; // rdx
  __int64 v63; // rsi
  __int64 (__fastcall *v64)(__int64, __int64, __int64); // rcx
  int v65; // edx
  void *v67; // r15
  void *v68; // r15
  __int64 *v70; // r11
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rsi
  unsigned int v74; // ecx
  __int64 v75; // rdi
  unsigned int v76; // r8d
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  int *v80; // rax
  int *v81; // rdx
  int v82; // ecx
  __int64 v83; // rdx
  _QWORD *v84; // rax
  unsigned int v85; // esi
  __int64 v86; // rcx
  int v87; // esi
  __int64 *v88; // rcx
  __int64 v89; // rax
  unsigned int v90; // ecx
  unsigned int v91; // r9d
  unsigned int v92; // edi
  unsigned int *v93; // rsi
  __int64 v94; // rcx
  _QWORD *v95; // rax
  char **exception; // rbp
  int v97; // [rsp+8h] [rbp-110h]
  unsigned int *v98; // [rsp+8h] [rbp-110h]
  int *v99; // [rsp+10h] [rbp-108h]
  _BYTE *v100; // [rsp+18h] [rbp-100h]
  _DWORD *v101; // [rsp+18h] [rbp-100h]
  _DWORD *v102; // [rsp+18h] [rbp-100h]
  _QWORD *v103; // [rsp+28h] [rbp-F0h]
  __int64 *v104; // [rsp+30h] [rbp-E8h]
  __int64 v105; // [rsp+30h] [rbp-E8h]
  __int64 v106; // [rsp+30h] [rbp-E8h]
  unsigned int v107; // [rsp+3Ch] [rbp-DCh]
  char v108; // [rsp+4Eh] [rbp-CAh] BYREF
  __int64 v109[4]; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v110; // [rsp+70h] [rbp-A8h] BYREF
  char v111[16]; // [rsp+80h] [rbp-98h] BYREF
  char v112[16]; // [rsp+90h] [rbp-88h] BYREF
  char v113[8]; // [rsp+A0h] [rbp-78h] BYREF
  char v114[16]; // [rsp+A8h] [rbp-70h] BYREF
  char v115[96]; // [rsp+B8h] [rbp-60h] BYREF

  v4 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v4
    || (v5 = v4,
        (v6 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v7 = v5[1];
  v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 64LL);
  if ( v8 == sub_512280 )
  {
    v9 = (__int64 **)sub_186B270(0xE0u);
    sub_511520((__int64)v9, v7, a1 + 1, 0);
LABEL_5:
    v9 = (__int64 **)__dynamic_cast(
                       v9,
                       (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                       (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
                       0);
    goto LABEL_6;
  }
  v9 = (__int64 **)v8(v5[1], 0, a1 + 1);
  if ( v9 )
    goto LABEL_5;
LABEL_6:
  v10 = (_DWORD *)a1[2];
  v99 = (int *)a1[3];
  if ( v10 )
    v97 = *(v10 - 1);
  else
    v97 = 0;
  v11 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v11 == sub_5155C0 )
  {
    v12 = *((_BYTE *)v5 + 152);
  }
  else
  {
    v101 = (_DWORD *)a1[2];
    v12 = v11((__int64)v5);
    v10 = v101;
  }
  if ( v12
    || ((v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL), v13 != sub_5155C0)
      ? (v102 = v10, v14 = v13((__int64)v6), v10 = v102)
      : (_DWORD *)(v14 = v6[152]),
        v14) )
  {
    *((_BYTE *)v9 + 152) = 1;
    return v9;
  }
  v15 = v5[2];
  v16 = *((_QWORD *)v6 + 2);
  if ( v15 )
  {
    v17 = *(_DWORD *)(v15 - 4);
    if ( v16 )
    {
      v18 = *(_DWORD *)(v16 - 4);
      if ( !v17 )
        goto LABEL_24;
      goto LABEL_17;
    }
    v18 = 0;
    if ( v17 )
    {
LABEL_17:
      v100 = v6;
      v19 = v9;
      v20 = v5;
      v21 = 0;
      v22 = v10;
      do
      {
        v23 = v21;
        do
        {
          v24 = v23;
          v25 = v23;
          v23 = *(_DWORD *)(*(_QWORD *)(v20[27] + 16LL) + 4LL * v23);
        }
        while ( v25 != v23 );
        v26 = v21;
        v27 = *(_QWORD *)v20[18] + 112 * v24;
        do
        {
          v28 = v26;
          v29 = v26;
          v26 = *(_DWORD *)(v19[27][2] + 4LL * v26);
        }
        while ( v29 != v26 );
        ++v21;
        sub_B290A0(*v19[18] + 112 * v28, v27);
      }
      while ( v21 < v17 );
      v9 = v19;
      v6 = v100;
      v10 = v22;
LABEL_24:
      if ( v18 )
      {
        v30 = 0;
        v31 = v10;
        do
        {
          v32 = v30;
          do
          {
            v33 = v32;
            v34 = v32;
            v32 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 27) + 16LL) + 4LL * v32);
          }
          while ( v34 != v32 );
          v35 = v17 + v30;
          v36 = **((_QWORD **)v6 + 18) + 112 * v33;
          do
          {
            v37 = v35;
            v38 = v35;
            v35 = *(_DWORD *)(v9[27][2] + 4LL * v35);
          }
          while ( v38 != v35 );
          ++v30;
          sub_B290A0(*v9[18] + 112 * v37, v36);
        }
        while ( v30 != v18 );
        v10 = v31;
      }
    }
  }
  else
  {
    if ( v16 )
    {
      v18 = *(_DWORD *)(v16 - 4);
      v17 = 0;
      goto LABEL_24;
    }
    v17 = 0;
  }
  if ( v97 )
  {
    v39 = v99;
    v40 = v10;
    v98 = &v10[v97];
    do
    {
      v41 = *v40;
      v42 = *v39;
      v43 = (__int64 (__fastcall *)(__int64))(*v9)[3];
      if ( v43 == sub_5155C0 )
        v44 = *((_BYTE *)v9 + 152);
      else
        v44 = v43((__int64)v9);
      if ( !v44 )
      {
        v45 = v9[27][2];
        v46 = v41;
        do
        {
          v47 = v46;
          v46 = *(_DWORD *)(v45 + 4LL * v46);
        }
        while ( v47 != v46 );
        v48 = v17 + v42;
        v49 = v48;
        do
        {
          v50 = v49;
          v49 = *(_DWORD *)(v45 + 4LL * v49);
        }
        while ( v50 != v49 );
        if ( v47 != v49 )
        {
          v51 = v9[18];
          v52 = v48;
          v53 = (__m128i *(__fastcall *)(__m128i *, __int64, const __m128i *, const __m128i *, char *))(*v9)[21];
          do
          {
            v54 = v52;
            v55 = v52;
            v52 = *(_DWORD *)(v45 + 4LL * v52);
          }
          while ( v55 != v52 );
          v56 = *v51;
          v57 = 7 * v54;
          v58 = v41;
          v59 = (const __m128i *)(*v51 + 16 * v57);
          do
          {
            v60 = v58;
            v61 = v58;
            v58 = *(_DWORD *)(v45 + 4LL * v58);
          }
          while ( v61 != v58 );
          v62 = (const __m128i *)(112 * v60 + v56);
          if ( v53 == sub_516210 )
            sub_50CC90(&v110, (int)v9[1], v62, v59, &v108);
          else
            v53(&v110, (__int64)v9, v62, v59, &v108);
          if ( v108 )
            goto LABEL_54;
          LODWORD(v63) = v41;
          v64 = (__int64 (__fastcall *)(__int64, __int64, __int64))(*v9)[26];
          do
          {
            v65 = v63;
            v63 = *(unsigned int *)(v9[27][2] + 4LL * (unsigned int)v63);
          }
          while ( v65 != (_DWORD)v63 );
          if ( v64 == sub_5156D0
             ? sub_B286B0(v113, &v110.m128i_u64[1])
             : (unsigned __int8)v64((__int64)v9, v63, (__int64)&v110) )
          {
LABEL_54:
            *((_BYTE *)v9 + 152) = 1;
          }
          else
          {
            v70 = v9[27];
            v71 = v41;
            v72 = v70[2];
            do
            {
              v73 = v71;
              v74 = v71;
              v71 = *(_DWORD *)(v72 + 4LL * v71);
            }
            while ( v74 != v71 );
            do
            {
              v75 = v48;
              v76 = v48;
              v48 = *(_DWORD *)(v72 + 4LL * v48);
            }
            while ( v76 != v48 );
            if ( v74 != v48 )
            {
              v77 = v70[3];
              if ( *(_DWORD *)(v77 + 4 * v75) >= *(_DWORD *)(v77 + 4 * v73) )
              {
                v48 = v71;
                v71 = v76;
              }
              v104 = v9[27];
              *(_DWORD *)(v72 + 4LL * v48) = v71;
              v78 = 4LL * v71;
              *(_DWORD *)(v77 + v78) += *(_DWORD *)(v77 + 4LL * v48);
              v79 = v70[4];
              v80 = (int *)(v79 + v78);
              v81 = (int *)(v79 + 4LL * v48);
              v82 = *v81;
              *v81 = *v80;
              *v80 = v82;
              v103 = (_QWORD *)v70[1];
              v83 = sub_180C100(v103 + 2, 24);
              *(_QWORD *)v83 = off_1C4F500;
              v84 = (_QWORD *)*v103;
              *(_QWORD *)(v83 + 8) = v104;
              *(_DWORD *)(v83 + 16) = v48;
              if ( v84 )
              {
                v85 = *((_DWORD *)v84 - 1);
                if ( v85 == *((_DWORD *)v84 - 2) )
                {
                  v91 = (3 * v85 + 1) >> 1;
                  v92 = 8 * v91 + 8;
                  if ( 8 * v85 + 8 >= v92 || v85 >= v91 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v109, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v109);
                    sub_233E40((__int64)v109);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v107 = (3 * v85 + 1) >> 1;
                  v105 = v83;
                  v93 = (unsigned int *)sub_186B300(v84 - 1, v92);
                  v84 = v93 + 2;
                  v83 = v105;
                  *v103 = v93 + 2;
                  v94 = v93[1];
                  *v93 = v107;
                  LODWORD(v93) = v94;
                  v88 = &v84[v94];
                  v87 = (_DWORD)v93 + 1;
                }
                else
                {
                  v86 = v85;
                  v87 = v85 + 1;
                  v88 = &v84[v86];
                }
              }
              else
              {
                v106 = v83;
                v95 = (_QWORD *)sub_186B270(0x18u);
                *v95 = 2;
                v84 = v95 + 1;
                v87 = 1;
                v83 = v106;
                *v103 = v84;
                v88 = v84;
              }
              *v88 = v83;
              *((_DWORD *)v84 - 1) = v87;
              v72 = v9[27][2];
            }
            do
            {
              v89 = v41;
              v90 = v41;
              v41 = *(_DWORD *)(v72 + 4LL * v41);
            }
            while ( v90 != v41 );
            sub_B290A0(*v9[18] + 112 * v89, &v110);
          }
          v67 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v114);
          sub_182CBA0(v67, v115);
          v68 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v111);
          sub_182CBA0(v68, v112);
        }
      }
      ++v40;
      ++v39;
    }
    while ( v40 != v98 );
  }
  return v9;
}

