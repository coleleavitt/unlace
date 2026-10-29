__m128i *__fastcall sub_2DF4E0(int a1, _QWORD *a2)
{
  __int64 v2; // rbp
  int v3; // eax
  std::ostream *v4; // rbp
  int v5; // eax
  char v6; // bp
  __int64 v7; // r12
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r12
  __int64 v11; // r8
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbp
  bool v19; // zf
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // r12
  int v23; // eax
  char v24; // bp
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // r15
  unsigned int v29; // eax
  __int64 v30; // r12
  __int64 v31; // r8
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rbp
  int i; // eax
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int64 v43; // r15
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  __int64 v47; // rdi
  __int64 v48; // rax
  void *v49; // rbx
  int v51; // [rsp+0h] [rbp-A8h]
  int v52; // [rsp+0h] [rbp-A8h]
  int v53; // [rsp+8h] [rbp-A0h]
  int v54[2]; // [rsp+8h] [rbp-A0h]
  int v55; // [rsp+8h] [rbp-A0h]
  int v56; // [rsp+8h] [rbp-A0h]
  int v57[2]; // [rsp+10h] [rbp-98h]
  int v58[2]; // [rsp+10h] [rbp-98h]
  int v59; // [rsp+18h] [rbp-90h]
  __int64 v60; // [rsp+18h] [rbp-90h]
  __m128i *v61; // [rsp+20h] [rbp-88h]
  char v62; // [rsp+28h] [rbp-80h]
  __int64 v63; // [rsp+28h] [rbp-80h]
  int v64; // [rsp+30h] [rbp-78h]
  int v65; // [rsp+30h] [rbp-78h]
  int v66; // [rsp+38h] [rbp-70h]
  int v67; // [rsp+38h] [rbp-70h]
  __int64 v68; // [rsp+40h] [rbp-68h] BYREF
  void *v69; // [rsp+48h] [rbp-60h]
  _QWORD v70[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v71[9]; // [rsp+60h] [rbp-48h] BYREF

  sub_2DF050(&v68, a2);
  v2 = a2[2];
  v59 = v68;
  v62 = (char)v69;
  v3 = *(_DWORD *)(v2 + 8);
  if ( v3 <= 8 )
    goto LABEL_2;
  while ( 1 )
  {
    if ( v3 <= 13 )
    {
      if ( v3 == 10 )
        ++*(_DWORD *)(v2 + 12);
      goto LABEL_7;
    }
    if ( v3 != 32 )
      break;
LABEL_7:
    v3 = std::istream::get(*(std::istream **)v2);
    *(_DWORD *)(v2 + 8) = v3;
    if ( v3 <= 8 )
      goto LABEL_8;
  }
  if ( v3 != 126 )
  {
LABEL_8:
    v6 = 126;
    goto LABEL_13;
  }
  *(_DWORD *)(v2 + 8) = std::istream::get(*(std::istream **)v2);
  v6 = 0;
LABEL_13:
  v7 = a2[2];
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 <= 8 )
  {
LABEL_2:
    std::__ostream_insert<char,std::char_traits<char>>();
    v4 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v5 = *(_DWORD *)(a2[2] + 8LL);
    if ( !*(_QWORD *)((char *)v4 + *(_QWORD *)(*(_QWORD *)v4 - 24LL) + 16) )
      goto LABEL_3;
LABEL_40:
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_4;
  }
  while ( 2 )
  {
    if ( v8 <= 13 )
    {
      if ( v8 == 10 )
        ++*(_DWORD *)(v7 + 12);
LABEL_16:
      v8 = std::istream::get(*(std::istream **)v7);
      *(_DWORD *)(v7 + 8) = v8;
      if ( v8 <= 8 )
        goto LABEL_2;
      continue;
    }
    break;
  }
  if ( v8 == 32 )
    goto LABEL_16;
  if ( v8 != 120 )
    goto LABEL_2;
  *(_DWORD *)(v7 + 8) = std::istream::get(*(std::istream **)v7);
  *(_QWORD *)v57 = a2[1];
  v9 = sub_2DAE90(a2[2]);
  v10 = a2[1];
  v11 = *(_QWORD *)(v10 + 840);
  v70[0] = 8LL * v9 + 1;
  v12 = sub_15E3510(v10, v70, 0, 0, v11, 0);
  v15 = sub_15DC610(v10, v12, 0, 0, v13, v14, v51, v53, v57[0], v59, a1, v62, v64, v66, v68, v69);
  v16 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( !v6 )
  {
    v17 = sub_15E1A70(a2[1]);
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    if ( v16 )
    {
      v19 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(*(_QWORD *)v58, v16);
    }
    v16 = v18;
  }
  v20 = a2[2];
  v21 = *(_DWORD *)(v20 + 8);
  if ( v21 > 8 )
  {
    do
    {
      if ( v21 <= 13 )
      {
        if ( v21 == 10 )
          ++*(_DWORD *)(v20 + 12);
      }
      else if ( v21 != 32 )
      {
        break;
      }
      v21 = std::istream::get(*(std::istream **)v20);
      *(_DWORD *)(v20 + 8) = v21;
    }
    while ( v21 > 8 );
    v22 = a2[2];
    v23 = *(_DWORD *)(v22 + 8);
    if ( v23 == 120 || v23 == 126 )
    {
      *(_QWORD *)v54 = a2[1];
LABEL_36:
      if ( v23 == 126 )
      {
        *(_DWORD *)(v22 + 8) = std::istream::get(*(std::istream **)v22);
        v22 = a2[2];
        v24 = 0;
      }
      else
      {
        v24 = 126;
      }
      v25 = *(_DWORD *)(v22 + 8);
      if ( v25 <= 8 )
      {
LABEL_39:
        std::__ostream_insert<char,std::char_traits<char>>();
        v4 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = *(_DWORD *)(a2[2] + 8LL);
        LOBYTE(v70[0]) = v5;
        if ( *(_QWORD *)((char *)v4 + *(_QWORD *)(*(_QWORD *)v4 - 24LL) + 16) )
          goto LABEL_40;
LABEL_3:
        std::ostream::put(v4, v5);
LABEL_4:
        std::__ostream_insert<char,std::char_traits<char>>();
        exit(3);
      }
      while ( 1 )
      {
        if ( v25 > 13 )
        {
          if ( v25 != 32 )
          {
            if ( v25 != 120 )
              goto LABEL_39;
            v26 = std::istream::get(*(std::istream **)v22);
            v27 = a2[2];
            v28 = a2[1];
            *(_DWORD *)(v22 + 8) = v26;
            v29 = sub_2DAE90(v27);
            v30 = a2[1];
            v31 = *(_QWORD *)(v30 + 840);
            v70[0] = 8LL * v29 + 1;
            v32 = sub_15E3510(v30, v70, 0, 0, v31, 0);
            v35 = sub_15DC610(v30, v32, 0, 0, v33, v34, v52, v54[0], v58[0], v60, (int)v61, v63, v65, v67, v68, v69);
            v36 = v35;
            if ( v35 )
              ++*(_DWORD *)(v35 + 8);
            if ( !v24 )
            {
              v37 = sub_15E1A70(a2[1]);
              v38 = v37;
              if ( v37 )
                ++*(_DWORD *)(v37 + 8);
              if ( v36 )
              {
                v19 = (*(_DWORD *)(v36 + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v28, v36);
              }
              v36 = v38;
            }
            v39 = a2[2];
            for ( i = *(_DWORD *)(v39 + 8); i > 8; *(_DWORD *)(v39 + 8) = i )
            {
              if ( i <= 13 )
              {
                if ( i == 10 )
                  ++*(_DWORD *)(v39 + 12);
              }
              else if ( i != 32 )
              {
                break;
              }
              i = std::istream::get(*(std::istream **)v39);
            }
            v41 = sub_15E1B70(v55);
            v42 = v41;
            if ( v41 )
              ++*(_DWORD *)(v41 + 8);
            if ( v16 )
            {
              v19 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v19 )
                sub_15D7BC0(*(_QWORD *)v58, v16);
            }
            if ( v36 )
            {
              v19 = (*(_DWORD *)(v36 + 8))-- == 1;
              if ( v19 )
                sub_15D7BC0(v28, v36);
            }
            v22 = a2[2];
            v23 = *(_DWORD *)(v22 + 8);
            if ( v23 != 126 && v23 != 120 )
              goto LABEL_77;
            v16 = v42;
            *(_QWORD *)v54 = a2[1];
            goto LABEL_36;
          }
        }
        else if ( v25 == 10 )
        {
          ++*(_DWORD *)(v22 + 12);
        }
        v25 = std::istream::get(*(std::istream **)v22);
        *(_DWORD *)(v22 + 8) = v25;
        if ( v25 <= 8 )
          goto LABEL_39;
      }
    }
  }
  v42 = v16;
LABEL_77:
  v70[0] = 0;
  v70[1] = 0;
  v43 = a2[1];
  v71[0] = 1;
  v71[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v71);
  v47 = a2[5];
  BYTE4(v71[0]) &= ~1u;
  LODWORD(v71[0]) = 1;
  if ( !v47 )
  {
    sub_16669E0(a2 + 4);
    v47 = a2[5];
  }
  sub_166A700(v47, (unsigned int)v70, 1, v44, v45, v46);
  v48 = sub_15E1BF0(v43);
  *v61 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v48, (__m128i)v43);
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v49 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v70);
  sub_182CBA0(v49, v71);
  if ( v42 )
  {
    v19 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(*(_QWORD *)v58, v42);
  }
  if ( v60 )
  {
    v56 = *(_DWORD *)(v60 + 8);
    *(_DWORD *)(v60 + 8) = v56 - 1;
    if ( v56 == 1 )
      sub_15D7BC0(v63, v60);
  }
  return v61;
}

