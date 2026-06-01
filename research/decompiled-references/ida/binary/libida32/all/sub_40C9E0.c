__int64 __fastcall sub_40C9E0(__int64 a1, __int64 a2, _BYTE *a3)
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
  __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  void *v24; // r11
  char v25; // r10
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  size_t na; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+0h] [rbp-88h]
  size_t nb; // [rsp+0h] [rbp-88h]
  size_t nd; // [rsp+0h] [rbp-88h]
  size_t nc; // [rsp+0h] [rbp-88h]
  __int64 v36; // [rsp+8h] [rbp-80h]
  char v37; // [rsp+8h] [rbp-80h]
  const char *src; // [rsp+10h] [rbp-78h]
  void *srca; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  __int64 v41; // [rsp+18h] [rbp-70h]
  unsigned int v42; // [rsp+2Ch] [rbp-5Ch] BYREF
  _BYTE ptr[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v44 = __readfsqword(0x28u);
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
  v9 = sub_3D80D0(a1 + 24, (__int64)ptr);
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
          v40 = v11;
          src = v18;
          na = strlen(v18);
          *(_QWORD *)ptr = qvector_reserve(ptr, 0, na + 1, 1);
          *(_QWORD *)&ptr[8] = na + 1;
          memmove(*(void **)ptr, src, na);
          v11 = v40;
          *(_BYTE *)(*(_QWORD *)ptr + na) = 0;
        }
        n = v11;
        *(_DWORD *)sub_40C220((_QWORD *)(a1 + 24), (__int64)ptr) = v10;
        v19 = n;
        if ( *(_QWORD *)ptr )
        {
          *(_QWORD *)&ptr[8] = 0;
          qfree(*(void **)ptr);
          v19 = n;
        }
        v20 = *(_QWORD *)(a1 + 88);
        nb = v19;
        v42 = -1;
        netnode_check(&v42, v20, 0, 1);
        v21 = *(_QWORD *)(a2 + 8);
        *(_DWORD *)ptr = v10;
        v22 = v42;
        *(_BYTE *)(nb + 8) = 1;
        netnode_hashset(v22, v21, ptr, 4, 72);
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
      v23 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)ptr < v15 )
      {
LABEL_48:
        if ( v23 >= v17 )
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
      v23 = *(_QWORD *)(a1 + 16);
      ptr[8] = 0;
      *(_QWORD *)ptr = 0;
      if ( (unsigned __int64)ptr < v15 )
      {
        if ( v23 > 1 )
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
        v36 = v16;
        nd = v17;
        v29 = qvector_reserve(a1, v15, v17, 16);
        v16 = v36;
        v17 = nd;
        *(_QWORD *)a1 = v29;
        v15 = v29;
        v14 = *(_QWORD *)(a1 + 8);
LABEL_49:
        if ( v14 >= v17 )
          goto LABEL_23;
LABEL_44:
        v28 = 16 * v14;
        do
        {
          *(__m128i *)(v15 + v28) = _mm_load_si128((const __m128i *)ptr);
          v28 += 16;
          v15 = *(_QWORD *)a1;
        }
        while ( 16 * v17 != v28 );
        goto LABEL_23;
      }
      v16 = 16;
      v17 = 2;
      v10 = 1;
    }
    if ( (unsigned __int64)ptr < v15 + 16 * v23 )
    {
      v24 = *(void **)ptr;
      v25 = ptr[8];
      if ( v23 < v17 )
      {
        v41 = v16;
        srca = *(void **)ptr;
        v37 = ptr[8];
        nc = v17;
        v30 = qvector_reserve(a1, v15, v17, 16);
        v16 = v41;
        v24 = srca;
        v15 = v30;
        v25 = v37;
        v17 = nc;
        *(_QWORD *)a1 = v30;
        v14 = *(_QWORD *)(a1 + 8);
      }
      if ( v14 < v17 )
      {
        v26 = 16 * v14;
        do
        {
          v27 = v26 + v15;
          v26 += 16;
          *(_QWORD *)v27 = v24;
          *(_BYTE *)(v27 + 8) = v25;
          v15 = *(_QWORD *)a1;
        }
        while ( 16 * v17 != v26 );
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

