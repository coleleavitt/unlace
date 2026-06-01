__int64 __fastcall sub_5F3330(__int64 *a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
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
  int v20; // eax
  bool v21; // r15
  __int64 v22; // rax
  _DWORD *v23; // rsi
  __int64 v24; // rdx
  char *v25; // rsi
  __int64 *v26; // r13
  __int64 v27; // r9
  void *v28; // r8
  char *v29; // rdi
  __int64 v30; // rbx
  size_t v31; // r9
  unsigned int i; // eax
  unsigned int v33; // ebx
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
  char *v48; // r13
  void *v49; // rdx
  unsigned __int64 v50; // rax
  void *v51; // rdi
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rsi
  char *v55; // rdi
  __int64 v56; // r13
  __int64 v57; // r12
  __int64 v58; // rbp
  char *v59; // rbx
  void *v60; // rdi
  void *v61; // rdi
  int v62; // eax
  int v63; // edx
  void *v64; // r8
  void *v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+8h] [rbp-F0h]
  unsigned int v68; // [rsp+8h] [rbp-F0h]
  __int64 v69; // [rsp+8h] [rbp-F0h]
  __int64 v70; // [rsp+8h] [rbp-F0h]
  unsigned int v71; // [rsp+18h] [rbp-E0h]
  void *v72; // [rsp+18h] [rbp-E0h]
  void *v73; // [rsp+18h] [rbp-E0h]
  unsigned int v75; // [rsp+28h] [rbp-D0h]
  unsigned __int8 v76; // [rsp+2Eh] [rbp-CAh]
  bool v77; // [rsp+2Fh] [rbp-C9h]
  char v80; // [rsp+5Bh] [rbp-9Dh] BYREF
  int v81; // [rsp+5Ch] [rbp-9Ch] BYREF
  void *src; // [rsp+60h] [rbp-98h] BYREF
  __m128i v83; // [rsp+68h] [rbp-90h] BYREF
  void *v84; // [rsp+80h] [rbp-78h] BYREF
  __int128 v85; // [rsp+88h] [rbp-70h]
  void *ptr; // [rsp+98h] [rbp-60h] BYREF
  __int128 v87; // [rsp+A0h] [rbp-58h]
  int v88; // [rsp+B0h] [rbp-48h]
  char v89; // [rsp+B4h] [rbp-44h]
  unsigned __int64 v90; // [rsp+B8h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  v76 = a3 == -1 || a6 == 0 || a5 == 0;
  if ( v76 )
    return 0;
  v84 = nullptr;
  ptr = nullptr;
  v88 = 0;
  v85 = 0;
  v87 = 0;
  v89 = sub_6A9940() | 0x80;
  v11 = sub_6A97A0(a1, a3);
  if ( (v11 & 0xF00000) == 0x300000 )
  {
    v63 = v88;
    v62 = v88;
    v14 = v89 & 0x9F;
    BYTE1(v63) = BYTE1(v88) & 0xF8;
    if ( (v11 & 0x20000) != 0 )
    {
      BYTE1(v62) = BYTE1(v88) & 0xF8 | 4;
      v63 = v62;
    }
    v88 = v63;
    goto LABEL_104;
  }
  radix = get_radix(v11, 0);
  v13 = v88;
  v14 = v89 & 0x9F;
  v89 &= 0x9Fu;
  if ( (v11 & 0x20000) == 0 )
  {
    BYTE1(v13) = BYTE1(v88) & 0xF8;
    v88 = v13;
    if ( radix == 2 )
    {
LABEL_10:
      BYTE1(v13) |= 2u;
      v88 = v13;
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
LABEL_107:
      BYTE1(v13) |= 1u;
      v88 = v13;
      goto LABEL_16;
    }
    if ( radix != 1 )
      goto LABEL_16;
LABEL_104:
    v89 = v14 | 0x20;
    goto LABEL_16;
  }
  BYTE1(v13) = BYTE1(v88) & 0xF8 | 4;
  v88 = v13;
  if ( radix == 8 )
    goto LABEL_107;
  if ( radix <= 8 )
  {
    if ( radix != 1 )
    {
      if ( radix != 2 )
        goto LABEL_16;
      goto LABEL_10;
    }
    goto LABEL_104;
  }
  v15 = 64;
  if ( radix == 10 )
LABEL_15:
    v89 = v14 | v15;
LABEL_16:
  if ( a4 > 0 )
  {
    v16 = sub_69A030(*(_QWORD *)(*a1 + 1480), 0, (unsigned int)a4);
    if ( v16 )
    {
      v17 = v16 == 1;
      v18 = 64;
      if ( v17 )
        v18 = 128;
      v88 |= v18;
    }
  }
  v19 = sub_6A96D0(a1, a3);
  if ( v19 )
    v19 = (get_merge_state(a1, a3) & 2) == 0;
  v75 = sub_6A9D10(a1, a3);
  v77 = 0;
  while ( 2 )
  {
    v20 = v75 & (v75 - 1);
    v21 = v20 == 0;
    if ( v19 )
    {
      v21 = v75 == -1 && (_QWORD)v85 != 0;
      if ( v21 )
        goto LABEL_53;
      if ( v20 || v75 != (unsigned int)sub_6A9E80(a1, a3, v75) )
      {
        v22 = v87;
        LODWORD(src) = 1;
        v23 = ptr;
        if ( *((_QWORD *)&v87 + 1) < (unsigned __int64)(v87 + 1) )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v87 + 1, 4);
          v23 = ptr;
          v22 = v87;
        }
        v23[v22] = 1;
        v24 = v85;
        *(_QWORD *)&v87 = v87 + 1;
        v25 = (char *)v84;
        if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)(v85 + 1) )
        {
          v84 = (void *)qvector_reserve(&v84, v84, v85 + 1, 56);
          v24 = v85;
          v25 = (char *)v84;
        }
        v26 = (__int64 *)&v25[56 * v24];
        *v26 = 0;
        v26[3] = 0;
        v26[6] = v75;
        *(_OWORD *)(v26 + 1) = 0;
        *((_OWORD *)v26 + 2) = 0;
        *(_QWORD *)&v85 = v85 + 1;
        src = nullptr;
        v83 = 0;
        sub_6A9C40(a1, &src, a3, v75);
        v27 = v83.m128i_i64[0];
        if ( v83.m128i_i64[0] <= 1uLL )
        {
          sub_3573A0((char **)v26);
        }
        else if ( v26 != (__int64 *)&src )
        {
          v28 = src;
          v29 = (char *)*v26;
          if ( (unsigned __int64)v26[2] < v83.m128i_i64[0] )
          {
            v72 = src;
            v69 = v83.m128i_i64[0];
            v66 = qvector_reserve(v26, *v26, v83.m128i_i64[0], 1);
            *v26 = v66;
            v28 = v72;
            v29 = (char *)v66;
            v27 = v69;
          }
          v26[1] = v27;
          v67 = v27;
          memmove(v29, v28, v27 - 1);
          *(_BYTE *)(*v26 + v67 - 1) = 0;
        }
        if ( (sub_6A9CA0(a1, &src, a3, v75, 1) > 0 || sub_6A9CA0(a1, &src, a3, v75, 0) > 0)
          && v26 + 3 != (__int64 *)&src )
        {
          v30 = v83.m128i_i64[0];
          if ( v83.m128i_i64[0] && (v31 = v83.m128i_i64[0] - 1, v83.m128i_i64[0] != 1) )
          {
            v64 = src;
            v65 = (void *)v26[3];
            if ( (unsigned __int64)v26[5] < v83.m128i_i64[0] )
            {
              v73 = src;
              v70 = v83.m128i_i64[0] - 1;
              v65 = (void *)qvector_reserve(v26 + 3, v26[3], v83.m128i_i64[0], 1);
              v64 = v73;
              v31 = v70;
              v26[3] = (__int64)v65;
            }
            v26[4] = v30;
            memmove(v65, v64, v31);
            *(_BYTE *)(v26[3] + v30 - 1) = 0;
          }
          else
          {
            v26[4] = 0;
          }
        }
        if ( src )
        {
          v83.m128i_i64[0] = 0;
          qfree(src);
        }
      }
      else
      {
        v21 = v19;
      }
    }
    for ( i = sub_6A9E80(a1, a3, v75); ; i = sub_6A9ED0(a1, a3, v68, v75) )
    {
      v68 = i;
      v33 = sub_6A9F30(a1, &v80, a3, i, v75);
      v71 = v33;
      if ( v33 != -1 )
      {
        while ( 1 )
        {
          if ( v19 )
          {
            v34 = ptr;
            v35 = v87;
            if ( v21 )
            {
              LODWORD(src) = 1;
              if ( *((_QWORD *)&v87 + 1) < (unsigned __int64)(v87 + 1) )
              {
                ptr = (void *)qvector_reserve(&ptr, ptr, v87 + 1, 4);
                v34 = ptr;
                v35 = v87;
              }
              v34[v35] = 1;
              v77 = v21;
              v21 = 0;
              *(_QWORD *)&v87 = v87 + 1;
            }
            else
            {
              ++*((_DWORD *)ptr + v87 - 1);
            }
          }
          v36 = *a1;
          src = nullptr;
          v83 = 0;
          if ( (unsigned __int8)sub_6994A0(*(_QWORD *)(v36 + 1480), &src, v33) )
          {
            if ( !v83.m128i_i64[0] )
              break;
            v45 = v83.m128i_i64[0] - 1;
          }
          else
          {
            v53 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), v33);
            v54 = *a1;
            v81 = v53;
            v45 = sub_79BD30(&v81, v54, &src);
          }
          if ( v45 <= 0 )
            break;
          v46 = v85;
          v47 = (char *)v84;
          if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)(v85 + 1) )
          {
            v84 = (void *)qvector_reserve(&v84, v84, v85 + 1, 56);
            v46 = v85;
            v47 = (char *)v84;
          }
          v48 = &v47[56 * v46];
          *(_OWORD *)(v48 + 8) = 0;
          *(_QWORD *)v48 = 0;
          *((_QWORD *)v48 + 3) = 0;
          *((_OWORD *)v48 + 2) = 0;
          *(_QWORD *)&v85 = v85 + 1;
          v49 = *(void **)v48;
          *(_QWORD *)v48 = src;
          v50 = *((_QWORD *)v48 + 1);
          *(__m128i *)(v48 + 8) = v83;
          v83 = (__m128i)v50;
          src = v49;
          *((_QWORD *)v48 + 6) = v68;
          validate_name(v48, 8, 1);
          if ( sub_6A9B20(a1, &src, v33, 0) > 0 || sub_6A9B20(a1, &src, v33, 1) > 0 )
          {
            v51 = *((void **)v48 + 3);
            v52 = *((_QWORD *)v48 + 5);
            *((_QWORD *)v48 + 3) = src;
            *((__m128i *)v48 + 2) = _mm_loadu_si128(&v83);
            src = v51;
            v83.m128i_i64[1] = v52;
          }
          else
          {
            v51 = src;
          }
          if ( v51 )
          {
            v83.m128i_i64[0] = 0;
            qfree(v51);
          }
          v33 = sub_6AA000(a1, &v80, v71);
          if ( v33 == -1 )
            goto LABEL_82;
        }
        if ( src )
        {
          v83.m128i_i64[0] = 0;
          qfree(src);
        }
        goto LABEL_52;
      }
LABEL_82:
      if ( v68 == -1 )
        break;
    }
    if ( v75 != -1 )
    {
      v75 = sub_6A9D70(a1, a3);
      continue;
    }
    break;
  }
LABEL_52:
  if ( !v19 )
    goto LABEL_100;
LABEL_53:
  if ( (_QWORD)v85 != 1 || v77 )
  {
    v37 = v89 | 0x10;
    goto LABEL_56;
  }
  if ( !ptr )
  {
    v55 = (char *)v84;
    if ( !v84 )
      goto LABEL_100;
    v56 = v85;
    goto LABEL_93;
  }
  *(_QWORD *)&v87 = 0;
  qfree(ptr);
  v55 = (char *)v84;
  ptr = nullptr;
  *((_QWORD *)&v87 + 1) = 0;
  if ( v84 )
  {
    v56 = v85;
    if ( !(_QWORD)v85 )
    {
LABEL_99:
      *(_QWORD *)&v85 = 0;
      qfree(v55);
      v84 = nullptr;
      *((_QWORD *)&v85 + 1) = 0;
      goto LABEL_100;
    }
LABEL_93:
    v57 = 0;
    v58 = 0;
    do
    {
      v59 = &v55[v57];
      v60 = *(void **)&v55[v57 + 24];
      if ( v60 )
      {
        *((_QWORD *)v59 + 4) = 0;
        qfree(v60);
      }
      v61 = *(void **)v59;
      if ( *(_QWORD *)v59 )
      {
        *((_QWORD *)v59 + 1) = 0;
        qfree(v61);
      }
      ++v58;
      v55 = (char *)v84;
      v57 += 56;
    }
    while ( v56 != v58 );
    goto LABEL_99;
  }
LABEL_100:
  v37 = v89 & 0xEF;
LABEL_56:
  v89 = v37;
  if ( !(unsigned int)sub_401E80((__int64)&v84, 1)
    || (v89 & 0x10) != 0 && (sub_4032C0((__int64 *)&v84, 0), !(unsigned int)sub_401E80((__int64)&v84, 1)) )
  {
    src = nullptr;
    v76 = create_tinfo(&src, 45, 45, &v84);
    if ( v76 )
    {
      *(_QWORD *)(a5 + 8) = 0;
      *(_QWORD *)(a6 + 8) = 0;
      v76 = serialize_tinfo(a5, a6, a7, &src, 16);
    }
    clear_tinfo_t(&src);
  }
  if ( ptr )
  {
    *(_QWORD *)&v87 = 0;
    qfree(ptr);
  }
  v38 = (char *)v84;
  if ( v84 )
  {
    v39 = v85;
    if ( (_QWORD)v85 )
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
        v38 = (char *)v84;
        v40 += 56;
      }
      while ( v39 != v41 );
    }
    *(_QWORD *)&v85 = 0;
    qfree(v38);
  }
  return v76;
}

