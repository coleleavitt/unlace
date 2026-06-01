_QWORD *__fastcall sub_58BEA0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        int *a5,
        int *a6,
        unsigned int a7,
        int *a8)
{
  char **v8; // r14
  char **v9; // r14
  char **v10; // r12
  char **exception; // rbx
  char **v12; // r12
  __int64 v14; // r12
  __int64 v17; // r13
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, _QWORD, int *, int *, _QWORD, int *); // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // r12
  int *v23; // r14
  _DWORD *v24; // rax
  _DWORD *v25; // rdx
  int v26; // ecx
  int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  int *v35; // rbx
  int *v36; // r14
  _DWORD *v37; // rdx
  int v38; // ecx
  int v39; // edi
  __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned int v42; // r12d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  _DWORD *v47; // rax
  int *v48; // rbx
  _DWORD *v49; // rdx
  int v50; // ecx
  int v51; // edi
  __int64 v52; // rax
  unsigned int v53; // ecx
  unsigned int v54; // r14d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // rax
  __int64 v61; // rax
  __m128i v62; // xmm2
  _QWORD *v63; // r14
  __int64 v64; // r12
  _QWORD *v65; // rbx
  size_t v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r9
  unsigned int v69; // eax
  __int64 i; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rsi
  unsigned int v73; // ecx
  size_t v74; // rsi
  unsigned int *v75; // rax
  _QWORD *v76; // r14
  __int64 v77; // rbp
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rsi
  int v81; // eax
  _QWORD *v82; // rsi
  unsigned int v83; // eax
  unsigned int v84; // r8d
  size_t v85; // rsi
  unsigned int *v86; // rax
  __int64 v87; // rsi
  unsigned int v88; // ebp
  _QWORD *v89; // rax
  __int64 v90; // rdx
  size_t v91; // rdx
  __int64 v93; // rcx
  _QWORD *v94; // rax
  __int64 v95; // [rsp+8h] [rbp-90h]
  unsigned int v96; // [rsp+8h] [rbp-90h]
  unsigned int v97; // [rsp+8h] [rbp-90h]
  unsigned int v98; // [rsp+8h] [rbp-90h]
  __int64 v99; // [rsp+8h] [rbp-90h]
  unsigned int v100; // [rsp+8h] [rbp-90h]
  __int64 v101; // [rsp+8h] [rbp-90h]
  __int64 v103; // [rsp+10h] [rbp-88h]
  unsigned int v104; // [rsp+10h] [rbp-88h]
  __int64 v105; // [rsp+18h] [rbp-80h]
  __int64 v106; // [rsp+20h] [rbp-78h]
  _QWORD *v107; // [rsp+28h] [rbp-70h]
  __int64 v108[11]; // [rsp+40h] [rbp-58h] BYREF

  v14 = a4;
  v17 = *(_QWORD *)(a1 + 48);
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int *, int *, _QWORD, int *))(*(_QWORD *)v17 + 96LL);
  v19 = __dynamic_cast(
          a3,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
          0);
  if ( !v19
    || (v95 = v19[5],
        (v20 = __dynamic_cast(
                 a2,
                 (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                 (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                 0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v106 = v18(v17, v20[5], v95, (unsigned int)v14, a5, a6, a7, a8);
  if ( !v106 )
    return nullptr;
  v21 = (_QWORD *)sub_186B270(0x30u);
  *v21 = qword_1C66908;
  v21[1] = 0;
  v21[2] = 0;
  if ( (_DWORD)v14 )
  {
    v22 = v14;
    v23 = &a5[v22];
    v24 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v24 - 1) = 2;
    v25 = v24;
    v21[2] = v24;
    while ( 1 )
    {
      v26 = *a5++;
      *v24 = v26;
      v27 = *(v25 - 1);
      v28 = (unsigned int)(v27 + 1);
      *(v25 - 1) = v28;
      if ( a5 == v23 )
        break;
      v29 = *(v25 - 2);
      if ( v29 == (_DWORD)v28 )
      {
        v30 = (3 * v29 + 1) >> 1;
        v31 = 4 * v30 + 8;
        if ( 4 * v27 + 12 >= (unsigned int)v31 || v29 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v108, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v108);
          sub_233E40((__int64)v108);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v96 = (3 * v29 + 1) >> 1;
        v32 = (unsigned int *)sub_186B300(v25 - 2, v31);
        v25 = v32 + 2;
        *v32 = v96;
        v33 = v32[1];
        v21[2] = v25;
        v24 = &v25[v33];
      }
      else
      {
        v24 = &v25[v28];
      }
    }
    v21[3] = 0;
    v34 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v35 = a6;
    *((_QWORD *)v34 - 1) = 2;
    v36 = &a6[v22];
    v37 = v34;
    v21[3] = v34;
    while ( 1 )
    {
      v38 = *v35++;
      *v34 = v38;
      v39 = *(v37 - 1);
      v40 = (unsigned int)(v39 + 1);
      *(v37 - 1) = v40;
      if ( v35 == v36 )
        break;
      v41 = *(v37 - 2);
      if ( v41 == (_DWORD)v40 )
      {
        v42 = (3 * v41 + 1) >> 1;
        v43 = 4 * v42 + 8;
        if ( 4 * v39 + 12 >= (unsigned int)v43 || v41 >= v42 )
        {
          v12 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v108, "Overflow encountered when expanding vector");
          *v12 = (char *)off_1C63128;
          sub_2333C0(v12 + 1, v108);
          sub_233E40((__int64)v108);
          __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v37 - 2, v43);
        v37 = v44 + 2;
        *v44 = v42;
        v45 = v44[1];
        v21[3] = v37;
        v34 = &v37[v45];
      }
      else
      {
        v34 = &v37[v40];
      }
    }
  }
  else
  {
    v21[3] = 0;
  }
  v21[4] = 0;
  if ( !a7 )
  {
    v107 = v21 + 1;
    v58 = a2[2];
    if ( v58 )
      goto LABEL_29;
    v76 = (_QWORD *)a3[2];
    if ( !v76 )
      goto LABEL_56;
    goto LABEL_60;
  }
  v46 = (_QWORD *)sub_186B270(0x10u);
  *v46 = 2;
  v47 = v46 + 1;
  v48 = a8;
  v21[4] = v47;
  v49 = v47;
  while ( 1 )
  {
    v50 = *v48++;
    *v47 = v50;
    v51 = *(v49 - 1);
    v52 = (unsigned int)(v51 + 1);
    *(v49 - 1) = v52;
    if ( v48 == &a8[a7] )
      break;
    v53 = *(v49 - 2);
    if ( v53 == (_DWORD)v52 )
    {
      v54 = (3 * v53 + 1) >> 1;
      v55 = 4 * v54 + 8;
      if ( 4 * v51 + 12 >= (unsigned int)v55 || v53 >= v54 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v108, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v108);
        sub_233E40((__int64)v108);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v56 = (unsigned int *)sub_186B300(v49 - 2, v55);
      v49 = v56 + 2;
      *v56 = v54;
      v57 = v56[1];
      v21[4] = v49;
      v47 = &v49[v57];
    }
    else
    {
      v47 = &v49[v52];
    }
  }
  v107 = v21 + 1;
  v58 = a2[2];
  if ( !v58 )
  {
    v76 = (_QWORD *)a3[2];
    if ( !v76 )
    {
LABEL_63:
      sub_5881D0(v107, a7, a8);
      goto LABEL_56;
    }
LABEL_60:
    v93 = *((unsigned int *)v76 - 1);
    if ( (_DWORD)v93 )
    {
      v101 = 8 * v93;
      v94 = (_QWORD *)sub_186B270(0x18u);
      v65 = v94 + 1;
      *v94 = 2;
      v79 = v101;
      v77 = 0;
      v82 = v94 + 1;
      v81 = 1;
      goto LABEL_46;
    }
    if ( !a7 )
      goto LABEL_56;
    goto LABEL_63;
  }
LABEL_29:
  v59 = *(_DWORD *)(v58 - 4);
  v60 = *(unsigned int *)(v58 - 8);
  v97 = v60;
  v61 = sub_186B270(8 * v60 + 8);
  v62 = _mm_cvtsi32_si128(v59);
  v63 = (_QWORD *)a2[2];
  v64 = v61;
  v65 = (_QWORD *)(v61 + 8);
  *(_QWORD *)v61 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v97), v62).m128i_u64[0];
  if ( v63 )
  {
    v66 = 8LL * *((unsigned int *)v63 - 1);
    if ( v66 <= 8 )
    {
      if ( v66 == 8 )
        *(_QWORD *)(v61 + 8) = *v63;
    }
    else
    {
      memmove((void *)(v61 + 8), v63, v66);
    }
    *(_DWORD *)(v64 + 4) = 0;
    v67 = *((unsigned int *)v63 - 1);
    if ( (_DWORD)v67 )
    {
      v68 = 8 * v67;
      v69 = 0;
      for ( i = 0; ; v63 = (_QWORD *)(i + a2[2]) )
      {
        if ( *((_DWORD *)v65 - 2) == v69 )
        {
          v73 = (3 * v69 + 1) >> 1;
          v74 = 8 * v73 + 8;
          if ( 8 * v69 + 8 >= (unsigned int)v74 || v69 >= v73 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v108, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v108);
            sub_233E40((__int64)v108);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v105 = v68;
          v103 = i;
          v98 = (3 * v69 + 1) >> 1;
          v75 = (unsigned int *)sub_186B300(v65 - 1, v74);
          v65 = v75 + 2;
          i = v103;
          v68 = v105;
          *v75 = v98;
          LODWORD(v75) = v75[1];
          v72 = &v65[(unsigned int)v75];
          v69 = (_DWORD)v75 + 1;
        }
        else
        {
          v71 = v69++;
          v72 = &v65[v71];
        }
        i += 8;
        *v72 = *v63;
        *((_DWORD *)v65 - 1) = v69;
        if ( i == v68 )
          break;
      }
    }
  }
  else
  {
    *(_DWORD *)(v61 + 4) = 0;
  }
  v76 = (_QWORD *)a3[2];
  if ( v76 )
  {
    v77 = 0;
    v78 = *((unsigned int *)v76 - 1);
    v79 = 8 * v78;
    if ( (_DWORD)v78 )
    {
      while ( 1 )
      {
        v83 = *((_DWORD *)v65 - 1);
        if ( v83 == *((_DWORD *)v65 - 2) )
        {
          v84 = (3 * v83 + 1) >> 1;
          v85 = 8 * v84 + 8;
          if ( 8 * v83 + 8 >= (unsigned int)v85 || v83 >= v84 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v108, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v108);
            sub_233E40((__int64)v108);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v104 = (3 * v83 + 1) >> 1;
          v99 = v79;
          v86 = (unsigned int *)sub_186B300(v65 - 1, v85);
          v87 = v86[1];
          v65 = v86 + 2;
          v79 = v99;
          *v86 = v104;
          LODWORD(v86) = v87;
          v82 = &v65[v87];
          v81 = (_DWORD)v86 + 1;
        }
        else
        {
          v80 = v83;
          v81 = v83 + 1;
          v82 = &v65[v80];
        }
LABEL_46:
        v77 += 8;
        *v82 = *v76;
        *((_DWORD *)v65 - 1) = v81;
        if ( v79 == v77 )
          break;
        v76 = (_QWORD *)(v77 + a3[2]);
      }
    }
  }
  v88 = *((_DWORD *)v65 - 1);
  v100 = *((_DWORD *)v65 - 2);
  v89 = (_QWORD *)sub_186B270(8LL * v100 + 8);
  v90 = *((unsigned int *)v65 - 1);
  v21[1] = v89 + 1;
  v91 = 8 * v90;
  *v89 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v100), _mm_cvtsi32_si128(v88)).m128i_u64[0];
  if ( v91 <= 8 )
  {
    if ( v91 == 8 )
    {
      v89[1] = *v65;
      if ( !a7 )
        goto LABEL_55;
    }
    else if ( !a7 )
    {
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  memcpy(v89 + 1, v65, v91);
  if ( a7 )
LABEL_54:
    sub_5881D0(v107, a7, a8);
LABEL_55:
  sub_186B220(v65 - 1);
LABEL_56:
  *v21 = &off_1C518F0;
  v21[5] = v106;
  return v21;
}

