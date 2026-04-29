__int64 __fastcall sub_C3DE0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *exception; // rdi
  char *v6; // rdx
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  const char *v10; // rcx
  const char *v11; // rcx
  int v12; // eax
  unsigned __int64 *v13; // rsi
  __m128i *v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  int v19; // eax
  int v20; // eax
  char v21; // bp
  __int64 v22; // r15
  const char *v23; // rcx
  _BYTE *v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __m128i v28; // xmm1
  char *v29; // [rsp+0h] [rbp-78h]
  char *v30; // [rsp+0h] [rbp-78h]
  char *s2; // [rsp+8h] [rbp-70h]
  char *s2a; // [rsp+8h] [rbp-70h]
  char *s1; // [rsp+10h] [rbp-68h]
  char *s1a; // [rsp+10h] [rbp-68h]
  __m128i *v35; // [rsp+18h] [rbp-60h]
  __int64 v36; // [rsp+28h] [rbp-50h] BYREF
  __int64 v37[9]; // [rsp+30h] [rbp-48h] BYREF

  v37[1] = __readfsqword(0x28u);
  v6 = *(char **)(a1 + 1360);
  if ( v6 )
  {
    v7 = 24;
    v8 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
    {
LABEL_20:
      if ( a3 )
        copy_tinfo_t(a3, v8 + 48);
      LOBYTE(v8) = *(_BYTE *)(v7 + 24) != 0;
      return (unsigned int)v8;
    }
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v9 = *(_QWORD *)(a2 + 8);
      do
      {
        v7 = v8 + 24;
        if ( *(_QWORD *)(v8 + 32) )
        {
          v10 = *(const char **)(v8 + 24);
          if ( !v9 )
          {
            if ( !*v10 )
              goto LABEL_19;
LABEL_8:
            v8 = *(_QWORD *)(v8 + 8);
            continue;
          }
        }
        else
        {
          if ( !v9 )
          {
            if ( v6 != (char *)v8 )
              goto LABEL_20;
            v36 = 0;
            goto LABEL_31;
          }
          v10 = ::s1;
        }
        v29 = v6;
        s1 = (char *)v10;
        s2 = *(char **)a2;
        v19 = strcmp(*(const char **)a2, v10);
        v6 = v29;
        if ( v19 < 0 )
          goto LABEL_8;
        v20 = strcmp(s1, s2);
        v6 = v29;
        if ( v20 >= 0 )
        {
LABEL_19:
          if ( v6 != (char *)v8 )
            goto LABEL_20;
          break;
        }
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( (*(_BYTE *)v8 & 2) == 0 );
    }
  }
  v36 = 0;
  if ( *(_QWORD *)(a2 + 8) )
    v11 = *(const char **)a2;
  else
LABEL_31:
    v11 = ::s1;
  v12 = parse_decl(&v36, 0, 0, v11, 1);
  v13 = *(unsigned __int64 **)(a1 + 1360);
  v37[0] = a2;
  LODWORD(v8) = v12;
  v14 = (__m128i *)(a1 + 1360);
  if ( !v13 )
  {
    v27 = qalloc(56);
    v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
    if ( !v27 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v27 + 48) = 0;
    v14 = (__m128i *)(a1 + 1360);
    *(_OWORD *)(v27 + 16) = 0;
    *(_OWORD *)(v27 + 32) = 0;
    *(__m128i *)(v27 + 8) = v28;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 1360) = v27;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v27 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 1360) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1360),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1360));
    **(_QWORD **)(a1 + 1360) &= ~1uLL;
    **(_QWORD **)(a1 + 1360) |= 2uLL;
    v13 = *(unsigned __int64 **)(a1 + 1360);
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(a1 + 1368) )
  {
LABEL_14:
    v15 = sub_C3B70(v14, v13, 1, v37);
LABEL_15:
    v16 = v15;
    goto LABEL_16;
  }
  v21 = 1;
  v16 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v16 & 2) != 0 )
  {
LABEL_40:
    v15 = sub_C3B70(v14, v13, v21, v37);
    goto LABEL_15;
  }
  v22 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    if ( *(_QWORD *)(v16 + 32) )
    {
      v23 = *(const char **)(v16 + 24);
      if ( !v22 )
      {
        if ( !*v23 )
          break;
LABEL_37:
        v24 = *(_BYTE **)(v16 + 8);
        v21 = 1;
        goto LABEL_38;
      }
    }
    else
    {
      if ( !v22 )
        break;
      v23 = ::s1;
    }
    v35 = v14;
    s1a = (char *)v16;
    s2a = (char *)v23;
    v30 = *(char **)a2;
    v25 = strcmp(*(const char **)a2, v23);
    v16 = (unsigned __int64)s1a;
    v14 = v35;
    if ( v25 < 0 )
      goto LABEL_37;
    v26 = strcmp(s2a, v30);
    v16 = (unsigned __int64)s1a;
    v14 = v35;
    if ( v26 >= 0 )
      break;
    v24 = *((_BYTE **)s1a + 2);
    v21 = 0;
LABEL_38:
    if ( (*v24 & 2) != 0 )
      goto LABEL_39;
    v16 = (unsigned __int64)v24;
  }
  if ( !v16 )
  {
LABEL_39:
    v13 = (unsigned __int64 *)v16;
    goto LABEL_40;
  }
LABEL_16:
  copy_tinfo_t(v16 + 48, &v36);
  if ( a3 )
  {
    v17 = v36;
    v36 = *a3;
    *a3 = v17;
  }
  clear_tinfo_t(&v36);
  return (unsigned int)v8;
}
