__int64 __fastcall sub_CCA120(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  int v5; // ecx
  __m128i *v6; // rbp
  unsigned int v7; // edi
  int v8; // r9d
  size_t v9; // r15
  __m128i *v10; // rbx
  __int64 v11; // rdi
  __m128i *v12; // rsi
  __m128i *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r12d
  __m128i *v17; // rax
  __m128i *v18; // rdi
  __int64 v19; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // rax
  unsigned __int64 v34; // r13
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  _QWORD *v38; // rdx
  unsigned int v39; // ebx
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // ebp
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 *v46; // rbx
  __int64 *v47; // r15
  __int64 v48; // rsi
  __int64 *v49; // r8
  unsigned __int64 v50; // rax
  __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 *v54; // rbp
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __m128i v58; // xmm0
  unsigned __int64 v59; // rax
  __int64 v60; // rdi
  unsigned int v61; // ebx
  unsigned int v62; // ecx
  unsigned int *v63; // rax
  __int64 v64; // rax
  unsigned int v65; // ebx
  unsigned int v66; // ecx
  unsigned int *v67; // rax
  __int64 v68; // rax
  __m128i *v69; // rax
  int v70; // r8d
  __m128i *v71; // r10
  const __m128i *v72; // rcx
  int v73; // r9d
  __m128i *v74; // r11
  __int64 v75; // rax
  __m128i *v76; // rdx
  __m128i *v77; // rax
  _QWORD *v78; // r13
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  char **exception; // rbp
  __int64 v83; // rdx
  unsigned int v84; // [rsp+10h] [rbp-68h]
  int v85; // [rsp+10h] [rbp-68h]
  __int64 v86[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a1 + 48);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(__m128i **)(a1 + 40);
  v7 = v4 - 1;
  v8 = v4;
  v9 = 16 * v4;
  v10 = &v6[v9 / 0x10];
  v11 = 16LL * (v5 & v7);
  v12 = &v6[(unsigned __int64)v11 / 0x10];
  if ( v11 != v9 )
  {
    for ( i = &v6[(unsigned __int64)v11 / 0x10]; v10 != i; ++i )
    {
      v14 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v14 + 12) == v5 && a2 == v14 )
          return i->m128i_u32[2];
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v6 != v12 )
  {
    for ( i = v6; v12 != i; ++i )
    {
      v21 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v21 + 12) == v5 && a2 == v21 )
          return i->m128i_u32[2];
      }
      else if ( !v21 )
      {
        break;
      }
    }
  }
LABEL_8:
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  if ( 3 * v8 < (unsigned int)(4 * (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56))) )
  {
    v85 = 2 * v8;
    v9 = 16LL * (unsigned int)(2 * v8);
    v69 = (__m128i *)sub_186B270(v9);
    v70 = v85;
    v6 = v69;
    v71 = &v69[v9 / 0x10];
    if ( v85 )
    {
      do
      {
        v69->m128i_i64[0] = 0;
        ++v69;
        v69[-1].m128i_i32[2] = 0;
      }
      while ( v69 != v71 );
    }
    v72 = *(const __m128i **)(a1 + 40);
    v73 = v85 - 1;
    v10 = v71;
    v74 = (__m128i *)&v72[*(unsigned int *)(a1 + 48)];
    if ( v72 != v74 )
    {
      do
      {
        if ( v72->m128i_i64[0] > 1uLL )
        {
          v75 = 16LL * (*(_DWORD *)(v72->m128i_i64[0] + 12) & (unsigned int)v73);
          v76 = &v6[(unsigned __int64)v75 / 0x10];
          if ( v9 == v75 )
          {
LABEL_91:
            if ( v6 == v76 )
            {
LABEL_103:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v77 = v6;
            while ( v77->m128i_i64[0] )
            {
              if ( v76 == ++v77 )
                goto LABEL_103;
            }
          }
          else
          {
            v77 = &v6[(unsigned __int64)v75 / 0x10];
            while ( v77->m128i_i64[0] )
            {
              if ( v71 == ++v77 )
                goto LABEL_91;
            }
          }
          *v77 = _mm_loadu_si128(v72);
        }
        ++v72;
      }
      while ( v74 != v72 );
      v74 = *(__m128i **)(a1 + 40);
    }
    if ( v74 )
    {
      sub_186B220(v74);
      v70 = v85;
      v73 = v85 - 1;
    }
    v5 = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 40) = v6;
    *(_DWORD *)(a1 + 48) = v70;
    *(_DWORD *)(a1 + 56) = 0;
    v11 = 16LL * (v5 & (unsigned int)v73);
    v12 = &v6[(unsigned __int64)v11 / 0x10];
  }
  if ( v11 != v9 )
  {
    v17 = v12;
    v18 = nullptr;
    while ( 1 )
    {
      v19 = v17->m128i_i64[0];
      if ( v17->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v19 + 12) == v5 && a2 == v19 )
        {
          v17->m128i_i64[0] = a2;
          v17->m128i_i32[2] = v16;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_101;
          v18 = v17;
          goto LABEL_102;
        }
        v18 = v17;
      }
      if ( ++v17 == v10 )
        goto LABEL_32;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v6 == v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v22 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v22 + 12) == v5 && a2 == v22 )
    {
      v6->m128i_i64[0] = a2;
      v6->m128i_i32[2] = v16;
      goto LABEL_37;
    }
LABEL_31:
    ++v6;
  }
  if ( v22 )
  {
    v18 = v6;
    goto LABEL_31;
  }
  if ( v18 )
LABEL_101:
    --*(_DWORD *)(a1 + 56);
  else
    v18 = v6;
LABEL_102:
  v18->m128i_i64[0] = a2;
  v18->m128i_i32[2] = v16;
  ++*(_DWORD *)(a1 + 52);
LABEL_37:
  v23 = *(_QWORD **)(a1 + 32);
  ++*(_DWORD *)(a2 + 8);
  if ( v23 )
  {
    v24 = *((_DWORD *)v23 - 1);
    if ( v24 != *((_DWORD *)v23 - 2) )
    {
      v25 = v24;
      v26 = v24 + 1;
      v27 = &v23[v25];
      goto LABEL_40;
    }
    v39 = (3 * v24 + 1) >> 1;
    v40 = 8 * v39 + 8;
    if ( 8 * v24 + 8 < v40 && v24 < v39 )
    {
      v41 = (unsigned int *)sub_186B300(v23 - 1, v40);
      v42 = v41[1];
      v23 = v41 + 2;
      *v41 = v39;
      *(_QWORD *)(a1 + 32) = v41 + 2;
      LODWORD(v41) = v42;
      v27 = &v23[v42];
      v26 = (_DWORD)v41 + 1;
      goto LABEL_40;
    }
LABEL_116:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_163A6C(v86, "Overflow encountered when expanding vector", v83);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v86);
    sub_233E40((__int64)v86);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v79 = (_QWORD *)sub_186B270(0x18u);
  *v79 = 2;
  v26 = 1;
  v23 = v79 + 1;
  *(_QWORD *)(a1 + 32) = v23;
  v27 = v23;
LABEL_40:
  *v27 = a2;
  *((_DWORD *)v23 - 1) = v26;
  v28 = *(_QWORD **)(a1 + 64);
  if ( v28 )
  {
    v29 = *((unsigned int *)v28 - 1);
    if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
    {
      v65 = (unsigned int)(3 * v29 + 1) >> 1;
      v66 = 4 * v65 + 8;
      if ( 4 * (int)v29 + 8 >= v66 || (unsigned int)v29 >= v65 )
        goto LABEL_116;
      v67 = (unsigned int *)sub_186B300(v28 - 1, v66);
      v28 = v67 + 2;
      *v67 = v65;
      v68 = v67[1];
      *(_QWORD *)(a1 + 64) = v28;
      v30 = (_DWORD *)v28 + v68;
    }
    else
    {
      v30 = (_DWORD *)v28 + v29;
    }
  }
  else
  {
    v81 = (_QWORD *)sub_186B270(0x10u);
    *v81 = 2;
    v28 = v81 + 1;
    *(_QWORD *)(a1 + 64) = v81 + 1;
    v30 = v81 + 1;
  }
  *v30 = 0x80000000;
  ++*((_DWORD *)v28 - 1);
  v31 = *(_QWORD **)(a1 + 72);
  if ( v31 )
  {
    v32 = *((unsigned int *)v31 - 1);
    if ( (_DWORD)v32 == *((_DWORD *)v31 - 2) )
    {
      v61 = (unsigned int)(3 * v32 + 1) >> 1;
      v62 = 4 * v61 + 8;
      if ( 4 * (int)v32 + 8 >= v62 || (unsigned int)v32 >= v61 )
        goto LABEL_116;
      v63 = (unsigned int *)sub_186B300(v31 - 1, v62);
      v31 = v63 + 2;
      *v63 = v61;
      v64 = v63[1];
      *(_QWORD *)(a1 + 72) = v31;
      v33 = (_DWORD *)v31 + v64;
    }
    else
    {
      v33 = (_DWORD *)v31 + v32;
    }
  }
  else
  {
    v80 = (_QWORD *)sub_186B270(0x10u);
    *v80 = 2;
    v31 = v80 + 1;
    *(_QWORD *)(a1 + 72) = v80 + 1;
    v33 = v80 + 1;
  }
  v34 = *(_QWORD *)(a1 + 80);
  *v33 = 0x7FFFFFFF;
  ++*((_DWORD *)v31 - 1);
  if ( v34 )
  {
    v35 = *(_DWORD *)(v34 - 4);
    if ( v35 == *(_DWORD *)(v34 - 8) )
    {
      v43 = (3 * v35 + 1) >> 1;
      v44 = 8 * v43 + 8;
      v84 = v43;
      if ( 8 * v35 + 8 >= v44 || v35 >= v43 )
        goto LABEL_116;
      v45 = sub_186B270(v44);
      v46 = *(__int64 **)(a1 + 80);
      v47 = (__int64 *)v45;
      v34 = v45 + 8;
      if ( v46 )
      {
        v48 = *((unsigned int *)v46 - 1);
        *(_DWORD *)(v45 + 4) = v48;
        v49 = &v46[v48];
        if ( v49 != v46 )
        {
          v50 = 8 * v48 - 8;
          if ( v50 > 8 && (v34 >= (unsigned __int64)(v46 + 2) || v46 >= v47 + 3) )
          {
            v56 = (v50 >> 3) + 1;
            v57 = 0;
            do
            {
              v58 = _mm_loadu_si128((const __m128i *)&v46[v57]);
              *(_OWORD *)&v46[v57] = 0;
              *(__m128i *)&v47[v57 + 1] = v58;
              v57 += 2LL;
            }
            while ( v57 != 2 * (v56 >> 1) );
            if ( (v56 & 1) != 0 )
            {
              v59 = v56 & 0xFFFFFFFFFFFFFFFELL;
              v60 = v46[v59];
              v46[v59] = 0;
              v47[v59 + 1] = v60;
            }
          }
          else
          {
            v51 = v46;
            v52 = v34;
            do
            {
              v53 = *v51;
              *v51++ = 0;
              v52 += 8LL;
              *(_QWORD *)(v52 - 8) = v53;
            }
            while ( v49 != v51 );
          }
        }
        v54 = &v46[v48];
        if ( (_DWORD)v48 )
        {
          do
          {
            while ( 1 )
            {
              v55 = *v46;
              if ( !*v46 )
                break;
              ++v46;
              sub_186B220((void *)(v55 - 8));
              if ( v54 == v46 )
                goto LABEL_65;
            }
            ++v46;
          }
          while ( v46 != v54 );
LABEL_65:
          v46 = *(__int64 **)(a1 + 80);
        }
        sub_186B220(v46 - 1);
        v38 = (_QWORD *)(v34 + 8LL * *((unsigned int *)v47 + 1));
        v37 = *((_DWORD *)v47 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v45 + 4) = 0;
        v38 = (_QWORD *)(v45 + 8);
        v37 = 1;
      }
      *(_QWORD *)(a1 + 80) = v34;
      *(_DWORD *)v47 = v84;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = (_QWORD *)(v34 + 8 * v36);
    }
  }
  else
  {
    v78 = (_QWORD *)sub_186B270(0x18u);
    *v78 = 2;
    v37 = 1;
    v34 = (unsigned __int64)(v78 + 1);
    *(_QWORD *)(a1 + 80) = v34;
    v38 = (_QWORD *)v34;
  }
  *v38 = 0;
  *(_DWORD *)(v34 - 4) = v37;
  return v16;
}

