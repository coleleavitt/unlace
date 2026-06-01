unsigned __int64 __fastcall sub_513790(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v7; // eax
  _BYTE *v8; // r15
  int v9; // ebx
  _BYTE *v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _DWORD *v16; // rsi
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rax
  char *v20; // rdi
  char *v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // r12
  _QWORD *v24; // r14
  _QWORD *v25; // rbp
  __int64 v26; // r12
  const char *v27; // rdi
  const char *v28; // rsi
  _QWORD *v29; // r13
  const char *v30; // rdi
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  const char *v35; // rsi
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rbp
  size_t v40; // r8
  char *v41; // rax
  const char *v42; // rdi
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  void *v47; // r14
  void *v48; // rdi
  __int64 v49; // rax
  char *s2; // [rsp+0h] [rbp-98h]
  char *s2a; // [rsp+0h] [rbp-98h]
  const char *v52; // [rsp+8h] [rbp-90h]
  void **p_dest; // [rsp+28h] [rbp-70h] BYREF
  void *src[2]; // [rsp+30h] [rbp-68h] BYREF
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __int128 v56; // [rsp+48h] [rbp-50h]
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v57 = __readfsqword(0x28u);
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v5));
  v7 = unpack_dd(src);
  v8 = src[0];
  dest = nullptr;
  v9 = v7;
  v56 = 0;
  v10 = src[0];
  while ( v10 < src[1] )
  {
    if ( !*v10++ )
    {
      src[0] = v10;
      if ( v8 )
      {
        v38 = v10 - v8;
        v37 = v38 == 0;
        v39 = v38;
        v40 = v38 - 1;
        v41 = nullptr;
        if ( !v37 )
        {
          s2a = (char *)v40;
          v41 = (char *)qvector_reserve(&dest, 0, v39, 1);
          dest = v41;
          v40 = (size_t)s2a;
        }
        *(_QWORD *)&v56 = v39;
        v41[v39 - 1] = 0;
        memmove(dest, v8, v40);
      }
      break;
    }
  }
  v11 = *(_QWORD *)(a1 + 1760);
  if ( *(_DWORD *)a2 - 125 == a3 )
  {
    sub_512070(*(_QWORD *)(a1 + 1760), (unsigned int)v9);
    s2 = (char *)dest;
    goto LABEL_46;
  }
  v12 = *(_QWORD *)(v11 + 152);
  if ( !v12 )
  {
    sub_5111C0((__int64 *)(v11 + 144), 1u);
    v12 = *(_QWORD *)(v11 + 152);
  }
  if ( v9 >= v12 )
  {
    v13 = v12;
    if ( v9 >= (int)v12 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v11 + 144);
        if ( *(_QWORD *)(v11 + 160) < v12 + 1 )
        {
          v44 = qvector_reserve(v11 + 144, v14, v12 + 1, 56);
          *(_QWORD *)(v11 + 144) = v44;
          v12 = *(_QWORD *)(v11 + 152);
          v14 = v44;
        }
        v15 = v14 + 56 * v12;
        *(_QWORD *)v15 = 0;
        *(_QWORD *)(v15 + 24) = 0;
        *(_DWORD *)(v15 + 48) = 0;
        *(_BYTE *)(v15 + 52) = 0;
        *(_OWORD *)(v15 + 8) = 0;
        *(_OWORD *)(v15 + 32) = 0;
        v16 = *(_DWORD **)(v11 + 48);
        v17 = *(_QWORD *)(v11 + 56);
        ++*(_QWORD *)(v11 + 152);
        v18 = &v16[v17];
        if ( v16 == v18 )
          goto LABEL_57;
        v19 = v16;
        while ( v13 != *v19 )
        {
          if ( v18 == ++v19 )
            goto LABEL_57;
        }
        if ( v19 == v18 )
        {
LABEL_57:
          v43 = v17 + 1;
          if ( *(_QWORD *)(v11 + 64) < v43 )
          {
            v45 = qvector_reserve(v11 + 48, v16, v43, 4);
            v46 = *(_QWORD *)(v11 + 56);
            *(_QWORD *)(v11 + 48) = v45;
            v18 = (_DWORD *)(v45 + 4 * v46);
          }
          *v18 = v13;
          ++*(_QWORD *)(v11 + 56);
        }
        if ( v9 < ++v13 )
          break;
        v12 = *(_QWORD *)(v11 + 152);
      }
    }
  }
  v20 = *(char **)(v11 + 48);
  v21 = &v20[4 * *(_QWORD *)(v11 + 56)];
  if ( v20 != v21 )
  {
    while ( v9 != *(_DWORD *)v20 )
    {
      v20 += 4;
      if ( v21 == v20 )
        goto LABEL_24;
    }
    if ( v21 != v20 )
    {
      memmove(v20, v20 + 4, v21 - v20 - 4);
      --*(_QWORD *)(v11 + 56);
    }
  }
LABEL_24:
  v22 = (__int64 *)(*(_QWORD *)(v11 + 144) + 56LL * v9);
  if ( v22 != (__int64 *)&dest )
  {
    v23 = v56;
    if ( (unsigned __int64)v56 > 1 )
    {
      v47 = dest;
      v48 = (void *)*v22;
      if ( v22[2] < (unsigned __int64)v56 )
      {
        v49 = qvector_reserve(v22, *v22, v56, 1);
        *v22 = v49;
        v48 = (void *)v49;
      }
      v22[1] = v23;
      memmove(v48, v47, v23 - 1);
      *(_BYTE *)(*v22 + v23 - 1) = 0;
    }
    else
    {
      v22[1] = 0;
    }
  }
  *((_BYTE *)v22 + 52) = 0;
  v24 = *(_QWORD **)(v11 + 88);
  v25 = (_QWORD *)(v11 + 80);
  if ( !v24 )
  {
    v25 = (_QWORD *)(v11 + 80);
    goto LABEL_55;
  }
  v26 = v56;
  v27 = haystack;
  s2 = (char *)dest;
  if ( (_QWORD)v56 )
    v27 = (const char *)dest;
  v52 = v27;
  while ( 1 )
  {
    v33 = v24[5];
    if ( !v26 )
      break;
    if ( v33 )
      goto LABEL_40;
    v28 = s2;
    v29 = v24;
    v30 = haystack;
LABEL_33:
    v31 = strcmp(v30, v28);
    v32 = (_QWORD *)v24[2];
    v24 = (_QWORD *)v24[3];
    if ( v31 >= 0 )
    {
      v25 = v29;
      v24 = v32;
    }
    if ( !v24 )
      goto LABEL_42;
  }
  if ( v33 )
  {
LABEL_40:
    v30 = (const char *)v24[4];
    v28 = v52;
    v29 = v24;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v34 = v24[2];
    if ( !v34 )
      break;
    v25 = v24;
    v24 = (_QWORD *)v24[2];
    if ( *(_QWORD *)(v34 + 40) )
      goto LABEL_40;
  }
  v25 = v24;
LABEL_42:
  if ( v25 == (_QWORD *)(v11 + 80) )
    goto LABEL_55;
  if ( v25[5] )
  {
    v35 = (const char *)v25[4];
    v42 = haystack;
    if ( v26 )
      goto LABEL_56;
  }
  else
  {
    v35 = haystack;
    if ( !v26 )
      goto LABEL_45;
LABEL_56:
    v42 = s2;
  }
  if ( strcmp(v42, v35) < 0 )
  {
LABEL_55:
    p_dest = &dest;
    v25 = sub_512B90((_QWORD *)(v11 + 72), v25, (__int64 *)&p_dest);
    s2 = (char *)dest;
  }
LABEL_45:
  *((_DWORD *)v25 + 14) = v9;
  *(_BYTE *)(v11 + 168) = 1;
LABEL_46:
  if ( s2 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(s2);
  }
  return v57 - __readfsqword(0x28u);
}
