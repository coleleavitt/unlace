unsigned int *__fastcall sub_575440(__int64 a1, const void *a2)
{
  __int64 v2; // rbx
  _QWORD **v3; // rax
  unsigned int *v4; // rax
  unsigned int *v5; // rbp
  __int64 v6; // rax
  _DWORD *v7; // r13
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r11
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // r8
  unsigned int *v21; // r8
  __int64 v22; // r14
  unsigned int v23; // r12d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r12
  __int64 v32; // r13
  unsigned int *v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // r15
  int v36; // r14d
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rsi
  int v40; // r9d
  __int64 v41; // r14
  __int64 v42; // r15
  unsigned int v43; // eax
  __int64 v45; // r12
  unsigned int *v46; // rbx
  int v47; // ebp
  int v48; // eax
  __int64 v49; // rax
  int v50; // ecx
  _QWORD *v51; // rdx
  const __m128i *v52; // r12
  __m128i *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rsi
  __m128i *v56; // rdx
  __m128i v57; // xmm0
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rax
  int v61; // edx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __m128i *v64; // rdx
  unsigned __int64 v65; // rcx
  unsigned __int64 *v66; // rax
  unsigned __int64 v67; // rax
  __m128i *v68; // rax
  __m128i si128; // xmm0
  _QWORD *v70; // rax
  void *v71; // rdi
  int v72; // eax
  char **exception; // rbx
  __int64 *v74; // [rsp+8h] [rbp-D0h]
  __int64 v75; // [rsp+10h] [rbp-C8h]
  __int64 v76; // [rsp+10h] [rbp-C8h]
  __int64 v77; // [rsp+10h] [rbp-C8h]
  size_t v78; // [rsp+10h] [rbp-C8h]
  __int64 v79; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v80; // [rsp+10h] [rbp-C8h]
  int *v81; // [rsp+10h] [rbp-C8h]
  __int64 v82; // [rsp+18h] [rbp-C0h]
  __int64 v83; // [rsp+20h] [rbp-B8h]
  __int64 v84; // [rsp+20h] [rbp-B8h]
  int v85; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v86; // [rsp+20h] [rbp-B8h]
  __int64 v87; // [rsp+28h] [rbp-B0h]
  __int64 v88; // [rsp+30h] [rbp-A8h]
  int v89; // [rsp+3Ch] [rbp-9Ch]
  __int64 *v90; // [rsp+40h] [rbp-98h]
  _DWORD *v91; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v92[16]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v93[16]; // [rsp+70h] [rbp-68h] BYREF
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __int64 v95; // [rsp+88h] [rbp-50h] BYREF
  __int64 *v96; // [rsp+90h] [rbp-48h] BYREF

  v2 = a1;
  sub_644D80(v92, "select_equal_and_project", 11);
  v3 = (_QWORD **)__dynamic_cast(
                    a2,
                    (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                    (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                    0);
  v82 = (__int64)v3;
  if ( !v3 )
    __cxa_bad_cast();
  v4 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *, __int64))(*v3[1] + 40LL))(v3[1], a1 + 8);
  v5 = v4;
  if ( v4 )
    v5 = (unsigned int *)__dynamic_cast(
                           v4,
                           (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                           (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                           0);
  v6 = *(_QWORD *)(v82 + 40);
  if ( v6 )
    v89 = *(_DWORD *)(v6 - 4);
  else
    v89 = 0;
  sub_644D80(v93, "get_key_indexer", 11);
  v7 = (_DWORD *)sub_186B270(0x10u);
  v8 = *(_DWORD *)(a1 + 24);
  ptr = nullptr;
  v7[2] = v8;
  *(_QWORD *)v7 = 0x100000002LL;
  v91 = v7 + 2;
  v9 = sub_570C80((char **)(v82 + 160), &v91, (__int64 *)&ptr);
  v10 = *(_QWORD *)(v9 + 16);
  v11 = v9;
  if ( v10 )
    goto LABEL_7;
  v58 = *(_QWORD *)(v82 + 16);
  if ( v58 )
    v59 = *(_DWORD *)(v58 - 4);
  else
    v59 = 0;
  if ( v59 - *(_DWORD *)(v82 + 24) != 1 )
    goto LABEL_78;
  v70 = (_QWORD *)sub_186B270(0x80u);
  *v70 = 0;
  v70[2] = 0;
  v70[4] = 0;
  v70[6] = 0;
  v70[8] = 0;
  v70[10] = 0;
  v70[12] = 0;
  v70[14] = 0;
  v81 = (int *)(a1 + 24);
  ptr = v70;
  v95 = 8;
  LODWORD(v96) = 0;
  sub_148B660(&ptr, 1, a1 + 24, 1);
  if ( (unsigned int)sub_148BBB0(&ptr) != 1 )
  {
    v71 = ptr;
    if ( !ptr )
      goto LABEL_78;
    goto LABEL_92;
  }
  v72 = sub_148BAF0(&ptr);
  v71 = ptr;
  if ( !v72 )
  {
    if ( ptr )
      sub_186B220(ptr);
    v10 = sub_186B270(0x28u);
    sub_5734E0((_QWORD *)v10, 1u, v81, v82);
    goto LABEL_87;
  }
  if ( ptr )
LABEL_92:
    sub_186B220(v71);
LABEL_78:
  v10 = sub_186B270(0x88u);
  *(_QWORD *)v10 = qword_1C67AB0;
  *(_QWORD *)(v10 + 8) = 0;
  v60 = sub_186B270(0x10u);
  *(_QWORD *)(v10 + 8) = v60 + 8;
  v61 = *(_DWORD *)(v2 + 24);
  *(_QWORD *)v60 = 0x100000002LL;
  *(_DWORD *)(v60 + 8) = v61;
  *(_QWORD *)v10 = &off_1C512B8;
  v62 = (_QWORD *)sub_186B270(0xC0u);
  *v62 = 0;
  v62[2] = 0;
  v62[3] = 0;
  v62[5] = 0;
  v62[6] = 0;
  v62[8] = 0;
  v62[9] = 0;
  v62[11] = 0;
  v62[12] = 0;
  v62[14] = 0;
  v62[15] = 0;
  v62[17] = 0;
  v62[18] = 0;
  v62[20] = 0;
  v62[21] = 0;
  v62[23] = 0;
  *(_QWORD *)(v10 + 16) = v62;
  *(_QWORD *)(v10 + 24) = 8;
  *(_QWORD *)(v10 + 40) = 0x800000008LL;
  *(_DWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = v10 + 56;
  *(_DWORD *)(v10 + 72) = 8;
  *(_QWORD *)(v10 + 80) = v10 + 56;
  *(_DWORD *)(v10 + 88) = 8;
  v63 = (_QWORD *)sub_186B270(0x80u);
  *v63 = 0;
  v63[2] = 0;
  v63[4] = 0;
  v63[6] = 0;
  v63[8] = 0;
  v63[10] = 0;
  v63[12] = 0;
  v63[14] = 0;
  *(_QWORD *)(v10 + 96) = v63;
  *(_QWORD *)(v10 + 104) = 8;
  *(_DWORD *)(v10 + 112) = 0;
  *(_QWORD *)(v10 + 120) = 0xFFFFFFFFLL;
  sub_5716E0(v10 + 40, 0);
  *(_QWORD *)(v10 + 48) = 0;
  v64 = *(__m128i **)(v10 + 56);
  if ( !v64 )
  {
    v68 = (__m128i *)sub_186B270(0x12u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B6640);
    v86 = 0;
    v64 = v68 + 1;
    *(_QWORD *)(v10 + 56) = v68 + 1;
    *v68 = si128;
    goto LABEL_84;
  }
  v86 = v64[-1].m128i_u64[1];
  if ( v86 <= 7 )
  {
LABEL_84:
    while ( 1 )
    {
      v67 = v64[-1].m128i_u64[0];
      if ( v67 > 7 )
        break;
      v65 = (3 * v67 + 1) >> 1;
      if ( v67 + 16 >= v65 + 16 || v67 >= v65 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &ptr);
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v80 = (3 * v67 + 1) >> 1;
      v66 = (unsigned __int64 *)sub_186B300(&v64[-1], v65 + 16);
      v64 = (__m128i *)(v66 + 2);
      *(_QWORD *)(v10 + 56) = v66 + 2;
      *v66 = v80;
    }
    v64[-1].m128i_i64[1] = 8;
    memset(&v64->m128i_i8[v86], 0, 8 - v86);
    goto LABEL_86;
  }
  v64[-1].m128i_i64[1] = 8;
LABEL_86:
  *(_QWORD *)(v10 + 128) = 0;
LABEL_87:
  *(_QWORD *)(v11 + 16) = v10;
LABEL_7:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v82);
  sub_186B220(v7);
  sub_644EE0(v93);
  (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v10 + 24LL))(&ptr, v10, v2 + 32);
  if ( (_BYTE)ptr )
  {
    v90 = (__int64 *)&v96;
    v74 = &v95;
  }
  else
  {
    v74 = (__int64 *)v95;
    v90 = v96;
    if ( v96 == (__int64 *)v95 )
      goto LABEL_36;
  }
  v12 = *((_QWORD *)v5 + 19);
LABEL_10:
  v13 = *v74;
  v14 = *(_QWORD *)(v82 + 88);
  if ( v12 == 0xFFFFFFFFLL )
    goto LABEL_29;
  v15 = v89;
  v16 = *((_QWORD *)v5 + 11);
  if ( v89 )
    goto LABEL_12;
  while ( 2 )
  {
    v22 = v12;
LABEL_17:
    v23 = v5[34];
    if ( 3 * v23 < 4 * (v5[35] + v5[36]) )
    {
      v78 = 32LL * v23;
      v49 = sub_186B270(v78);
      v50 = 2 * v23;
      if ( 2 * v23 )
      {
        v51 = (_QWORD *)v49;
        do
        {
          *v51 = 0;
          v51 += 4;
          *(v51 - 2) = 0;
        }
        while ( v51 != (_QWORD *)(32LL * (v23 & 0x7FFFFFFF) + v49) );
      }
      v52 = *((const __m128i **)v5 + 16);
      v53 = (__m128i *)&v52[v5[34]];
      if ( v52 != v53 )
      {
        do
        {
          while ( v52->m128i_i32[1] != 2 )
          {
            if ( v53 == ++v52 )
              goto LABEL_59;
          }
          v54 = 16LL * (v52->m128i_i32[0] & (unsigned int)(v50 - 1));
          v55 = v49 + v54;
          if ( v78 == v54 )
          {
LABEL_64:
            if ( v49 == v55 )
            {
LABEL_71:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v56 = (__m128i *)v49;
            while ( v56->m128i_i32[1] )
            {
              if ( (__m128i *)v55 == ++v56 )
                goto LABEL_71;
            }
          }
          else
          {
            v56 = (__m128i *)(v49 + v54);
            while ( v56->m128i_i32[1] )
            {
              if ( (__m128i *)(v49 + v78) == ++v56 )
                goto LABEL_64;
            }
          }
          v57 = _mm_loadu_si128(v52++);
          *v56 = v57;
        }
        while ( v53 != v52 );
LABEL_59:
        v53 = *((__m128i **)v5 + 16);
      }
      if ( v53 )
      {
        v85 = v50;
        v79 = v49;
        sub_186B220(v53);
        v50 = v85;
        v49 = v79;
      }
      *((_QWORD *)v5 + 16) = v49;
      v5[34] = v50;
      v5[36] = 0;
    }
    v24 = sub_17E8B20(v22 + **((_QWORD **)v5 + 12), v5[26], 0);
    v25 = v5[34];
    v26 = *((_QWORD *)v5 + 16);
    v27 = v25 - 1;
    v28 = 16 * v25;
    v29 = 16LL * (v24 & v27);
    v30 = v26 + v29;
    if ( v29 == v28 )
    {
      v42 = 0;
      goto LABEL_38;
    }
    v87 = *((_QWORD *)v5 + 16);
    v31 = v26 + v29;
    v32 = v26 + v28;
    v83 = v2;
    v33 = v5;
    v34 = 0;
    v35 = v22;
    v88 = v30;
    v36 = v24;
    while ( 1 )
    {
      v37 = *(_DWORD *)(v31 + 4);
      if ( v37 != 2 )
      {
        if ( !v37 )
        {
          v40 = v36;
          v41 = v35;
          v42 = v34;
          v5 = v33;
          v2 = v83;
          if ( !v42 )
          {
            v42 = v31;
            goto LABEL_33;
          }
          goto LABEL_32;
        }
        v34 = v31;
        goto LABEL_22;
      }
      if ( v36 == *(_DWORD *)v31 )
      {
        v75 = *(_QWORD *)(v31 + 8);
        if ( !memcmp(
                (const void *)(v75 + **((_QWORD **)v33 + 14)),
                (const void *)(**((_QWORD **)v33 + 14) + v35),
                v33[30]) )
          break;
      }
LABEL_22:
      v31 += 16;
      if ( v32 == v31 )
      {
        v24 = v36;
        v26 = v87;
        v22 = v35;
        v30 = v88;
        v42 = v34;
        v5 = v33;
        v2 = v83;
LABEL_38:
        if ( v26 == v30 )
        {
LABEL_63:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v84 = v2;
        v45 = v30;
        v46 = v5;
        v47 = v24;
        v77 = v22;
        while ( 1 )
        {
          v48 = *(_DWORD *)(v26 + 4);
          if ( v48 == 2 )
          {
            if ( v47 == *(_DWORD *)v26 )
            {
              v41 = *(_QWORD *)(v26 + 8);
              if ( !memcmp(
                      (const void *)(v41 + **((_QWORD **)v46 + 14)),
                      (const void *)(**((_QWORD **)v46 + 14) + v77),
                      v46[30]) )
              {
                v5 = v46;
                v2 = v84;
                goto LABEL_34;
              }
            }
          }
          else
          {
            if ( !v48 )
            {
              v40 = v47;
              v41 = v77;
              v5 = v46;
              v2 = v84;
              if ( !v42 )
              {
                v42 = v26;
                goto LABEL_33;
              }
LABEL_32:
              --v5[36];
LABEL_33:
              *(_DWORD *)v42 = v40;
              v43 = v5[35];
              *(_QWORD *)(v42 + 8) = v41;
              *(_DWORD *)(v42 + 4) = 2;
              v5[35] = v43 + 1;
LABEL_34:
              v12 = *((_QWORD *)v5 + 19);
              if ( v12 == v41 )
                goto LABEL_27;
LABEL_35:
              if ( ++v74 == v90 )
                goto LABEL_36;
              goto LABEL_10;
            }
            v42 = v26;
          }
          v26 += 16;
          if ( v45 == v26 )
            goto LABEL_63;
        }
      }
    }
    v5 = v33;
    v2 = v83;
    v12 = *((_QWORD *)v5 + 19);
    if ( v12 != v75 )
      goto LABEL_35;
LABEL_27:
    ++v74;
    *((_QWORD *)v5 + 19) = 0xFFFFFFFFLL;
    if ( v90 != v74 )
    {
      v13 = *v74;
      v14 = *(_QWORD *)(v82 + 88);
LABEL_29:
      v38 = *((_QWORD *)v5 + 10);
      v39 = v5[18];
      v76 = v13;
      *((_QWORD *)v5 + 19) = v38;
      sub_5716E0((__int64)(v5 + 18), v38 + v39);
      v15 = v89;
      v12 = *((_QWORD *)v5 + 19);
      v13 = v76;
      v16 = *((_QWORD *)v5 + 11);
      if ( !v89 )
        continue;
LABEL_12:
      v17 = 0;
      v18 = 0;
      v19 = v14 + v13;
      do
      {
        if ( *(_DWORD *)(v2 + 24) != (_DWORD)v17 )
        {
          v20 = v18++;
          v21 = (unsigned int *)(*((_QWORD *)v5 + 5) + 32 * v20);
          *(_QWORD *)(v16 + v12 + *v21) = *((_QWORD *)v21 + 2) & *(_QWORD *)(v16 + v12 + *v21)
                                        | ((*(_QWORD *)(*(_QWORD *)(v82 + 40) + 32 * v17 + 8)
                                          & (*(_QWORD *)(v19 + *(unsigned int *)(*(_QWORD *)(v82 + 40) + 32 * v17)) >> *(_DWORD *)(*(_QWORD *)(v82 + 40) + 32 * v17 + 4))) << v21[1]);
        }
        ++v17;
      }
      while ( v15 != v17 );
      v22 = *((_QWORD *)v5 + 19);
      goto LABEL_17;
    }
    break;
  }
LABEL_36:
  sub_644EE0(v92);
  return v5;
}

