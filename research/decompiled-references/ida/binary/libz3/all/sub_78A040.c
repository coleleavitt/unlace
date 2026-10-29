__int64 __fastcall sub_78A040(__int64 a1, __int64 a2, __int32 a3)
{
  _DWORD *v6; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __m128i *v18; // r13
  unsigned int v19; // r10d
  __int64 v20; // rcx
  __m128i *v21; // r14
  int v22; // esi
  __int64 v23; // r10
  __m128i *v24; // rdi
  __m128i *v25; // rax
  __m128i *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r14
  __m128i *v30; // r13
  unsigned int v31; // r10d
  __int64 v32; // rcx
  __m128i *v33; // r14
  __int64 v34; // r10
  __m128i *v35; // rsi
  __m128i *v36; // rax
  __m128i *v37; // rcx
  int v38; // edx
  __int32 v39; // eax
  __int64 *v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 result; // rax
  __int64 *v44; // rdx
  unsigned int v45; // ebx
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rdx
  __m128i *v49; // rax
  int v50; // r8d
  __m128i *v51; // rdx
  const __m128i *v52; // r15
  __m128i *v53; // r11
  __int64 v54; // rax
  __m128i *v55; // rdx
  __m128i *v56; // rax
  __m128i v57; // xmm0
  __m128i *v58; // rax
  int v59; // r9d
  __m128i *v60; // r8
  const __m128i *v61; // r15
  __m128i *v62; // r11
  __int64 v63; // rax
  __m128i *v64; // rdx
  __m128i *v65; // rax
  __m128i v66; // xmm0
  _QWORD *v67; // rax
  char **exception; // rbp
  unsigned int v69; // [rsp+8h] [rbp-90h]
  size_t v70; // [rsp+8h] [rbp-90h]
  unsigned int v71; // [rsp+8h] [rbp-90h]
  size_t v72; // [rsp+10h] [rbp-88h]
  int v73; // [rsp+10h] [rbp-88h]
  size_t v74; // [rsp+10h] [rbp-88h]
  int v75; // [rsp+18h] [rbp-80h]
  int v76; // [rsp+18h] [rbp-80h]
  __int64 v77[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 296) )
  {
    do
    {
      sub_1623DD0(*(_QWORD *)(a1 + 200));
      v8 = *(_QWORD *)(a1 + 160);
      if ( v8 )
      {
        v9 = *(_QWORD **)(a1 + 144);
        v10 = *(_DWORD *)(v8 - 4);
        if ( !v9 )
          goto LABEL_12;
      }
      else
      {
        v9 = *(_QWORD **)(a1 + 144);
        v10 = 0;
        if ( !v9 )
        {
LABEL_12:
          v16 = (_QWORD *)sub_186B270(0x10u);
          v9 = v16 + 1;
          *v16 = 2;
          *(_QWORD *)(a1 + 144) = v16 + 1;
          v6 = v16 + 1;
          goto LABEL_4;
        }
      }
      v11 = *((unsigned int *)v9 - 1);
      if ( (_DWORD)v11 == *((_DWORD *)v9 - 2) )
      {
        v12 = (unsigned int)(3 * v11 + 1) >> 1;
        v13 = 4 * v12 + 8;
        if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
          goto LABEL_118;
        v14 = (unsigned int *)sub_186B300(v9 - 1, v13);
        v9 = v14 + 2;
        *v14 = v12;
        v15 = v14[1];
        *(_QWORD *)(a1 + 144) = v9;
        v6 = (_DWORD *)v9 + v15;
      }
      else
      {
        v6 = (_DWORD *)v9 + v11;
      }
LABEL_4:
      *v6 = v10;
      ++*((_DWORD *)v9 - 1);
    }
    while ( (*(_DWORD *)(a1 + 296))-- != 1 );
  }
  v17 = *(unsigned int *)(a1 + 104);
  if ( 3 * (int)v17 < (unsigned int)(4 * (*(_DWORD *)(a1 + 108) + *(_DWORD *)(a1 + 112))) )
  {
    v73 = 2 * v17;
    v70 = 16LL * (unsigned int)(2 * v17);
    v58 = (__m128i *)sub_186B270(v70);
    v20 = v70;
    v59 = v73;
    v18 = v58;
    v60 = &v58[v70 / 0x10];
    if ( v73 )
    {
      do
      {
        v58->m128i_i64[0] = 0;
        ++v58;
        v58[-1].m128i_i32[2] = -2;
      }
      while ( v58 != v60 );
    }
    v61 = *(const __m128i **)(a1 + 96);
    v19 = v73 - 1;
    v21 = v60;
    v62 = (__m128i *)&v61[*(unsigned int *)(a1 + 104)];
    if ( v61 != v62 )
    {
      do
      {
        while ( v61->m128i_i64[0] <= 1uLL )
        {
          if ( v62 == ++v61 )
            goto LABEL_87;
        }
        v63 = 16LL * (*(_DWORD *)(v61->m128i_i64[0] + 12) & v19);
        v64 = &v18[(unsigned __int64)v63 / 0x10];
        if ( v70 == v63 )
        {
LABEL_91:
          if ( v18 == v64 )
          {
LABEL_107:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v65 = v18;
          while ( v65->m128i_i64[0] )
          {
            if ( v64 == ++v65 )
              goto LABEL_107;
          }
        }
        else
        {
          v65 = &v18[(unsigned __int64)v63 / 0x10];
          while ( v65->m128i_i64[0] )
          {
            if ( v60 == ++v65 )
              goto LABEL_91;
          }
        }
        v66 = _mm_loadu_si128(v61++);
        *v65 = v66;
      }
      while ( v62 != v61 );
LABEL_87:
      v62 = *(__m128i **)(a1 + 96);
    }
    if ( v62 )
    {
      v76 = v73;
      v74 = v70;
      v71 = v59 - 1;
      sub_186B220(v62);
      v59 = v76;
      v20 = v74;
      v19 = v71;
    }
    *(_QWORD *)(a1 + 96) = v18;
    *(_DWORD *)(a1 + 104) = v59;
    *(_DWORD *)(a1 + 112) = 0;
  }
  else
  {
    v18 = *(__m128i **)(a1 + 96);
    v19 = v17 - 1;
    v20 = 16 * v17;
    v21 = (__m128i *)((char *)v18 + v20);
  }
  v22 = *(_DWORD *)(a2 + 12);
  v23 = 16LL * (v22 & v19);
  v24 = &v18[(unsigned __int64)v23 / 0x10];
  if ( v23 != v20 )
  {
    v25 = &v18[(unsigned __int64)v23 / 0x10];
    v26 = nullptr;
    while ( 1 )
    {
      v27 = v25->m128i_i64[0];
      if ( v25->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v27 + 12) == v22 && a2 == v27 )
        {
          v25->m128i_i64[0] = a2;
          v25->m128i_i32[2] = a3;
          goto LABEL_31;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v26 )
            goto LABEL_98;
          v26 = v25;
          goto LABEL_99;
        }
        v26 = v25;
      }
      if ( ++v25 == v21 )
        goto LABEL_26;
    }
  }
  v26 = nullptr;
  while ( 1 )
  {
LABEL_26:
    if ( v24 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v28 = v18->m128i_i64[0];
    if ( v18->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v28 + 12) == v22 && a2 == v28 )
    {
      v18->m128i_i64[0] = a2;
      v18->m128i_i32[2] = a3;
      goto LABEL_31;
    }
LABEL_25:
    ++v18;
  }
  if ( v28 )
  {
    v26 = v18;
    goto LABEL_25;
  }
  if ( v26 )
LABEL_98:
    --*(_DWORD *)(a1 + 112);
  else
    v26 = v18;
LABEL_99:
  v26->m128i_i64[0] = a2;
  v26->m128i_i32[2] = a3;
  ++*(_DWORD *)(a1 + 108);
LABEL_31:
  v29 = *(unsigned int *)(a1 + 128);
  if ( 3 * (int)v29 < (unsigned int)(4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136))) )
  {
    v72 = 24LL * (unsigned int)(2 * v29);
    v49 = (__m128i *)sub_186B270(v72);
    v50 = 2 * v29;
    v32 = v72;
    v30 = v49;
    if ( 2 * (_DWORD)v29 )
    {
      v51 = &v49[3 * (v29 & 0x7FFFFFFF)];
      do
      {
        v49->m128i_i64[0] = 0;
        v49 += 3;
        v49[-2].m128i_i64[1] = 0;
      }
      while ( v49 != v51 );
    }
    v52 = *(const __m128i **)(a1 + 120);
    v31 = v50 - 1;
    v33 = (__m128i *)((char *)v30 + v72);
    v53 = (__m128i *)((char *)v52 + 24 * *(unsigned int *)(a1 + 128));
    if ( v52 != v53 )
    {
      do
      {
        while ( v52->m128i_i32[1] != 2 )
        {
          v52 = (const __m128i *)((char *)v52 + 24);
          if ( v53 == v52 )
            goto LABEL_72;
        }
        v54 = 24LL * (v52->m128i_i32[0] & v31);
        v55 = (__m128i *)((char *)v30 + v54);
        if ( v72 == v54 )
        {
LABEL_100:
          if ( v30 == v55 )
          {
LABEL_110:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v56 = v30;
          while ( v56->m128i_i32[1] )
          {
            v56 = (__m128i *)((char *)v56 + 24);
            if ( v55 == v56 )
              goto LABEL_110;
          }
        }
        else
        {
          v56 = (__m128i *)((char *)v30 + v54);
          while ( v56->m128i_i32[1] )
          {
            v56 = (__m128i *)((char *)v56 + 24);
            if ( v33 == v56 )
              goto LABEL_100;
          }
        }
        v57 = _mm_loadu_si128(v52);
        v52 = (const __m128i *)((char *)v52 + 24);
        *v56 = v57;
        v56[1].m128i_i64[0] = v52[-1].m128i_i64[1];
      }
      while ( v53 != v52 );
LABEL_72:
      v53 = *(__m128i **)(a1 + 120);
    }
    if ( v53 )
    {
      v75 = v50;
      v69 = v50 - 1;
      sub_186B220(v53);
      v50 = v75;
      v32 = v72;
      v31 = v69;
    }
    *(_QWORD *)(a1 + 120) = v30;
    *(_DWORD *)(a1 + 128) = v50;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v30 = *(__m128i **)(a1 + 120);
    v31 = v29 - 1;
    v32 = 24 * v29;
    v33 = (__m128i *)((char *)v30 + 24 * v29);
  }
  v34 = a3 & v31;
  v35 = (__m128i *)((char *)v30 + 24 * v34);
  if ( 24 * v34 != v32 )
  {
    v36 = (__m128i *)((char *)v30 + 24 * v34);
    v37 = nullptr;
    while ( 1 )
    {
      v38 = v36->m128i_i32[1];
      if ( v38 == 2 )
      {
        if ( a3 == v36->m128i_i32[0] && a3 == v36->m128i_i32[2] )
        {
          v36->m128i_i32[2] = a3;
          v36[1].m128i_i64[0] = a2;
          v36->m128i_i32[1] = 2;
          goto LABEL_53;
        }
      }
      else
      {
        if ( !v38 )
        {
          if ( v37 )
            goto LABEL_51;
          v37 = v36;
          goto LABEL_52;
        }
        v37 = v36;
      }
      v36 = (__m128i *)((char *)v36 + 24);
      if ( v36 == v33 )
        goto LABEL_45;
    }
  }
  v37 = nullptr;
LABEL_45:
  while ( 2 )
  {
    if ( v35 == v30 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v39 = v30->m128i_i32[1];
    if ( v39 == 2 )
    {
      if ( a3 == v30->m128i_i32[0] && a3 == v30->m128i_i32[2] )
      {
        v30->m128i_i32[2] = a3;
        v30[1].m128i_i64[0] = a2;
        v30->m128i_i32[1] = 2;
        goto LABEL_53;
      }
      goto LABEL_44;
    }
    if ( v39 )
    {
      v37 = v30;
LABEL_44:
      v30 = (__m128i *)((char *)v30 + 24);
      continue;
    }
    break;
  }
  if ( v37 )
LABEL_51:
    --*(_DWORD *)(a1 + 136);
  else
    v37 = v30;
LABEL_52:
  v37->m128i_i32[2] = a3;
  v37[1].m128i_i64[0] = a2;
  v37->m128i_i32[1] = 2;
  v37->m128i_i32[0] = a3;
  ++*(_DWORD *)(a1 + 132);
LABEL_53:
  v40 = *(__int64 **)(a1 + 160);
  ++*(_DWORD *)(a2 + 8);
  if ( !v40 )
  {
    v67 = (_QWORD *)sub_186B270(0x18u);
    v40 = v67 + 1;
    *v67 = 2;
    result = 1;
    *(_QWORD *)(a1 + 160) = v40;
    v44 = v40;
    goto LABEL_56;
  }
  v41 = *((_DWORD *)v40 - 1);
  if ( v41 == *((_DWORD *)v40 - 2) )
  {
    v45 = (3 * v41 + 1) >> 1;
    v46 = 8 * v45 + 8;
    if ( 8 * v41 + 8 < (unsigned int)v46 && v41 < v45 )
    {
      v47 = (unsigned int *)sub_186B300(v40 - 1, v46);
      v48 = v47[1];
      v40 = (__int64 *)(v47 + 2);
      *v47 = v45;
      *(_QWORD *)(a1 + 160) = v47 + 2;
      LODWORD(v47) = v48;
      v44 = &v40[v48];
      result = (unsigned int)((_DWORD)v47 + 1);
      goto LABEL_56;
    }
LABEL_118:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v77, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v77);
    sub_233E40((__int64)v77);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v42 = v41;
  result = v41 + 1;
  v44 = &v40[v42];
LABEL_56:
  *v44 = a2;
  *((_DWORD *)v40 - 1) = result;
  return result;
}

