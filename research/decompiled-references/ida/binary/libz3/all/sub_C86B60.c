__int64 __fastcall sub_C86B60(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rdx
  _DWORD *v10; // rax
  __int64 v11; // r12
  unsigned int v12; // edx
  unsigned int v13; // r13d
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  __m128i *v22; // r13
  unsigned int v23; // r10d
  __int64 v24; // rcx
  __int64 *v25; // r14
  int v26; // esi
  __int64 v27; // r10
  __m128i *v28; // rdi
  __m128i *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // r12d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rax
  _QWORD *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 i; // rax
  __m128i *v43; // rax
  int v44; // r9d
  __m128i *v45; // r8
  const __m128i *v46; // r15
  __m128i *v47; // r11
  __int64 v48; // rax
  __m128i *v49; // rdx
  __m128i *v50; // rax
  unsigned int v51; // eax
  int v52; // r10d
  __m128i *v53; // r12
  int v54; // r9d
  size_t v55; // r15
  __m128i *v56; // r13
  int v57; // esi
  __int64 v58; // rax
  __m128i *v59; // rdi
  __m128i *v60; // rax
  __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  __m128i *v64; // rax
  int v65; // r8d
  __m128i *v66; // rcx
  __m128i *v67; // rdi
  const __m128i *v68; // r14
  const __m128i *v69; // r10
  __int64 v70; // rax
  __m128i *v71; // rdx
  __m128i *v72; // rax
  char **exception; // rbx
  __int64 v74; // rdx
  size_t v75; // [rsp+8h] [rbp-80h]
  unsigned int v76; // [rsp+8h] [rbp-80h]
  int v77; // [rsp+8h] [rbp-80h]
  int v78; // [rsp+10h] [rbp-78h]
  size_t v79; // [rsp+10h] [rbp-78h]
  int v80; // [rsp+18h] [rbp-70h]
  __int64 v81[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)a1, a2) && *(_DWORD *)(a2 + 24) == 2 )
    return sub_C84C00(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), a3);
  if ( *(_WORD *)(a2 + 4)
    || (v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v5 != 5
    || v5[1] != 6
    || *(_DWORD *)(a2 + 24) != 2
    || (v7 = *(_QWORD *)(a2 + 32), v8 = *(_QWORD *)(a2 + 40), *(_WORD *)(v8 + 4))
    || (v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) != nullptr && *v9 != -1
    || *(_WORD *)(v7 + 4)
    || (v10 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr
    || *v10 != 5
    || v10[1] )
  {
    sub_161A90();
  }
  if ( *(_DWORD *)(v8 + 24) || v9 && *v9 != -1 )
    goto LABEL_20;
  v19 = *(_DWORD **)(sub_15D1F10(v8) + 24);
  if ( !v19 || *v19 != 5 )
    goto LABEL_20;
  v20 = *(unsigned int *)(a1 + 40);
  v21 = *(_DWORD *)(a1 + 48);
  if ( 3 * (int)v20 < (unsigned int)(4 * (v21 + *(_DWORD *)(a1 + 44))) )
  {
    v78 = 2 * v20;
    v75 = 16LL * (unsigned int)(2 * v20);
    v43 = (__m128i *)sub_186B270(v75);
    v24 = v75;
    v44 = v78;
    v22 = v43;
    v45 = &v43[v75 / 0x10];
    if ( v78 )
    {
      do
      {
        v43->m128i_i64[0] = 0;
        ++v43;
        v43[-1].m128i_i32[2] = 0;
      }
      while ( v43 != v45 );
    }
    v46 = *(const __m128i **)(a1 + 32);
    v23 = v78 - 1;
    v25 = (__int64 *)v45;
    v47 = (__m128i *)&v46[*(unsigned int *)(a1 + 40)];
    if ( v46 != v47 )
    {
      do
      {
        if ( v46->m128i_i64[0] > 1uLL )
        {
          v48 = 16LL * (*(_DWORD *)(v46->m128i_i64[0] + 12) & v23);
          v49 = &v22[(unsigned __int64)v48 / 0x10];
          if ( v75 == v48 )
          {
LABEL_75:
            if ( v22 == v49 )
            {
LABEL_105:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v50 = v22;
            while ( v50->m128i_i64[0] )
            {
              if ( v49 == ++v50 )
                goto LABEL_105;
            }
          }
          else
          {
            v50 = &v22[(unsigned __int64)v48 / 0x10];
            while ( v50->m128i_i64[0] )
            {
              if ( v45 == ++v50 )
                goto LABEL_75;
            }
          }
          *v50 = _mm_loadu_si128(v46);
        }
        ++v46;
      }
      while ( v47 != v46 );
      v47 = *(__m128i **)(a1 + 32);
    }
    if ( v47 )
    {
      v80 = v78;
      v79 = v75;
      v76 = v44 - 1;
      sub_186B220(v47);
      v44 = v80;
      v24 = v79;
      v23 = v76;
    }
    *(_QWORD *)(a1 + 32) = v22;
    v21 = 0;
    *(_DWORD *)(a1 + 40) = v44;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    v22 = *(__m128i **)(a1 + 32);
    v23 = v20 - 1;
    v24 = 16 * v20;
    v25 = (__int64 *)((char *)v22->m128i_i64 + v24);
  }
  v26 = *(_DWORD *)(v8 + 12);
  v27 = 16LL * (v26 & v23);
  v28 = &v22[(unsigned __int64)v27 / 0x10];
  if ( v27 != v24 )
  {
    v29 = &v22[(unsigned __int64)v27 / 0x10];
    v30 = nullptr;
    while ( 1 )
    {
      v31 = v29->m128i_i64[0];
      if ( v29->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v31 + 12) == v26 && v8 == v31 )
        {
          v30 = (__int64 *)v29;
          goto LABEL_87;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_85;
          v30 = (__int64 *)v29;
          goto LABEL_86;
        }
        v30 = (__int64 *)v29;
      }
      if ( ++v29 == (__m128i *)v25 )
        goto LABEL_56;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_56:
    if ( v28 == v22 )
    {
LABEL_143:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v40 = v22->m128i_i64[0];
    if ( v22->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v40 + 12) == v26 && v8 == v40 )
    {
      v30 = (__int64 *)v22;
      goto LABEL_87;
    }
LABEL_55:
    ++v22;
  }
  if ( v40 )
  {
    v30 = (__int64 *)v22;
    goto LABEL_55;
  }
  if ( v30 )
LABEL_85:
    *(_DWORD *)(a1 + 48) = v21 - 1;
  else
    v30 = (__int64 *)v22;
LABEL_86:
  *v30 = v8;
  *((_DWORD *)v30 + 2) = 0;
  ++*(_DWORD *)(a1 + 44);
LABEL_87:
  ++*((_DWORD *)v30 + 2);
  if ( a3 )
    goto LABEL_20;
  v51 = *(_DWORD *)(a1 + 64);
  v52 = *(_DWORD *)(a1 + 72);
  if ( 3 * v51 < 4 * (v52 + *(_DWORD *)(a1 + 68)) )
  {
    v77 = 2 * v51;
    v55 = 32LL * v51;
    v64 = (__m128i *)sub_186B270(v55);
    v65 = v77;
    v53 = v64;
    v66 = &v64[v55 / 0x10];
    if ( v77 )
    {
      do
      {
        v64->m128i_i64[0] = 0;
        ++v64;
        v64[-1].m128i_i32[2] = 0;
      }
      while ( v64 != v66 );
    }
    v67 = *(__m128i **)(a1 + 56);
    v54 = v77 - 1;
    v56 = v66;
    v68 = v67;
    v69 = &v67[*(unsigned int *)(a1 + 64)];
    if ( v67 != v69 )
    {
      do
      {
        if ( v68->m128i_i64[0] > 1uLL )
        {
          v70 = 16LL * (*(_DWORD *)(v68->m128i_i64[0] + 12) & (unsigned int)v54);
          v71 = &v53[(unsigned __int64)v70 / 0x10];
          if ( v55 == v70 )
          {
LABEL_119:
            if ( v53 == v71 )
            {
LABEL_134:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v72 = v53;
            while ( v72->m128i_i64[0] )
            {
              if ( v71 == ++v72 )
                goto LABEL_134;
            }
          }
          else
          {
            v72 = &v53[(unsigned __int64)v70 / 0x10];
            while ( v72->m128i_i64[0] )
            {
              if ( v66 == ++v72 )
                goto LABEL_119;
            }
          }
          *v72 = _mm_loadu_si128(v68);
        }
        ++v68;
      }
      while ( v69 != v68 );
      v67 = *(__m128i **)(a1 + 56);
    }
    if ( v67 )
    {
      sub_186B220(v67);
      v65 = v77;
      v54 = v77 - 1;
    }
    *(_QWORD *)(a1 + 56) = v53;
    v52 = 0;
    *(_DWORD *)(a1 + 64) = v65;
    *(_DWORD *)(a1 + 72) = 0;
  }
  else
  {
    v53 = *(__m128i **)(a1 + 56);
    v54 = v51 - 1;
    v55 = 16LL * v51;
    v56 = &v53[v55 / 0x10];
  }
  v57 = *(_DWORD *)(v8 + 12);
  v58 = 16LL * (v57 & (unsigned int)v54);
  v59 = &v53[(unsigned __int64)v58 / 0x10];
  if ( v58 != v55 )
  {
    v60 = &v53[(unsigned __int64)v58 / 0x10];
    v61 = nullptr;
    while ( 1 )
    {
      v62 = v60->m128i_i64[0];
      if ( v60->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v62 + 12) == v57 && v8 == v62 )
        {
          v61 = (__int64 *)v60;
          goto LABEL_132;
        }
      }
      else
      {
        if ( !v62 )
        {
          if ( v61 )
            goto LABEL_130;
          v61 = (__int64 *)v60;
          goto LABEL_131;
        }
        v61 = (__int64 *)v60;
      }
      if ( ++v60 == v56 )
        goto LABEL_101;
    }
  }
  v61 = nullptr;
LABEL_101:
  while ( 2 )
  {
    if ( v59 == v53 )
      goto LABEL_143;
    v63 = v53->m128i_i64[0];
    if ( v53->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v63 + 12) == v57 && v8 == v63 )
      {
        v61 = (__int64 *)v53;
        goto LABEL_132;
      }
      goto LABEL_100;
    }
    if ( v63 )
    {
      v61 = (__int64 *)v53;
LABEL_100:
      ++v53;
      continue;
    }
    break;
  }
  if ( v61 )
LABEL_130:
    *(_DWORD *)(a1 + 72) = v52 - 1;
  else
    v61 = (__int64 *)v53;
LABEL_131:
  *v61 = v8;
  *((_DWORD *)v61 + 2) = 0;
  ++*(_DWORD *)(a1 + 68);
LABEL_132:
  ++*((_DWORD *)v61 + 2);
LABEL_20:
  result = *(unsigned __int8 *)(v8 + 6);
  if ( (result & 1) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(v8 + 6) = result | 1;
    v12 = *(_DWORD *)(v11 + 8);
    v13 = *(_DWORD *)(v11 + 12);
    if ( v12 >= v13 )
    {
      v36 = 2 * v13;
      v37 = sub_186B270(8 * v36);
      v12 = *(_DWORD *)(v11 + 8);
      v38 = *(_QWORD **)v11;
      v14 = (_QWORD *)v37;
      if ( v12 )
      {
        if ( v12 - 1 <= 2 || (_QWORD *)v37 == v38 + 1 )
        {
          for ( i = 0; i != v12; ++i )
            v14[i] = v38[i];
        }
        else
        {
          v39 = 0;
          do
          {
            *(__m128i *)&v14[v39] = _mm_loadu_si128((const __m128i *)&v38[v39]);
            v39 += 2;
          }
          while ( 2LL * (v12 >> 1) != v39 );
          if ( (v12 & 1) != 0 )
            v14[v12 & 0xFFFFFFFE] = v38[v12 & 0xFFFFFFFE];
        }
      }
      if ( v38 != (_QWORD *)(v11 + 16) && v38 )
      {
        sub_186B220(v38);
        v12 = *(_DWORD *)(v11 + 8);
      }
      *(_QWORD *)v11 = v14;
      *(_DWORD *)(v11 + 12) = v36;
    }
    else
    {
      v14 = *(_QWORD **)v11;
    }
    v15 = *(_QWORD **)(a1 + 24);
    v14[v12] = v8;
    *(_DWORD *)(v11 + 8) = v12 + 1;
    if ( v15 )
    {
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
      {
        v32 = (3 * v16 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v33 || v16 >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_161A10(v81, "Overflow encountered when expanding vector", v74);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v81);
          sub_233E40((__int64)v81);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = (unsigned int *)sub_186B300(v15 - 1, v33);
        v35 = v34[1];
        v15 = v34 + 2;
        *v34 = v32;
        *(_QWORD *)(a1 + 24) = v34 + 2;
        LODWORD(v34) = v35;
        v18 = &v15[v35];
        result = (unsigned int)((_DWORD)v34 + 1);
      }
      else
      {
        v17 = v16;
        result = v16 + 1;
        v18 = &v15[v17];
      }
    }
    else
    {
      v41 = (_QWORD *)sub_186B270(0x18u);
      v15 = v41 + 1;
      *v41 = 2;
      result = 1;
      *(_QWORD *)(a1 + 24) = v15;
      v18 = v15;
    }
    *v18 = v8;
    *((_DWORD *)v15 - 1) = result;
  }
  return result;
}

