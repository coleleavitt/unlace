__int64 __fastcall sub_39BFA0(__int64 a1, __int64 a2, char a3, int a4, __int64 *a5, int a6)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned int **v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // r14d
  __int64 v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rdi
  bool v26; // zf
  unsigned int v27; // ecx
  unsigned int v28; // r15d
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // esi
  unsigned int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 result; // rax
  int v40; // r14d
  unsigned int i; // r15d
  __int64 v42; // r12
  unsigned __int64 v43; // r13
  __int64 *v44; // r15
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 *v53; // r13
  __int64 v54; // rsi
  __int64 v55; // rdi
  __m128i v56; // [rsp+0h] [rbp-248h]
  __int64 v57; // [rsp+0h] [rbp-248h]
  _QWORD *v58; // [rsp+10h] [rbp-238h]
  int v59; // [rsp+10h] [rbp-238h]
  int v60; // [rsp+10h] [rbp-238h]
  __int64 v61; // [rsp+18h] [rbp-230h]
  __m128i *v62; // [rsp+20h] [rbp-228h]
  char v63; // [rsp+28h] [rbp-220h]
  __int64 v64; // [rsp+30h] [rbp-218h] BYREF
  int v65; // [rsp+38h] [rbp-210h] BYREF
  __m128i v66; // [rsp+40h] [rbp-208h] BYREF
  __m128i v67; // [rsp+50h] [rbp-1F8h] BYREF
  _QWORD v68[4]; // [rsp+60h] [rbp-1E8h] BYREF
  _BYTE v69[16]; // [rsp+80h] [rbp-1C8h] BYREF
  char v70[8]; // [rsp+90h] [rbp-1B8h] BYREF
  char v71[432]; // [rsp+98h] [rbp-1B0h] BYREF

  v8 = *(_QWORD *)(a1 + 8);
  v61 = a1;
  v63 = a3;
  v64 = 0;
  sub_62B3F0(a2, v8, (unsigned int)&v64, a4, (_DWORD)a5, a6);
  sub_2FCDE0(a5);
  v9 = a5[1];
  if ( v64 )
  {
    LODWORD(v10) = *(_DWORD *)(v64 - 4);
    if ( v9 )
    {
      v11 = *(unsigned int *)(v9 - 4);
      v12 = (unsigned int **)(a5 + 1);
      if ( (unsigned int)v10 < (unsigned int)v11 )
      {
        v43 = v9 + 8 * v11;
        v44 = (__int64 *)(v9 + 8LL * (unsigned int)v10);
        if ( (unsigned __int64)v44 < v43 )
          goto LABEL_46;
        goto LABEL_42;
      }
      if ( (unsigned int)v11 < (unsigned int)v10 )
        goto LABEL_7;
LABEL_43:
      *(_DWORD *)(v9 - 4) = v10;
    }
    else
    {
      v12 = (unsigned int **)(a5 + 1);
LABEL_50:
      if ( (_DWORD)v10 )
      {
        v9 = 0;
        LODWORD(v11) = 0;
        goto LABEL_7;
      }
    }
    goto LABEL_11;
  }
  if ( !v9 )
    goto LABEL_11;
  v10 = *(unsigned int *)(v9 - 4);
  if ( !(_DWORD)v10 )
    goto LABEL_43;
  v43 = v9 + 8 * v10;
  v44 = (__int64 *)a5[1];
  LODWORD(v10) = 0;
  if ( v9 >= v43 )
    goto LABEL_43;
  do
  {
    while ( 1 )
    {
LABEL_46:
      v45 = *v44;
      if ( !*v44 )
        goto LABEL_45;
      v46 = *a5;
      v26 = (*(_DWORD *)(v45 + 8))-- == 1;
      if ( !v26 )
        break;
      sub_15D7BC0(v46, v45);
LABEL_45:
      if ( (unsigned __int64)++v44 >= v43 )
        goto LABEL_49;
    }
    ++v44;
  }
  while ( (unsigned __int64)v44 < v43 );
LABEL_49:
  v9 = a5[1];
  v12 = (unsigned int **)(a5 + 1);
  if ( !v9 )
    goto LABEL_50;
LABEL_42:
  LODWORD(v11) = *(_DWORD *)(v9 - 4);
  if ( (unsigned int)v11 >= (unsigned int)v10 )
    goto LABEL_43;
LABEL_7:
  while ( !v9 || *(_DWORD *)(v9 - 8) < (unsigned int)v10 )
  {
    sub_23A6F0(v12);
    v9 = a5[1];
  }
  *(_DWORD *)(v9 - 4) = v10;
  v13 = 8LL * (unsigned int)v11;
  v14 = 8LL * (unsigned int)v10;
  if ( v13 != v14 )
    memset((void *)(v9 + v13), 0, v14 - v13);
LABEL_11:
  v15 = *(_QWORD *)(a2 + 40);
  v16 = 0;
  v17 = *(_QWORD *)(v15 + 16);
  v18 = *(_DWORD *)(v17 + 32);
  if ( v18 )
  {
    do
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v15 + 8LL * v16 + 32);
        if ( *(_WORD *)(v19 + 4) == 1 )
        {
          v20 = 8LL * *(unsigned int *)(v19 + 16);
          if ( !*(_QWORD *)(a5[1] + v20) )
            break;
        }
        if ( ++v16 >= v18 )
          goto LABEL_20;
      }
      sub_39B590(&v66, v61, v17, v16);
      v21 = (__int64 *)(a5[1] + v20);
      v22 = v66.m128i_i64[0];
      v23 = *v21;
      v24 = v66.m128i_i64[1];
      if ( *v21 )
      {
        v25 = *a5;
        v26 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v25, v23);
      }
      *v21 = v22;
      ++v16;
      sub_399450(0, v24);
      v15 = *(_QWORD *)(a2 + 40);
      v17 = *(_QWORD *)(v15 + 16);
      v18 = *(_DWORD *)(v17 + 32);
    }
    while ( v16 < v18 );
  }
LABEL_20:
  v27 = *(_DWORD *)(a2 + 68);
  v28 = 0;
  v62 = &v67;
  if ( !v27 )
    goto LABEL_33;
  while ( 2 )
  {
    v29 = v28 + 10LL;
    v30 = *(_QWORD *)(a2 + 8 * v29);
    v31 = *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v32 = *(_DWORD *)(v31 + 32);
    if ( !v32 )
      goto LABEL_32;
    v33 = 0;
    while ( 2 )
    {
      v34 = *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFF8LL) + 8LL * v33 + 32);
      if ( *(_WORD *)(v34 + 4) != 1 || (v35 = *(unsigned int *)(v34 + 16), *(_QWORD *)(a5[1] + 8 * v35)) )
      {
        if ( ++v33 >= v32 )
          break;
        goto LABEL_24;
      }
      sub_39B590(&v67, v61, v31, v33);
      v56 = v67;
      v36 = (_QWORD *)(a5[1] + 8 * v35);
      v37 = *v36;
      if ( *v36 )
      {
        v38 = *a5;
        v26 = (*(_DWORD *)(v37 + 8))-- == 1;
        if ( v26 )
        {
          v58 = v36;
          sub_15D7BC0(v38, v37);
          v36 = v58;
        }
      }
      ++v33;
      *v36 = v56.m128i_i64[0];
      sub_399450(0, v56.m128i_i64[1]);
      v32 = *(_DWORD *)(v31 + 32);
      if ( v33 < v32 )
      {
LABEL_24:
        v30 = *(_QWORD *)(a2 + 8 * v29);
        continue;
      }
      break;
    }
    v27 = *(_DWORD *)(a2 + 68);
LABEL_32:
    if ( ++v28 < v27 )
      continue;
    break;
  }
LABEL_33:
  result = v64;
  if ( v64 )
  {
    v40 = 0;
    for ( i = 0; i < *(_DWORD *)(result - 4); ++i )
    {
      v42 = *(_QWORD *)(result + 8LL * i);
      if ( v42 && !*(_QWORD *)(a5[1] + 8LL * i) )
      {
        v59 = v40 + 1;
        v57 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v69);
        sub_39A600((__int64)v70, *(const char **)(v57 + 16));
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(v68, v71);
        sub_180C5A0(&v65, v68[0]);
        sub_233E40((__int64)v68);
        v47 = *(_QWORD *)(v61 + 8);
        v51 = sub_39A690(
                v47,
                (__int64)&v65,
                v42,
                v48,
                v49,
                v50,
                (int)&v65,
                (int)v69,
                v59,
                v61,
                (int)v62,
                v63,
                v64,
                v65,
                v66.m128i_i32[0],
                (void *)v66.m128i_i64[1]);
        v52 = v51;
        if ( v51 )
          ++*(_DWORD *)(v51 + 8);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
        v53 = (__int64 *)(a5[1] + 8LL * i);
        v54 = *v53;
        if ( *v53 )
        {
          v55 = *a5;
          v26 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v55, v54);
        }
        *v53 = v52;
        sub_399450(0, v47);
        v40 = v60;
        result = v64;
      }
      if ( !result )
        return result;
    }
    return sub_186B220((void *)(result - 8));
  }
  return result;
}

