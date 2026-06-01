__int64 __fastcall sub_41FA80(__int64 a1, __int64 a2, _BYTE *a3)
{
  const void *v3; // r15
  const char *v6; // rdi
  size_t v8; // r14
  _QWORD *v9; // r15
  unsigned int v10; // r15d
  __int64 v11; // r8
  __int64 result; // rax
  bool v13; // zf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  const char *v18; // r10
  size_t v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  void *v23; // r11
  char v24; // r10
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  size_t na; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+0h] [rbp-88h]
  size_t nb; // [rsp+0h] [rbp-88h]
  size_t nd; // [rsp+0h] [rbp-88h]
  size_t nc; // [rsp+0h] [rbp-88h]
  __int64 v35; // [rsp+8h] [rbp-80h]
  char v36; // [rsp+8h] [rbp-80h]
  const char *src; // [rsp+10h] [rbp-78h]
  void *srca; // [rsp+10h] [rbp-78h]
  __int64 v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  unsigned int v41; // [rsp+2Ch] [rbp-5Ch] BYREF
  _BYTE ptr[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *(const void **)(a2 + 8);
  if ( !v3 || !*(_BYTE *)(a1 + 80) )
    return 0xFFFFFFFFLL;
  v6 = *(const char **)(a2 + 8);
  memset(ptr, 0, sizeof(ptr));
  v8 = strlen(v6);
  *(_QWORD *)ptr = qvector_reserve(ptr, 0, v8 + 1, 1);
  *(_QWORD *)&ptr[8] = v8 + 1;
  memmove(*(void **)ptr, v3, v8);
  *(_BYTE *)(*(_QWORD *)ptr + v8) = 0;
  v9 = sub_3DDF90(a1 + 24, (__int64)ptr);
  if ( *(_QWORD *)ptr )
  {
    *(_QWORD *)&ptr[8] = 0;
    qfree(*(void **)ptr);
  }
  if ( v9 == (_QWORD *)(a1 + 32) )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v10 = v14;
    if ( (_DWORD)v14 )
    {
      if ( (unsigned int)v14 > 0x400 )
        return 0xFFFFFFFFLL;
      v15 = *(_QWORD *)a1;
      v16 = 16LL * (unsigned int)v14;
      if ( (unsigned int)v14 < v14 || (v17 = (unsigned int)(v14 + 1), v17 == v14) )
      {
LABEL_24:
        v11 = v16 + v15;
        v13 = *(_BYTE *)(v11 + 8) == 0;
        *(_QWORD *)v11 = a2;
        if ( !v13 )
          goto LABEL_15;
LABEL_25:
        v18 = *(const char **)(a2 + 8);
        memset(ptr, 0, sizeof(ptr));
        if ( v18 )
        {
          v39 = v11;
          src = v18;
          na = strlen(v18);
          *(_QWORD *)ptr = qvector_reserve(ptr, 0, na + 1, 1);
          *(_QWORD *)&ptr[8] = na + 1;
          memmove(*(void **)ptr, src, na);
          v11 = v39;
          *(_BYTE *)(*(_QWORD *)ptr + na) = 0;
        }
        n = v11;
        *(_DWORD *)sub_41F860((_QWORD *)(a1 + 24), (__int64)ptr) = v10;
        v19 = n;
        if ( *(_QWORD *)ptr )
        {
          *(_QWORD *)&ptr[8] = 0;
          qfree(*(void **)ptr);
          v19 = n;
        }
        v20 = *(_QWORD *)(a1 + 88);
        nb = v19;
        *(_QWORD *)ptr = -1;
        netnode_check(ptr, v20, 0, 1);
        v21 = *(_QWORD *)(a2 + 8);
        v41 = v10;
        *(_BYTE *)(nb + 8) = 1;
        netnode_hashset(*(_QWORD *)ptr, v21, &v41, 4, 72);
        goto LABEL_15;
      }
      *(_QWORD *)ptr = 0;
      ptr[8] = 0;
      if ( v17 < v14 )
      {
LABEL_23:
        *(_QWORD *)(a1 + 8) = v17;
        goto LABEL_24;
      }
      v22 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)ptr < v15 )
      {
LABEL_48:
        if ( v22 >= v17 )
          goto LABEL_49;
        goto LABEL_52;
      }
    }
    else
    {
      if ( v14 > 1 )
      {
        v10 = 1;
        v11 = *(_QWORD *)a1 + 16LL;
        goto LABEL_14;
      }
      v15 = *(_QWORD *)a1;
      v22 = *(_QWORD *)(a1 + 16);
      ptr[8] = 0;
      *(_QWORD *)ptr = 0;
      if ( (unsigned __int64)ptr < v15 )
      {
        if ( v22 > 1 )
        {
          v14 = 0;
          v16 = 16;
          v17 = 2;
          v10 = 1;
          goto LABEL_44;
        }
        v16 = 16;
        v17 = 2;
        v10 = 1;
LABEL_52:
        v35 = v16;
        nd = v17;
        v28 = qvector_reserve(a1, v15, v17, 16);
        v16 = v35;
        v17 = nd;
        *(_QWORD *)a1 = v28;
        v15 = v28;
        v14 = *(_QWORD *)(a1 + 8);
LABEL_49:
        if ( v14 >= v17 )
          goto LABEL_23;
LABEL_44:
        v27 = 16 * v14;
        do
        {
          *(__m128i *)(v15 + v27) = _mm_load_si128((const __m128i *)ptr);
          v27 += 16;
          v15 = *(_QWORD *)a1;
        }
        while ( 16 * v17 != v27 );
        goto LABEL_23;
      }
      v16 = 16;
      v17 = 2;
      v10 = 1;
    }
    if ( (unsigned __int64)ptr < v15 + 16 * v22 )
    {
      v23 = *(void **)ptr;
      v24 = ptr[8];
      if ( v22 < v17 )
      {
        v40 = v16;
        srca = *(void **)ptr;
        v36 = ptr[8];
        nc = v17;
        v29 = qvector_reserve(a1, v15, v17, 16);
        v16 = v40;
        v23 = srca;
        v15 = v29;
        v24 = v36;
        v17 = nc;
        *(_QWORD *)a1 = v29;
        v14 = *(_QWORD *)(a1 + 8);
      }
      if ( v14 < v17 )
      {
        v25 = 16 * v14;
        do
        {
          v26 = v25 + v15;
          v25 += 16;
          *(_QWORD *)v26 = v23;
          *(_BYTE *)(v26 + 8) = v24;
          v15 = *(_QWORD *)a1;
        }
        while ( 16 * v17 != v25 );
      }
      goto LABEL_23;
    }
    goto LABEL_48;
  }
  v10 = *((_DWORD *)v9 + 14);
  if ( !v10 || (unsigned __int64)v10 >= *(_QWORD *)(a1 + 8) )
  {
    if ( !under_debugger )
      interr(1387);
    BUG();
  }
  v11 = *(_QWORD *)a1 + 16LL * v10;
  if ( *(_QWORD *)v11 )
  {
    result = 0xFFFFFFFFLL;
    if ( a3 )
    {
      *a3 = 1;
      return v10;
    }
    return result;
  }
  if ( v10 > 0x400 )
    return 0xFFFFFFFFLL;
LABEL_14:
  v13 = *(_BYTE *)(v11 + 8) == 0;
  *(_QWORD *)v11 = a2;
  if ( v13 )
    goto LABEL_25;
LABEL_15:
  if ( a3 )
    *a3 = 0;
  return v10;
}
