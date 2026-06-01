__int64 __fastcall sub_3ACE30(__int64 a1, int *a2, __int64 *a3, char **a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // r13d
  __m128i *p_src; // rsi
  __int64 v10; // r14
  unsigned int v11; // ebx
  char v13; // al
  unsigned int v14; // r12d
  __int64 v15; // rdi
  __int64 (*v16)(); // rax
  __int64 idati; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r12
  __int64 v22; // rdi
  __int64 (*v23)(); // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  int v27; // r13d
  __int64 v28; // r13
  __m128i *v29; // r14
  void *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  size_t v33; // r13
  __m128i *v34; // r14
  void *v35; // rdi
  __m128i *v36; // r14
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r13
  __m128i *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 tinfo_property4; // r12
  __int64 v47; // rax
  __int64 func; // rax
  __int64 v49; // rax
  __m128i *v50; // r15
  __m128i *v53; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-198h] BYREF
  void *src; // [rsp+48h] [rbp-190h] BYREF
  __int128 v57; // [rsp+50h] [rbp-188h]
  __m128i si128; // [rsp+68h] [rbp-170h] BYREF
  __int64 v59; // [rsp+78h] [rbp-160h]
  __int64 v60; // [rsp+80h] [rbp-158h]
  unsigned __int64 v61; // [rsp+88h] [rbp-150h]
  __int128 v62; // [rsp+90h] [rbp-148h]
  __int64 v63; // [rsp+A0h] [rbp-138h]
  __int64 v64; // [rsp+A8h] [rbp-130h]
  __int128 v65; // [rsp+B0h] [rbp-128h]
  __int64 v66; // [rsp+C0h] [rbp-118h]
  __int128 v67; // [rsp+C8h] [rbp-110h]
  _OWORD v68[3]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v69; // [rsp+108h] [rbp-D0h]
  int v70; // [rsp+110h] [rbp-C8h]
  __int64 v71; // [rsp+118h] [rbp-C0h]
  char v72; // [rsp+120h] [rbp-B8h]
  __int128 v73; // [rsp+128h] [rbp-B0h]
  __m128i v74; // [rsp+138h] [rbp-A0h]
  int v75; // [rsp+148h] [rbp-90h]
  __int64 v76; // [rsp+150h] [rbp-88h]
  __int64 v77; // [rsp+158h] [rbp-80h]
  __int128 v78; // [rsp+160h] [rbp-78h]
  __int64 v79; // [rsp+170h] [rbp-68h]
  __int128 v80; // [rsp+178h] [rbp-60h]
  __int64 v81; // [rsp+190h] [rbp-48h]
  unsigned __int64 v82; // [rsp+1A0h] [rbp-38h]

  v6 = a5;
  p_src = (__m128i *)&src;
  v82 = __readfsqword(0x28u);
  v10 = a6;
  v57 = 0;
  src = nullptr;
  if ( !(unsigned __int8)sub_173890((__int64 *)&v53, (char **)&src, (__int64)a3, a4, a5, 15) )
  {
    p_src = (__m128i *)&src;
    if ( (unsigned __int8)sub_173890((__int64 *)&v53, (char **)&src, (__int64)a3, a4, v6, 23) )
    {
      v14 = (unsigned int)v53;
      v55 = 0;
      if ( v53 == (__m128i *)-1LL )
        goto LABEL_21;
      v15 = *(_QWORD *)(a1 + 1000);
      v16 = *(__int64 (**)())(*(_QWORD *)v15 + 64LL);
      if ( v16 == sub_3AAC50 )
      {
        v15 = 257;
        LOWORD(v59) = 257;
        si128.m128i_i64[1] = (unsigned int)v53;
      }
      else
      {
        idati = ((__int64 (__fastcall *)(__int64, void **, __int64 (*)(), __int64 *, __int64))v16)(
                  v15,
                  &src,
                  sub_3AAC50,
                  &v55,
                  v10);
        LOWORD(v59) = 257;
        si128.m128i_i64[1] = v14;
        if ( idati )
        {
LABEL_16:
          si128.m128i_i64[0] = idati;
          p_src = (__m128i *)(&word_3C + 1);
          create_tinfo(&v55, 61, 189, &si128);
          v18 = v55;
          if ( (_BYTE)v55 )
          {
LABEL_17:
            v19 = *((_QWORD *)a2 + 8);
            v20 = v57;
            *a2 = 2;
            *((_QWORD *)a2 + 8) = v18;
            v55 = v19;
            if ( v20 > 1 )
            {
              v29 = (__m128i *)src;
              v30 = *((void **)a2 + 4);
              if ( *((_QWORD *)a2 + 6) < v20 )
              {
                v45 = qvector_reserve(a2 + 8, *((_QWORD *)a2 + 4), v20, 1);
                *((_QWORD *)a2 + 4) = v45;
                v30 = (void *)v45;
              }
              *((_QWORD *)a2 + 5) = v20;
              p_src = v29;
              memmove(v30, v29, v20 - 1);
              *(_BYTE *)(*((_QWORD *)a2 + 4) + v20 - 1) = 0;
            }
            else
            {
              *((_QWORD *)a2 + 5) = 0;
            }
LABEL_25:
            clear_tinfo_t(&v55);
            goto LABEL_3;
          }
LABEL_21:
          if ( (unsigned __int64)v57 <= 1 )
            goto LABEL_25;
          v22 = *(_QWORD *)(a1 + 1000);
          v23 = *(__int64 (**)())(*(_QWORD *)v22 + 64LL);
          if ( v23 == sub_3AAC50 || (p_src = (__m128i *)v23()) == nullptr )
            p_src = (__m128i *)get_idati(v22);
          sub_3BAA30(&v55, p_src, &src);
          v18 = v55;
          if ( !(_BYTE)v55 )
            goto LABEL_25;
          goto LABEL_17;
        }
      }
      idati = get_idati(v15);
      goto LABEL_16;
    }
    p_src = (__m128i *)&src;
    if ( !(unsigned __int8)sub_173890(nullptr, (char **)&src, (__int64)a3, a4, v6, 37) )
      goto LABEL_3;
    v59 = -2;
    v60 = 0;
    v24 = *a3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC340);
    v61 = -1;
    v25 = *(_QWORD *)(a1 + 1000);
    v78 = 0;
    v63 = 0;
    p_src = &si128;
    v64 = 0;
    v66 = 0;
    v69 = 1;
    v70 = -1;
    v71 = 0;
    v72 = 0;
    v75 = -1;
    v76 = -1;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v62 = 0;
    v65 = 0;
    v67 = 0;
    v68[0] = 0;
    v73 = 0;
    v74 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    v80 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *, __int64))(*(_QWORD *)v24 + 200LL))(v24, &si128, v25) )
    {
LABEL_33:
      if ( v79 )
      {
        *(_QWORD *)&v80 = 0;
        qfree(v79, p_src->m128i_i8);
      }
      if ( v77 )
      {
        *(_QWORD *)&v78 = 0;
        qfree(v77, p_src->m128i_i8);
      }
      clear_tinfo_t(v68);
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree(v66, p_src->m128i_i8);
      }
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v64, p_src->m128i_i8);
      }
      clear_tinfo_t(&si128.m128i_u64[1]);
      goto LABEL_3;
    }
    p_src = (__m128i *)(&qword_128 + 4);
    if ( get_tinfo_property4(si128.m128i_i64[1], 300, 0, 0, 0, 0) == -1 || (v26 = v61, v61 > 0xFFFFFFFFFFFFFFFDLL) )
    {
      if ( v59 != -2 )
      {
        *a2 = 3;
        v27 = v61;
        p_src = (__m128i *)&si128.m128i_u64[1];
        copy_tinfo_t(a2 + 16, &si128.m128i_u64[1], v26);
        a2[18] = v27;
        v28 = v57;
        if ( (unsigned __int64)v57 > 1 )
        {
          v50 = (__m128i *)src;
          if ( *((_QWORD *)a2 + 6) < (unsigned __int64)v57 )
            *((_QWORD *)a2 + 4) = qvector_reserve(a2 + 8, *((_QWORD *)a2 + 4), v57, 1);
          *((_QWORD *)a2 + 5) = v28;
          p_src = v50;
          memmove(*((void **)a2 + 4), v50, v28 - 1);
          *(_BYTE *)(*((_QWORD *)a2 + 4) + v28 - 1) = 0;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      v38 = *((_QWORD *)a2 + 8);
      v39 = si128.m128i_i64[1];
      *a2 = 2;
      v40 = v57;
      *((_QWORD *)a2 + 8) = v39;
      si128.m128i_i64[1] = v38;
      if ( v40 )
        goto LABEL_57;
    }
    else
    {
      p_src = (__m128i *)(&qword_128 + 4);
      tinfo_property4 = get_tinfo_property4(si128.m128i_i64[1], 297, v61, 0, 0, 0);
      v47 = get_tinfo_property4(si128.m128i_i64[1], 300, 0, 0, 0, 0);
      func = get_func(v47);
      v40 = v57;
      *((_QWORD *)a2 + 2) = tinfo_property4;
      *a2 = 1;
      *((_QWORD *)a2 + 1) = func;
      a2[6] = -1;
      if ( v40 )
      {
LABEL_57:
        if ( v40 != 1 )
        {
          v41 = (__m128i *)src;
          if ( *((_QWORD *)a2 + 6) < v40 )
            *((_QWORD *)a2 + 4) = qvector_reserve(a2 + 8, *((_QWORD *)a2 + 4), v40, 1);
          *((_QWORD *)a2 + 5) = v40;
          p_src = v41;
          memmove(*((void **)a2 + 4), v41, v40 - 1);
          *(_BYTE *)(*((_QWORD *)a2 + 4) + v40 - 1) = 0;
          goto LABEL_33;
        }
      }
    }
LABEL_32:
    *((_QWORD *)a2 + 5) = 0;
    goto LABEL_33;
  }
  if ( v53 == (__m128i *)-1LL )
    goto LABEL_3;
  v54 = 0;
  v55 = -1;
  si128.m128i_i64[0] = 0;
  v13 = is_mapped(v53);
  p_src = v53;
  if ( !v13 )
  {
    if ( (unsigned __int8)get_type_by_tid(&si128, v53)
      && (p_src = (__m128i *)(&qword_128 + 4), get_tinfo_property4(si128.m128i_i64[0], 300, 0, 0, 0, 0) == -1) )
    {
      v42 = *((_QWORD *)a2 + 8);
      v43 = si128.m128i_i64[0];
      *a2 = 2;
      v32 = v57;
      *((_QWORD *)a2 + 8) = v43;
      si128.m128i_i64[0] = v42;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v32 != 1 )
        {
          v34 = (__m128i *)src;
          if ( *((_QWORD *)a2 + 6) < v32 )
            *((_QWORD *)a2 + 4) = qvector_reserve(a2 + 8, *((_QWORD *)a2 + 4), v32, 1);
          *((_QWORD *)a2 + 5) = v32;
          v35 = *((void **)a2 + 4);
          goto LABEL_50;
        }
      }
    }
    else
    {
      p_src = (__m128i *)&v55;
      if ( !(unsigned __int8)sub_193540(&v54, &v55, (__int64)v53, nullptr) )
      {
LABEL_10:
        clear_tinfo_t(&si128);
        goto LABEL_3;
      }
      v31 = v54;
      v32 = v57;
      *a2 = 1;
      a2[6] = -1;
      *((_QWORD *)a2 + 1) = v31;
      *((_QWORD *)a2 + 2) = v55;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v32 != 1 )
        {
          v34 = (__m128i *)src;
          v35 = *((void **)a2 + 4);
          if ( *((_QWORD *)a2 + 6) < v32 )
          {
            v49 = qvector_reserve(a2 + 8, *((_QWORD *)a2 + 4), v32, 1);
            *((_QWORD *)a2 + 4) = v49;
            v35 = (void *)v49;
          }
          *((_QWORD *)a2 + 5) = v32;
LABEL_50:
          p_src = v34;
          memmove(v35, v34, v33);
          *(_BYTE *)(*((_QWORD *)a2 + 4) + v32 - 1) = 0;
          goto LABEL_10;
        }
      }
    }
LABEL_20:
    *((_QWORD *)a2 + 5) = 0;
    goto LABEL_10;
  }
  v21 = v57;
  *a2 = 5;
  *((_QWORD *)a2 + 7) = p_src;
  if ( v21 <= 1 )
    goto LABEL_20;
  v36 = (__m128i *)src;
  v37 = *((void **)a2 + 4);
  if ( *((_QWORD *)a2 + 6) < v21 )
  {
    v44 = qvector_reserve(a2 + 8, *((_QWORD *)a2 + 4), v21, 1);
    *((_QWORD *)a2 + 4) = v44;
    v37 = (void *)v44;
  }
  *((_QWORD *)a2 + 5) = v21;
  p_src = v36;
  memmove(v37, v36, v21 - 1);
  *(_BYTE *)(*((_QWORD *)a2 + 4) + v21 - 1) = 0;
  clear_tinfo_t(&si128);
LABEL_3:
  v11 = *a2;
  if ( src )
  {
    *(_QWORD *)&v57 = 0;
    qfree(src, p_src->m128i_i8);
  }
  return v11;
}
