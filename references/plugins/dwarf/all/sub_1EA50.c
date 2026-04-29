__int64 __fastcall sub_1EA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r14
  __int16 v8; // ax
  __int64 v9; // r15
  const __m128i *v10; // rdx
  __int64 i; // r13
  const __m128i *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // r9
  __int16 *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  char *v20; // rdi
  const char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rsi
  const __m128i *v26; // rdi
  __int64 v27; // rdx
  __int16 v28; // cx
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int16 v38; // r11
  __m128i si128; // xmm0
  __int64 v40; // r8
  __int64 v41; // rax
  __m128i v42; // xmm0
  char v43; // dl
  __int64 v44; // rax
  __m128i v45; // xmm0
  int v46; // r9d
  const char *v47; // rcx
  __int64 v48; // rax
  void *v49; // rdi
  __int64 v50; // rsi
  size_t v51; // [rsp+0h] [rbp-120h]
  size_t v52; // [rsp+0h] [rbp-120h]
  void *v53; // [rsp+0h] [rbp-120h]
  __int64 *v54; // [rsp+8h] [rbp-118h]
  __m128i n; // [rsp+10h] [rbp-110h] BYREF
  __int64 v56; // [rsp+20h] [rbp-100h]
  int v57; // [rsp+2Ch] [rbp-F4h] BYREF
  const char *v58; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v59; // [rsp+38h] [rbp-E8h] BYREF
  __int128 v60; // [rsp+40h] [rbp-E0h]
  char *s1; // [rsp+58h] [rbp-C8h] BYREF
  __int128 v62; // [rsp+60h] [rbp-C0h]
  __int64 v63; // [rsp+70h] [rbp-B0h]
  __int64 v64; // [rsp+78h] [rbp-A8h]
  __int64 v65; // [rsp+80h] [rbp-A0h]
  __m128i v66[3]; // [rsp+88h] [rbp-98h] BYREF
  char v67; // [rsp+C0h] [rbp-60h]
  __m128i v68; // [rsp+C8h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+E0h] [rbp-40h]

  v6 = (__int64 *)(a6 + 32);
  v69 = __readfsqword(0x28u);
  v54 = (__int64 *)(a6 + 2432);
  v59 = 0;
  s1 = nullptr;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v60 = 0;
  v62 = 0;
  v66[0] = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
      goto LABEL_49;
    v8 = v63;
    if ( (_WORD)v63 == 44 )
    {
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      v8 = v63;
    }
    if ( v8 == 125 )
      break;
    if ( *v6 )
    {
      v9 = v6[1];
      if ( v9 )
      {
        v10 = (const __m128i *)*v6;
        for ( i = 0; i != v9; ++i )
        {
          v12 = &v10[2 * i];
          v13 = v12->m128i_i64[1];
          if ( v13 )
          {
            v12[1].m128i_i64[0] = 0;
            qfree(v13);
            v10 = (const __m128i *)*v6;
          }
        }
      }
      else
      {
        v10 = (const __m128i *)*v6;
      }
      v6[1] = 0;
      qfree(v10);
      *v6 = 0;
      v8 = v63;
      v6[2] = 0;
    }
    if ( v8 != 123 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_49:
          if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
            goto LABEL_63;
          if ( (_WORD)v63 == 125 )
            goto LABEL_60;
          if ( (_WORD)v63 != 123 )
            break;
          lex_get_file_line(a1, &v57, &v58, 0);
          v21 = "Too many registers";
LABEL_48:
          sub_1E060((__int64)"Invalid configuration at line %d: %s %s\n", v57, v58, v21);
        }
        if ( (_WORD)v63 != 44 )
        {
          lex_get_file_line(a1, &v57, &v58, 0);
          v21 = "Expected a closing '}'";
          goto LABEL_48;
        }
      }
    }
    do
    {
      v14 = v6[1];
      if ( v6[2] < (unsigned __int64)(v14 + 1) )
      {
        v52 = v6[2];
        v22 = qvector_reserve(v6, 0, v14 + 1, 32);
        v23 = v6[1];
        v24 = v22;
        v25 = v6[2];
        v26 = (const __m128i *)*v6;
        v6[2] = v52;
        v27 = v23 - 1;
        if ( v27 >= 0 )
        {
          do
          {
            v28 = v26->m128i_i16[0];
            v22 += 32;
            v26 += 2;
            *(_WORD *)(v22 - 32) = v28;
            *(_WORD *)(v22 - 30) = v26[-2].m128i_i16[1];
            *(_DWORD *)(v22 - 28) = v26[-2].m128i_i32[1];
            v29 = v26[-2].m128i_i64[1];
            v30 = _mm_loadu_si128(v26 - 1);
            v26[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v22 - 24) = v29;
            *(__m128i *)(v22 - 16) = v30;
            v26[-1].m128i_i64[1] = 0;
          }
          while ( v27-- != 0 );
          v26 = (const __m128i *)*v6;
        }
        qfree(v26);
        v14 = v6[1];
        *v6 = v24;
        v6[2] = v25;
      }
      v15 = *v6 + 32 * v14;
      *(_QWORD *)v15 = 0xFFFFFFFF00000000LL;
      v16 = (__int16 *)v15;
      *(_QWORD *)(v15 + 8) = 0;
      *(_OWORD *)(v15 + 16) = 0;
      ++v6[1];
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 != 123 )
      {
LABEL_55:
        lex_get_file_line(a1, &v57, &v58, 0);
        v21 = "";
        goto LABEL_48;
      }
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 == 45 )
      {
        if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
          goto LABEL_49;
        if ( (_WORD)v63 != 3 )
          goto LABEL_55;
        v17 = -v64;
        v64 = -v64;
      }
      else
      {
        if ( (_WORD)v63 != 3 )
          goto LABEL_55;
        LOWORD(v17) = v64;
      }
      *v16 = v17;
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 != 44 )
        goto LABEL_55;
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 != 123 )
        goto LABEL_55;
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 == 45 )
      {
        if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
          goto LABEL_49;
        if ( (_WORD)v63 != 3 )
          goto LABEL_55;
        v18 = -v64;
        v64 = -v64;
      }
      else
      {
        if ( (_WORD)v63 != 3 )
          goto LABEL_55;
        LODWORD(v18) = v64;
      }
      *((_DWORD *)v16 + 1) = v18;
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 != 44 )
        goto LABEL_55;
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 != 4 )
      {
LABEL_80:
        sub_1E220(a1, nullptr);
        goto LABEL_49;
      }
      if ( v16 + 4 != (__int16 *)&s1 )
      {
        v19 = v62;
        if ( (_QWORD)v62 && (v51 = v62 - 1, (_QWORD)v62 != 1) )
        {
          n.m128i_i64[0] = (__int64)s1;
          if ( *((_QWORD *)v16 + 3) < (unsigned __int64)v62 )
          {
            v50 = *((_QWORD *)v16 + 1);
            n.m128i_i64[1] = v62;
            *((_QWORD *)v16 + 1) = qvector_reserve(v16 + 4, v50, v62, 1);
            v19 = n.m128i_i64[1];
          }
          v49 = *((void **)v16 + 1);
          *((_QWORD *)v16 + 2) = v19;
          n.m128i_i64[1] = v19;
          memmove(v49, (const void *)n.m128i_i64[0], v51);
          *(_BYTE *)(*((_QWORD *)v16 + 1) + n.m128i_i64[1] - 1) = 0;
        }
        else
        {
          *((_QWORD *)v16 + 2) = 0;
        }
      }
      while ( 1 )
      {
        if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
          goto LABEL_49;
        if ( (_WORD)v63 != 44 )
          break;
        if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
          goto LABEL_49;
        if ( (_WORD)v63 != 2 )
          goto LABEL_80;
        if ( (_QWORD)v62 )
        {
          v20 = s1;
          if ( !strcmp(s1, "STACK_POINTER") )
          {
            v16[1] |= 1u;
            if ( (_QWORD)v62 )
            {
              v20 = s1;
              goto LABEL_44;
            }
          }
          else
          {
LABEL_44:
            if ( !strcmp(v20, "STACK_FRAME") )
              v16[1] |= 2u;
          }
        }
      }
      v53 = nullptr;
      n.m128i_i64[0] = v62;
      if ( (_QWORD)v62 )
      {
        v53 = (void *)qalloc_or_throw(v62);
        memcpy(v53, s1, n.m128i_u64[0]);
      }
      v38 = v63;
      si128 = _mm_load_si128(v66);
      v40 = v64;
      v67 = v65;
      v41 = v60;
      v68 = si128;
      if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
      {
        v56 = v64;
        n.m128i_i32[2] = (unsigned __int16)v63;
        v48 = qvector_reserve(&v59, v59, v60 + 1, 64);
        v40 = v56;
        v38 = n.m128i_i16[4];
        v59 = v48;
        v41 = v60;
      }
      v42 = _mm_loadl_epi64(&n);
      v43 = v67;
      v44 = v59 + (v41 << 6);
      *(_QWORD *)v44 = v53;
      *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64(v42, v42);
      v45 = _mm_load_si128(&v68);
      *(_BYTE *)(v44 + 40) = v43;
      *(_WORD *)(v44 + 24) = v38;
      *(_QWORD *)(v44 + 32) = v40;
      *(__m128i *)(v44 + 48) = v45;
      *(_QWORD *)&v60 = v60 + 1;
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 != 125 )
        goto LABEL_80;
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
      if ( (_WORD)v63 != 125 )
        goto LABEL_80;
      if ( (debug & 0x400000) != 0 )
      {
        v47 = "<unknown>";
        if ( *((_QWORD *)v16 + 2) > 1u )
          v47 = *((const char **)v16 + 1);
        sub_88B80(
          (unsigned int)"Read one register mapping: for %d bits, map to: %d (%s). Flags=%d.\n",
          *v16,
          *((_DWORD *)v16 + 1),
          (_DWORD)v47,
          (unsigned __int16)v16[1],
          v46);
      }
      if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) )
        goto LABEL_49;
    }
    while ( (_WORD)v63 == 44 );
    if ( (_WORD)v63 == 125 )
    {
      v6 += 3;
      if ( v54 != v6 )
        continue;
    }
    goto LABEL_49;
  }
LABEL_60:
  if ( !(unsigned __int8)sub_1E8A0((__m128i *)&s1, a1, &v59) || (_WORD)v63 != 59 )
  {
    lex_get_file_line(a1, &v57, &v58, 0);
    sub_1E060((__int64)"Invalid configuration at line %d: %s %s\n", v57, v58, "Expected a closing ';'");
  }
LABEL_63:
  if ( s1 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(s1);
  }
  v32 = v59;
  if ( v59 )
  {
    v33 = v60;
    if ( (_QWORD)v60 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v32 + (v34 << 6));
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
          v32 = v59;
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v60 = 0;
    qfree(v32);
  }
  return 0;
}
