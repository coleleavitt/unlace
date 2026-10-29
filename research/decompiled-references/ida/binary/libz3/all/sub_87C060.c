__m128i *__fastcall sub_87C060(__int64 a1, __int64 a2, __int32 a3)
{
  char **exception; // rbp
  __int64 v7; // r9
  __int64 *v8; // rcx
  int v9; // edi
  unsigned int v10; // r10d
  __int64 v11; // r9
  __int64 *v12; // rsi
  __int64 v13; // r10
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __m128i *v26; // rbx
  unsigned int v27; // r10d
  __int64 v28; // rcx
  __m128i *v29; // r14
  int v30; // esi
  __int64 v31; // r10
  __m128i *v32; // rdi
  __m128i *result; // rax
  __m128i *v34; // rcx
  __int64 v35; // rdx
  __int64 *i; // rax
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // r15d
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  __int64 v44; // rcx
  __m128i *v45; // rax
  int v46; // r9d
  __m128i *v47; // r8
  const __m128i *v48; // r15
  __m128i *v49; // r11
  __int64 v50; // rax
  __m128i *v51; // rdx
  __m128i *v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rbx
  int v55; // r14d
  __int64 v56; // rax
  _QWORD *v57; // rdx
  __int64 v58; // r15
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 *v62; // rcx
  unsigned int v63; // r14d
  unsigned int v64; // ecx
  unsigned int *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  _QWORD *v68; // rdx
  size_t v69; // [rsp+8h] [rbp-90h]
  unsigned int v70; // [rsp+8h] [rbp-90h]
  int v71; // [rsp+10h] [rbp-88h]
  size_t v72; // [rsp+10h] [rbp-88h]
  int v73; // [rsp+18h] [rbp-80h]
  __int64 v74[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a1 + 744);
  v8 = *(__int64 **)(a1 + 736);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = v7 - 1;
  v11 = 16 * v7;
  v12 = &v8[(unsigned __int64)v11 / 8];
  v13 = 16LL * (v9 & v10);
  v14 = &v8[(unsigned __int64)v13 / 8];
  if ( v13 == v11 )
  {
LABEL_22:
    if ( v8 != v14 )
    {
      for ( i = v8; v14 != i; i += 2 )
      {
        v37 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v37 + 12) == v9 && a2 == v37 )
          {
            v38 = &v8[(unsigned __int64)v13 / 8];
            if ( v13 != v11 )
              goto LABEL_35;
LABEL_38:
            while ( v14 != v8 )
            {
              v40 = *v8;
              if ( (unsigned __int64)*v8 > 1 )
              {
                if ( *(_DWORD *)(v40 + 12) == v9 && a2 == v40 )
                {
                  v38 = v8;
                  goto LABEL_84;
                }
              }
              else if ( !v40 )
              {
                break;
              }
              v8 += 2;
            }
LABEL_98:
            BUG();
          }
        }
        else if ( !v37 )
        {
          break;
        }
      }
    }
LABEL_8:
    v17 = *(_QWORD *)(a1 + 80);
    v18 = (_QWORD *)sub_180C100(v17 + 2144, 24);
    v19 = *(_QWORD **)(v17 + 2128);
    v20 = v18;
    *v18 = off_1C55908;
    v18[1] = a1 + 736;
    v18[2] = a2;
    if ( v19 )
    {
      v21 = *((_DWORD *)v19 - 1);
      if ( v21 == *((_DWORD *)v19 - 2) )
      {
        v41 = (3 * v21 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v21 + 8 >= v42 || v21 >= v41 )
          goto LABEL_99;
        v43 = (unsigned int *)sub_186B300(v19 - 1, v42);
        v44 = v43[1];
        v19 = v43 + 2;
        *(_QWORD *)(v17 + 2128) = v43 + 2;
        *v43 = v41;
        LODWORD(v43) = v44;
        v24 = &v19[v44];
        v23 = (_DWORD)v43 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v19[v22];
      }
    }
    else
    {
      v68 = (_QWORD *)sub_186B270(0x18u);
      *v68 = 2;
      v23 = 1;
      v19 = v68 + 1;
      *(_QWORD *)(v17 + 2128) = v19;
      v24 = v19;
    }
    *v24 = v20;
    *((_DWORD *)v19 - 1) = v23;
    goto LABEL_12;
  }
  v15 = &v8[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
    v16 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
      break;
    if ( !v16 )
      goto LABEL_8;
LABEL_5:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_22;
  }
  if ( *(_DWORD *)(v16 + 12) != v9 || a2 != v16 )
    goto LABEL_5;
  v38 = &v8[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
LABEL_35:
    while ( 1 )
    {
      v39 = *v38;
      if ( (unsigned __int64)*v38 > 1 )
        break;
      if ( !v39 )
        goto LABEL_98;
      v38 += 2;
      if ( v12 == v38 )
        goto LABEL_38;
    }
    if ( *(_DWORD *)(v39 + 12) == v9 && a2 == v39 )
      break;
    v38 += 2;
    if ( v12 == v38 )
      goto LABEL_38;
  }
LABEL_84:
  v54 = *(_QWORD *)(a1 + 80);
  v55 = *((_DWORD *)v38 + 2);
  v56 = sub_180C100(v54 + 2144, 32);
  v57 = *(_QWORD **)(v54 + 2128);
  v58 = v56;
  *(_QWORD *)v56 = off_1C55930;
  *(_QWORD *)(v56 + 8) = a1 + 736;
  *(_QWORD *)(v56 + 16) = a2;
  *(_DWORD *)(v56 + 24) = v55;
  if ( v57 )
  {
    v59 = *((_DWORD *)v57 - 1);
    if ( v59 != *((_DWORD *)v57 - 2) )
    {
      v60 = v59;
      v61 = v59 + 1;
      v62 = &v57[v60];
      goto LABEL_87;
    }
    v63 = (3 * v59 + 1) >> 1;
    v64 = 8 * v63 + 8;
    if ( 8 * v59 + 8 < v64 && v59 < v63 )
    {
      v65 = (unsigned int *)sub_186B300(v57 - 1, v64);
      v66 = v65[1];
      v57 = v65 + 2;
      *(_QWORD *)(v54 + 2128) = v65 + 2;
      *v65 = v63;
      LODWORD(v65) = v66;
      v62 = &v57[v66];
      v61 = (_DWORD)v65 + 1;
      goto LABEL_87;
    }
LABEL_99:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v74, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v74);
    sub_233E40((__int64)v74);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v67 = (_QWORD *)sub_186B270(0x18u);
  *v67 = 2;
  v61 = 1;
  v57 = v67 + 1;
  *(_QWORD *)(v54 + 2128) = v57;
  v62 = v57;
LABEL_87:
  *v62 = v58;
  *((_DWORD *)v57 - 1) = v61;
LABEL_12:
  v25 = *(unsigned int *)(a1 + 744);
  if ( 3 * (int)v25 < (unsigned int)(4 * (*(_DWORD *)(a1 + 748) + *(_DWORD *)(a1 + 752))) )
  {
    v71 = 2 * v25;
    v69 = 16LL * (unsigned int)(2 * v25);
    v45 = (__m128i *)sub_186B270(v69);
    v28 = v69;
    v46 = v71;
    v26 = v45;
    v47 = &v45[v69 / 0x10];
    if ( v71 )
    {
      do
      {
        v45->m128i_i64[0] = 0;
        ++v45;
        v45[-1].m128i_i32[2] = 0;
      }
      while ( v45 != v47 );
    }
    v48 = *(const __m128i **)(a1 + 736);
    v27 = v71 - 1;
    v29 = v47;
    v49 = (__m128i *)&v48[*(unsigned int *)(a1 + 744)];
    if ( v48 != v49 )
    {
      do
      {
        while ( v48->m128i_i64[0] <= 1uLL )
        {
          if ( v49 == ++v48 )
            goto LABEL_68;
        }
        v50 = 16LL * (*(_DWORD *)(v48->m128i_i64[0] + 12) & v27);
        v51 = &v26[(unsigned __int64)v50 / 0x10];
        if ( v69 == v50 )
        {
LABEL_72:
          if ( v26 == v51 )
          {
LABEL_80:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v52 = v26;
          while ( v52->m128i_i64[0] )
          {
            if ( v51 == ++v52 )
              goto LABEL_80;
          }
        }
        else
        {
          v52 = &v26[(unsigned __int64)v50 / 0x10];
          while ( v52->m128i_i64[0] )
          {
            if ( v47 == ++v52 )
              goto LABEL_72;
          }
        }
        v53 = _mm_loadu_si128(v48++);
        *v52 = v53;
      }
      while ( v49 != v48 );
LABEL_68:
      v49 = *(__m128i **)(a1 + 736);
    }
    if ( v49 )
    {
      v73 = v71;
      v72 = v69;
      v70 = v46 - 1;
      sub_186B220(v49);
      v46 = v73;
      v28 = v72;
      v27 = v70;
    }
    *(_QWORD *)(a1 + 736) = v26;
    *(_DWORD *)(a1 + 744) = v46;
    *(_DWORD *)(a1 + 752) = 0;
  }
  else
  {
    v26 = *(__m128i **)(a1 + 736);
    v27 = v25 - 1;
    v28 = 16 * v25;
    v29 = (__m128i *)((char *)v26 + v28);
  }
  v30 = *(_DWORD *)(a2 + 12);
  v31 = 16LL * (v30 & v27);
  v32 = &v26[(unsigned __int64)v31 / 0x10];
  if ( v31 != v28 )
  {
    result = &v26[(unsigned __int64)v31 / 0x10];
    v34 = nullptr;
    while ( 1 )
    {
      v35 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v35 + 12) == v30 && a2 == v35 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i32[2] = a3;
          return result;
        }
      }
      else
      {
        if ( !v35 )
        {
          if ( v34 )
            goto LABEL_78;
          v34 = result;
          goto LABEL_79;
        }
        v34 = result;
      }
      if ( ++result == v29 )
        goto LABEL_49;
    }
  }
  v34 = nullptr;
LABEL_49:
  while ( 2 )
  {
    if ( v32 == v26 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v26->m128i_i64[0];
    if ( v26->m128i_i64[0] > 1uLL )
    {
      if ( result->m128i_i32[3] == v30 && (__m128i *)a2 == result )
      {
        v26->m128i_i64[0] = a2;
        v26->m128i_i32[2] = a3;
        return result;
      }
      goto LABEL_48;
    }
    if ( result )
    {
      v34 = v26;
LABEL_48:
      ++v26;
      continue;
    }
    break;
  }
  if ( v34 )
LABEL_78:
    --*(_DWORD *)(a1 + 752);
  else
    v34 = v26;
LABEL_79:
  v34->m128i_i64[0] = a2;
  v34->m128i_i32[2] = a3;
  ++*(_DWORD *)(a1 + 748);
  return result;
}

