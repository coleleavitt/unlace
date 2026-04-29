__int64 __fastcall sub_27B1D0(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4, __int64 *a5, unsigned __int64 a6)
{
  int v11; // eax
  unsigned __int64 v12; // r15
  __int64 result; // rax
  int v14; // eax
  _QWORD *v15; // rax
  unsigned __int64 v16; // r14
  __m128i v17; // xmm0
  unsigned __int64 v18; // rdx
  char tinfo; // bl
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  bool v23; // zf
  _QWORD *v24; // rax
  _QWORD *v25; // r13
  int v26; // ebx
  _QWORD *v27; // rdx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  const __m128i *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // r13
  unsigned __int64 v34; // rcx
  _QWORD *v35; // rcx
  __int64 v36; // rax
  const __m128i *v37; // rsi
  __int64 *v38; // rdi
  unsigned __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // r13
  size_t v42; // r14
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i si128; // xmm0
  __int64 v46; // rbx
  size_t v47; // r14
  void *v48; // rax
  const __m128i *v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // rbx
  __int8 *v52; // rdi
  __int64 *v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // r13
  __int64 v56; // rbp
  _QWORD *v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rdi
  const __m128i *v60; // rdi
  __int64 v61; // rbp
  __int64 v62; // rbx
  __int8 *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rbp
  __m128i *v66; // rax
  __int64 v67; // rdx
  void *v68; // rax
  _QWORD *v70; // [rsp+10h] [rbp-178h]
  int v71; // [rsp+18h] [rbp-170h]
  __int8 *v72; // [rsp+20h] [rbp-168h]
  int v73; // [rsp+34h] [rbp-154h]
  __int64 v74; // [rsp+48h] [rbp-140h] BYREF
  __m128i *v75; // [rsp+50h] [rbp-138h] BYREF
  __int128 v76; // [rsp+58h] [rbp-130h]
  __int64 v77; // [rsp+70h] [rbp-118h] BYREF
  __int128 v78; // [rsp+78h] [rbp-110h]
  __int128 v79; // [rsp+88h] [rbp-100h]
  __int64 v80; // [rsp+98h] [rbp-F0h]
  int v81; // [rsp+A0h] [rbp-E8h]
  __m128i v82[9]; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 v83; // [rsp+148h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v11 = sub_278E40(a1, a5);
  v12 = v11;
  if ( v11 > 0 )
  {
LABEL_2:
    if ( (unsigned int)(a3 / v12) != 1 || a4 )
    {
      v82[0].m128i_i32[2] = 0;
      v82[0].m128i_i32[3] = a3 / v12;
      v82[0].m128i_i64[0] = 0;
      copy_tinfo_t(v82, a5);
      tinfo = create_tinfo(a5, 11, 11, v82);
      clear_tinfo_t(v82);
      if ( !tinfo )
        return 0;
    }
    goto LABEL_4;
  }
  v14 = sub_279060(a1);
  v12 = v14;
  if ( v14 < 0 )
    return 0;
  if ( v14 )
  {
    v77 = 0;
    *(_QWORD *)&v78 = 0;
    DWORD2(v78) = 0;
    BYTE12(v78) = 0;
    if ( v14 == 1 )
    {
      if ( !under_debugger )
        sub_3835A0(50184);
      goto LABEL_135;
    }
    v15 = (_QWORD *)*a1;
    if ( *a1 )
    {
      if ( a1[1] )
      {
        v16 = v15[1];
        if ( v15 != (_QWORD *)v16 )
        {
          while ( 1 )
          {
            v17 = _mm_loadu_si128((const __m128i *)(v16 + 24));
            v82[1] = (__m128i)*(unsigned __int64 *)(v16 + 40);
            v82[0] = v17;
            copy_tinfo_t(&v82[1].m128i_u64[1], v16 + 48);
            v82[2].m128i_i32[0] = *(_DWORD *)(v16 + 56);
            if ( (int)v12 < v82[2].m128i_i32[0] )
              break;
            v75 = v82;
            v82[1].m128i_i32[1] %= (int)v12;
            v82[1].m128i_i32[0] %= (int)v12;
            sub_27AFD0((__m128i *)&v77, (__int64)v82, (const __m128i **)&v75);
            clear_tinfo_t(&v82[1].m128i_u64[1]);
            if ( (*(_QWORD *)v16 & 2) == 0 )
            {
              v18 = *(_QWORD *)(v16 + 16);
              if ( (*(_BYTE *)v18 & 2) != 0 )
              {
                v20 = (_QWORD *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
                v21 = *v20;
                if ( (*v20 & 2) != 0 || v20[2] != v16 )
                {
LABEL_23:
                  v16 = (unsigned __int64)v20;
                }
                else
                {
                  while ( 1 )
                  {
                    v16 = v21 & 0xFFFFFFFFFFFFFFFCLL;
                    v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v21 & 2) != 0 )
                      break;
                    v22 = v20;
                    v20 = (_QWORD *)v16;
                    if ( *(_QWORD **)(v16 + 16) != v22 )
                      goto LABEL_23;
                  }
                }
              }
              else
              {
                do
                {
                  v16 = v18;
                  v18 = *(_QWORD *)(v18 + 8);
                }
                while ( (*(_BYTE *)v18 & 2) == 0 );
              }
            }
            if ( *a1 == v16 )
              goto LABEL_20;
          }
          if ( !under_debugger )
            sub_3835A0(50185);
          goto LABEL_135;
        }
      }
    }
LABEL_20:
    sub_27A890((__int64)&v77);
    if ( !(unsigned __int8)sub_27B1D0((unsigned int)&v77, a2, 0, 0, (_DWORD)a5, v12)
      || (get_tinfo_property(*a5, 2) & 0xF) == 0xB && !get_tinfo_size(0, *a5, 0) )
    {
      sub_279820(&v77);
      return 0;
    }
    sub_279820(&v77);
    goto LABEL_2;
  }
  v23 = a1[1] == 0;
  v74 = 0;
  v75 = nullptr;
  v76 = 0;
  if ( v23 )
  {
    if ( !under_debugger )
      sub_3835A0(50186);
    goto LABEL_135;
  }
  v24 = (_QWORD *)*a1;
  v25 = nullptr;
  if ( *a1 )
    v25 = (_QWORD *)v24[1];
  v73 = 0;
  v26 = -1;
  v71 = -1;
  if ( v25 == v24 )
    goto LABEL_41;
  do
  {
    v27 = v25 + 3;
    if ( *((_DWORD *)v25 + 11) != v26 )
    {
LABEL_33:
      if ( v26 != -1 && v26 >= v73 )
      {
LABEL_43:
        if ( !a6 || a6 >= v26 + v71 )
        {
          if ( !(_BYTE)v74 || (get_tinfo_property(v74, 2) & 0x3F) == 1 )
            goto LABEL_87;
          if ( v26 != v73 )
          {
            v29 = v76;
            v30 = v75;
            if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
            {
              v75 = (__m128i *)qvector_reserve(&v75, v75, v76 + 1, 8);
              v30 = v75;
              v29 = v76;
            }
            v30->m128i_i64[v29] = 0;
            v82[0].m128i_i32[2] = 0;
            v82[0].m128i_i32[3] = v26 - v73;
            *(_QWORD *)&v76 = v76 + 1;
            v72 = &v30->m128i_i8[8 * v29];
            v77 = 17;
            v82[0].m128i_i64[0] = 0;
            copy_tinfo_t(v82, &v77);
            LOBYTE(v72) = create_tinfo(v72, 11, 11, v82);
            clear_tinfo_t(v82);
            clear_tinfo_t(&v77);
            if ( !(_BYTE)v72 )
              goto LABEL_87;
          }
          if ( v71 > 0 )
          {
            v82[0].m128i_i64[0] = 0;
            copy_tinfo_t(v82, &v74);
            v36 = v76;
            v37 = v75;
            if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
            {
              v75 = (__m128i *)qvector_reserve(&v75, v75, v76 + 1, 8);
              v37 = v75;
              v36 = v76;
            }
            v38 = &v37->m128i_i64[v36];
            *v38 = 0;
            copy_tinfo_t(v38, v82);
            *(_QWORD *)&v76 = v76 + 1;
            clear_tinfo_t(v82);
            v73 = v26 + v71;
          }
          v24 = (_QWORD *)*a1;
        }
        if ( v25 == v24 )
          goto LABEL_76;
        v27 = v25 + 3;
      }
      v26 = *((_DWORD *)v27 + 5);
      v70 = v27;
      copy_tinfo_t(&v74, v25 + 6);
      goto LABEL_36;
    }
    if ( v24 )
    {
      if ( !a1[1] )
        goto LABEL_63;
      v35 = (_QWORD *)v24[1];
    }
    else
    {
      v35 = nullptr;
    }
    if ( v35 == v25 )
      goto LABEL_33;
LABEL_63:
    v70 = v25 + 3;
    if ( (unsigned int)sub_278680(&v74, v25 + 6) == -1 )
    {
      copy_tinfo_t(&v74, v25 + 6);
LABEL_36:
      v71 = *((_DWORD *)v70 + 8);
    }
    if ( (*v25 & 2) == 0 )
    {
      v28 = (_QWORD *)v25[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
        v31 = (_QWORD *)(*v25 & 0xFFFFFFFFFFFFFFFCLL);
        v32 = *v31;
        if ( (*v31 & 2) != 0 || (_QWORD *)v31[2] != v25 )
        {
LABEL_56:
          v25 = v31;
        }
        else
        {
          while ( 1 )
          {
            v33 = v31;
            v34 = v32 & 0xFFFFFFFFFFFFFFFCLL;
            v32 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v32 & 2) != 0 )
              break;
            v31 = (_QWORD *)v34;
            if ( *(_QWORD **)(v34 + 16) != v33 )
              goto LABEL_56;
          }
          v25 = (_QWORD *)v34;
        }
      }
      else
      {
        do
        {
          v25 = v28;
          v28 = (_QWORD *)v28[1];
        }
        while ( (*(_BYTE *)v28 & 2) == 0 );
      }
    }
    v24 = (_QWORD *)*a1;
  }
  while ( v25 != (_QWORD *)*a1 );
LABEL_41:
  if ( v26 >= v73 && v26 != -1 )
    goto LABEL_43;
LABEL_76:
  v39 = v76;
  if ( !(_QWORD)v76 )
  {
    v49 = v75;
    if ( v75 )
      goto LABEL_91;
    goto LABEL_92;
  }
  if ( !a6 )
    goto LABEL_78;
  if ( a6 < v73 )
  {
    if ( !under_debugger )
      sub_3835A0(50187);
    goto LABEL_135;
  }
  if ( v73 >= a6 )
  {
LABEL_78:
    if ( (_QWORD)v76 == 1 )
      goto LABEL_123;
    v77 = 0;
    v80 = 0;
    v81 = 1;
    v78 = 0;
    v79 = 0;
LABEL_80:
    memset(v82, 0, sizeof(v82));
    v82[7].m128i_i64[0] = 1;
    v82[7].m128i_i32[2] = -1;
    v40 = qvector_reserve(&v77, 0, v39, 144);
    v41 = v78;
    v77 = v40;
    if ( (unsigned __int64)v78 < v39 )
    {
      do
      {
        si128 = _mm_load_si128(v82);
        v46 = v77 + 144 * v41;
        *(_QWORD *)(v46 + 16) = 0;
        *(__m128i *)v46 = si128;
        *(_OWORD *)(v46 + 24) = 0;
        v47 = v82[1].m128i_u64[1];
        if ( v82[1].m128i_i64[1] )
        {
          v48 = (void *)qalloc_or_throw(v82[1].m128i_i64[1]);
          *(_QWORD *)(v46 + 16) = v48;
          *(_QWORD *)(v46 + 32) = v47;
          memcpy(v48, (const void *)v82[1].m128i_i64[0], v47);
          *(_QWORD *)(v46 + 24) = v47;
        }
        *(_QWORD *)(v46 + 40) = 0;
        *(_OWORD *)(v46 + 48) = 0;
        v42 = v82[3].m128i_u64[0];
        if ( v82[3].m128i_i64[0] )
        {
          v68 = (void *)qalloc_or_throw(v82[3].m128i_i64[0]);
          *(_QWORD *)(v46 + 40) = v68;
          *(_QWORD *)(v46 + 56) = v42;
          memcpy(v68, (const void *)v82[2].m128i_i64[1], v42);
          *(_QWORD *)(v46 + 48) = v42;
        }
        *(_QWORD *)(v46 + 64) = 0;
        copy_tinfo_t(v46 + 64, &v82[4]);
        v43 = v82[7].m128i_i64[1];
        ++v41;
        *(__m128i *)(v46 + 72) = _mm_loadu_si128((const __m128i *)&v82[4].m128i_u64[1]);
        v44 = _mm_loadu_si128((const __m128i *)&v82[5].m128i_u64[1]);
        *(_QWORD *)(v46 + 120) = v43;
        *(__m128i *)(v46 + 88) = v44;
        *(__m128i *)(v46 + 104) = _mm_loadu_si128((const __m128i *)&v82[6].m128i_u64[1]);
        *(_QWORD *)(v46 + 128) = v82[8].m128i_i64[0];
        *(_BYTE *)(v46 + 136) = v82[8].m128i_i8[8];
      }
      while ( v41 != v39 );
    }
    *(_QWORD *)&v78 = v39;
    clear_tinfo_t(&v82[4]);
    if ( v82[2].m128i_i64[1] )
    {
      v82[3].m128i_i64[0] = 0;
      qfree(v82[2].m128i_i64[1]);
    }
    if ( v82[1].m128i_i64[0] )
    {
      v82[1].m128i_i64[1] = 0;
      qfree(v82[1].m128i_i64[0]);
    }
    if ( (_QWORD)v76 )
    {
      v64 = 0;
      do
      {
        v65 = 144 * v64;
        copy_tinfo_t(144 * v64 + v77 + 64, (char *)v75 + 8 * v64);
        sub_6B2B0((__int64 *)(v77 + v65 + 16), (__int64)"fld_%d", v12);
        LODWORD(v12) = v12 + 1;
        v64 = (int)v12;
      }
      while ( (int)v12 < (unsigned __int64)v76 );
    }
LABEL_102:
    create_tinfo(a5, 13, 13, &v77);
    v54 = v77;
    if ( v77 )
    {
      v55 = v78;
      v56 = 0;
      if ( (_QWORD)v78 )
      {
        do
        {
          v57 = (_QWORD *)(v54 + 144 * v56);
          clear_tinfo_t(v57 + 8);
          v58 = v57[5];
          if ( v58 )
          {
            v57[6] = 0;
            qfree(v58);
          }
          v59 = v57[2];
          if ( v59 )
          {
            v57[3] = 0;
            qfree(v59);
          }
          ++v56;
          v54 = v77;
        }
        while ( v55 != v56 );
      }
      *(_QWORD *)&v78 = 0;
      qfree(v54);
    }
LABEL_110:
    v60 = v75;
    if ( v75 )
    {
      v61 = v76;
      v62 = 0;
      if ( (_QWORD)v76 )
      {
        do
        {
          v63 = &v60->m128i_i8[8 * v62++];
          clear_tinfo_t(v63);
          v60 = v75;
        }
        while ( v61 != v62 );
      }
      *(_QWORD *)&v76 = 0;
      qfree(v60);
    }
    clear_tinfo_t(&v74);
LABEL_4:
    result = sub_32CEA0(a5, a2, -1);
    if ( (_BYTE)result )
      return result;
    if ( !under_debugger )
      sub_3835A0(50188);
LABEL_135:
    BUG();
  }
  if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
  {
    v75 = (__m128i *)qvector_reserve(&v75, v75, v76 + 1, 8);
    v39 = v76;
  }
  v53 = &v75->m128i_i64[v39];
  *v53 = 0;
  *(_QWORD *)&v76 = v76 + 1;
  v82[0].m128i_i32[2] = 0;
  v77 = 17;
  v82[0].m128i_i64[0] = 0;
  v82[0].m128i_i32[3] = a6 - v73;
  copy_tinfo_t(v82, &v77);
  LOBYTE(v53) = create_tinfo(v53, 11, 11, v82);
  clear_tinfo_t(v82);
  clear_tinfo_t(&v77);
  if ( (_BYTE)v53 )
  {
    v39 = v76;
    if ( (_QWORD)v76 != 1 )
    {
      v77 = 0;
      v80 = 0;
      v81 = 1;
      v78 = 0;
      v79 = 0;
      if ( !(_QWORD)v76 )
        goto LABEL_102;
      goto LABEL_80;
    }
LABEL_123:
    if ( (get_tinfo_property(v75->m128i_i64[0], 2) & 0x2F) == 0xD )
    {
      v66 = v75;
      v67 = *a5;
      *a5 = v75->m128i_i64[0];
      v66->m128i_i64[0] = v67;
      goto LABEL_110;
    }
  }
LABEL_87:
  v49 = v75;
  if ( v75 )
  {
    v50 = v76;
    if ( (_QWORD)v76 )
    {
      v51 = 0;
      do
      {
        v52 = &v49->m128i_i8[8 * v51++];
        clear_tinfo_t(v52);
        v49 = v75;
      }
      while ( v50 != v51 );
    }
LABEL_91:
    *(_QWORD *)&v76 = 0;
    qfree(v49);
  }
LABEL_92:
  clear_tinfo_t(&v74);
  return 0;
}
