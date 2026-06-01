__int64 __fastcall sub_F4A40(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // r12
  __int64 fchunk; // r14
  __int64 hidden_range; // r15
  int flags; // eax
  int v11; // r8d
  bool v12; // bp
  char *v13; // rax
  const char **v14; // rdi
  size_t v15; // rbp
  int v16; // edx
  char v17; // al
  int v18; // r10d
  size_t v19; // rsi
  unsigned int v20; // r10d
  char v21; // r9
  __m128i *v22; // rax
  char *v23; // rax
  size_t v24; // rdx
  int v25; // edx
  unsigned int v26; // ebx
  const char *v27; // rsi
  const char *v28; // rdi
  __int64 ea_name; // rax
  const char *v30; // rdx
  const char *v31; // rsi
  const char *v32; // rdi
  int v33; // eax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  const char *v37; // rdi
  char *v38; // rax
  int v39; // r8d
  char v40; // r9
  unsigned int v41; // r8d
  __m128i *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char v45; // al
  int v46; // eax
  unsigned int v47; // [rsp+0h] [rbp-88h]
  const char *v48; // [rsp+0h] [rbp-88h]
  const char *v49; // [rsp+0h] [rbp-88h]
  int v50; // [rsp+0h] [rbp-88h]
  int v51; // [rsp+0h] [rbp-88h]
  char v52; // [rsp+0h] [rbp-88h]
  int v53; // [rsp+8h] [rbp-80h]
  unsigned int v54; // [rsp+8h] [rbp-80h]
  unsigned int v55; // [rsp+8h] [rbp-80h]
  bool v56; // [rsp+Fh] [rbp-79h]
  void *base; // [rsp+10h] [rbp-78h] BYREF
  __int128 v58; // [rsp+18h] [rbp-70h]
  const char *s2; // [rsp+30h] [rbp-58h] BYREF
  char *s2_8[2]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  get_eah();
  if ( a3 == -1 )
    return 0;
  v7 = getseg();
  fchunk = get_fchunk();
  hidden_range = get_hidden_range();
  if ( (a4 & 2) != 0 && v7 && (*(_BYTE *)(v7 + 24) & 4) != 0 )
  {
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = 1;
    return 2;
  }
  if ( (a4 & 4) != 0 )
  {
    base = nullptr;
    s2 = nullptr;
    v58 = 0;
    *(_OWORD *)s2_8 = 0;
    sub_163430(a1, &base);
    if ( !v7 )
      goto LABEL_38;
    get_segm_name();
    if ( s2_8[0] )
    {
      v27 = s2;
      v28 = s1;
      if ( !(_QWORD)v58 )
        goto LABEL_37;
    }
    else
    {
      v27 = s1;
      if ( !(_QWORD)v58 )
        goto LABEL_65;
    }
    v28 = (const char *)base;
LABEL_37:
    if ( strcmp(v28, v27) )
    {
LABEL_38:
      if ( fchunk )
      {
        ea_name = get_ea_name();
        v30 = s2;
        if ( ea_name > 0 )
        {
          if ( s2_8[0] )
          {
            v31 = s2;
            v32 = s1;
            if ( !(_QWORD)v58 )
              goto LABEL_43;
          }
          else
          {
            v31 = s1;
            if ( !(_QWORD)v58 )
              goto LABEL_44;
          }
          v32 = (const char *)base;
LABEL_43:
          v48 = s2;
          v33 = strcmp(v32, v31);
          v30 = v48;
          if ( !v33 )
          {
LABEL_44:
            *(_QWORD *)a2 = fchunk;
            *(_DWORD *)(a2 + 8) = 2;
            v26 = ((*(_BYTE *)(fchunk + 8) & 0x40) != 0) + 1;
            goto LABEL_66;
          }
        }
      }
      else
      {
        v30 = s2;
      }
      if ( !hidden_range
        || (unsigned __int64)v58 <= 1
        || (v37 = *(const char **)(hidden_range + 8)) == nullptr
        || (v49 = v30, v38 = strstr(v37, (const char *)base), v30 = v49, !v38) )
      {
        if ( v30 )
        {
          s2_8[0] = nullptr;
          qfree();
        }
        if ( base )
        {
          *(_QWORD *)&v58 = 0;
          qfree();
        }
        goto LABEL_6;
      }
      *(_QWORD *)a2 = hidden_range;
      *(_DWORD *)(a2 + 8) = 3;
      v26 = 2 - *(unsigned __int8 *)(hidden_range + 32);
LABEL_66:
      if ( v30 )
      {
        s2_8[0] = nullptr;
        qfree();
      }
      if ( base )
        goto LABEL_33;
      return v26;
    }
LABEL_65:
    *(_QWORD *)a2 = v7;
    v30 = s2;
    *(_DWORD *)(a2 + 8) = 1;
    v26 = ((*(_BYTE *)(v7 + 24) & 4) != 0) + 1;
    goto LABEL_66;
  }
LABEL_6:
  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400
    && (flags & 0xF0000000) == 0x60000000
    && ((unsigned __int8)getinf_flag() || (*(_BYTE *)(get_ash() + 328) & 0x10) != 0) )
  {
    *(_DWORD *)a2 = a3;
    v26 = 1;
    *(_DWORD *)(a2 + 8) = 4;
    if ( (get_aflags() & 0x80000) == 0 )
      return v26;
    return 2;
  }
  base = nullptr;
  v11 = a4 & 1;
  v58 = 0;
  if ( !v7 )
  {
    if ( !fchunk )
    {
      if ( !hidden_range )
        return 0;
      if ( (a4 & 1) != 0 )
      {
        if ( *(_DWORD *)hidden_range == a3 )
        {
          v14 = nullptr;
          v15 = 0;
          goto LABEL_57;
        }
        return 0;
      }
      v14 = nullptr;
      v15 = 0;
      goto LABEL_80;
    }
    v14 = nullptr;
    v15 = 0;
    if ( !v11 )
    {
LABEL_11:
      v16 = *(_DWORD *)fchunk;
      goto LABEL_12;
    }
    if ( a3 != *(_DWORD *)fchunk )
    {
      if ( !hidden_range )
        return 0;
LABEL_20:
      if ( *(_DWORD *)hidden_range != a3 )
        goto LABEL_21;
      goto LABEL_57;
    }
LABEL_113:
    v16 = a3;
LABEL_12:
    v17 = *(_BYTE *)(fchunk + 8);
    v18 = *(_DWORD *)(fchunk + 4);
    s2 = (const char *)fchunk;
    v19 = v15 + 1;
    v20 = v18 - v16;
    HIDWORD(s2_8[1]) = 2;
    s2_8[0] = (char *)(v20 | 0x100000000LL);
    LOBYTE(s2_8[1]) = (v17 & 0x40) == 0;
    v21 = (char)s2_8[1];
    if ( &s2 >= v14 && &s2 < &v14[3 * *((_QWORD *)&v58 + 1)] )
    {
      if ( *((_QWORD *)&v58 + 1) < v19 )
      {
        v56 = (v17 & 0x40) == 0;
        v54 = v20;
        v51 = v11;
        base = (void *)qvector_reserve();
        v15 = v58;
        v14 = (const char **)base;
        v21 = v56;
        v20 = v54;
        v11 = v51;
      }
      v44 = (char *)&v14[3 * v15];
      *(_QWORD *)v44 = fchunk;
      *((_DWORD *)v44 + 2) = v20;
      *((_DWORD *)v44 + 3) = 1;
      v44[16] = v21;
      *((_DWORD *)v44 + 5) = 2;
    }
    else
    {
      if ( *((_QWORD *)&v58 + 1) < v19 )
      {
        v50 = v11;
        base = (void *)qvector_reserve();
        v15 = v58;
        v14 = (const char **)base;
        v11 = v50;
      }
      v22 = (__m128i *)&v14[3 * v15];
      *v22 = _mm_load_si128((const __m128i *)&s2);
      v22[1].m128i_i64[0] = (__int64)s2_8[1];
    }
    v14 = (const char **)base;
    v15 = v58 + 1;
    *(_QWORD *)&v58 = v58 + 1;
LABEL_18:
    if ( !hidden_range )
      goto LABEL_21;
    if ( v11 )
      goto LABEL_20;
LABEL_80:
    a3 = *(_DWORD *)hidden_range;
    v35 = *((_QWORD *)&v58 + 1);
    v36 = v15 + 1;
    goto LABEL_81;
  }
  if ( (a4 & 1) != 0 && *(_DWORD *)v7 != a3 )
  {
    if ( !fchunk )
    {
      if ( hidden_range && a3 == *(_DWORD *)hidden_range )
      {
        v45 = *(_BYTE *)(hidden_range + 32);
        v14 = nullptr;
        s2 = (const char *)hidden_range;
        v15 = 0;
        HIDWORD(s2_8[0]) = 2;
        v36 = 1;
        LOBYTE(s2_8[1]) = v45;
        v46 = *(_DWORD *)(hidden_range + 4);
        HIDWORD(s2_8[1]) = 3;
        LODWORD(s2_8[0]) = v46 - a3;
        v35 = 0;
        goto LABEL_82;
      }
      return 0;
    }
    if ( a3 != *(_DWORD *)fchunk )
    {
      if ( hidden_range && a3 == *(_DWORD *)hidden_range )
      {
        v15 = 0;
        v14 = nullptr;
LABEL_57:
        v35 = *((_QWORD *)&v58 + 1);
        v36 = v15 + 1;
LABEL_81:
        v39 = *(_DWORD *)(hidden_range + 4);
        v40 = *(_BYTE *)(hidden_range + 32);
        s2 = (const char *)hidden_range;
        v41 = v39 - a3;
        LOBYTE(s2_8[1]) = v40;
        HIDWORD(s2_8[1]) = 3;
        s2_8[0] = (char *)(v41 | 0x200000000LL);
        if ( &s2 >= v14 && &s2 < &v14[3 * v35] )
        {
          if ( v35 < v36 )
          {
            v55 = v41;
            v52 = v40;
            base = (void *)qvector_reserve();
            v15 = v58;
            v14 = (const char **)base;
            v41 = v55;
            v40 = v52;
          }
          v43 = (char *)&v14[3 * v15];
          *(_QWORD *)v43 = hidden_range;
          *((_DWORD *)v43 + 2) = v41;
          *((_DWORD *)v43 + 3) = 2;
          v43[16] = v40;
          *((_DWORD *)v43 + 5) = 3;
LABEL_85:
          v14 = (const char **)base;
          v15 = v58 + 1;
          *(_QWORD *)&v58 = v58 + 1;
          goto LABEL_21;
        }
LABEL_82:
        if ( v35 < v36 )
        {
          base = (void *)qvector_reserve();
          v15 = v58;
          v14 = (const char **)base;
        }
        v42 = (__m128i *)&v14[3 * v15];
        *v42 = _mm_load_si128((const __m128i *)&s2);
        v42[1].m128i_i64[0] = (__int64)s2_8[1];
        goto LABEL_85;
      }
      return 0;
    }
    v16 = a3;
    v15 = 0;
    v14 = nullptr;
    goto LABEL_12;
  }
  v53 = a4 & 1;
  v47 = *(_DWORD *)(v7 + 4) - *(_DWORD *)v7;
  v12 = (*(_BYTE *)(v7 + 24) & 4) == 0;
  base = (void *)qvector_reserve();
  v11 = v53;
  v13 = (char *)base + 24 * v58;
  v13[16] = v12;
  *(_QWORD *)v13 = v7;
  *((_QWORD *)v13 + 1) = v47;
  *((_DWORD *)v13 + 5) = 1;
  v14 = (const char **)base;
  v15 = v58 + 1;
  *(_QWORD *)&v58 = v58 + 1;
  if ( !fchunk )
    goto LABEL_18;
  if ( !v53 )
    goto LABEL_11;
  if ( *(_DWORD *)fchunk == a3 )
    goto LABEL_113;
  if ( hidden_range )
    goto LABEL_20;
LABEL_21:
  if ( !v15 )
    goto LABEL_114;
  v23 = (char *)v14;
  if ( v15 != 1 )
  {
    qsort(v14, v15, 0x18u, (__compar_fn_t)compar);
    v24 = v15 - 1;
    v14 = (const char **)base;
    if ( (__int64)(v15 - 1) > 0 )
    {
      v23 = (char *)base + 24 * v15 - 24;
      while ( v23[16] )
      {
        v23 -= 24;
        if ( !--v24 )
        {
          v23 = (char *)base;
          goto LABEL_27;
        }
      }
      goto LABEL_27;
    }
LABEL_114:
    v26 = 0;
    goto LABEL_32;
  }
LABEL_27:
  v25 = *((_DWORD *)v23 + 5);
  *(_DWORD *)(a2 + 8) = v25;
  switch ( v25 )
  {
    case 2:
      *(_QWORD *)a2 = fchunk;
      break;
    case 3:
      *(_QWORD *)a2 = hidden_range;
      break;
    case 1:
      *(_QWORD *)a2 = v7;
      break;
  }
  v26 = 2 - (unsigned __int8)v23[16];
LABEL_32:
  if ( v14 )
  {
LABEL_33:
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  return v26;
}

