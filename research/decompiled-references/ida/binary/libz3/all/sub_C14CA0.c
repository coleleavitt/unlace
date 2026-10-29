__int64 __fastcall sub_C14CA0(__int64 a1, __m128 a2, __m128 a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  char **exception; // rbp
  __int64 v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // r13
  __int64 v12; // rsi
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 *v15; // rbp
  __int64 v16; // rax
  __int64 *v17; // r15
  __int64 v18; // rsi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  const __m128i *v22; // rbp
  __m128i v23; // xmm4
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rbx
  unsigned __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbx
  unsigned __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 *v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 result; // rax
  __int64 *v39; // rbx
  __int64 v40; // rax
  __int64 *v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned int v45; // r12d
  const __m128i *v46; // r14
  _QWORD *v47; // rax
  __m128 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // ecx
  size_t v53; // rdi
  __int64 v54; // rax
  __int64 *v55; // r15
  _DWORD *v56; // r9
  __int64 v57; // r10
  __int64 v58; // rdx
  __int64 *v59; // rdi
  __int64 *i; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 *v64; // rbx
  _DWORD *v65; // rbp
  __int64 v66; // rsi
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int32 v69; // eax
  const __m128i *v70; // r12
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rdi
  __m128i v74; // [rsp+0h] [rbp-2C8h] BYREF
  const __m128i **v75; // [rsp+18h] [rbp-2B0h]
  _DWORD *v76; // [rsp+20h] [rbp-2A8h]
  _BYTE *v77; // [rsp+28h] [rbp-2A0h]
  const __m128i *v78; // [rsp+38h] [rbp-290h] BYREF
  __int64 v79[4]; // [rsp+40h] [rbp-288h] BYREF
  _BYTE v80[16]; // [rsp+60h] [rbp-268h] BYREF
  char v81[16]; // [rsp+70h] [rbp-258h] BYREF
  void *v82; // [rsp+80h] [rbp-248h]
  __int64 v83; // [rsp+98h] [rbp-230h]
  __int64 v84; // [rsp+A0h] [rbp-228h]
  __int64 v85; // [rsp+A8h] [rbp-220h]
  __int64 *v86; // [rsp+B0h] [rbp-218h]
  __int64 v87; // [rsp+B8h] [rbp-210h]
  __int64 *v88; // [rsp+C0h] [rbp-208h]
  __int64 v89; // [rsp+C8h] [rbp-200h]
  __int64 *v90; // [rsp+D0h] [rbp-1F8h]
  _QWORD v91[2]; // [rsp+D8h] [rbp-1F0h]
  __m128i v92; // [rsp+E8h] [rbp-1E0h]
  char v93[16]; // [rsp+128h] [rbp-1A0h] BYREF
  void *v94; // [rsp+138h] [rbp-190h]
  __int64 v95; // [rsp+148h] [rbp-180h] BYREF
  char *v96; // [rsp+158h] [rbp-170h] BYREF
  void *v97; // [rsp+270h] [rbp-58h]
  void *ptr; // [rsp+288h] [rbp-40h]

  v9 = a1;
  v10 = *(_QWORD *)a1;
  v78 = nullptr;
  v77 = v80;
  sub_138E280((unsigned int)v80, v10, a1 + 952, a6, a7, a8);
  if ( *(_DWORD *)(a1 + 944) )
    goto LABEL_20;
LABEL_2:
  v11 = *(_QWORD **)(v9 + 936);
  if ( v11 )
  {
    v75 = &v78;
    goto LABEL_4;
  }
  v12 = 0;
  v75 = &v78;
  while ( 1 )
  {
LABEL_5:
    if ( !(unsigned __int8)sub_1392150(v77, v12, v11, v75) )
      goto LABEL_20;
    v11 = *(_QWORD **)(v9 + 936);
    if ( v11 )
      break;
    v46 = v78;
    if ( v78 )
    {
      if ( v78[-1].m128i_i32[3] )
      {
        v47 = (_QWORD *)sub_186B270(0x38u);
        v22 = v78;
        v45 = 0;
        *v47 = 2;
        v48 = (__m128 *)(v47 + 1);
        *(_QWORD *)(v9 + 936) = v47 + 1;
        v11 = v47 + 1;
        while ( 1 )
        {
          a2 = (__m128)_mm_loadu_si128(v46);
          v49 = v46[1].m128i_i64[0];
          a3 = _mm_movehl_ps(a3, a2);
          v48[1].m128_u64[0] = v49;
          *v48 = a2;
          if ( a3.m128_u64[0] )
            ++*(_DWORD *)(a3.m128_u64[0] + 8);
          if ( v49 )
          {
            ++*(_DWORD *)(v49 + 8);
            ++v45;
            ++*((_DWORD *)v11 - 1);
            if ( !v22 )
              goto LABEL_70;
          }
          else
          {
            ++*((_DWORD *)v11 - 1);
            ++v45;
            if ( !v22 )
              goto LABEL_70;
          }
          v50 = v22[-1].m128i_u32[3];
          if ( v45 >= (unsigned int)v50 )
            break;
          v46 = (const __m128i *)((char *)v22 + 24 * v45);
LABEL_81:
          v51 = *((unsigned int *)v11 - 1);
          if ( (_DWORD)v51 == *((_DWORD *)v11 - 2) )
          {
            v52 = (unsigned int)(3 * v51 + 1) >> 1;
            v74.m128i_i32[0] = v52;
            v53 = 8 * (v52 + ((3 * (_DWORD)v51 + 1) & 0xFFFFFFFE)) + 8;
            if ( 24 * (int)v51 + 8 >= (unsigned int)v53 || (unsigned int)v51 >= v52 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C0E620(v79, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v79);
              sub_233E40((__int64)v79);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = sub_186B270(v53);
            v55 = *(__int64 **)(v9 + 936);
            v56 = (_DWORD *)v54;
            v11 = (_QWORD *)(v54 + 8);
            if ( v55 )
            {
              v57 = *((unsigned int *)v55 - 1);
              v58 = v54 + 8;
              *(_DWORD *)(v54 + 4) = v57;
              v59 = &v55[3 * v57];
              for ( i = v55; v59 != i; *(_QWORD *)(v58 - 8) = v63 )
              {
                v61 = *i;
                i += 3;
                v58 += 24;
                *(_QWORD *)(v58 - 24) = v61;
                v62 = *(i - 2);
                *(i - 2) = 0;
                *(_QWORD *)(v58 - 16) = v62;
                v63 = *(i - 1);
                *(i - 1) = 0;
              }
              if ( (_DWORD)v57 )
              {
                v76 = (_DWORD *)v9;
                v64 = &v55[3 * v57];
                v65 = v56;
                do
                {
                  while ( 1 )
                  {
                    v67 = v55[1];
                    v68 = *v55;
                    if ( v67 )
                    {
                      v19 = (*(_DWORD *)(v67 + 8))-- == 1;
                      if ( v19 )
                      {
                        sub_15D7BC0(v68, v67);
                        v68 = *v55;
                      }
                    }
                    v66 = v55[2];
                    if ( v66 )
                    {
                      v19 = (*(_DWORD *)(v66 + 8))-- == 1;
                      if ( v19 )
                        break;
                    }
                    v55 += 3;
                    if ( v55 == v64 )
                      goto LABEL_97;
                  }
                  sub_15D7BC0(v68, v66);
                  v55 += 3;
                }
                while ( v55 != v64 );
LABEL_97:
                v9 = (__int64)v76;
                v56 = v65;
                v55 = *((__int64 **)v76 + 117);
              }
              v76 = v56;
              sub_186B220(v55 - 1);
              v56 = v76;
              v48 = (__m128 *)&v11[3 * (unsigned int)v76[1]];
            }
            else
            {
              *(_DWORD *)(v54 + 4) = 0;
              v48 = (__m128 *)(v54 + 8);
            }
            v69 = v74.m128i_i32[0];
            v22 = v78;
            *(_QWORD *)(v9 + 936) = v11;
            *v56 = v69;
          }
          else
          {
            v48 = (__m128 *)&v11[3 * v51];
          }
        }
        if ( (_DWORD)v50 )
        {
          v70 = (const __m128i *)((char *)v22 + 24 * v50);
          do
          {
            while ( 1 )
            {
              v72 = v22->m128i_i64[1];
              v73 = v22->m128i_i64[0];
              if ( v72 )
              {
                v19 = (*(_DWORD *)(v72 + 8))-- == 1;
                if ( v19 )
                {
                  sub_15D7BC0(v73, v72);
                  v73 = v22->m128i_i64[0];
                }
              }
              v71 = v22[1].m128i_i64[0];
              if ( v71 )
              {
                v19 = (*(_DWORD *)(v71 + 8))-- == 1;
                if ( v19 )
                  break;
              }
              v22 = (const __m128i *)((char *)v22 + 24);
              if ( v22 == v70 )
                goto LABEL_109;
            }
            sub_15D7BC0(v73, v71);
            v22 = (const __m128i *)((char *)v22 + 24);
          }
          while ( v22 != v70 );
LABEL_109:
          v22 = v78;
        }
      }
      else
      {
        v22 = v78;
      }
LABEL_19:
      v22[-1].m128i_i32[3] = 0;
      if ( *(_DWORD *)(v9 + 944) )
        goto LABEL_20;
      goto LABEL_2;
    }
    v12 = *(unsigned int *)(v9 + 944);
    if ( (_DWORD)v12 )
      goto LABEL_20;
  }
  v13 = *(_DWORD *)(v9 + 944);
  v14 = 24LL * v13;
  v15 = &v11[(unsigned __int64)v14 / 8];
  v16 = 24LL * *((unsigned int *)v11 - 1);
  v17 = &v11[(unsigned __int64)v16 / 8];
  if ( v14 != v16 )
  {
    do
    {
      while ( 1 )
      {
        v20 = v15[1];
        v21 = *v15;
        if ( v20 )
        {
          v19 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v19 )
          {
            sub_15D7BC0(v21, v20);
            v21 = *v15;
          }
        }
        v18 = v15[2];
        if ( v18 )
        {
          v19 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v19 )
            break;
        }
        v15 += 3;
        if ( v17 == v15 )
          goto LABEL_16;
      }
      sub_15D7BC0(v21, v18);
      v15 += 3;
    }
    while ( v17 != v15 );
LABEL_16:
    v11 = *(_QWORD **)(v9 + 936);
  }
  v22 = v78;
  *((_DWORD *)v11 - 1) = v13;
  if ( v22 )
  {
    if ( v22[-1].m128i_i32[3] )
    {
      v45 = 0;
      v46 = v22;
      goto LABEL_81;
    }
    goto LABEL_19;
  }
LABEL_70:
  if ( !*(_DWORD *)(v9 + 944) )
  {
LABEL_4:
    v12 = *((unsigned int *)v11 - 1);
    goto LABEL_5;
  }
LABEL_20:
  v75 = &v78;
  v74 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                  + 64),
          (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_C147A0(v9, *(double *)a2.m128_u64, *(double *)a3.m128_u64, (__m128)v74);
  if ( ptr )
    sub_186B220(ptr);
  if ( v97 )
    sub_186B220(v97);
  v23 = _mm_load_si128(&v74);
  v91[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v96 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v92 = v23;
  if ( v94 != &v95 )
    operator delete(v94, v95 + 1);
  v92.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v93);
  *(_QWORD *)((char *)v91
            + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v24 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v92.m128i_i64[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  *(__int64 *)((char *)v92.m128i_i64 + *(_QWORD *)(v92.m128i_i64[0] - 24)) = v24;
  v25 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v91[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  *(_QWORD *)((char *)v91 + *(_QWORD *)(v91[0] - 24LL)) = v25;
  v91[1] = 0;
  v96 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v96);
  v26 = v90;
  if ( v90 )
  {
    v27 = (unsigned __int64)&v90[*((unsigned int *)v90 - 1)];
    if ( (unsigned __int64)v90 >= v27 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = v89;
          v19 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v26 >= v27 )
          goto LABEL_33;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( (unsigned __int64)v26 < v27 );
LABEL_33:
    v26 = v90;
    if ( v90 )
LABEL_34:
      sub_186B220(v26 - 1);
  }
  v30 = v88;
  if ( v88 )
  {
    v31 = (unsigned __int64)&v88[*((unsigned int *)v88 - 1)];
    if ( (unsigned __int64)v88 >= v31 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = v87;
          v19 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v30 >= v31 )
          goto LABEL_42;
      }
      sub_15D7BC0(v33, v32);
      ++v30;
    }
    while ( (unsigned __int64)v30 < v31 );
LABEL_42:
    v30 = v88;
    if ( v88 )
LABEL_43:
      sub_186B220(v30 - 1);
  }
  v34 = v86;
  if ( v86 )
  {
    v35 = (unsigned __int64)&v86[*((unsigned int *)v86 - 1)];
    if ( (unsigned __int64)v86 >= v35 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = v85;
          v19 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v34 >= v35 )
          goto LABEL_51;
      }
      sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( (unsigned __int64)v34 < v35 );
LABEL_51:
    v34 = v86;
    if ( v86 )
LABEL_52:
      sub_186B220(v34 - 1);
  }
  if ( v84 )
    sub_186B220((void *)(v84 - 8));
  if ( v83 )
    sub_186B220((void *)(v83 - 8));
  if ( v82 )
    sub_186B220(v82);
  result = sub_14B63F0(v81);
  v39 = (__int64 *)v78;
  if ( v78 )
  {
    v40 = v78[-1].m128i_u32[3];
    if ( (_DWORD)v40 )
    {
      v41 = &v78->m128i_i64[3 * v40];
      do
      {
        v43 = v39[1];
        v44 = *v39;
        if ( v43 )
        {
          v19 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v19 )
          {
            sub_15D7BC0(v44, v43);
            v44 = *v39;
          }
        }
        v42 = v39[2];
        if ( v42 )
        {
          v19 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v44, v42);
        }
        v39 += 3;
      }
      while ( v39 != v41 );
      v39 = (__int64 *)v78;
    }
    return sub_186B220(v39 - 1);
  }
  return result;
}

