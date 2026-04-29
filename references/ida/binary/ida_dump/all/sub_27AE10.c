__int64 __fastcall sub_27AE10(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4, __int64 *a5, unsigned __int64 a6)
{
  int v10; // eax
  unsigned __int64 v11; // r15
  __int64 result; // rax
  int v13; // eax
  _QWORD *v14; // rax
  unsigned __int64 v15; // r14
  __m128i v16; // xmm0
  unsigned __int64 v17; // rdx
  char tinfo; // bl
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  bool v22; // zf
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  int v25; // ebx
  _QWORD *v26; // rdx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  const __m128i *v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // r13
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  const __m128i *v36; // rsi
  unsigned __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // r13
  size_t v40; // r14
  __int64 v41; // rax
  __m128i v42; // xmm0
  __m128i si128; // xmm0
  __int64 v44; // rbx
  size_t v45; // r14
  void *v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rbx
  char v49; // bl
  __int64 v50; // rdi
  __int64 v51; // r13
  __int64 v52; // rbp
  _QWORD *v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rbp
  __m128i *v58; // rax
  __int64 v59; // rdx
  void *v60; // rax
  _QWORD *v62; // [rsp+10h] [rbp-178h]
  int v63; // [rsp+18h] [rbp-170h]
  char v64; // [rsp+20h] [rbp-168h]
  int v65; // [rsp+34h] [rbp-154h]
  __int64 v66; // [rsp+48h] [rbp-140h] BYREF
  __m128i *v67; // [rsp+50h] [rbp-138h] BYREF
  __int128 v68; // [rsp+58h] [rbp-130h]
  __int64 v69; // [rsp+70h] [rbp-118h] BYREF
  __int128 v70; // [rsp+78h] [rbp-110h]
  __int128 v71; // [rsp+88h] [rbp-100h]
  __int64 v72; // [rsp+98h] [rbp-F0h]
  int v73; // [rsp+A0h] [rbp-E8h]
  __m128i v74[9]; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 v75; // [rsp+148h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v10 = sub_278A80(a1, a5);
  v11 = v10;
  if ( v10 > 0 )
  {
LABEL_2:
    if ( (unsigned int)(a3 / v11) != 1 || a4 )
    {
      v74[0].m128i_i32[2] = 0;
      v74[0].m128i_i32[3] = a3 / v11;
      v74[0].m128i_i64[0] = 0;
      copy_tinfo_t();
      tinfo = create_tinfo();
      clear_tinfo_t();
      if ( !tinfo )
        return 0;
    }
    goto LABEL_4;
  }
  v13 = sub_278CA0(a1);
  v11 = v13;
  if ( v13 < 0 )
    return 0;
  if ( v13 )
  {
    v69 = 0;
    *(_QWORD *)&v70 = 0;
    DWORD2(v70) = 0;
    BYTE12(v70) = 0;
    if ( v13 == 1 )
    {
      if ( !under_debugger )
        sub_383060(50184);
      goto LABEL_135;
    }
    v14 = (_QWORD *)*a1;
    if ( *a1 )
    {
      if ( a1[1] )
      {
        v15 = v14[1];
        if ( v14 != (_QWORD *)v15 )
        {
          while ( 1 )
          {
            v16 = _mm_loadu_si128((const __m128i *)(v15 + 24));
            v74[1] = (__m128i)*(unsigned __int64 *)(v15 + 40);
            v74[0] = v16;
            copy_tinfo_t();
            v74[2].m128i_i32[0] = *(_DWORD *)(v15 + 56);
            if ( (int)v11 < v74[2].m128i_i32[0] )
              break;
            v67 = v74;
            v74[1].m128i_i32[1] %= (int)v11;
            v74[1].m128i_i32[0] %= (int)v11;
            sub_27AC10((__m128i *)&v69, (__int64)v74, (const __m128i **)&v67);
            clear_tinfo_t();
            if ( (*(_QWORD *)v15 & 2) == 0 )
            {
              v17 = *(_QWORD *)(v15 + 16);
              if ( (*(_BYTE *)v17 & 2) != 0 )
              {
                v19 = (_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL);
                v20 = *v19;
                if ( (*v19 & 2) != 0 || v19[2] != v15 )
                {
LABEL_23:
                  v15 = (unsigned __int64)v19;
                }
                else
                {
                  while ( 1 )
                  {
                    v15 = v20 & 0xFFFFFFFFFFFFFFFCLL;
                    v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v20 & 2) != 0 )
                      break;
                    v21 = v19;
                    v19 = (_QWORD *)v15;
                    if ( *(_QWORD **)(v15 + 16) != v21 )
                      goto LABEL_23;
                  }
                }
              }
              else
              {
                do
                {
                  v15 = v17;
                  v17 = *(_QWORD *)(v17 + 8);
                }
                while ( (*(_BYTE *)v17 & 2) == 0 );
              }
            }
            if ( *a1 == v15 )
              goto LABEL_20;
          }
          if ( !under_debugger )
            sub_383060(50185);
          goto LABEL_135;
        }
      }
    }
LABEL_20:
    sub_27A4D0((__int64)&v69);
    if ( !(unsigned __int8)sub_27AE10((unsigned int)&v69, a2, 0, 0, (_DWORD)a5, v11)
      || (get_tinfo_property() & 0xF) == 0xB && !get_tinfo_size() )
    {
      sub_279460(&v69);
      return 0;
    }
    sub_279460(&v69);
    goto LABEL_2;
  }
  v22 = a1[1] == 0;
  v66 = 0;
  v67 = nullptr;
  v68 = 0;
  if ( v22 )
  {
    if ( !under_debugger )
      sub_383060(50186);
    goto LABEL_135;
  }
  v23 = (_QWORD *)*a1;
  v24 = nullptr;
  if ( *a1 )
    v24 = (_QWORD *)v23[1];
  v65 = 0;
  v25 = -1;
  v63 = -1;
  if ( v24 == v23 )
    goto LABEL_41;
  do
  {
    v26 = v24 + 3;
    if ( *((_DWORD *)v24 + 11) != v25 )
    {
LABEL_33:
      if ( v25 != -1 && v25 >= v65 )
      {
LABEL_43:
        if ( !a6 || a6 >= v25 + v63 )
        {
          if ( !(_BYTE)v66 || (get_tinfo_property() & 0x3F) == 1 )
            goto LABEL_87;
          if ( v25 != v65 )
          {
            v28 = v68;
            v29 = v67;
            if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
            {
              v67 = (__m128i *)qvector_reserve();
              v29 = v67;
              v28 = v68;
            }
            v29->m128i_i64[v28] = 0;
            v74[0].m128i_i32[2] = 0;
            v74[0].m128i_i32[3] = v25 - v65;
            *(_QWORD *)&v68 = v68 + 1;
            v69 = 17;
            v74[0].m128i_i64[0] = 0;
            copy_tinfo_t();
            v64 = create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            if ( !v64 )
              goto LABEL_87;
          }
          if ( v63 > 0 )
          {
            v74[0].m128i_i64[0] = 0;
            copy_tinfo_t();
            v35 = v68;
            v36 = v67;
            if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
            {
              v67 = (__m128i *)qvector_reserve();
              v36 = v67;
              v35 = v68;
            }
            v36->m128i_i64[v35] = 0;
            copy_tinfo_t();
            *(_QWORD *)&v68 = v68 + 1;
            clear_tinfo_t();
            v65 = v25 + v63;
          }
          v23 = (_QWORD *)*a1;
        }
        if ( v24 == v23 )
          goto LABEL_76;
        v26 = v24 + 3;
      }
      v25 = *((_DWORD *)v26 + 5);
      v62 = v26;
      copy_tinfo_t();
      goto LABEL_36;
    }
    if ( v23 )
    {
      if ( !a1[1] )
        goto LABEL_63;
      v34 = (_QWORD *)v23[1];
    }
    else
    {
      v34 = nullptr;
    }
    if ( v34 == v24 )
      goto LABEL_33;
LABEL_63:
    v62 = v24 + 3;
    if ( (unsigned int)sub_2782C0(&v66, v24 + 6) == -1 )
    {
      copy_tinfo_t();
LABEL_36:
      v63 = *((_DWORD *)v62 + 8);
    }
    if ( (*v24 & 2) == 0 )
    {
      v27 = (_QWORD *)v24[2];
      if ( (*(_BYTE *)v27 & 2) != 0 )
      {
        v30 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
        v31 = *v30;
        if ( (*v30 & 2) != 0 || (_QWORD *)v30[2] != v24 )
        {
LABEL_56:
          v24 = v30;
        }
        else
        {
          while ( 1 )
          {
            v32 = v30;
            v33 = v31 & 0xFFFFFFFFFFFFFFFCLL;
            v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v31 & 2) != 0 )
              break;
            v30 = (_QWORD *)v33;
            if ( *(_QWORD **)(v33 + 16) != v32 )
              goto LABEL_56;
          }
          v24 = (_QWORD *)v33;
        }
      }
      else
      {
        do
        {
          v24 = v27;
          v27 = (_QWORD *)v27[1];
        }
        while ( (*(_BYTE *)v27 & 2) == 0 );
      }
    }
    v23 = (_QWORD *)*a1;
  }
  while ( v24 != (_QWORD *)*a1 );
LABEL_41:
  if ( v25 >= v65 && v25 != -1 )
    goto LABEL_43;
LABEL_76:
  v37 = v68;
  if ( !(_QWORD)v68 )
  {
    if ( v67 )
      goto LABEL_91;
    goto LABEL_92;
  }
  if ( !a6 )
    goto LABEL_78;
  if ( a6 < v65 )
  {
    if ( !under_debugger )
      sub_383060(50187);
    goto LABEL_135;
  }
  if ( v65 >= a6 )
  {
LABEL_78:
    if ( (_QWORD)v68 == 1 )
      goto LABEL_123;
    v69 = 0;
    v72 = 0;
    v73 = 1;
    v70 = 0;
    v71 = 0;
LABEL_80:
    memset(v74, 0, sizeof(v74));
    v74[7].m128i_i64[0] = 1;
    v74[7].m128i_i32[2] = -1;
    v38 = qvector_reserve();
    v39 = v70;
    v69 = v38;
    if ( (unsigned __int64)v70 < v37 )
    {
      do
      {
        si128 = _mm_load_si128(v74);
        v44 = v69 + 144 * v39;
        *(_QWORD *)(v44 + 16) = 0;
        *(__m128i *)v44 = si128;
        *(_OWORD *)(v44 + 24) = 0;
        v45 = v74[1].m128i_u64[1];
        if ( v74[1].m128i_i64[1] )
        {
          v46 = (void *)qalloc_or_throw();
          *(_QWORD *)(v44 + 16) = v46;
          *(_QWORD *)(v44 + 32) = v45;
          memcpy(v46, (const void *)v74[1].m128i_i64[0], v45);
          *(_QWORD *)(v44 + 24) = v45;
        }
        *(_QWORD *)(v44 + 40) = 0;
        *(_OWORD *)(v44 + 48) = 0;
        v40 = v74[3].m128i_u64[0];
        if ( v74[3].m128i_i64[0] )
        {
          v60 = (void *)qalloc_or_throw();
          *(_QWORD *)(v44 + 40) = v60;
          *(_QWORD *)(v44 + 56) = v40;
          memcpy(v60, (const void *)v74[2].m128i_i64[1], v40);
          *(_QWORD *)(v44 + 48) = v40;
        }
        *(_QWORD *)(v44 + 64) = 0;
        copy_tinfo_t();
        v41 = v74[7].m128i_i64[1];
        ++v39;
        *(__m128i *)(v44 + 72) = _mm_loadu_si128((const __m128i *)&v74[4].m128i_u64[1]);
        v42 = _mm_loadu_si128((const __m128i *)&v74[5].m128i_u64[1]);
        *(_QWORD *)(v44 + 120) = v41;
        *(__m128i *)(v44 + 88) = v42;
        *(__m128i *)(v44 + 104) = _mm_loadu_si128((const __m128i *)&v74[6].m128i_u64[1]);
        *(_QWORD *)(v44 + 128) = v74[8].m128i_i64[0];
        *(_BYTE *)(v44 + 136) = v74[8].m128i_i8[8];
      }
      while ( v39 != v37 );
    }
    *(_QWORD *)&v70 = v37;
    clear_tinfo_t();
    if ( v74[2].m128i_i64[1] )
    {
      v74[3].m128i_i64[0] = 0;
      qfree();
    }
    if ( v74[1].m128i_i64[0] )
    {
      v74[1].m128i_i64[1] = 0;
      qfree();
    }
    if ( (_QWORD)v68 )
    {
      v56 = 0;
      do
      {
        v57 = 144 * v56;
        copy_tinfo_t();
        sub_6B870((__int64 *)(v69 + v57 + 16));
        LODWORD(v11) = v11 + 1;
        v56 = (int)v11;
      }
      while ( (int)v11 < (unsigned __int64)v68 );
    }
LABEL_102:
    create_tinfo();
    v50 = v69;
    if ( v69 )
    {
      v51 = v70;
      v52 = 0;
      if ( (_QWORD)v70 )
      {
        do
        {
          v53 = (_QWORD *)(v50 + 144 * v52);
          clear_tinfo_t();
          if ( v53[5] )
          {
            v53[6] = 0;
            qfree();
          }
          if ( v53[2] )
          {
            v53[3] = 0;
            qfree();
          }
          ++v52;
          v50 = v69;
        }
        while ( v51 != v52 );
      }
      *(_QWORD *)&v70 = 0;
      qfree();
    }
LABEL_110:
    if ( v67 )
    {
      v54 = v68;
      v55 = 0;
      if ( (_QWORD)v68 )
      {
        do
        {
          ++v55;
          clear_tinfo_t();
        }
        while ( v54 != v55 );
      }
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    clear_tinfo_t();
LABEL_4:
    result = sub_32CB80(a5, a2, -1);
    if ( (_BYTE)result )
      return result;
    if ( !under_debugger )
      sub_383060(50188);
LABEL_135:
    BUG();
  }
  if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
  {
    v67 = (__m128i *)qvector_reserve();
    v37 = v68;
  }
  v67->m128i_i64[v37] = 0;
  *(_QWORD *)&v68 = v68 + 1;
  v74[0].m128i_i32[2] = 0;
  v69 = 17;
  v74[0].m128i_i64[0] = 0;
  v74[0].m128i_i32[3] = a6 - v65;
  copy_tinfo_t();
  v49 = create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v49 )
  {
    v37 = v68;
    if ( (_QWORD)v68 != 1 )
    {
      v69 = 0;
      v72 = 0;
      v73 = 1;
      v70 = 0;
      v71 = 0;
      if ( !(_QWORD)v68 )
        goto LABEL_102;
      goto LABEL_80;
    }
LABEL_123:
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v58 = v67;
      v59 = *a5;
      *a5 = v67->m128i_i64[0];
      v58->m128i_i64[0] = v59;
      goto LABEL_110;
    }
  }
LABEL_87:
  if ( v67 )
  {
    v47 = v68;
    if ( (_QWORD)v68 )
    {
      v48 = 0;
      do
      {
        ++v48;
        clear_tinfo_t();
      }
      while ( v47 != v48 );
    }
LABEL_91:
    *(_QWORD *)&v68 = 0;
    qfree();
  }
LABEL_92:
  clear_tinfo_t();
  return 0;
}
