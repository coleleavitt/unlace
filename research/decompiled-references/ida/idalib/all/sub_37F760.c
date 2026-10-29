__int64 __fastcall sub_37F760(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 named_type_tid; // rbx
  void *v4; // rdi
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  char v13; // bp
  int v14; // ebp
  __int64 v15; // r14
  __int64 v16; // r14
  char *v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  const char *v22; // rdx
  __int64 v23; // rdx
  char *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r14
  const char *v30; // r12
  const char *v31; // rbx
  int v32; // edx
  __int64 v34; // [rsp+10h] [rbp-F0h]
  void *ptr; // [rsp+18h] [rbp-E8h] BYREF
  __int128 v36; // [rsp+20h] [rbp-E0h]
  void *v37; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+40h] [rbp-C0h]
  void *v39; // [rsp+50h] [rbp-B0h]
  __int128 v40; // [rsp+58h] [rbp-A8h]
  int v41; // [rsp+68h] [rbp-98h]
  char v42; // [rsp+6Ch] [rbp-94h]
  char v43[8]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  char v46[8]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v47[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+C0h] [rbp-40h]

  v2 = a1 + 32;
  v48 = __readfsqword(0x28u);
  v38 = 0;
  v40 = 0;
  v37 = nullptr;
  v39 = nullptr;
  v41 = 0;
  v42 = 0x80;
  v46[0] = 2;
  memset(v47, 0, 24);
  if ( (unsigned int)get_idcv_attr(v46, a1 + 32, "bte", 1)
    || (unsigned int)idcv_long(v46)
    || (v13 = v47[0],
        free_idcv(v46),
        v42 = v13,
        v46[0] = 2,
        memset(v47, 0, 24),
        (unsigned int)get_idcv_attr(v46, v2, "taenum_bits", 1))
    || (unsigned int)idcv_long(v46)
    || (v14 = v47[0],
        free_idcv(v46),
        v41 = v14,
        v46[0] = 2,
        memset(v47, 0, 24),
        (unsigned int)get_idcv_attr(v46, v2, "member_cnt", 1))
    || (unsigned int)idcv_long(v46) )
  {
    free_idcv(v46);
LABEL_3:
    named_type_tid = -1;
    goto LABEL_4;
  }
  v15 = *(_QWORD *)&v47[0];
  v34 = *(_QWORD *)&v47[0];
  free_idcv(v46);
  if ( v15 )
  {
    v16 = 0;
    while ( 1 )
    {
      v36 = 0;
      ptr = nullptr;
      sub_35A790((char **)&ptr);
      v43[0] = 2;
      v22 = haystack;
      v45 = 0;
      v44 = 0;
      if ( (_QWORD)v36 )
        v22 = (const char *)ptr;
      if ( (unsigned int)get_idcv_attr(v43, v2, v22, 1) || v43[0] != 5 )
        break;
      v23 = v38;
      v24 = (char *)v37;
      if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
      {
        v37 = (void *)qvector_reserve(&v37, v37, v38 + 1, 56);
        v23 = v38;
        v24 = (char *)v37;
      }
      v17 = &v24[56 * v23];
      *(_QWORD *)v17 = 0;
      *((_QWORD *)v17 + 3) = 0;
      *(_OWORD *)(v17 + 8) = 0;
      *((_OWORD *)v17 + 2) = 0;
      *(_QWORD *)&v38 = v38 + 1;
      v46[0] = 2;
      memset(v47, 0, 24);
      if ( (unsigned int)get_idcv_attr(v46, v43, "name", 1)
        || v46[0] != 7
        || (v18 = *(_QWORD *)v17,
            v19 = _mm_loadu_si128((const __m128i *)(v17 + 8)),
            *(_OWORD *)v17 = v47[0],
            *((_QWORD *)v17 + 2) = *(_QWORD *)&v47[1],
            *(_QWORD *)&v47[0] = v18,
            *(__m128i *)((char *)v47 + 8) = v19,
            free_idcv(v46),
            (unsigned int)get_idcv_attr(v46, v43, "value", 1))
        || (unsigned int)idcv_int64(v46) )
      {
        free_idcv(v46);
        break;
      }
      *((_QWORD *)v17 + 6) = *(_QWORD *)&v47[0];
      free_idcv(v46);
      if ( !(unsigned int)get_idcv_attr(v46, v43, "cmt", 1) && v46[0] == 7 )
      {
        v20 = *((_QWORD *)v17 + 3);
        v21 = _mm_loadu_si128((const __m128i *)v17 + 2);
        *((_QWORD *)v17 + 3) = *(_QWORD *)&v47[0];
        *((__m128i *)v17 + 2) = _mm_load_si128((const __m128i *)((char *)v47 + 8));
        *(_QWORD *)&v47[0] = v20;
        *(__m128i *)((char *)v47 + 8) = v21;
      }
      free_idcv(v46);
      free_idcv(v43);
      if ( ptr )
      {
        *(_QWORD *)&v36 = 0;
        qfree(ptr);
      }
      if ( v34 == ++v16 )
        goto LABEL_41;
    }
    free_idcv(v43);
    if ( ptr )
    {
      *(_QWORD *)&v36 = 0;
      qfree(ptr);
    }
    goto LABEL_3;
  }
LABEL_41:
  v25 = *(_QWORD *)(a1 + 104);
  v26 = *(_QWORD *)(a1 + 72);
  v27 = *(_QWORD *)(a1 + 16);
  v28 = *(_QWORD *)(a2 + 8);
  v29 = *(_QWORD *)(a1 + 136);
  if ( v25 == 1 )
  {
    if ( v28 > 5 && *(_BYTE *)(a1 + 160) == 7 )
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        v31 = *(const char **)(a1 + 168);
        v30 = haystack;
        if ( !v27 )
          goto LABEL_64;
      }
      else
      {
        v30 = haystack;
        v31 = haystack;
        if ( !v27 )
          goto LABEL_64;
      }
    }
    else
    {
      v30 = haystack;
      v31 = nullptr;
      if ( !v27 )
      {
LABEL_64:
        v41 |= 0x80u;
        goto LABEL_47;
      }
    }
    v30 = *(const char **)(a1 + 8);
    goto LABEL_64;
  }
  if ( v25 == 2 )
  {
    if ( v28 > 5 && *(_BYTE *)(a1 + 160) == 7 )
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        v31 = *(const char **)(a1 + 168);
        v30 = haystack;
        if ( !v27 )
          goto LABEL_71;
      }
      else
      {
        v30 = haystack;
        v31 = haystack;
        if ( !v27 )
          goto LABEL_71;
      }
    }
    else
    {
      v30 = haystack;
      v31 = nullptr;
      if ( !v27 )
      {
LABEL_71:
        v41 |= 0x40u;
        goto LABEL_47;
      }
    }
    v30 = *(const char **)(a1 + 8);
    goto LABEL_71;
  }
  if ( v28 <= 5 || *(_BYTE *)(a1 + 160) != 7 )
  {
    v30 = haystack;
    v31 = nullptr;
    if ( !v27 )
      goto LABEL_47;
    goto LABEL_46;
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    v31 = *(const char **)(a1 + 168);
    v30 = haystack;
    if ( v27 )
      goto LABEL_46;
  }
  else
  {
    v30 = haystack;
    v31 = haystack;
    if ( v27 )
LABEL_46:
      v30 = *(const char **)(a1 + 8);
  }
LABEL_47:
  if ( (unsigned int)v26 <= 8 && ((unsigned int)v26 & ((_DWORD)v26 - 1)) == 0 )
  {
    LOBYTE(v32) = 0;
    if ( (_DWORD)v26 )
      v32 = log2ceil((int)v26, v27, 0) + 1;
    v42 = v32 | v42 & 0xF8;
  }
  ptr = nullptr;
  if ( !(unsigned __int8)create_tinfo(&ptr, 45, 45, &v37)
    || v31 && (unsigned int)set_tinfo_property4(&ptr, 5, v31, 0, 0, 0)
    || (unsigned int)set_tinfo_property4(&ptr, 18, v29 != 0, 0, 0, 0)
    || (unsigned int)save_tinfo(&ptr, 0, 0, v30, 5) )
  {
    named_type_tid = -1;
  }
  else
  {
    named_type_tid = get_named_type_tid(v30);
  }
  clear_tinfo_t(&ptr);
LABEL_4:
  v4 = v39;
  *(_QWORD *)(a2 + 8) = named_type_tid;
  if ( v4 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v4);
  }
  v5 = (char *)v37;
  if ( v37 )
  {
    v6 = v38;
    if ( (_QWORD)v38 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = &v5[v7];
        v10 = *(void **)&v5[v7 + 24];
        if ( v10 )
        {
          *((_QWORD *)v9 + 4) = 0;
          qfree(v10);
        }
        v11 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v11);
        }
        ++v8;
        v5 = (char *)v37;
        v7 += 56;
      }
      while ( v6 != v8 );
    }
    *(_QWORD *)&v38 = 0;
    qfree(v5);
  }
  return 0;
}
