__m128i *__fastcall sub_5DD5F0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rbx
  __int64 v7; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // r12
  __m128i **v11; // r13
  __m128i **v12; // r12
  _QWORD *v13; // rax
  __m128i **v14; // rax
  __int64 v15; // rsi
  __m128i **v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // rax
  _DWORD *v22; // rdi
  __int64 v23; // rax
  int v24; // esi
  __m128i **v25; // rbx
  __int64 v26; // r9
  __m128i **i; // r15
  __m128i *result; // rax
  __m128i *v29; // r13
  __int64 v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rax
  __int32 v33; // r8d
  __m128i **v34; // rcx
  unsigned int v35; // edx
  __m128i **v36; // rsi
  __int64 v37; // rdx
  __m128i **v38; // r10
  __m128i **v39; // rax
  __m128i *v40; // rdx
  __int64 *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  __m128i v46; // xmm0
  __int64 v47; // r8
  __m128i *v48; // rbp
  __int32 v49; // r9d
  __int64 v50; // r8
  __int32 v51; // esi
  __m128i v52; // xmm1
  __int64 v53; // rdx
  __m128i *v54; // rdi
  __m128i *v55; // rdx
  __m128i *v56; // r8
  __m128i *v57; // rcx
  __int64 v58; // rdi
  bool v59; // zf
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdi
  __m128i *v63; // rax
  unsigned int v64; // ecx
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rax
  __m128i *v68; // r10
  const __m128i *v69; // rcx
  __m128i *v70; // r11
  __int64 v71; // rdx
  __m128i *v72; // rsi
  __m128i *v73; // rdx
  __m128i v74; // xmm1
  __int64 v75; // rsi
  __int64 v76; // rdi
  _QWORD *v77; // rax
  __m128i **v78; // [rsp+8h] [rbp-D0h]
  unsigned int v79; // [rsp+14h] [rbp-C4h]
  unsigned int v80; // [rsp+14h] [rbp-C4h]
  __int64 v81; // [rsp+18h] [rbp-C0h]
  __m128i v82; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+38h] [rbp-A0h]
  __m128i *v84; // [rsp+40h] [rbp-98h]
  __int64 v85; // [rsp+48h] [rbp-90h]
  __m128i *v86; // [rsp+50h] [rbp-88h]
  __m128i *v87; // [rsp+58h] [rbp-80h]
  __m128i v88; // [rsp+70h] [rbp-68h] BYREF
  __int64 v89[11]; // [rsp+80h] [rbp-58h] BYREF

  v6 = a1 + 48;
  sub_64CDB0(a1 + 48);
  sub_654200(a1 + 48, 0);
  v7 = *(_QWORD *)(a1 + 24);
  v81 = *(_QWORD *)(a1 + 3016);
  v8 = *(_QWORD **)(v7 + 2288);
  v9 = &v8[*(unsigned int *)(v7 + 2296)];
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      v10 = v8;
      if ( *v8 > 1u )
        break;
      if ( v9 == ++v8 )
        goto LABEL_10;
    }
    if ( v9 != v8 )
    {
      do
      {
        sub_6511B0(v6, *v10, 0);
        do
          ++v10;
        while ( v9 != v10 && *v10 <= 1u );
      }
      while ( v10 != (_QWORD *)(*(_QWORD *)(v7 + 2288) + 8LL * *(unsigned int *)(v7 + 2296)) );
    }
  }
LABEL_10:
  sub_64C320(v6);
  sub_64C430(v6, a2);
  sub_64DCE0(v6);
  v11 = *(__m128i ***)(a2 + 32);
  v12 = &v11[2 * *(unsigned int *)(a2 + 40)];
  if ( v11 == v12 )
    goto LABEL_26;
  while ( (unsigned __int64)*v11 <= 1 )
  {
    v11 += 2;
    if ( v12 == v11 )
      goto LABEL_26;
  }
  if ( v12 == v11 )
  {
LABEL_26:
    v78 = nullptr;
    v15 = 0;
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    *v13 = 2;
    v14 = (__m128i **)(v13 + 1);
    v15 = 1;
    v78 = v14;
    while ( 1 )
    {
      *v14 = *v11;
      *((_DWORD *)v78 - 1) = v15;
      v16 = v11 + 2;
      if ( v12 == v11 + 2 )
        break;
      while ( 1 )
      {
        v11 = v16;
        if ( (unsigned __int64)*v16 > 1 )
          break;
        v16 += 2;
        if ( v12 == v16 )
          goto LABEL_27;
      }
      if ( v12 == v16 )
        break;
      v17 = *((_DWORD *)v78 - 1);
      if ( v17 == *((_DWORD *)v78 - 2) )
      {
        v19 = (3 * v17 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v17 + 8 >= v20 || v17 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v89, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v89);
          sub_233E40((__int64)v89);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v78 - 1, v20);
        v22 = v21 + 2;
        v78 = (__m128i **)(v21 + 2);
        *v21 = (3 * v17 + 1) >> 1;
        v23 = v21[1];
        v24 = v23;
        v14 = (__m128i **)&v22[2 * v23];
        v15 = (unsigned int)(v24 + 1);
      }
      else
      {
        v18 = v17;
        v15 = v17 + 1;
        v14 = &v78[v18];
      }
    }
  }
LABEL_27:
  sub_654540(v6, v15, v78);
  v25 = *(__m128i ***)(a2 + 32);
  v26 = 2LL * *(unsigned int *)(a2 + 40);
  for ( i = &v25[v26]; i != v25; v25 += 2 )
  {
    if ( (unsigned __int64)*v25 > 1 )
      break;
  }
  result = &v88;
  if ( v12 == v25 )
    goto LABEL_57;
  do
  {
    v29 = *v25;
    result = (__m128i *)(*(__int64 (__fastcall **)(__m128i *, __int64, __m128i *))(*(_QWORD *)v81 + 232LL))(
                          &v88,
                          v81,
                          *v25);
    v30 = v88.m128i_i64[0];
    if ( !v88.m128i_i64[0] )
      goto LABEL_55;
    v31 = *(_QWORD *)(a1 + 32);
    if ( v88.m128i_i64[0] == *(_QWORD *)(v31 + 856) )
      goto LABEL_69;
    v32 = *(unsigned int *)(a1 + 3104);
    v33 = v29->m128i_i32[3];
    v34 = *(__m128i ***)(a1 + 3096);
    v35 = v32 - 1;
    v32 *= 16;
    v36 = (__m128i **)((char *)v34 + v32);
    v37 = 16LL * (v33 & v35);
    v38 = &v34[(unsigned __int64)v37 / 8];
    if ( v37 == v32 )
    {
LABEL_76:
      while ( v38 != v34 )
      {
        v63 = *v34;
        if ( (unsigned __int64)*v34 > 1 )
        {
          if ( v63->m128i_i32[3] == v33 && v29 == v63 )
            goto LABEL_71;
        }
        else if ( !v63 )
        {
          break;
        }
        v34 += 2;
      }
LABEL_41:
      v41 = *(__int64 **)(a1 + 3128);
      ++*(_DWORD *)(v30 + 8);
      if ( !v41 )
        goto LABEL_116;
      goto LABEL_42;
    }
    v39 = &v34[(unsigned __int64)v37 / 8];
    while ( 1 )
    {
      v40 = *v39;
      if ( (unsigned __int64)*v39 > 1 )
        break;
      if ( !v40 )
        goto LABEL_41;
LABEL_38:
      v39 += 2;
      if ( v36 == v39 )
        goto LABEL_76;
    }
    if ( v40->m128i_i32[3] != v33 || v29 != v40 )
      goto LABEL_38;
LABEL_71:
    v60 = sub_15E1B70(v31);
    v30 = v60;
    if ( v60 )
    {
      v61 = v88.m128i_i64[0];
      ++*(_DWORD *)(v60 + 8);
      if ( v61 )
      {
        v62 = v88.m128i_i64[1];
        v59 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v59 )
          sub_15D7BC0(v62, v61);
      }
      v88.m128i_i64[0] = v30;
      goto LABEL_41;
    }
    v75 = v88.m128i_i64[0];
    if ( v88.m128i_i64[0]
      && (v76 = v88.m128i_i64[1], v59 = *(_DWORD *)(v88.m128i_i64[0] + 8) == 1, --*(_DWORD *)(v88.m128i_i64[0] + 8), v59) )
    {
      sub_15D7BC0(v76, v75);
      v88.m128i_i64[0] = 0;
    }
    else
    {
      v88.m128i_i64[0] = 0;
    }
    v41 = *(__int64 **)(a1 + 3128);
    if ( !v41 )
    {
LABEL_116:
      v77 = (_QWORD *)sub_186B270(0x18u);
      v41 = v77 + 1;
      *v77 = 2;
      v44 = 1;
      *(_QWORD *)(a1 + 3128) = v41;
      v45 = v41;
      goto LABEL_44;
    }
LABEL_42:
    v42 = *((_DWORD *)v41 - 1);
    if ( v42 == *((_DWORD *)v41 - 2) )
    {
      v64 = (3 * v42 + 1) >> 1;
      v65 = 8 * v64 + 8;
      if ( 8 * v42 + 8 >= (unsigned int)v65 || v42 >= v64 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v89, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v89);
        sub_233E40((__int64)v89);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v80 = (3 * v42 + 1) >> 1;
      v66 = (unsigned int *)sub_186B300(v41 - 1, v65);
      v41 = (__int64 *)(v66 + 2);
      *(_QWORD *)(a1 + 3128) = v66 + 2;
      *v66 = v80;
      LODWORD(v66) = v66[1];
      v45 = &v41[(unsigned int)v66];
      v44 = (_DWORD)v66 + 1;
    }
    else
    {
      v43 = v42;
      v44 = v42 + 1;
      v45 = &v41[v43];
    }
LABEL_44:
    *v45 = v30;
    v46 = _mm_loadl_epi64(&v88);
    *((_DWORD *)v41 - 1) = v44;
    v47 = *(unsigned int *)(a1 + 3104);
    v79 = 2 * v47;
    if ( 3 * (int)v47 < (unsigned int)(4 * (*(_DWORD *)(a1 + 3108) + *(_DWORD *)(a1 + 3112))) )
    {
      v82.m128i_i64[1] = v46.m128i_i64[0];
      v82.m128i_i64[0] = 16LL * v79;
      v67 = sub_186B270(v82.m128i_u64[0]);
      v50 = v82.m128i_i64[0];
      v48 = (__m128i *)v67;
      v46 = _mm_loadl_epi64((const __m128i *)&v82.m128i_u64[1]);
      v68 = (__m128i *)(v82.m128i_i64[0] + v67);
      if ( v79 )
      {
        if ( (v82.m128i_i8[0] & 0x10) == 0 || (v67 += 16, *(_OWORD *)(v67 - 16) = 0, v68 != (__m128i *)v67) )
        {
          do
          {
            v67 += 32;
            *(_OWORD *)(v67 - 32) = 0;
            *(_OWORD *)(v67 - 16) = 0;
          }
          while ( v68 != (__m128i *)v67 );
        }
      }
      v69 = *(const __m128i **)(a1 + 3096);
      v70 = (__m128i *)&v69[*(unsigned int *)(a1 + 3104)];
      v49 = v79 - 1;
      result = v68;
      if ( v69 != v70 )
      {
        do
        {
          while ( v69->m128i_i64[0] <= 1uLL )
          {
            if ( v70 == ++v69 )
              goto LABEL_100;
          }
          v71 = 16LL * (*(_DWORD *)(v69->m128i_i64[0] + 12) & (unsigned int)v49);
          v72 = &v48[(unsigned __int64)v71 / 0x10];
          if ( v50 == v71 )
          {
LABEL_104:
            if ( v48 == v72 )
            {
LABEL_117:
              v87 = v68;
              v86 = v68;
              v85 = v50;
              LODWORD(v84) = v79 - 1;
              v83 = (__int64)v70;
              v82.m128i_i64[1] = (__int64)v69;
              v82.m128i_i64[0] = v46.m128i_i64[0];
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v73 = v48;
            while ( v73->m128i_i64[0] )
            {
              if ( v72 == ++v73 )
                goto LABEL_117;
            }
          }
          else
          {
            v73 = &v48[(unsigned __int64)v71 / 0x10];
            while ( v73->m128i_i64[0] )
            {
              if ( v68 == ++v73 )
                goto LABEL_104;
            }
          }
          v74 = _mm_loadu_si128(v69++);
          *v73 = v74;
        }
        while ( v70 != v69 );
LABEL_100:
        v70 = *(__m128i **)(a1 + 3096);
      }
      if ( v70 )
      {
        v84 = v68;
        v83 = v50;
        v82.m128i_i32[2] = v79 - 1;
        v82.m128i_i64[0] = v46.m128i_i64[0];
        sub_186B220(v70);
        result = v84;
        v50 = v83;
        v49 = v82.m128i_i32[2];
        v46 = _mm_loadl_epi64(&v82);
      }
      *(_QWORD *)(a1 + 3096) = v48;
      *(_DWORD *)(a1 + 3112) = 0;
      *(_DWORD *)(a1 + 3104) = v79;
    }
    else
    {
      v48 = *(__m128i **)(a1 + 3096);
      v49 = v47 - 1;
      v50 = 16 * v47;
      result = (__m128i *)((char *)v48 + v50);
    }
    v51 = v29->m128i_i32[3];
    v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, v46);
    v53 = 16LL * (v51 & (unsigned int)v49);
    v54 = &v48[(unsigned __int64)v53 / 0x10];
    if ( v53 != v50 )
    {
      v55 = &v48[(unsigned __int64)v53 / 0x10];
      v56 = nullptr;
      while ( 1 )
      {
        v57 = (__m128i *)v55->m128i_i64[0];
        if ( v55->m128i_i64[0] > 1uLL )
        {
          if ( v57->m128i_i32[3] == v51 && v29 == v57 )
          {
            *v55 = v52;
            goto LABEL_68;
          }
        }
        else
        {
          if ( !v57 )
          {
            if ( v56 )
              goto LABEL_110;
            v56 = v55;
            goto LABEL_111;
          }
          v56 = v55;
        }
        if ( ++v55 == result )
          goto LABEL_63;
      }
    }
    v56 = nullptr;
LABEL_63:
    while ( 2 )
    {
      if ( v54 == v48 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      result = (__m128i *)v48->m128i_i64[0];
      if ( v48->m128i_i64[0] > 1uLL )
      {
        if ( result->m128i_i32[3] == v51 && v29 == result )
        {
          *v48 = v52;
          goto LABEL_68;
        }
        goto LABEL_62;
      }
      if ( result )
      {
        v56 = v48;
LABEL_62:
        ++v48;
        continue;
      }
      break;
    }
    if ( v56 )
LABEL_110:
      --*(_DWORD *)(a1 + 3112);
    else
      v56 = v48;
LABEL_111:
    *v56 = v52;
    ++*(_DWORD *)(a1 + 3108);
LABEL_68:
    v30 = v88.m128i_i64[0];
    if ( v88.m128i_i64[0] )
    {
LABEL_69:
      v58 = v88.m128i_i64[1];
      v59 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v59 )
        result = (__m128i *)sub_15D7BC0(v58, v30);
    }
    do
LABEL_55:
      v25 += 2;
    while ( i != v25 && (unsigned __int64)*v25 <= 1 );
  }
  while ( v25 != v12 );
LABEL_57:
  if ( v78 )
    return (__m128i *)sub_186B220(v78 - 1);
  return result;
}

