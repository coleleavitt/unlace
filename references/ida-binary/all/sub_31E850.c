__int64 __fastcall sub_31E850(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rsi
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v22; // rax
  __m128 v23; // xmm0
  __int64 v24; // r14
  __int64 v25; // rbp
  size_t v26; // rax
  size_t v27; // rbp
  size_t v28; // rbx
  time_t v29; // rax
  size_t v30; // rdi
  __int64 v31; // rbx
  _QWORD *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rsi
  __int16 v35; // ax
  __int64 v36; // rsi
  __int64 v37; // rax
  const char *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __int64 v47; // rax
  size_t v48; // rax
  size_t v49; // r15
  size_t v50; // rbp
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __m128 v54; // xmm4
  __m128 v55; // xmm5
  double v56; // xmm0_8
  char *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __m128 v62; // xmm4
  __m128 v63; // xmm5
  size_t v64; // rax
  size_t v65; // rbx
  double v66; // xmm0_8
  const char *v67; // rsi
  size_t v68; // r12
  void *v69; // rdi
  __int64 v70; // rax
  char v71; // [rsp+0h] [rbp-1098h]
  unsigned int v73; // [rsp+8h] [rbp-1090h]
  char *s; // [rsp+28h] [rbp-1070h]
  void *v78; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v79; // [rsp+38h] [rbp-1060h]
  char src[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v81; // [rsp+1058h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_database_flag(8) )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v19 = *a4;
        if ( (unsigned __int64)a4[2] <= 0x4F )
        {
          v40 = qvector_reserve(a4, v19, 80, 1);
          *a4 = v40;
          v19 = v40;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DCFE0);
        a4[1] = 80;
        *(__m128i *)v19 = si128;
        *(__m128i *)(v19 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCFF0);
        *(__m128i *)(v19 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DD000);
        *(__m128i *)(v19 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DD010);
        *(__m128i *)(v19 + 63) = _mm_load_si128((const __m128i *)&xmmword_5DD020);
        *(_BYTE *)(*a4 + 79) = 0;
      }
    }
    else
    {
      sub_169630(
        (int)"ICON ERROR\n%s",
        (__int64)"Cannot take a snapshot of a temporary database.\nPlease save the database first.",
        v13,
        v14,
        v15,
        v16,
        a5,
        a6,
        a7,
        a8,
        v17,
        v18,
        a11,
        a12,
        v71);
    }
    return 0xFFFFFFFFLL;
  }
  v22 = qalloc_or_throw(4264);
  v23 = 0;
  *(_QWORD *)v22 = 0;
  v24 = v22;
  *(_QWORD *)(v22 + 8) = 0;
  *(_QWORD *)(v22 + 136) = 0;
  *(_QWORD *)(v22 + 4240) = 0;
  *(_OWORD *)(v22 + 4248) = 0;
  if ( a2 )
  {
    s = (char *)(v22 + 10);
    qstrncpy(v22 + 10, a2 + 10, 128);
    v25 = a1 + 180;
  }
  else if ( *(_BYTE *)(a1 + 4290) )
  {
    s = (char *)(v22 + 10);
    v25 = a1 + 180;
    qstrncpy(v22 + 10, a1 + 4290, 128);
  }
  else
  {
    v25 = a1 + 180;
    s = (char *)(v22 + 10);
    qstrncpy(v22 + 10, "Snapshot of ", 128);
    v37 = qbasename(a1 + 180);
    qstrncat(v24 + 10, v37, 128);
    set_file_ext(v24 + 10, 128, v24 + 10, &unk_5C2F25);
    *(_BYTE *)(v24 + strlen((const char *)(v24 + 10)) + 9) = 0;
  }
  qstrncpy(v24 + 138, v25, 4096);
  set_file_ext(v24 + 138, 4096, v24 + 138, &unk_5C2F25);
  v26 = strlen((const char *)(v24 + 138));
  *(_BYTE *)(v24 + 138 + v26 - 1) = 95;
  v27 = v26;
  v28 = v24 + 138 + v26;
  v29 = time(nullptr);
  v30 = v28;
  v31 = 0;
  qstrftime(v30, 4096 - v27, "%Y%m%d%H%M%S", v29);
  qstrncpy(src, v24 + 138, 4096);
  while ( 1 )
  {
    qstrncat(src, ".i64", 4096);
    if ( !(unsigned __int8)qfileexist(src) )
    {
      qstrncpy(v24 + 138, src, 4096);
      *(_QWORD *)v24 = qtime64();
      v32 = *(_QWORD **)(a1 + 8568);
      if ( !v32 )
        v32 = (_QWORD *)(a1 + 4280);
      v33 = v32[531];
      v34 = v32[530];
      if ( v32[532] < (unsigned __int64)(v33 + 1) )
      {
        v47 = qvector_reserve(v32 + 530, v34, v33 + 1, 8);
        v32[530] = v47;
        v34 = v47;
        v33 = v32[531];
      }
      *(_QWORD *)(v34 + 8 * v33) = v24;
      ++v32[531];
      v35 = *(_WORD *)(a1 + 4288);
      *(_WORD *)(v24 + 8) = v35;
      if ( a2 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
        {
          v36 = 1;
          *(_WORD *)(v24 + 8) = v35 | 1;
          goto LABEL_26;
        }
        *(_WORD *)(v24 + 8) = v35 & 0xFFFE;
      }
      else
      {
        v23 = 0;
        *(_WORD *)(v24 + 8) = v35 & 0xFFFE;
        v78 = nullptr;
        v79 = 0;
        v48 = strlen(s);
        v49 = v48 + 1;
        v50 = v48;
        v78 = (void *)qvector_reserve(&v78, 0, v48 + 1, 1);
        *(_QWORD *)&v79 = v49;
        memmove(v78, s, v50);
        v38 = (_BYTE *)(&dword_0 + 2);
        *((_BYTE *)v78 + v50) = 0;
        if ( !(unsigned __int8)sub_196F50(
                                 (int)&v78,
                                 2,
                                 (int)"Enter snapshot description",
                                 v51,
                                 v52,
                                 v53,
                                 (__m128)0LL,
                                 a6,
                                 a7,
                                 a8,
                                 v54,
                                 v55,
                                 a11,
                                 a12,
                                 v71) )
        {
          if ( v78 )
          {
            *(_QWORD *)&v79 = 0;
            qfree(v78, (_BYTE *)&dword_0 + 2);
          }
          if ( (unsigned __int8)qfileexist(v24 + 138) )
            qunlink(v24 + 138);
          LODWORD(result) = 0;
          goto LABEL_45;
        }
        v67 = &s1;
        if ( (_QWORD)v79 )
          v67 = (const char *)v78;
        qstrncpy(s, v67, 128);
        if ( v78 )
        {
          *(_QWORD *)&v79 = 0;
          *(double *)v23.m128_u64 = qfree(v78, v67);
        }
      }
      v36 = 0;
LABEL_26:
      sub_4799C0(&v78, v36);
      sub_1C76F0((int)"HIDECANCEL\nTaking snapshot, please wait...");
      v38 = nullptr;
      if ( (unsigned __int8)save_database(v24 + 138, 0, a1 + 4280, v24) )
      {
        sub_1C78D0();
        sub_4799E0(&v78);
        if ( !a2 )
          sub_169700(
            (int)"Database snapshot successfully created: %s\n",
            (__int64)s,
            v41,
            v42,
            v43,
            v44,
            v23,
            a6,
            a7,
            a8,
            v45,
            v46,
            a11,
            a12,
            v71);
        if ( a3 )
          *a3 = v24;
        return 1;
      }
      sub_1C78D0();
      sub_4799E0(&v78);
      if ( (unsigned __int8)qfileexist(v24 + 138) )
        qunlink(v24 + 138);
      result = 0xFFFFFFFFLL;
      if ( !v24 )
      {
LABEL_30:
        v39 = v32[531];
        if ( v39 )
          v32[531] = v39 - 1;
        return result;
      }
LABEL_45:
      v73 = result;
      v56 = sub_319CD0(v24);
      qfree(v24, v38, v56);
      result = v73;
      goto LABEL_30;
    }
    if ( ++v31 == 90000 )
      break;
    *(double *)v23.m128_u64 = qsnprintf(src, 4096, "%s_%04zu", (const char *)(v24 + 138), v31);
  }
  v57 = (_BYTE *)(elf_gnu_hash_bucket + 168);
  *(double *)v23.m128_u64 = qsnprintf(
                              src,
                              1024,
                              "Could not generate a unique snapshot file name.\n"
                              "Please cleanup some files of the form: %s*.i64",
                              (const char *)(v24 + 138));
  if ( a2 )
  {
    if ( a4 )
    {
      v64 = strlen(src);
      v65 = v64;
      if ( v64 )
      {
        v68 = v64 + 1;
        v69 = (void *)*a4;
        if ( a4[2] < v64 + 1 )
        {
          v70 = qvector_reserve(a4, *a4, v68, 1);
          *a4 = v70;
          v69 = (void *)v70;
        }
        v57 = src;
        a4[1] = v68;
        memmove(v69, src, v65);
        *(_BYTE *)(*a4 + v65) = 0;
      }
      else
      {
        a4[1] = 0;
      }
    }
  }
  else
  {
    v57 = src;
    sub_169630((int)"ICON ERROR\n%s", (__int64)src, v58, v59, v60, v61, v23, a6, a7, a8, v62, v63, a11, a12, v71);
  }
  if ( v24 )
  {
    v66 = sub_319CD0(v24);
    qfree(v24, v57, v66);
  }
  return 0xFFFFFFFFLL;
}
