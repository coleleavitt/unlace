__int64 __fastcall sub_60A360(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6, int a7)
{
  void *v7; // r13
  int v10; // r14d
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  int v14; // r15d
  int v15; // eax
  __int64 lexer; // rax
  __int64 v17; // rdi
  const char *v18; // rax
  void (__noreturn *v19)(); // rax
  __int64 (__fastcall *v20)(const char *, _QWORD *, const char *, __int64, __int64); // r9
  unsigned __int64 v22; // rax
  void **v23; // rdx
  void *v24; // rsi
  __m128 v25; // xmm1
  void *v26; // rcx
  __m128i v27; // xmm0
  void *v28; // rdx
  __m128i v29; // xmm1
  __m128 v30; // xmm0
  __int64 v31; // rdx
  __m128 v32; // xmm0
  void *v33; // rdx
  __m128i v34; // xmm1
  const char *v35; // rax
  const char *v36; // rbx
  size_t v37; // rax
  size_t v38; // r14
  size_t v39; // r12
  void *v40; // rdi
  __int64 v41; // rax
  const char *v44; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v46; // [rsp+37h] [rbp-C9h]
  __int64 v47; // [rsp+38h] [rbp-C8h]
  unsigned int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  void *ptr; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+58h] [rbp-A8h]
  void *v51; // [rsp+70h] [rbp-90h] BYREF
  __m128i v52; // [rsp+78h] [rbp-88h] BYREF
  void *v53; // [rsp+88h] [rbp-78h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h]
  void *v55; // [rsp+A0h] [rbp-60h]
  __m128i v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-48h] BYREF
  int v58; // [rsp+C0h] [rbp-40h]
  char v59; // [rsp+C4h] [rbp-3Ch]
  unsigned __int64 v60; // [rsp+C8h] [rbp-38h]

  v7 = (void *)a5;
  v60 = __readfsqword(0x28u);
  v10 = a7;
  if ( (a7 & 0x8000) != 0 )
  {
    if ( a6 )
    {
      if ( *a6 )
      {
        v46 = sub_605890(a5, a2, (int)a6, 8);
        if ( v46 )
        {
          if ( !(unsigned int)sub_64F830((_DWORD)a1, (_DWORD)v7, (_DWORD)a6, 1, 0, 0, 0, 0, 0, 0) )
            return v46;
        }
      }
    }
  }
  v46 = sub_6F8BA0(a1);
  if ( !v46 )
  {
    if ( !v7 )
      v7 = (void *)a1[1];
    v51 = nullptr;
    v53 = nullptr;
    if ( (a7 & 0xC) == 0 )
      v10 = a7 | 0xC;
    v55 = nullptr;
    v57 = 0;
    v58 = v10;
    v59 = 0;
    v52 = 0;
    v11 = (v10 << 8) & 0x1F000;
    v12 = v11 | 0xC20;
    v54 = 0;
    v13 = v11 | 0x420;
    v56 = 0;
    if ( (v10 & 2) != 0 )
      v13 = v12;
    v14 = v13;
    v15 = v13 | 2;
    if ( (debug & 0x4000) != 0 )
      v14 = v15;
    if ( (v10 & 0x400) != 0 )
      v14 |= 0x20000u;
    if ( (v10 & 0x800) != 0 )
      v14 |= 0x40000u;
    if ( (v10 & 0x1000) != 0 )
      v14 |= 0x80000u;
    if ( (v10 & 0x4000) != 0 )
      v14 |= 0x200000u;
    if ( (v10 & 0x10000) != 0 )
      v14 |= 0x800000u;
    lexer = create_lexer(0, 0, 0, 0);
    v17 = *a1;
    v47 = lexer;
    ptr = nullptr;
    v50 = 0;
    sub_631490(v17, &ptr, 72);
    sub_60A2D0((__int64)a1, (__int64 *)&ptr);
    v18 = haystack;
    if ( (_QWORD)v50 )
      v18 = (const char *)ptr;
    v44 = v18;
    lex_term_file(v47, 1);
    if ( v44 && *v44 )
      sub_605B60(v47, (__int64)v44);
    v19 = sub_368890;
    v20 = sub_607C90;
    if ( (v10 & 1) != 0 )
      v19 = nullptr;
    if ( (v10 & 4) == 0 )
      v20 = nullptr;
    if ( (unsigned int)sub_5F6DE0(
                         a1,
                         v7,
                         v47,
                         (__int64)a6,
                         v14,
                         (__int64)v20,
                         (__int64)sub_607E90,
                         (__int64 (*)())v19,
                         (__int64)&v51,
                         0) )
    {
      if ( (v10 & 1) == 0 )
        sub_378D50();
      goto LABEL_34;
    }
    if ( !v59 )
    {
      if ( (_BYTE)v57 || (v10 & 0x2000) == 0 )
      {
        if ( (v10 & 1) == 0 )
          sub_378D50();
        goto LABEL_34;
      }
      goto LABEL_54;
    }
    if ( a3 )
    {
      v22 = v52.m128i_i64[0];
      v23 = &v51;
      if ( v52.m128i_i64[0] > 1uLL )
        goto LABEL_46;
      if ( (unsigned __int64)v54 > 1 )
      {
        if ( get_tinfo_property(v57, 5) )
        {
          v22 = v54;
          v23 = &v53;
        }
        else
        {
          v22 = v52.m128i_i64[0];
          v23 = &v51;
        }
LABEL_46:
        v24 = *v23;
        v25 = _mm_loadh_ps((const double *)v23 + 2);
        v26 = *(void **)a3;
        v27 = _mm_loadu_si128((const __m128i *)(a3 + 8));
        *(_QWORD *)a3 = *v23;
        *(__m128 *)(a3 + 8) = v25;
        *v23 = v26;
        *(__m128i *)(v23 + 1) = v27;
        if ( v22 > 1 && (v10 & 4) != 0 && (unsigned __int8)sub_6B3A20(a1, v24, &v48) )
        {
          v35 = (const char *)sub_64DFD0(a1, v7, v48, 0);
          v36 = v35;
          if ( v35 && (v37 = strlen(v35), (v38 = v37) != 0) )
          {
            v39 = v37 + 1;
            v40 = *(void **)a3;
            if ( *(_QWORD *)(a3 + 16) < v37 + 1 )
            {
              v41 = qvector_reserve(a3, *(_QWORD *)a3, v39, 1);
              *(_QWORD *)a3 = v41;
              v40 = (void *)v41;
            }
            *(_QWORD *)(a3 + 8) = v39;
            memmove(v40, v36, v38);
            *(_BYTE *)(*(_QWORD *)a3 + v38) = 0;
          }
          else
          {
            *(_QWORD *)(a3 + 8) = 0;
          }
        }
        goto LABEL_49;
      }
      v32 = _mm_loadh_ps((const double *)&v52.m128i_i64[1]);
      v33 = *(void **)a3;
      v34 = _mm_loadu_si128((const __m128i *)(a3 + 8));
      *(_QWORD *)a3 = v51;
      *(__m128 *)(a3 + 8) = v32;
      v51 = v33;
      v52 = v34;
    }
LABEL_49:
    if ( a4 && v56.m128i_i64[0] > 1uLL )
    {
      v28 = *(void **)a4;
      v29 = _mm_loadu_si128((const __m128i *)(a4 + 8));
      v30 = _mm_loadh_ps((const double *)&v56.m128i_i64[1]);
      *(_QWORD *)a4 = v55;
      v55 = v28;
      *(__m128 *)(a4 + 8) = v30;
      v56 = v29;
    }
    if ( a2 )
    {
      v31 = v57;
      v57 = *a2;
      *a2 = v31;
    }
LABEL_54:
    v46 = 1;
LABEL_34:
    if ( ptr )
    {
      *(_QWORD *)&v50 = 0;
      qfree(ptr);
    }
    clear_tinfo_t(&v57);
    if ( v55 )
    {
      v56.m128i_i64[0] = 0;
      qfree(v55);
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
    if ( v51 )
    {
      v52.m128i_i64[0] = 0;
      qfree(v51);
    }
    return v46;
  }
  return sub_6F8C60((_DWORD)a1, (_DWORD)a2, a3, a4, (_DWORD)v7, (_DWORD)a6, a7);
}
