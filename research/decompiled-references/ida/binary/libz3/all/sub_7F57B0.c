void __fastcall sub_7F57B0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __m128i *v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // r15
  __m128i *v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __m128i *v12; // rdi
  __m128i *v13; // rax
  __m128i *v14; // rcx
  int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // r15
  __m128i *v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  __m128i *v23; // rdi
  int v24; // edx
  __int32 v25; // eax
  __int32 v26; // eax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rax
  __m128i *v35; // rax
  int v36; // r8d
  __m128i *v37; // rdx
  const __m128i *v38; // r14
  __m128i *v39; // r10
  __int64 v40; // rax
  __m128i *v41; // rdx
  __m128i *v42; // rax
  __m128i v43; // xmm0
  __m128i *v44; // rax
  int v45; // r8d
  __m128i *v46; // rdx
  const __m128i *v47; // r14
  __m128i *v48; // r10
  __int64 v49; // rax
  __m128i *v50; // rdx
  __m128i *v51; // rax
  __m128i v52; // xmm0
  size_t v53; // [rsp+0h] [rbp-58h]
  size_t v54; // [rsp+0h] [rbp-58h]
  int v55; // [rsp+8h] [rbp-50h]
  int v56; // [rsp+8h] [rbp-50h]

  if ( !a2 )
    return;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  if ( !a3 )
  {
    v17 = *(unsigned int *)(a1 + 5056);
    if ( 3 * (int)v17 < (unsigned int)(4 * (*(_DWORD *)(a1 + 5060) + *(_DWORD *)(a1 + 5064))) )
    {
      v56 = 2 * v17;
      v54 = 24LL * (unsigned int)(2 * v17);
      v19 = v54;
      v44 = (__m128i *)sub_186B270(v54);
      v45 = v56;
      v6 = v44;
      v46 = (__m128i *)((char *)v44 + v54);
      if ( v56 )
      {
        do
        {
          v44->m128i_i64[0] = 0;
          v44 = (__m128i *)((char *)v44 + 24);
          v44[-1].m128i_i64[0] = 0;
        }
        while ( v44 != v46 );
      }
      v47 = *(const __m128i **)(a1 + 5048);
      v18 = v56 - 1;
      v20 = (__m128i *)((char *)v6 + v54);
      v48 = (__m128i *)((char *)v47 + 24 * *(unsigned int *)(a1 + 5056));
      if ( v47 != v48 )
      {
        do
        {
          while ( v47->m128i_i32[1] != 2 )
          {
            v47 = (const __m128i *)((char *)v47 + 24);
            if ( v48 == v47 )
              goto LABEL_117;
          }
          v49 = 24LL * (v47->m128i_i32[0] & v18);
          v50 = (__m128i *)((char *)v6 + v49);
          if ( v49 == v54 )
          {
LABEL_121:
            if ( v50 == v6 )
            {
LABEL_136:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = v6;
            while ( v51->m128i_i32[1] )
            {
              v51 = (__m128i *)((char *)v51 + 24);
              if ( v50 == v51 )
                goto LABEL_136;
            }
          }
          else
          {
            v51 = (__m128i *)((char *)v6 + v49);
            while ( v51->m128i_i32[1] )
            {
              v51 = (__m128i *)((char *)v51 + 24);
              if ( v20 == v51 )
                goto LABEL_121;
            }
          }
          v52 = _mm_loadu_si128(v47);
          v47 = (const __m128i *)((char *)v47 + 24);
          *v51 = v52;
          v51[1].m128i_i64[0] = v47[-1].m128i_i64[1];
        }
        while ( v48 != v47 );
LABEL_117:
        v48 = *(__m128i **)(a1 + 5048);
      }
      if ( v48 )
      {
        sub_186B220(v48);
        v45 = v56;
        v18 = v56 - 1;
      }
      *(_QWORD *)(a1 + 5048) = v6;
      *(_DWORD *)(a1 + 5056) = v45;
      *(_DWORD *)(a1 + 5064) = 0;
    }
    else
    {
      v6 = *(__m128i **)(a1 + 5048);
      v18 = v17 - 1;
      v19 = 24 * v17;
      v20 = (__m128i *)((char *)v6 + 24 * v17);
    }
    if ( v4 )
    {
      if ( (v4 & 7) == 1 )
        v21 = v4 >> 3;
      else
        LODWORD(v21) = *(_DWORD *)(v4 - 8);
    }
    else
    {
      LODWORD(v21) = -1640531495;
    }
    v22 = (unsigned int)v21 & v18;
    v23 = (__m128i *)((char *)v6 + 24 * v22);
    if ( 24 * v22 != v19 )
    {
      v13 = (__m128i *)((char *)v6 + 24 * v22);
      v14 = nullptr;
      while ( 1 )
      {
        v24 = v13->m128i_i32[1];
        if ( v24 == 2 )
        {
          if ( (_DWORD)v21 == v13->m128i_i32[0] && v4 == v13->m128i_i64[1] )
          {
LABEL_16:
            v14 = v13;
            goto LABEL_17;
          }
        }
        else
        {
          if ( !v24 )
          {
            if ( v14 )
              goto LABEL_86;
            v14 = v13;
            goto LABEL_87;
          }
          v14 = v13;
        }
        v13 = (__m128i *)((char *)v13 + 24);
        if ( v13 == v20 )
          goto LABEL_46;
      }
    }
    v14 = nullptr;
    while ( 1 )
    {
LABEL_46:
      if ( v23 == v6 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v26 = v6->m128i_i32[1];
      if ( v26 == 2 )
      {
        if ( (_DWORD)v21 == v6->m128i_i32[0] && v4 == v6->m128i_i64[1] )
        {
LABEL_41:
          v14 = v6;
          goto LABEL_17;
        }
      }
      else
      {
        if ( !v26 )
        {
          if ( v14 )
LABEL_86:
            --*(_DWORD *)(a1 + 5064);
          else
            v14 = v6;
LABEL_87:
          v14->m128i_i64[1] = v4;
          v14[1].m128i_i32[0] = 0;
          v14->m128i_i32[1] = 2;
          v14->m128i_i32[0] = v21;
          ++*(_DWORD *)(a1 + 5060);
          goto LABEL_17;
        }
        v14 = v6;
      }
      v6 = (__m128i *)((char *)v6 + 24);
    }
  }
  v5 = *(unsigned int *)(a1 + 5032);
  if ( 3 * (int)v5 < (unsigned int)(4 * (*(_DWORD *)(a1 + 5036) + *(_DWORD *)(a1 + 5040))) )
  {
    v55 = 2 * v5;
    v53 = 24LL * (unsigned int)(2 * v5);
    v8 = v53;
    v35 = (__m128i *)sub_186B270(v53);
    v36 = v55;
    v6 = v35;
    v37 = (__m128i *)((char *)v35 + v53);
    if ( v55 )
    {
      do
      {
        v35->m128i_i64[0] = 0;
        v35 = (__m128i *)((char *)v35 + 24);
        v35[-1].m128i_i64[0] = 0;
      }
      while ( v35 != v37 );
    }
    v38 = *(const __m128i **)(a1 + 5024);
    v7 = v55 - 1;
    v9 = (__m128i *)((char *)v6 + v53);
    v39 = (__m128i *)((char *)v38 + 24 * *(unsigned int *)(a1 + 5032));
    if ( v38 != v39 )
    {
      do
      {
        while ( v38->m128i_i32[1] != 2 )
        {
          v38 = (const __m128i *)((char *)v38 + 24);
          if ( v39 == v38 )
            goto LABEL_102;
        }
        v40 = 24LL * (v38->m128i_i32[0] & v7);
        v41 = (__m128i *)((char *)v6 + v40);
        if ( v40 == v53 )
        {
LABEL_126:
          if ( v41 == v6 )
          {
LABEL_135:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v42 = v6;
          while ( v42->m128i_i32[1] )
          {
            v42 = (__m128i *)((char *)v42 + 24);
            if ( v41 == v42 )
              goto LABEL_135;
          }
        }
        else
        {
          v42 = (__m128i *)((char *)v6 + v40);
          while ( v42->m128i_i32[1] )
          {
            v42 = (__m128i *)((char *)v42 + 24);
            if ( v9 == v42 )
              goto LABEL_126;
          }
        }
        v43 = _mm_loadu_si128(v38);
        v38 = (const __m128i *)((char *)v38 + 24);
        *v42 = v43;
        v42[1].m128i_i64[0] = v38[-1].m128i_i64[1];
      }
      while ( v39 != v38 );
LABEL_102:
      v39 = *(__m128i **)(a1 + 5024);
    }
    if ( v39 )
    {
      sub_186B220(v39);
      v36 = v55;
      v7 = v55 - 1;
    }
    *(_QWORD *)(a1 + 5024) = v6;
    *(_DWORD *)(a1 + 5032) = v36;
    *(_DWORD *)(a1 + 5040) = 0;
  }
  else
  {
    v6 = *(__m128i **)(a1 + 5024);
    v7 = v5 - 1;
    v8 = 24 * v5;
    v9 = (__m128i *)((char *)v6 + 24 * v5);
  }
  if ( v4 )
  {
    if ( (v4 & 7) == 1 )
      v10 = v4 >> 3;
    else
      LODWORD(v10) = *(_DWORD *)(v4 - 8);
  }
  else
  {
    LODWORD(v10) = -1640531495;
  }
  v11 = (unsigned int)v10 & v7;
  v12 = (__m128i *)((char *)v6 + 24 * v11);
  if ( 24 * v11 != v8 )
  {
    v13 = (__m128i *)((char *)v6 + 24 * v11);
    v14 = nullptr;
    while ( 1 )
    {
      v15 = v13->m128i_i32[1];
      if ( v15 == 2 )
      {
        if ( (_DWORD)v10 == v13->m128i_i32[0] && v4 == v13->m128i_i64[1] )
          goto LABEL_16;
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_89;
          v14 = v13;
          goto LABEL_90;
        }
        v14 = v13;
      }
      v13 = (__m128i *)((char *)v13 + 24);
      if ( v13 == v9 )
        goto LABEL_37;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_37:
    if ( v12 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v25 = v6->m128i_i32[1];
    if ( v25 != 2 )
      break;
    if ( (_DWORD)v10 == v6->m128i_i32[0] && v4 == v6->m128i_i64[1] )
      goto LABEL_41;
LABEL_36:
    v6 = (__m128i *)((char *)v6 + 24);
  }
  if ( v25 )
  {
    v14 = v6;
    goto LABEL_36;
  }
  if ( v14 )
LABEL_89:
    --*(_DWORD *)(a1 + 5040);
  else
    v14 = v6;
LABEL_90:
  v14->m128i_i64[1] = v4;
  v14[1].m128i_i32[0] = 0;
  v14->m128i_i32[1] = 2;
  v14->m128i_i32[0] = v10;
  ++*(_DWORD *)(a1 + 5036);
LABEL_17:
  ++v14[1].m128i_i32[0];
  v16 = *(_DWORD *)(a1 + 5072) + 1;
  *(_DWORD *)(a1 + 5072) = v16;
  if ( v16 <= 0x63 || __ROR4__(652835029 * v16, 3) <= (unsigned int)&loc_418937 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v27 = *(_QWORD *)(a1 + 5024);
    v28 = v27 + 24LL * *(unsigned int *)(a1 + 5032);
    if ( v27 != v28 )
    {
      while ( *(_DWORD *)(v27 + 4) != 2 )
      {
        v27 += 24;
        if ( v28 == v27 )
          goto LABEL_66;
      }
      if ( v28 != v27 )
      {
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v29 = *(_QWORD *)(v27 + 8);
          if ( (v29 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v29 )
              strlen(*(const char **)(v27 + 8));
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          v30 = v27 + 24;
          if ( v28 == v27 + 24 )
            break;
          while ( 1 )
          {
            v27 = v30;
            if ( *(_DWORD *)(v30 + 4) == 2 )
              break;
            v30 += 24;
            if ( v28 == v30 )
              goto LABEL_66;
          }
        }
        while ( v28 != v30 );
      }
    }
LABEL_66:
    v31 = *(_QWORD *)(a1 + 5048);
    v32 = v31 + 24LL * *(unsigned int *)(a1 + 5056);
    if ( v31 != v32 )
    {
      while ( *(_DWORD *)(v31 + 4) != 2 )
      {
        v31 += 24;
        if ( v32 == v31 )
          goto LABEL_80;
      }
      if ( v31 != v32 )
      {
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v33 = *(_QWORD *)(v31 + 8);
          if ( (v33 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v33 )
              strlen(*(const char **)(v31 + 8));
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          v34 = v31 + 24;
          if ( v32 == v31 + 24 )
            break;
          while ( 1 )
          {
            v31 = v34;
            if ( *(_DWORD *)(v34 + 4) == 2 )
              break;
            v34 += 24;
            if ( v32 == v34 )
              goto LABEL_80;
          }
        }
        while ( v32 != v34 );
      }
    }
LABEL_80:
    std::__ostream_insert<char,std::char_traits<char>>();
  }
}

