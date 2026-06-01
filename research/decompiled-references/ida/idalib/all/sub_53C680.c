unsigned __int64 __fastcall sub_53C680(__int64 a1, __int64 a2)
{
  __int16 v3; // dx
  __int16 v4; // cx
  __int64 v5; // rsi
  __int64 *v6; // rdi
  __int16 v7; // ax
  void *v8; // rdi
  __int64 *v10; // rax
  __int16 v11; // dx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r15
  __int16 v15; // dx
  int v16; // r12d
  char v17; // r14
  size_t v18; // rbx
  __int64 v19; // rax
  size_t v20; // rsi
  const char **v21; // r15
  char *v22; // r14
  const char *v23; // rsi
  const char *v24; // rdi
  void *v25; // r14
  __int64 v26; // rdx
  char *v27; // rsi
  char *v28; // rax
  const char *v29; // rsi
  int named_type; // eax
  unsigned __int8 v31; // r14
  __int16 v32; // dx
  char v33; // dl
  __int16 v34; // ax
  char v35; // dl
  __int64 v36; // rax
  __int64 v37; // rbx
  void *v38; // rdi
  char *v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rbx
  char *v42; // rax
  void *v43; // rdi
  int v44; // eax
  unsigned __int8 *v45; // rax
  unsigned __int8 *v46; // rax
  void *v47; // rax
  char v48; // cl
  const char **v50; // [rsp+28h] [rbp-B8h]
  int alias_target; // [rsp+30h] [rbp-B0h] BYREF
  int v52; // [rsp+34h] [rbp-ACh] BYREF
  unsigned __int8 *v53; // [rsp+38h] [rbp-A8h] BYREF
  unsigned __int8 *v54; // [rsp+40h] [rbp-A0h] BYREF
  void *v55; // [rsp+48h] [rbp-98h] BYREF
  void *v56; // [rsp+50h] [rbp-90h] BYREF
  __int128 v57; // [rsp+58h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-70h] BYREF
  __int128 v59; // [rsp+78h] [rbp-68h]
  void *src; // [rsp+90h] [rbp-50h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-48h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 68) |= 0x100u;
  sub_540F70(a1, 0);
  v3 = *(_WORD *)(a1 + 68);
  v4 = v3 & 0xFEFF;
  *(_WORD *)(a1 + 68) = v3 & 0xFEFF;
  if ( (v3 & 0x4000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 != -1 )
    {
      if ( v3 < 0 )
      {
        *(_BYTE *)(a1 + 70) = 13;
        *(_WORD *)(a1 + 68) = v3 & 0xFEFB | 4;
      }
      else
      {
        ptr = nullptr;
        v6 = *(__int64 **)(a2 + 1672);
        src = nullptr;
        v56 = nullptr;
        v57 = 0;
        v59 = 0;
        *(_OWORD *)n = 0;
        if ( (unsigned __int8)sub_5373A0(v6, v5, (__int64 *)&v56, (__int64 *)&ptr, (__int64 *)&src) )
        {
          v45 = nullptr;
          if ( (unsigned __int64)v57 > 1 )
            v45 = (unsigned __int8 *)v56;
          v53 = v45;
          v46 = nullptr;
          if ( (unsigned __int64)v59 > 1 )
            v46 = (unsigned __int8 *)ptr;
          v54 = v46;
          v47 = nullptr;
          if ( n[0] > 1 )
            v47 = src;
          v55 = v47;
          v48 = sub_53B7F0(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 8LL), &v53, (__int64)&v54, (__int64)&v55);
          v7 = *(_WORD *)(a1 + 68);
          if ( v48 )
            v7 = *(_WORD *)(a1 + 68) | 4;
        }
        else
        {
          v7 = *(_WORD *)(a1 + 68);
        }
        v8 = src;
        *(_WORD *)(a1 + 68) = v7 | 1;
        if ( v8 )
        {
          n[0] = 0;
          qfree(v8);
        }
        if ( ptr )
        {
          *(_QWORD *)&v59 = 0;
          qfree(ptr);
        }
        if ( v56 )
        {
          *(_QWORD *)&v57 = 0;
          qfree(v56);
        }
      }
      return v62 - __readfsqword(0x28u);
    }
  }
  v10 = *(__int64 **)(a1 + 32);
  v11 = v3 & 8;
  ptr = nullptr;
  v59 = 0;
  alias_target = 0;
  v12 = v10[1];
  src = nullptr;
  v53 = nullptr;
  *(_OWORD *)n = 0;
  v13 = *v10;
  v14 = *v10;
  if ( !*v10 )
  {
    *(_WORD *)(a1 + 68) = v4 | 1;
    goto LABEL_65;
  }
  if ( !v11 )
  {
    named_type = get_named_type(
                   v14,
                   v12,
                   1,
                   (unsigned int)&v54,
                   (unsigned int)&v55,
                   (unsigned int)&v53,
                   (__int64)&v56,
                   0,
                   (__int64)&alias_target);
    goto LABEL_40;
  }
  alias_target = get_alias_target(*v10, *((unsigned int *)v10 + 2));
  if ( !(unsigned __int8)get_numbered_type(
                           v13,
                           alias_target,
                           (unsigned int)&v54,
                           (unsigned int)&v55,
                           (unsigned int)&v53,
                           (unsigned int)&v56,
                           0) )
  {
    if ( alias_target )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = alias_target;
      goto LABEL_61;
    }
    if ( !(_QWORD)v59 )
    {
LABEL_61:
      v34 = *(_WORD *)(a1 + 68);
      goto LABEL_62;
    }
    v16 = 0;
    goto LABEL_55;
  }
  v15 = *(_WORD *)(a1 + 68);
  v16 = 1;
  while ( 1 )
  {
    v17 = *v54;
    *(_WORD *)(a1 + 68) = v15 | 4;
    if ( v53 && *v53 == 6 )
    {
      ++v53;
      *(_WORD *)(a1 + 68) = v15 | 0x2004;
    }
    if ( !(unsigned __int8)sub_567720(&src, &v54) )
    {
      v44 = alias_target;
      if ( alias_target )
        goto LABEL_81;
      if ( (_QWORD)v59 )
      {
LABEL_55:
        v20 = n[0];
LABEL_56:
        v37 = *(_QWORD *)(a1 + 32);
        v38 = src;
        if ( v20 < n[1] )
        {
          if ( src )
          {
            if ( v20 )
            {
              v38 = (void *)qrealloc(src);
              if ( !v38 )
                v38 = src;
            }
          }
        }
        src = nullptr;
        *(_OWORD *)n = 0;
        *(_QWORD *)(v37 + 16) = v38;
        v34 = *(_WORD *)(a1 + 68);
        if ( !v16 )
          goto LABEL_62;
        goto LABEL_58;
      }
      v34 = *(_WORD *)(a1 + 68);
LABEL_58:
      if ( !v54 )
      {
LABEL_62:
        v22 = (char *)src;
        goto LABEL_63;
      }
      *(_WORD *)(a1 + 68) = v34 & 0xFFBF;
      sub_53B7F0(a1, a2, v14, &v54, (__int64)&v55, (__int64)&v56);
      goto LABEL_60;
    }
    v18 = n[0];
    v19 = v59;
    v20 = n[0];
    if ( n[0] > 1 )
      break;
    if ( (_QWORD)v59 )
    {
      v44 = alias_target;
      if ( !alias_target )
        goto LABEL_56;
LABEL_81:
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = v44;
      v34 = *(_WORD *)(a1 + 68);
      goto LABEL_58;
    }
    v32 = *(_WORD *)(a1 + 68);
    v31 = v17 & 0x30;
    HIBYTE(v32) |= 2u;
    *(_WORD *)(a1 + 68) = v32;
    if ( v31 != 48 )
    {
      *(_WORD *)(a1 + 68) = v32 | v31 | 0x40;
LABEL_60:
      sub_535090(a1, v53);
      goto LABEL_61;
    }
    if ( *v54 == 0xFE )
      goto LABEL_49;
LABEL_46:
    if ( v18 )
      goto LABEL_47;
LABEL_33:
    v18 = 0;
    v25 = nullptr;
LABEL_34:
    v26 = v59;
    v27 = (char *)ptr;
    if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)(v59 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v59 + 1, 24);
      v26 = v59;
      v27 = (char *)ptr;
    }
    v28 = &v27[24 * v26];
    v29 = haystack;
    *(_QWORD *)v28 = v25;
    *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    *(_QWORD *)&v59 = v59 + 1;
    if ( n[0] )
      LODWORD(v29) = (_DWORD)src;
    v14 = **(_QWORD **)(a1 + 32);
    if ( !v14 )
      goto LABEL_61;
    named_type = get_named_type(
                   v14,
                   (_DWORD)v29,
                   1,
                   (unsigned int)&v54,
                   (unsigned int)&v55,
                   0,
                   (__int64)&v56,
                   0,
                   (__int64)&alias_target);
LABEL_40:
    v16 = named_type;
    if ( named_type == 2 )
    {
      v15 = *(_WORD *)(a1 + 68);
      LOBYTE(v15) = v15 | 0x80;
      *(_WORD *)(a1 + 68) = v15;
    }
    else
    {
      if ( !named_type )
      {
        alias_target = 0;
        if ( !(_QWORD)v59 )
        {
          v22 = (char *)src;
          v34 = *(_WORD *)(a1 + 68);
          goto LABEL_63;
        }
        goto LABEL_55;
      }
      v15 = *(_WORD *)(a1 + 68);
    }
  }
  *(_WORD *)(a1 + 68) |= 0x200u;
  if ( v19 )
  {
    v21 = (const char **)ptr;
    v50 = (const char **)((char *)ptr + 24 * v19);
    if ( v50 != ptr )
      goto LABEL_24;
LABEL_47:
    v25 = (void *)qalloc_or_throw(v18);
    memcpy(v25, src, v18);
    goto LABEL_34;
  }
  if ( *v54 != 0xFE )
    goto LABEL_47;
LABEL_49:
  v33 = sub_5383A0(&v54, &v52, (__int64 **)(a1 + 40));
  v34 = *(_WORD *)(a1 + 68);
  if ( !v33 )
    goto LABEL_62;
  HIBYTE(v34) |= 4u;
  v35 = v52;
  v21 = (const char **)ptr;
  *(_WORD *)(a1 + 68) = v34;
  v18 = n[0];
  v36 = 3 * v59;
  *(_BYTE *)(a1 + 71) = v35 & 0xF;
  v50 = &v21[v36];
  if ( v21 == v50 )
    goto LABEL_46;
LABEL_24:
  v22 = (char *)src;
  while ( 1 )
  {
    if ( v21[1] )
    {
      v23 = *v21;
      v24 = haystack;
      if ( !v18 )
        goto LABEL_26;
    }
    else
    {
      if ( !v18 )
      {
        if ( v21 == v50 )
          goto LABEL_33;
        goto LABEL_79;
      }
      v23 = haystack;
    }
    v24 = v22;
LABEL_26:
    if ( !strcmp(v24, v23) )
      break;
    v21 += 3;
    if ( v21 == v50 )
      goto LABEL_46;
  }
  if ( v21 == v50 )
    goto LABEL_46;
LABEL_79:
  v34 = *(_WORD *)(a1 + 68);
LABEL_63:
  *(_WORD *)(a1 + 68) = v34 | 1;
  if ( v22 )
  {
    n[0] = 0;
    qfree(v22);
  }
LABEL_65:
  v39 = (char *)ptr;
  if ( ptr )
  {
    v40 = v59;
    if ( (_QWORD)v59 )
    {
      v41 = 0;
      do
      {
        v42 = &v39[24 * v41];
        v43 = *(void **)v42;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          qfree(v43);
          v39 = (char *)ptr;
        }
        ++v41;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v39);
  }
  return v62 - __readfsqword(0x28u);
}
