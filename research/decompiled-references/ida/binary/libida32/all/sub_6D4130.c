__int64 __fastcall sub_6D4130(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  size_t v7; // rbp
  _BYTE *v8; // rsi
  size_t v9; // r14
  size_t v10; // r15
  size_t v11; // rax
  const char *v12; // rdx
  char *v13; // rax
  size_t v14; // rbp
  _BYTE *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned int v19; // ebx
  void *v21; // rax
  void *v22; // rdi
  void *v23; // r8
  void *v24; // rax
  __int64 *tinfo_property; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  void *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-90h]
  void *v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+18h] [rbp-80h] BYREF
  void *src; // [rsp+20h] [rbp-78h] BYREF
  size_t n; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __int128 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  sub_6B7B10((__int64)&src, a1, a4, 1);
  sub_6B9AB0(a1, (__int64)&src);
  v7 = n;
  dest = nullptr;
  v38 = 0;
  if ( !n )
  {
    v8 = nullptr;
    v9 = 6;
    v10 = 5;
LABEL_3:
    dest = (void *)qvector_reserve(&dest, v8, v9, 1);
    v8 = dest;
    v11 = v7;
    goto LABEL_4;
  }
  v10 = n + 4;
  v9 = n + 5;
  v21 = (void *)qalloc_or_throw(n, (const char *)&src);
  *((_QWORD *)&v38 + 1) = v7;
  dest = v21;
  memcpy(v21, src, v7);
  v11 = v7 - 1;
  *(_QWORD *)&v38 = v7;
  v8 = dest;
  --v7;
  if ( *((_QWORD *)&v38 + 1) < v9 )
    goto LABEL_3;
LABEL_4:
  *(_QWORD *)&v38 = v9;
  v12 = haystack;
  v8[v10] = 0;
  v13 = (char *)dest + v11;
  *(_DWORD *)v13 = 1651799647;
  v13[4] = 108;
  v34 = 0;
  if ( (_QWORD)v38 )
    v12 = (const char *)dest;
  if ( !(unsigned __int8)sub_6BC100(a1, &v34, v12)
    || (get_tinfo_property(v34, 2) & 0x3F) != 0xD
    || (get_tinfo_property(v34, 306) & 0x100) == 0
    || (v28 = (_QWORD *)get_tinfo_property(*a3, 309), !v28[1])
    || (v29 = *v28, !*(_QWORD *)(*v28 + 24LL))
    || strcmp(*(const char **)(v29 + 16), "__vftable")
    || (*(_BYTE *)(v29 + 117) & 1) == 0 )
  {
    v14 = n;
    if ( n > 1 )
    {
      v22 = dest;
      v23 = src;
      if ( *((_QWORD *)&v38 + 1) < n )
      {
        v33 = src;
        v31 = (void *)qvector_reserve(&dest, dest, n, 1);
        v23 = v33;
        dest = v31;
        v22 = v31;
      }
      *(_QWORD *)&v38 = v14;
      memmove(v22, v23, v14 - 1);
      *((char *)dest + v14 - 1) = 0;
      if ( (_QWORD)v38 )
      {
        v18 = v38 - 1;
        v17 = v38 + 3;
        v15 = dest;
        v16 = v38 + 4;
        if ( *((_QWORD *)&v38 + 1) >= (unsigned __int64)(v38 + 4) )
          goto LABEL_11;
        goto LABEL_27;
      }
    }
    else
    {
      *(_QWORD *)&v38 = 0;
    }
    v15 = dest;
    v16 = 5;
    v17 = 4;
    v18 = 0;
    if ( *((_QWORD *)&v38 + 1) >= 5u )
      goto LABEL_11;
LABEL_27:
    v32 = v17;
    v24 = (void *)qvector_reserve(&dest, v15, v16, 1);
    v17 = v32;
    dest = v24;
    v15 = v24;
LABEL_11:
    *(_QWORD *)&v38 = v16;
    v15[v17] = 0;
    *(_DWORD *)((char *)dest + v18) = 1818391638;
    if ( (_QWORD)v38 )
    {
      if ( !(unsigned __int8)sub_6BC100(a1, &v34, (const char *)dest) )
        goto LABEL_13;
    }
    else if ( !(unsigned __int8)sub_6BC100(a1, &v34, haystack) )
    {
      goto LABEL_13;
    }
    if ( (get_tinfo_property(v34, 2) & 0x3F) == 0xD )
    {
      tinfo_property = (__int64 *)get_tinfo_property(*a3, 309);
      if ( tinfo_property[1] )
      {
        v26 = *tinfo_property;
        if ( *(_QWORD *)(v26 + 24) )
        {
          if ( !strcmp(*(const char **)(v26 + 16), "lpVtbl") )
          {
            v27 = *a2;
            v19 = 2;
            *a2 = v34;
            v34 = v27;
            goto LABEL_14;
          }
        }
      }
    }
LABEL_13:
    v19 = 0;
    goto LABEL_14;
  }
  v30 = *a2;
  v19 = 1;
  *a2 = v34;
  v34 = v30;
LABEL_14:
  clear_tinfo_t(&v34);
  if ( dest )
  {
    *(_QWORD *)&v38 = 0;
    qfree(dest);
  }
  if ( src )
  {
    n = 0;
    qfree(src);
  }
  return v19;
}

