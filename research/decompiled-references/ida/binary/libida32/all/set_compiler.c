__int64 __fastcall set_compiler(const __m128i *a1, __int64 a2, const char *a3)
{
  char v4; // bl
  __int64 v6; // r12
  int v7; // ebp
  __int8 v8; // dl
  char v9; // cl
  char v10; // al
  __int64 v11; // rdi
  int v12; // r15d
  __int64 v13; // rdx
  char *v15; // rdi
  unsigned int v16; // eax
  char merge_state; // al
  int v18; // ebx
  char v19; // al
  char v20; // r15
  int v21; // eax
  size_t v22; // rax
  size_t v23; // r8
  char v24; // al
  char *v25; // rdi
  size_t v26; // rdx
  bool v27; // [rsp+Fh] [rbp-79h]
  size_t v28; // [rsp+10h] [rbp-78h]
  size_t v29; // [rsp+10h] [rbp-78h]
  size_t v30; // [rsp+18h] [rbp-70h]
  __m128i v31; // [rsp+20h] [rbp-68h] BYREF
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v34 = __readfsqword(0x28u);
  v6 = qword_2CA1698;
  if ( (getinf(67) & 0x40) != 0 && (a2 & 8) == 0 )
    return 0;
  v31 = _mm_loadu_si128((const __m128i *)(v6 + 732));
  v7 = v31.m128i_i8[1] & 0xF0;
  if ( (v31.m128i_i8[1] & 0xF0) == 0xC0 )
    v7 = v31.m128i_i32[3];
  if ( (a2 & 4) == 0 )
  {
    v8 = a1->m128i_i8[0];
    v9 = a1->m128i_i8[0] & 0xF;
    v10 = *(_BYTE *)(v6 + 732) & 0xF;
    if ( v10 )
    {
      if ( !v9 )
        return 0;
      if ( *(_BYTE *)(v6 + 734) )
      {
        if ( (a2 & 1) != 0 )
        {
          v27 = v9 != v10;
          if ( (a2 & 2) != 0 )
          {
LABEL_11:
            *(_BYTE *)(v6 + 732) = v8;
            v11 = *(_QWORD *)(v6 + 1480);
            a2 = 0;
            v12 = v7;
            sub_5ED560((_QWORD *)v11, 0);
LABEL_12:
            if ( (unsigned __int8)must_journal(v11, a2, v13) )
              sub_613F20(&v31, v6 + 732);
            goto LABEL_18;
          }
          v11 = 58;
          getinf(58);
          *(__m128i *)(v6 + 732) = _mm_loadu_si128(a1);
          if ( !*(_BYTE *)(v6 + 741) )
          {
            v11 = a1->m128i_u8[0];
            *(_BYTE *)(v6 + 741) = calc_default_sizeof_ldbl(v11);
          }
LABEL_42:
          v12 = a1->m128i_i8[1] & 0xF0;
          if ( (a1->m128i_i8[1] & 0xF0) == 0xC0 )
            v12 = a1->m128i_i32[3];
          goto LABEL_12;
        }
        return 0;
      }
      v27 = v9 != v10;
      if ( (a2 & 2) != 0 )
        goto LABEL_11;
    }
    else
    {
      v27 = v9 != 0;
      if ( (a2 & 2) != 0 )
      {
        if ( v8 )
          goto LABEL_11;
        return 0;
      }
    }
    v11 = 58;
    v19 = getinf(58);
    v13 = a2 & 1;
    v20 = v19;
    *(__m128i *)(v6 + 732) = _mm_loadu_si128(a1);
    if ( !*(_BYTE *)(v6 + 741) )
    {
      v11 = a1->m128i_u8[0];
      v24 = calc_default_sizeof_ldbl(v11);
      v13 = a2 & 1;
      *(_BYTE *)(v6 + 741) = v24;
    }
    if ( !(_DWORD)v13 )
    {
      v13 = *(_BYTE *)(v6 + 733) & 0xF3;
      *(_BYTE *)(v6 + 733) = *(_BYTE *)(v6 + 733) & 0xF3 | v20 & 0xC;
    }
    goto LABEL_42;
  }
  v27 = 0;
  v12 = v7;
LABEL_18:
  s1 = nullptr;
  v33 = 0;
  get_abi_name(&s1);
  if ( a3 )
  {
    v15 = (char *)haystack;
    if ( (_QWORD)v33 )
      v15 = s1;
    if ( strcmp(v15, a3) )
    {
      sub_6160D0(v6, 81, a3, 0);
      sub_638CE0(v6, a3);
      v22 = strlen(a3);
      v23 = v22;
      if ( v22 )
      {
        v25 = s1;
        v26 = v22 + 1;
        if ( *((_QWORD *)&v33 + 1) < v22 + 1 )
        {
          v30 = v22;
          v29 = v22 + 1;
          s1 = (char *)qvector_reserve(&s1, s1, v26, 1);
          v23 = v30;
          v25 = s1;
          v26 = v29;
        }
        *(_QWORD *)&v33 = v26;
        v28 = v23;
        memmove(v25, a3, v23);
        s1[v28] = 0;
      }
      else
      {
        *(_QWORD *)&v33 = 0;
      }
    }
  }
  v16 = v12;
  if ( (v12 & 0xFFFFFFEF) == 0 )
    v16 = sub_5ED3B0(*(_QWORD **)(v6 + 1480), v7);
  setinf(99, v16);
  sub_633BB0(v6, 5, 0, 0, 0);
  setinf(67, 0);
  merge_state = get_merge_state(67, 0);
  sub_396090(0xBu, (merge_state & 2) == 0);
  if ( v27 )
    sub_5E3EC0(v6, 1);
  if ( (v4 & 8) != 0 )
  {
    v21 = getinf(67);
    setinf(67, v21 | 0x40u);
  }
  if ( (v12 == 176 || v12 == 256) && v7 != 176 && v7 != 256 )
  {
    v18 = add_encoding((int)"UTF-8");
    if ( v18 != (unsigned int)get_default_encoding_idx(1) )
      sub_365330();
  }
  if ( s1 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(s1);
  }
  return 1;
}

