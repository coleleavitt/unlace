__int64 __fastcall sub_216200(__int64 *a1, __int64 a2, int a3)
{
  char v3; // r12
  __int64 v4; // rbx
  __int64 v7; // r14
  const char *v8; // rsi
  const char *v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // r13
  const void *v12; // r8
  void *v13; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // r13
  const void *v20; // r8
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-68h]
  const void *v24; // [rsp+0h] [rbp-68h]
  const void *v25; // [rsp+0h] [rbp-68h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  _DWORD v27[4]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( (unsigned int)(a3 - 1) > 0x1E )
    return 0;
  v3 = a3;
  if ( (~(_BYTE)a3 & 0x18) == 0 )
    return 0;
  v4 = *a1;
  if ( !(96 * a1[1]) )
    goto LABEL_45;
  while ( (unsigned int)sub_3307E0(v4, a2) )
  {
    v4 += 96;
    if ( v4 == *a1 + 96 * a1[1] )
      goto LABEL_45;
  }
  if ( !v4 )
  {
LABEL_45:
    if ( *(_QWORD *)(a2 + 32) > 1u
      || *(_BYTE *)(a2 + 48)
      || *(_QWORD *)(a2 + 64) > 1u
      || (*(_BYTE *)(a2 + 88) & 0x2E) != 0 )
    {
      v17 = a1[1];
      v18 = *a1;
      if ( a1[2] < (unsigned __int64)(v17 + 1) )
      {
        v22 = qvector_reserve(a1, v18, v17 + 1, 96);
        v17 = a1[1];
        *a1 = v22;
        v18 = v22;
      }
      v4 = v18 + 96 * v17;
      *(__m128i *)(v4 + 8) = _mm_load_si128((const __m128i *)&xmmword_424800);
      *(_DWORD *)v4 = 0;
      *(_QWORD *)(v4 + 24) = 0;
      *(_QWORD *)(v4 + 48) = 0;
      *(_QWORD *)(v4 + 56) = 0;
      *(_QWORD *)(v4 + 80) = -1;
      *(_DWORD *)(v4 + 88) = 0;
      *(_OWORD *)(v4 + 32) = 0;
      *(_OWORD *)(v4 + 64) = 0;
      ++a1[1];
      v27[0] = 0;
      copy_argloc(v27, a2);
      v28 = *(_QWORD *)(a2 + 16);
      copy_argloc(v4, v27);
      *(_QWORD *)(v4 + 16) = v28;
      cleanup_argloc(v27);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  if ( (v3 & 1) != 0 )
  {
    v26 = *a1 + 96 * a1[1];
    if ( v26 != *a1 )
    {
      v7 = *a1;
      v23 = *(_QWORD *)(a2 + 32);
      do
      {
        v8 = s1;
        if ( v23 )
          v8 = *(const char **)(a2 + 24);
        v9 = s1;
        if ( *(_QWORD *)(v7 + 32) )
          v9 = *(const char **)(v7 + 24);
        v10 = strcmp(v9, v8);
        if ( v4 != v7 && !v10 )
          return 0;
        v7 += 96;
      }
      while ( v26 != v7 );
    }
    if ( v4 + 24 != a2 + 24 )
    {
      v11 = *(_QWORD *)(a2 + 32);
      if ( v11 < 2 )
      {
        *(_QWORD *)(v4 + 32) = 0;
      }
      else
      {
        v12 = *(const void **)(a2 + 24);
        v13 = *(void **)(v4 + 24);
        if ( *(_QWORD *)(v4 + 40) < v11 )
        {
          v24 = *(const void **)(a2 + 24);
          v13 = (void *)qvector_reserve(v4 + 24, *(_QWORD *)(v4 + 24), *(_QWORD *)(a2 + 32), 1);
          v12 = v24;
          *(_QWORD *)(v4 + 24) = v13;
        }
        *(_QWORD *)(v4 + 32) = v11;
        memmove(v13, v12, v11 - 1);
        *(_BYTE *)(*(_QWORD *)(v4 + 24) + v11 - 1) = 0;
      }
    }
  }
  if ( (v3 & 2) != 0 )
    copy_tinfo_t(v4 + 48, a2 + 48);
  if ( (v3 & 4) != 0 && v4 + 56 != a2 + 56 )
  {
    v19 = *(_QWORD *)(a2 + 64);
    if ( v19 < 2 )
    {
      *(_QWORD *)(v4 + 64) = 0;
    }
    else
    {
      v20 = *(const void **)(a2 + 56);
      v21 = *(void **)(v4 + 56);
      if ( *(_QWORD *)(v4 + 72) < v19 )
      {
        v25 = *(const void **)(a2 + 56);
        v21 = (void *)qvector_reserve(v4 + 56, *(_QWORD *)(v4 + 56), *(_QWORD *)(a2 + 64), 1);
        v20 = v25;
        *(_QWORD *)(v4 + 56) = v21;
      }
      *(_QWORD *)(v4 + 64) = v19;
      memmove(v21, v20, v19 - 1);
      *(_BYTE *)(*(_QWORD *)(v4 + 56) + v19 - 1) = 0;
    }
  }
  if ( (v3 & 8) != 0 )
    *(_DWORD *)(v4 + 88) |= *(_DWORD *)(a2 + 88);
  if ( (v3 & 0x10) != 0 )
    *(_DWORD *)(v4 + 88) &= ~*(_DWORD *)(a2 + 88);
  if ( *(_QWORD *)(v4 + 32) > 1u
    || *(_BYTE *)(v4 + 48)
    || *(_QWORD *)(v4 + 64) > 1u
    || (*(_BYTE *)(v4 + 88) & 0x2E) != 0 )
  {
    return 1;
  }
  v15 = *(_QWORD *)(v4 + 56);
  if ( v15 )
  {
    *(_QWORD *)(v4 + 64) = 0;
    qfree(v15);
  }
  clear_tinfo_t(v4 + 48);
  v16 = *(_QWORD *)(v4 + 24);
  if ( v16 )
  {
    *(_QWORD *)(v4 + 32) = 0;
    qfree(v16);
  }
  cleanup_argloc(v4);
  memmove((void *)v4, (const void *)(v4 + 96), *a1 + 96 * a1[1]-- - v4 - 96);
  return 1;
}
