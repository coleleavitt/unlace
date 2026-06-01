unsigned __int64 __fastcall sub_5239B0(__int64 a1, __int64 a2)
{
  __int16 v3; // dx
  __int16 v4; // cx
  int v5; // esi
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
  const char *v20; // rsi
  const char **v21; // r15
  char *v22; // r14
  const char *v23; // rdi
  void *v24; // r14
  __int64 v25; // rdx
  char *v26; // rsi
  char *v27; // rax
  const char *v28; // rsi
  int named_type; // eax
  unsigned __int8 v30; // r14
  __int16 v31; // dx
  char v32; // dl
  __int16 v33; // ax
  char v34; // dl
  __int64 v35; // rax
  __int64 v36; // rbx
  void *v37; // rdi
  char *v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rbx
  char *v41; // rax
  void *v42; // rdi
  int v43; // eax
  unsigned __int8 *v44; // rax
  unsigned __int8 *v45; // rax
  void *v46; // rax
  char v47; // cl
  const char **v49; // [rsp+28h] [rbp-B8h]
  int alias_target; // [rsp+30h] [rbp-B0h] BYREF
  int v51; // [rsp+34h] [rbp-ACh] BYREF
  unsigned __int8 *v52; // [rsp+38h] [rbp-A8h] BYREF
  unsigned __int8 *v53; // [rsp+40h] [rbp-A0h] BYREF
  void *v54; // [rsp+48h] [rbp-98h] BYREF
  void *v55; // [rsp+50h] [rbp-90h] BYREF
  __int128 v56; // [rsp+58h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-70h] BYREF
  __int128 v58; // [rsp+78h] [rbp-68h]
  void *src; // [rsp+90h] [rbp-50h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-48h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 68) |= 0x100u;
  sub_528250(a1, 0);
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
        v6 = *(__int64 **)(a2 + 1480);
        src = nullptr;
        v55 = nullptr;
        v56 = 0;
        v58 = 0;
        *(_OWORD *)n = 0;
        if ( (unsigned __int8)sub_51E880(v6, v5, (__int64 *)&v55, (__int64 *)&ptr, (__int64 *)&src) )
        {
          v44 = nullptr;
          if ( (unsigned __int64)v56 > 1 )
            v44 = (unsigned __int8 *)v55;
          v52 = v44;
          v45 = nullptr;
          if ( (unsigned __int64)v58 > 1 )
            v45 = (unsigned __int8 *)ptr;
          v53 = v45;
          v46 = nullptr;
          if ( n[0] > 1 )
            v46 = src;
          v54 = v46;
          v47 = sub_522B20(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 1480) + 8LL), &v52, (__int64)&v53, (__int64)&v54);
          v7 = *(_WORD *)(a1 + 68);
          if ( v47 )
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
          *(_QWORD *)&v58 = 0;
          qfree(ptr);
        }
        if ( v55 )
        {
          *(_QWORD *)&v56 = 0;
          qfree(v55);
        }
      }
      return v61 - __readfsqword(0x28u);
    }
  }
  v10 = *(__int64 **)(a1 + 32);
  v11 = v3 & 8;
  ptr = nullptr;
  v58 = 0;
  alias_target = 0;
  v12 = v10[1];
  src = nullptr;
  v52 = nullptr;
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
    named_type = get_named_type(v14, v12, 1, (int)&v53, (int)&v54, (int)&v52, (__int64)&v55, 0, (__int64)&alias_target);
    goto LABEL_40;
  }
  alias_target = get_alias_target(*v10, *((unsigned int *)v10 + 2));
  if ( !(unsigned __int8)get_numbered_type(v13, alias_target, (int)&v53, (int)&v54, (int)&v52, (int)&v55, 0) )
  {
    if ( alias_target )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = alias_target;
      goto LABEL_61;
    }
    if ( !(_QWORD)v58 )
    {
LABEL_61:
      v33 = *(_WORD *)(a1 + 68);
      goto LABEL_62;
    }
    v16 = 0;
    goto LABEL_55;
  }
  v15 = *(_WORD *)(a1 + 68);
  v16 = 1;
  while ( 1 )
  {
    v17 = *v53;
    *(_WORD *)(a1 + 68) = v15 | 4;
    if ( v52 && *v52 == 6 )
    {
      ++v52;
      *(_WORD *)(a1 + 68) = v15 | 0x2004;
    }
    if ( !(unsigned __int8)sub_54DFE0(&src, &v53) )
    {
      v43 = alias_target;
      if ( alias_target )
        goto LABEL_81;
      if ( (_QWORD)v58 )
      {
LABEL_55:
        v20 = (const char *)n[0];
LABEL_56:
        v36 = *(_QWORD *)(a1 + 32);
        v37 = src;
        if ( (unsigned __int64)v20 < n[1] )
        {
          if ( src )
          {
            if ( v20 )
            {
              v37 = (void *)qrealloc(src);
              if ( !v37 )
                v37 = src;
            }
          }
        }
        src = nullptr;
        *(_OWORD *)n = 0;
        *(_QWORD *)(v36 + 16) = v37;
        v33 = *(_WORD *)(a1 + 68);
        if ( !v16 )
          goto LABEL_62;
        goto LABEL_58;
      }
      v33 = *(_WORD *)(a1 + 68);
LABEL_58:
      if ( !v53 )
      {
LABEL_62:
        v22 = (char *)src;
        goto LABEL_63;
      }
      *(_WORD *)(a1 + 68) = v33 & 0xFFBF;
      sub_522B20(a1, a2, v14, &v53, (__int64)&v54, (__int64)&v55);
      goto LABEL_60;
    }
    v18 = n[0];
    v19 = v58;
    v20 = (const char *)n[0];
    if ( n[0] > 1 )
      break;
    if ( (_QWORD)v58 )
    {
      v43 = alias_target;
      if ( !alias_target )
        goto LABEL_56;
LABEL_81:
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = v43;
      v33 = *(_WORD *)(a1 + 68);
      goto LABEL_58;
    }
    v31 = *(_WORD *)(a1 + 68);
    v30 = v17 & 0x30;
    HIBYTE(v31) |= 2u;
    *(_WORD *)(a1 + 68) = v31;
    if ( v30 != 48 )
    {
      *(_WORD *)(a1 + 68) = v31 | v30 | 0x40;
LABEL_60:
      sub_51C560(a1, v52);
      goto LABEL_61;
    }
    if ( *v53 == 0xFE )
      goto LABEL_49;
LABEL_46:
    if ( v18 )
      goto LABEL_47;
LABEL_33:
    v18 = 0;
    v24 = nullptr;
LABEL_34:
    v25 = v58;
    v26 = (char *)ptr;
    if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v58 + 1, 24);
      v25 = v58;
      v26 = (char *)ptr;
    }
    v27 = &v26[24 * v25];
    v28 = haystack;
    *(_QWORD *)v27 = v24;
    *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    *(_QWORD *)&v58 = v58 + 1;
    if ( n[0] )
      LODWORD(v28) = (_DWORD)src;
    v14 = **(_QWORD **)(a1 + 32);
    if ( !v14 )
      goto LABEL_61;
    named_type = get_named_type(v14, (int)v28, 1, (int)&v53, (int)&v54, 0, (__int64)&v55, 0, (__int64)&alias_target);
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
        if ( !(_QWORD)v58 )
        {
          v22 = (char *)src;
          v33 = *(_WORD *)(a1 + 68);
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
    v49 = (const char **)((char *)ptr + 24 * v19);
    if ( v49 != ptr )
      goto LABEL_24;
LABEL_47:
    v24 = (void *)qalloc_or_throw(v18, v20);
    memcpy(v24, src, v18);
    goto LABEL_34;
  }
  if ( *v53 != 0xFE )
    goto LABEL_47;
LABEL_49:
  v20 = (const char *)&v51;
  v32 = sub_51F860((const char **)&v53, &v51, (__int64 **)(a1 + 40));
  v33 = *(_WORD *)(a1 + 68);
  if ( !v32 )
    goto LABEL_62;
  HIBYTE(v33) |= 4u;
  v34 = v51;
  v21 = (const char **)ptr;
  *(_WORD *)(a1 + 68) = v33;
  v18 = n[0];
  v35 = 3 * v58;
  *(_BYTE *)(a1 + 71) = v34 & 0xF;
  v49 = &v21[v35];
  if ( v21 == v49 )
    goto LABEL_46;
LABEL_24:
  v22 = (char *)src;
  while ( 1 )
  {
    if ( v21[1] )
    {
      v20 = *v21;
      v23 = haystack;
      if ( !v18 )
        goto LABEL_26;
    }
    else
    {
      if ( !v18 )
      {
        if ( v21 == v49 )
          goto LABEL_33;
        goto LABEL_79;
      }
      v20 = haystack;
    }
    v23 = v22;
LABEL_26:
    if ( !strcmp(v23, v20) )
      break;
    v21 += 3;
    if ( v21 == v49 )
      goto LABEL_46;
  }
  if ( v21 == v49 )
    goto LABEL_46;
LABEL_79:
  v33 = *(_WORD *)(a1 + 68);
LABEL_63:
  *(_WORD *)(a1 + 68) = v33 | 1;
  if ( v22 )
  {
    n[0] = 0;
    qfree(v22);
  }
LABEL_65:
  v38 = (char *)ptr;
  if ( ptr )
  {
    v39 = v58;
    if ( (_QWORD)v58 )
    {
      v40 = 0;
      do
      {
        v41 = &v38[24 * v40];
        v42 = *(void **)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          qfree(v42);
          v38 = (char *)ptr;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v38);
  }
  return v61 - __readfsqword(0x28u);
}

