__int64 __fastcall sub_40F040(_QWORD *a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v6; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  char *v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  const char *v22; // r8
  __int64 v23; // r8
  const char *v24; // r9
  size_t v25; // rdx
  __m128i si128; // xmm0
  char *v27; // rax
  char *v28; // rcx
  size_t v29; // rdx
  int v30; // eax
  char *v31; // rax
  size_t n; // [rsp+0h] [rbp-B8h]
  __int64 v33; // [rsp+8h] [rbp-B0h]
  __int64 v34; // [rsp+10h] [rbp-A8h]
  const char *src; // [rsp+18h] [rbp-A0h]
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  __int128 v37; // [rsp+28h] [rbp-90h]
  void *v38; // [rsp+38h] [rbp-80h]
  char *v39; // [rsp+40h] [rbp-78h] BYREF
  __int128 v40; // [rsp+48h] [rbp-70h]
  void *v41; // [rsp+58h] [rbp-60h]
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int128 v43; // [rsp+68h] [rbp-50h]
  int v44[2]; // [rsp+78h] [rbp-40h]
  int v45; // [rsp+80h] [rbp-38h]
  int v46; // [rsp+88h] [rbp-30h]
  __int64 v47; // [rsp+90h] [rbp-28h]

  v6 = *a1;
  *(_QWORD *)v44 = __readfsqword(0x28u);
  v8 = sub_631C90(v6, 10, &stru_20000);
  if ( !(_BYTE)v8 )
    return 0;
  v11 = v8;
  if ( (a3 & 0xF00000) == 0x500000 || (a3 & 0x600) != 0x400 )
    return 0;
  v13 = a3 & 0xF0000000;
  if ( !v13 )
  {
    v14 = get_item_end(a2, 10, v9, v10) - a2;
    if ( v14 != 1 )
      return 0;
    if ( (get_aflags(a2) & 0x800) != 0 )
      return 0;
    v15 = sub_505D70(a1 + 203, a2);
    if ( !v15 )
      return 0;
    goto LABEL_20;
  }
  if ( v13 == 0x10000000 )
  {
    v14 = get_item_end(a2, 10, v9, v10) - a2;
    if ( v14 != 2 )
      return 0;
  }
  else
  {
    if ( v13 != 0x20000000 || get_item_end(a2, 10, v9, v10) - a2 != 4 )
      return 0;
    v14 = 3;
  }
  if ( (get_aflags(a2) & 0x800) != 0 )
    return 0;
  if ( !a2 )
    return 0;
  v15 = sub_505D70(a1 + 203, a2);
  if ( !v15 )
    return 0;
  if ( v14 != 2 )
  {
    v14 = 3;
    goto LABEL_20;
  }
  if ( (unsigned int)sub_631AD0(*a1, 5) != 11 )
    goto LABEL_20;
  v37 = 0;
  s1 = nullptr;
  if ( sub_510BD0(a1, &s1, v15, 0) > 2 )
  {
    if ( (_QWORD)v37 )
    {
      LODWORD(n) = (_DWORD)s1;
      v19 = s1;
      if ( !strcmp(s1, ".idata") )
      {
LABEL_27:
        if ( v19 )
        {
          *(_QWORD *)&v37 = 0;
          qfree(v19);
        }
        return 0;
      }
    }
  }
  if ( a4 < a2 )
  {
    v20 = sub_3BE900(a1, a2 + 2, 4);
    if ( (v20 & 0x600) == 0x400 && (v20 & 0xF0000000) == 0x50000000 )
    {
      v21 = *a1;
      if ( a4 >= *(_QWORD *)(*a1 + 1904LL) && a4 < *(_QWORD *)(v21 + 1912) )
        goto LABEL_37;
      *(_QWORD *)(v21 + 1912) = 0;
      v33 = sub_3C19F0(
              (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))a1,
              a4 + 1,
              *(_QWORD *)v15,
              (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3996A0,
              nullptr);
      v39 = nullptr;
      v40 = 0;
      if ( v33 == -1 )
        goto LABEL_42;
      if ( sub_63D550(a1, &v39, v33, 1001) <= 2 )
      {
LABEL_40:
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
LABEL_42:
        if ( a4 >= *(_QWORD *)(*a1 + 1904LL) && a4 < *(_QWORD *)(*a1 + 1912LL) )
        {
LABEL_37:
          v19 = s1;
          goto LABEL_27;
        }
        goto LABEL_31;
      }
      v22 = *(const char **)(a1[4] + 48LL);
      v43 = 0;
      s2 = nullptr;
      if ( !v22
        || (src = v22,
            n = strlen(v22),
            LODWORD(v34) = n + 1,
            s2 = (char *)qvector_reserve(&s2, 0, n + 1, 1),
            *(_QWORD *)&v43 = n + 1,
            memmove(s2, src, n),
            s2[n] = 0,
            v23 = v43 - 1,
            !(_QWORD)v43) )
      {
        v23 = 0;
      }
      v24 = (const char *)(v23 + 18);
      v25 = v23 + 19;
      if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v23 + 19) )
      {
        src = (const char *)(v23 + 18);
        v34 = v23;
        n = v23 + 19;
        v31 = (char *)qvector_reserve(&s2, s2, v25, 1);
        v24 = src;
        v23 = v34;
        s2 = v31;
        v25 = n;
      }
      *(_QWORD *)&v43 = v25;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7930);
      v24[(_QWORD)s2] = 0;
      v27 = &s2[v23];
      *((_WORD *)v27 + 8) = 8306;
      *(__m128i *)v27 = si128;
      v28 = s2;
      if ( (_QWORD)v43 && (v29 = v43 - 1, (_QWORD)v43 != 1) && s2 )
      {
        if ( (_QWORD)v40 )
        {
          if ( (__int64)v40 - 1 >= v29 )
          {
            n = (size_t)s2;
            v30 = strncmp(v39, s2, v29);
            v28 = (char *)n;
            if ( !v30 )
            {
              *(_QWORD *)(*a1 + 1904LL) = v33;
              *(_QWORD *)(*a1 + 1912LL) = a2;
            }
          }
        }
      }
      else
      {
        *(_QWORD *)(*a1 + 1904LL) = v33;
        *(_QWORD *)(*a1 + 1912LL) = a2;
        if ( !v28 )
          goto LABEL_40;
      }
      *(_QWORD *)&v43 = 0;
      qfree(v28);
      goto LABEL_40;
    }
  }
LABEL_31:
  if ( s1 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(s1);
  }
LABEL_20:
  LODWORD(s2) = 0;
  v16 = sub_40DAB0(*a1, a2, *(_BYTE *)(v15 + 43) == 0, *(_BYTE *)(v15 + 184), (unsigned int *)&s2);
  if ( v16 >= v14 + 1 )
  {
    create_strlit(
      a2,
      v16,
      (int)s2,
      v17,
      v18,
      v14 + 1,
      n,
      v33,
      v34,
      (int)src,
      (int)s1,
      v37,
      SDWORD2(v37),
      v38,
      (__int64)v39,
      v40,
      SDWORD2(v40),
      v41,
      (__int64)s2,
      v43,
      SDWORD2(v43),
      v44[0],
      v45,
      v46,
      v47);
    remember_problem(13, a2, 0);
    return v11;
  }
  return 0;
}
