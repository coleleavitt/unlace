__int64 __fastcall sub_7EF3C0(__int64 a1, unsigned int *a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _DWORD *v7; // rbp
  __int64 v8; // rax
  int v9; // edi
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // r8
  __int64 *i; // rax
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r12d
  __m128i *v22; // r13
  unsigned int v23; // r10d
  size_t v24; // r14
  __m128i *v25; // r15
  int v26; // esi
  __int64 v27; // r10
  __m128i *v28; // rdi
  __m128i *v29; // rax
  __m128i *v30; // rcx
  _DWORD *v31; // rdx
  _DWORD *v32; // rax
  __int64 result; // rax
  _DWORD *v34; // rax
  unsigned int v35; // r12d
  unsigned int v36; // ecx
  unsigned int *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r13
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // r12
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  _QWORD *v46; // rcx
  __int64 *v47; // r12
  __int64 *v48; // r15
  unsigned int v49; // r13d
  __int64 v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned int v54; // ecx
  __int64 *v55; // rdx
  __int64 v56; // rsi
  int v57; // esi
  unsigned __int64 v58; // r12
  unsigned int v59; // r13d
  __int64 v60; // rdi
  __int64 v61; // r14
  int v62; // r15d
  __int64 v63; // rax
  __int64 v64; // r15
  unsigned int v65; // r15d
  unsigned int v66; // ecx
  unsigned int *v67; // rax
  __int64 v68; // rcx
  __m128i *v69; // rax
  __m128i *v70; // rdx
  const __m128i *v71; // rcx
  __m128i *v72; // r11
  __int64 v73; // rax
  __m128i *v74; // rdx
  __m128i *v75; // rax
  __m128i v76; // xmm0
  _QWORD *v77; // rdx
  _QWORD *v78; // rdx
  __int32 v79; // [rsp+8h] [rbp-90h]
  __int64 v80; // [rsp+10h] [rbp-88h]
  _QWORD *v81; // [rsp+18h] [rbp-80h]
  unsigned int v82; // [rsp+20h] [rbp-78h]
  void *ptr; // [rsp+28h] [rbp-70h]
  __int64 v84[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = sub_7EE9D0((_QWORD *)a1, a2);
  v6 = *(_QWORD **)(a1 + 2320);
  v7 = *(_DWORD **)(v5 + 16);
  v81 = (_QWORD *)v5;
  v8 = *(unsigned int *)(a1 + 2328);
  v9 = v7[3];
  v10 = v8 - 1;
  v8 *= 16;
  v11 = (_QWORD *)((char *)v6 + v8);
  v12 = 16LL * (v9 & v10);
  v13 = (_QWORD *)((char *)v6 + v12);
  if ( v12 != v8 )
  {
    for ( i = (_QWORD *)((char *)v6 + v12); v11 != i; i += 2 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v12 + 12) == v9 && v7 == (_DWORD *)v12 )
          return sub_7F0760(v81);
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v6; v6 += 2 )
  {
    v32 = (_DWORD *)*v6;
    if ( *v6 > 1u )
    {
      if ( v32[3] == v9 && v7 == v32 )
        return sub_7F0760(v81);
    }
    else if ( !v32 )
    {
      break;
    }
  }
LABEL_8:
  sub_7E9390(a1, v81, v12, v6, v13);
  v15 = *(_QWORD **)(a1 + 2312);
  if ( v15 )
  {
    v16 = *((_DWORD *)v15 - 1);
    if ( v16 == *((_DWORD *)v15 - 2) )
    {
      v35 = (3 * v16 + 1) >> 1;
      v36 = 8 * v35 + 8;
      if ( 8 * v16 + 8 >= v36 || v16 >= v35 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v84, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v84);
        sub_233E40((__int64)v84);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int *)sub_186B300(v15 - 1, v36);
      v38 = v37[1];
      v15 = v37 + 2;
      *v37 = v35;
      *(_QWORD *)(a1 + 2312) = v37 + 2;
      LODWORD(v37) = v38;
      v19 = &v15[v38];
      v18 = (_DWORD)v37 + 1;
    }
    else
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = &v15[v17];
    }
  }
  else
  {
    v77 = (_QWORD *)sub_186B270(0x18u);
    *v77 = 2;
    v18 = 1;
    v15 = v77 + 1;
    *(_QWORD *)(a1 + 2312) = v15;
    v19 = v15;
  }
  *v19 = v81;
  *((_DWORD *)v15 - 1) = v18;
  v20 = *(unsigned int *)(a1 + 2328);
  v79 = *(_DWORD *)v81;
  v21 = 2 * v20;
  if ( 3 * (int)v20 < (unsigned int)(4 * (*(_DWORD *)(a1 + 2332) + *(_DWORD *)(a1 + 2336))) )
  {
    v24 = 16LL * v21;
    v69 = (__m128i *)sub_186B270(v24);
    v22 = v69;
    v70 = &v69[v24 / 0x10];
    if ( v21 )
    {
      do
      {
        v69->m128i_i64[0] = 0;
        ++v69;
        v69[-1].m128i_i32[2] = 0;
      }
      while ( v69 != v70 );
    }
    v23 = v21 - 1;
    v25 = &v22[v24 / 0x10];
    v71 = *(const __m128i **)(a1 + 2320);
    v72 = (__m128i *)&v71[*(unsigned int *)(a1 + 2328)];
    if ( v71 != v72 )
    {
      do
      {
        while ( v71->m128i_i64[0] <= 1uLL )
        {
          if ( v72 == ++v71 )
            goto LABEL_87;
        }
        v73 = 16LL * (*(_DWORD *)(v71->m128i_i64[0] + 12) & v23);
        v74 = &v22[(unsigned __int64)v73 / 0x10];
        if ( v24 == v73 )
        {
LABEL_91:
          if ( v22 == v74 )
          {
LABEL_99:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v75 = v22;
          while ( v75->m128i_i64[0] )
          {
            if ( v74 == ++v75 )
              goto LABEL_99;
          }
        }
        else
        {
          v75 = &v22[(unsigned __int64)v73 / 0x10];
          while ( v75->m128i_i64[0] )
          {
            if ( v25 == ++v75 )
              goto LABEL_91;
          }
        }
        v76 = _mm_loadu_si128(v71++);
        *v75 = v76;
      }
      while ( v72 != v71 );
LABEL_87:
      v72 = *(__m128i **)(a1 + 2320);
    }
    if ( v72 )
    {
      sub_186B220(v72);
      v23 = v21 - 1;
    }
    *(_QWORD *)(a1 + 2320) = v22;
    *(_DWORD *)(a1 + 2328) = v21;
    *(_DWORD *)(a1 + 2336) = 0;
  }
  else
  {
    v22 = *(__m128i **)(a1 + 2320);
    v23 = v20 - 1;
    v24 = 16 * v20;
    v25 = &v22[v20];
  }
  v26 = v7[3];
  v27 = 16LL * (v26 & v23);
  v28 = &v22[(unsigned __int64)v27 / 0x10];
  if ( v27 != v24 )
  {
    v29 = &v22[(unsigned __int64)v27 / 0x10];
    v30 = nullptr;
    while ( 1 )
    {
      v31 = (_DWORD *)v29->m128i_i64[0];
      if ( v29->m128i_i64[0] > 1uLL )
      {
        if ( v31[3] == v26 && v7 == v31 )
        {
          v29->m128i_i64[0] = (__int64)v7;
          v29->m128i_i32[2] = v79;
          goto LABEL_42;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_97;
          v30 = v29;
          goto LABEL_98;
        }
        v30 = v29;
      }
      if ( ++v29 == v25 )
        goto LABEL_34;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_34:
    if ( v28 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = (_DWORD *)v22->m128i_i64[0];
    if ( v22->m128i_i64[0] <= 1uLL )
      break;
    if ( v34[3] == v26 && v7 == v34 )
    {
      v22->m128i_i64[0] = (__int64)v7;
      v22->m128i_i32[2] = v79;
      goto LABEL_42;
    }
LABEL_33:
    ++v22;
  }
  if ( v34 )
  {
    v30 = v22;
    goto LABEL_33;
  }
  if ( v30 )
LABEL_97:
    --*(_DWORD *)(a1 + 2336);
  else
    v30 = v22;
LABEL_98:
  v30->m128i_i64[0] = (__int64)v7;
  v30->m128i_i32[2] = v79;
  ++*(_DWORD *)(a1 + 2332);
LABEL_42:
  v39 = *(_QWORD *)(a1 + 8);
  v40 = (_QWORD *)sub_180C100(v39 + 2144, 16);
  v41 = *(_QWORD **)(v39 + 2128);
  v42 = v40;
  *v40 = off_1C54C00;
  v40[1] = a1;
  if ( v41 )
  {
    v43 = *((_DWORD *)v41 - 1);
    if ( v43 == *((_DWORD *)v41 - 2) )
    {
      v65 = (3 * v43 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v43 + 8 >= v66 || v43 >= v65 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v84, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v84);
        sub_233E40((__int64)v84);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (unsigned int *)sub_186B300(v41 - 1, v66);
      v68 = v67[1];
      v41 = v67 + 2;
      *(_QWORD *)(v39 + 2128) = v67 + 2;
      *v67 = v65;
      LODWORD(v67) = v68;
      v46 = &v41[v68];
      v45 = (_DWORD)v67 + 1;
    }
    else
    {
      v44 = v43;
      v45 = v43 + 1;
      v46 = &v41[v44];
    }
  }
  else
  {
    v78 = (_QWORD *)sub_186B270(0x18u);
    *v78 = 2;
    v45 = 1;
    v41 = v78 + 1;
    *(_QWORD *)(v39 + 2128) = v41;
    v46 = v41;
  }
  *v46 = v42;
  *((_DWORD *)v41 - 1) = v45;
  result = (__int64)v81;
  v47 = (__int64 *)v81[1];
  if ( v47 )
  {
    result = 5LL * *((unsigned int *)v47 - 1);
    v48 = &v47[5 * *((unsigned int *)v47 - 1)];
    if ( v47 != v48 )
    {
      result = (__int64)v81;
      v49 = *(_DWORD *)v81;
      do
      {
        v50 = *v47;
        if ( *(_WORD *)(*v47 + 4) || (*(_BYTE *)(v50 + 30) & 1) == 0 )
          result = (__int64)sub_7EB9B0(a1, v50, v49);
        v51 = v47[2];
        if ( *(_WORD *)(v51 + 4) || (*(_BYTE *)(v51 + 30) & 1) == 0 )
          result = (__int64)sub_7EB9B0(a1, v51, v49);
        v47 += 5;
      }
      while ( v48 != v47 );
    }
  }
  v52 = (unsigned int)v7[18];
  if ( (_DWORD)v52 )
  {
    v53 = (unsigned int)v7[5];
    v54 = 0;
    v55 = (__int64 *)&v7[4 * v53 + 20];
    do
    {
      v56 = *v55;
      ++v54;
      ++v55;
      v57 = *(_DWORD *)(v56 + 24);
    }
    while ( v54 < (unsigned int)v52 && v57 != 1 );
    v58 = 0;
    v59 = 0;
    v80 = 8 * v52;
    v82 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1016LL) + (v57 != 1);
    while ( 1 )
    {
      v61 = *(_QWORD *)&v7[4 * v53 + 20 + v58 / 4];
      v62 = *(_DWORD *)(v61 + 24);
      if ( v62 != 1 && v59 >= v82 )
        break;
      (*(void (__fastcall **)(_QWORD, _DWORD *, __int64))(**(_QWORD **)(a1 + 2296) + 16LL))(
        *(_QWORD *)(a1 + 2296),
        v7,
        v61);
      sub_7EA840(a1, v61);
      if ( v62 != 1 )
        goto LABEL_62;
LABEL_63:
      result = v80;
      v58 += 8LL;
      if ( v58 == v80 )
        return result;
      v53 = (unsigned int)v7[5];
    }
    v60 = *(_QWORD *)(a1 + 2304);
    if ( !v60 )
    {
      v63 = sub_13ED240(*(_QWORD *)(a1 + 8) + 72LL, a1);
      v60 = *(_QWORD *)(a1 + 2304);
      v64 = v63;
      if ( v63 != v60 )
      {
        if ( v60 )
        {
          ptr = *(void **)(a1 + 2304);
          (**(void (***)(void))v60)();
          sub_186B220(ptr);
        }
        *(_QWORD *)(a1 + 2304) = v64;
        v60 = v64;
      }
    }
    (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v60 + 16LL))(v60, v7, v61);
    sub_7EA840(a1, v61);
LABEL_62:
    ++v59;
    goto LABEL_63;
  }
  return result;
}

