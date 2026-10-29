__int64 __fastcall sub_60F3B0(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rdi
  int radix; // eax
  int v13; // edx
  char v14; // cl
  char v15; // dl
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  char v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // rsi
  __int64 v23; // rdx
  char *v24; // rsi
  __int64 *v25; // r13
  __int64 v26; // r15
  void *v27; // r8
  char *v28; // rdi
  __int64 v29; // rbx
  size_t v30; // r8
  __int64 i; // rax
  __int64 v32; // r13
  __int64 v33; // rbx
  _DWORD *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // al
  char *v38; // rdi
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // rbp
  char *v42; // rbx
  void *v43; // rdi
  void *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  char *v47; // rsi
  char *v48; // r15
  void *v49; // rdx
  unsigned __int64 v50; // rax
  void *v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rsi
  int v55; // eax
  int v56; // edx
  void *v57; // r15
  void *v58; // rax
  __int64 v59; // rax
  char *v60; // rdi
  __int64 v61; // r13
  __int64 v62; // r12
  __int64 v63; // rbp
  char *v64; // rbx
  void *v65; // rdi
  void *v66; // rdi
  __int64 v67; // [rsp+10h] [rbp-E8h]
  void *v68; // [rsp+10h] [rbp-E8h]
  __int64 v69; // [rsp+10h] [rbp-E8h]
  __int64 v71; // [rsp+20h] [rbp-D8h]
  bool v72; // [rsp+2Dh] [rbp-CBh]
  unsigned __int8 v73; // [rsp+2Eh] [rbp-CAh]
  bool v74; // [rsp+2Fh] [rbp-C9h]
  char v77; // [rsp+57h] [rbp-A1h] BYREF
  unsigned __int64 v78; // [rsp+58h] [rbp-A0h] BYREF
  void *src; // [rsp+60h] [rbp-98h] BYREF
  __m128i v80; // [rsp+68h] [rbp-90h] BYREF
  void *v81; // [rsp+80h] [rbp-78h] BYREF
  __int128 v82; // [rsp+88h] [rbp-70h]
  void *ptr; // [rsp+98h] [rbp-60h] BYREF
  __int128 v84; // [rsp+A0h] [rbp-58h]
  int v85; // [rsp+B0h] [rbp-48h]
  char v86; // [rsp+B4h] [rbp-44h]
  unsigned __int64 v87; // [rsp+B8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v73 = a3 == -1 || a6 == 0 || a5 == 0;
  if ( v73 )
    return 0;
  v81 = nullptr;
  ptr = nullptr;
  v85 = 0;
  v82 = 0;
  v84 = 0;
  v86 = sub_6CA880() | 0x80;
  v11 = sub_6CA6D0(a1, a3);
  if ( (v11 & 0xF00000) == 0x300000 )
  {
    v56 = v85;
    v55 = v85;
    v14 = v86 & 0x9F;
    BYTE1(v56) = BYTE1(v85) & 0xF8;
    if ( (v11 & 0x20000) != 0 )
    {
      BYTE1(v55) = BYTE1(v85) & 0xF8 | 4;
      v56 = v55;
    }
    v85 = v56;
    goto LABEL_95;
  }
  radix = get_radix(v11, 0);
  v13 = v85;
  v14 = v86 & 0x9F;
  v86 &= 0x9Fu;
  if ( (v11 & 0x20000) == 0 )
  {
    BYTE1(v13) = BYTE1(v85) & 0xF8;
    v85 = v13;
    if ( radix == 2 )
    {
LABEL_10:
      BYTE1(v13) |= 2u;
      v85 = v13;
      goto LABEL_16;
    }
    if ( radix > 2 )
    {
      if ( radix != 8 )
      {
        v15 = 96;
        if ( radix != 10 )
          goto LABEL_16;
        goto LABEL_15;
      }
LABEL_98:
      BYTE1(v13) |= 1u;
      v85 = v13;
      goto LABEL_16;
    }
    if ( radix != 1 )
      goto LABEL_16;
LABEL_95:
    v86 = v14 | 0x20;
    goto LABEL_16;
  }
  BYTE1(v13) = BYTE1(v85) & 0xF8 | 4;
  v85 = v13;
  if ( radix == 8 )
    goto LABEL_98;
  if ( radix <= 8 )
  {
    if ( radix != 1 )
    {
      if ( radix != 2 )
        goto LABEL_16;
      goto LABEL_10;
    }
    goto LABEL_95;
  }
  v15 = 64;
  if ( radix == 10 )
LABEL_15:
    v86 = v14 | v15;
LABEL_16:
  if ( a4 > 0 )
  {
    v16 = sub_6BA9B0(*(_QWORD *)(*a1 + 1672), 0, (unsigned int)a4);
    if ( v16 )
    {
      v17 = v16 == 1;
      v18 = 64;
      if ( v17 )
        v18 = 128;
      v85 |= v18;
    }
  }
  v19 = sub_6CA610(a1, a3);
  if ( v19 )
    v19 = (get_merge_state(a1, a3) & 2) == 0;
  v71 = sub_6CAC50(a1, a3);
  v74 = 0;
  while ( 2 )
  {
    v20 = v71 & (v71 - 1);
    if ( !v19 )
    {
      v72 = v20 == 0;
      goto LABEL_43;
    }
    v72 = v71 == -1 && (_QWORD)v82 != 0;
    if ( !v72 )
    {
      if ( v20 || v71 != sub_6CADC0(a1, a3, v71) )
      {
        v21 = v84;
        LODWORD(src) = 1;
        v22 = ptr;
        if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v84 + 1) )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v84 + 1, 4);
          v22 = ptr;
          v21 = v84;
        }
        v22[v21] = 1;
        v23 = v82;
        *(_QWORD *)&v84 = v84 + 1;
        v24 = (char *)v81;
        if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v82 + 1) )
        {
          v81 = (void *)qvector_reserve(&v81, v81, v82 + 1, 56);
          v23 = v82;
          v24 = (char *)v81;
        }
        v25 = (__int64 *)&v24[56 * v23];
        *v25 = 0;
        v25[3] = 0;
        v25[6] = v71;
        *(_OWORD *)(v25 + 1) = 0;
        *((_OWORD *)v25 + 2) = 0;
        *(_QWORD *)&v82 = v82 + 1;
        src = nullptr;
        v80 = 0;
        sub_6CAB80(a1, &src, a3, v71);
        v26 = v80.m128i_i64[0];
        if ( v80.m128i_i64[0] <= 1uLL )
        {
          sub_35A790((char **)v25);
        }
        else if ( v25 != (__int64 *)&src )
        {
          v27 = src;
          v28 = (char *)*v25;
          if ( (unsigned __int64)v25[2] < v80.m128i_i64[0] )
          {
            v68 = src;
            v59 = qvector_reserve(v25, *v25, v80.m128i_i64[0], 1);
            *v25 = v59;
            v27 = v68;
            v28 = (char *)v59;
          }
          v25[1] = v26;
          memmove(v28, v27, v26 - 1);
          *(_BYTE *)(*v25 + v26 - 1) = 0;
        }
        if ( (sub_6CABE0(a1, &src, a3, v71, 1) > 0 || sub_6CABE0(a1, &src, a3, v71, 0) > 0)
          && v25 + 3 != (__int64 *)&src )
        {
          v29 = v80.m128i_i64[0];
          if ( v80.m128i_i64[0] && (v30 = v80.m128i_i64[0] - 1, v80.m128i_i64[0] != 1) )
          {
            v57 = src;
            v58 = (void *)v25[3];
            if ( (unsigned __int64)v25[5] < v80.m128i_i64[0] )
            {
              v69 = v80.m128i_i64[0] - 1;
              v58 = (void *)qvector_reserve(v25 + 3, v25[3], v80.m128i_i64[0], 1);
              v25[3] = (__int64)v58;
              v30 = v69;
            }
            v25[4] = v29;
            memmove(v58, v57, v30);
            *(_BYTE *)(v25[3] + v29 - 1) = 0;
          }
          else
          {
            v25[4] = 0;
          }
        }
        if ( src )
        {
          v80.m128i_i64[0] = 0;
          qfree(src);
        }
      }
      else
      {
        v72 = v19;
      }
LABEL_43:
      for ( i = sub_6CADC0(a1, a3, v71); ; i = sub_6CAE10(a1, a3, v32, v71) )
      {
        v32 = i;
        v33 = sub_6CAE70(a1, &v77, a3, i, v71);
        v67 = v33;
        if ( v33 != -1 )
        {
          while ( 1 )
          {
            if ( v19 )
            {
              v34 = ptr;
              v35 = v84;
              if ( v72 )
              {
                LODWORD(src) = 1;
                if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v84 + 1) )
                {
                  ptr = (void *)qvector_reserve(&ptr, ptr, v84 + 1, 4);
                  v34 = ptr;
                  v35 = v84;
                }
                v34[v35] = 1;
                *(_QWORD *)&v84 = v84 + 1;
                v74 = v72;
                v72 = 0;
              }
              else
              {
                ++*((_DWORD *)ptr + v84 - 1);
              }
            }
            v36 = *a1;
            src = nullptr;
            v80 = 0;
            if ( (unsigned __int8)sub_6B9E00(*(_QWORD *)(v36 + 1672), &src, v33) )
            {
              if ( !v80.m128i_i64[0] )
                break;
              v45 = v80.m128i_i64[0] - 1;
            }
            else
            {
              v53 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), v33);
              v54 = *a1;
              v78 = v53;
              v45 = sub_7BF130(&v78, v54, &src);
            }
            if ( v45 <= 0 )
              break;
            v46 = v82;
            v47 = (char *)v81;
            if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v82 + 1) )
            {
              v81 = (void *)qvector_reserve(&v81, v81, v82 + 1, 56);
              v46 = v82;
              v47 = (char *)v81;
            }
            v48 = &v47[56 * v46];
            *(_OWORD *)(v48 + 8) = 0;
            *(_QWORD *)v48 = 0;
            *((_QWORD *)v48 + 3) = 0;
            *((_OWORD *)v48 + 2) = 0;
            *(_QWORD *)&v82 = v82 + 1;
            v49 = *(void **)v48;
            *(_QWORD *)v48 = src;
            v50 = *((_QWORD *)v48 + 1);
            *(__m128i *)(v48 + 8) = v80;
            src = v49;
            v80 = (__m128i)v50;
            *((_QWORD *)v48 + 6) = v32;
            validate_name(v48, 8, 1);
            if ( sub_6CAA60(a1, &src, v33, 0) > 0 || sub_6CAA60(a1, &src, v33, 1) > 0 )
            {
              v51 = *((void **)v48 + 3);
              v52 = *((_QWORD *)v48 + 5);
              *((_QWORD *)v48 + 3) = src;
              *((__m128i *)v48 + 2) = _mm_loadu_si128(&v80);
              src = v51;
              v80.m128i_i64[1] = v52;
            }
            else
            {
              v51 = src;
            }
            if ( v51 )
            {
              v80.m128i_i64[0] = 0;
              qfree(v51);
            }
            v33 = sub_6CAF40(a1, &v77, v67);
            if ( v33 == -1 )
              goto LABEL_83;
          }
          if ( src )
          {
            v80.m128i_i64[0] = 0;
            qfree(src);
          }
          goto LABEL_52;
        }
LABEL_83:
        if ( v32 == -1 )
          break;
      }
      if ( v71 != -1 )
      {
        v71 = sub_6CACB0(a1, a3);
        continue;
      }
LABEL_52:
      if ( v19 )
        break;
      goto LABEL_53;
    }
    break;
  }
  if ( (_QWORD)v82 == 1 && !v74 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v84 = 0;
      qfree(ptr);
      v60 = (char *)v81;
      ptr = nullptr;
      *((_QWORD *)&v84 + 1) = 0;
      if ( !v81 )
      {
LABEL_53:
        v37 = v86 & 0xEF;
        goto LABEL_57;
      }
      v61 = v82;
      if ( !(_QWORD)v82 )
      {
LABEL_118:
        *(_QWORD *)&v82 = 0;
        qfree(v60);
        v81 = nullptr;
        *((_QWORD *)&v82 + 1) = 0;
        goto LABEL_53;
      }
    }
    else
    {
      v60 = (char *)v81;
      if ( !v81 )
        goto LABEL_53;
      v61 = v82;
    }
    v62 = 0;
    v63 = 0;
    do
    {
      v64 = &v60[v62];
      v65 = *(void **)&v60[v62 + 24];
      if ( v65 )
      {
        *((_QWORD *)v64 + 4) = 0;
        qfree(v65);
      }
      v66 = *(void **)v64;
      if ( *(_QWORD *)v64 )
      {
        *((_QWORD *)v64 + 1) = 0;
        qfree(v66);
      }
      ++v63;
      v60 = (char *)v81;
      v62 += 56;
    }
    while ( v61 != v63 );
    goto LABEL_118;
  }
  v37 = v86 | 0x10;
LABEL_57:
  v86 = v37;
  if ( !(unsigned int)sub_415220((__int64)&v81, 1)
    || (v86 & 0x10) != 0 && (sub_416660((__int64 *)&v81, 0), !(unsigned int)sub_415220((__int64)&v81, 1)) )
  {
    src = nullptr;
    v73 = create_tinfo(&src, 45, 45, &v81);
    if ( v73 )
    {
      *(_QWORD *)(a5 + 8) = 0;
      *(_QWORD *)(a6 + 8) = 0;
      v73 = serialize_tinfo(a5, a6, a7, &src, 16);
    }
    clear_tinfo_t(&src);
  }
  if ( ptr )
  {
    *(_QWORD *)&v84 = 0;
    qfree(ptr);
  }
  v38 = (char *)v81;
  if ( v81 )
  {
    v39 = v82;
    if ( (_QWORD)v82 )
    {
      v40 = 0;
      v41 = 0;
      do
      {
        v42 = &v38[v40];
        v43 = *(void **)&v38[v40 + 24];
        if ( v43 )
        {
          *((_QWORD *)v42 + 4) = 0;
          qfree(v43);
        }
        v44 = *(void **)v42;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          qfree(v44);
        }
        ++v41;
        v38 = (char *)v81;
        v40 += 56;
      }
      while ( v39 != v41 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v38);
  }
  return v73;
}
