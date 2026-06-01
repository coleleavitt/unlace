__int64 __fastcall sub_C7F10(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  int *v4; // rax
  int *v5; // rbp
  __int64 v6; // rbx
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  unsigned int v9; // edx
  _DWORD *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  const char *v14; // rax
  size_t v15; // rax
  __int64 v16; // r9
  const char *v17; // r8
  size_t v18; // r10
  size_t v19; // r11
  __int64 v20; // rsi
  void *v21; // rdx
  const char *v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // r12
  unsigned int v25; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  const char *src; // [rsp+8h] [rbp-E0h]
  void *srca; // [rsp+8h] [rbp-E0h]
  void *srcb; // [rsp+8h] [rbp-E0h]
  __int64 v35; // [rsp+10h] [rbp-D8h]
  __int64 v36; // [rsp+10h] [rbp-D8h]
  const char *v37; // [rsp+10h] [rbp-D8h]
  __int64 v38; // [rsp+18h] [rbp-D0h]
  size_t v39; // [rsp+20h] [rbp-C8h]
  size_t v40; // [rsp+28h] [rbp-C0h]
  char v41[8]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-B0h]
  __int64 v43; // [rsp+40h] [rbp-A8h]
  __int64 v44; // [rsp+48h] [rbp-A0h]
  __int64 v45; // [rsp+58h] [rbp-90h]
  __int64 v46; // [rsp+60h] [rbp-88h]
  __int64 v47; // [rsp+78h] [rbp-70h]
  __int64 v48; // [rsp+80h] [rbp-68h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-40h]

  v2 = *(unsigned int **)a2;
  v49 = __readfsqword(0x28u);
  v4 = sub_B85A0(*v2);
  if ( !v4 )
    return 0;
  v5 = v4;
  v6 = qalloc_or_throw();
  *(_QWORD *)v6 = &stru_235898;
  *(_QWORD *)(v6 + 8) = 0x20000FF000004LL;
  *(_OWORD *)(v6 + 16) = -1;
  v7 = _mm_loadl_epi64((const __m128i *)&off_22FC58);
  v8 = (_QWORD *)(v6 + 80);
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_DWORD *)(v6 + 48) = 2;
  *(_DWORD *)(v6 + 72) = -1;
  *(__m128i *)(v6 + 56) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)&off_22FAB0);
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( v8 != (_QWORD *)(v6 + 176) );
  *(_DWORD *)(v6 + 176) = 0;
  v9 = *(_DWORD *)(v6 + 12);
  if ( ((v9 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v6 + 11) = ((v9 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v6 + 12) = v9 & 0xFE07FFFF;
  }
  *(_QWORD *)(v6 + 192) = v5;
  *(_QWORD *)v6 = off_22F498;
  *(_QWORD *)(v6 + 184) = &off_22F560;
  *(_QWORD *)(v6 + 200) = 0;
  *(_QWORD *)(v6 + 224) = 0;
  *(_OWORD *)(v6 + 208) = 0;
  *(_OWORD *)(v6 + 232) = 0;
  v10 = (_DWORD *)qvector_reserve();
  *(_QWORD *)(v6 + 200) = v10;
  v11 = 2;
  *(_QWORD *)(v6 + 208) = 8;
  *v10 = 1969516365;
  *(_DWORD *)((char *)v10 + 3) = 979725429;
  *(_BYTE *)(*(_QWORD *)(v6 + 200) + 7LL) = 0;
  v12 = *(_QWORD *)(v6 + 208);
  if ( v12 )
    v11 = v12-- + 1;
  v13 = *(_QWORD *)(v6 + 200);
  if ( *(_QWORD *)(v6 + 216) < v11 )
  {
    v36 = v12;
    srca = (void *)v11;
    v29 = qvector_reserve();
    *(_QWORD *)(v6 + 200) = v29;
    v12 = v36;
    v13 = v29;
    v11 = (unsigned __int64)srca;
  }
  *(_QWORD *)(v6 + 208) = v11;
  *(_BYTE *)(v13 + v12) = 32;
  *(_BYTE *)(*(_QWORD *)(v6 + 200) + v12 + 1) = 0;
  v14 = (const char *)qbasename();
  if ( v14 )
  {
    src = v14;
    v35 = *(_QWORD *)(v6 + 208);
    v15 = strlen(v14);
    v16 = v35;
    v17 = src;
    v18 = v15;
    v19 = v15;
    if ( v35 )
    {
      v16 = v35 - 1;
      v19 = v15 + v35 - 1;
    }
    v20 = *(_QWORD *)(v6 + 200);
    v21 = (void *)(v19 + 1);
    if ( *(_QWORD *)(v6 + 216) < v19 + 1 )
    {
      v40 = v15;
      v39 = v19;
      v38 = v16;
      v37 = src;
      srcb = (void *)(v19 + 1);
      v31 = qvector_reserve();
      *(_QWORD *)(v6 + 200) = v31;
      v18 = v40;
      v20 = v31;
      v19 = v39;
      v16 = v38;
      v17 = v37;
      v21 = srcb;
    }
    *(_QWORD *)(v6 + 208) = v21;
    *(_BYTE *)(v20 + v19) = 0;
    memmove((void *)(v16 + *(_QWORD *)(v6 + 200)), v17, v18);
  }
  v22 = s1;
  if ( *(_QWORD *)(v6 + 208) )
    v22 = *(const char **)(v6 + 200);
  *(_QWORD *)(v6 + 40) = v22;
  *(_DWORD *)(v6 + 72) = 35;
  sub_C7C80((_QWORD *)v6);
  if ( !*(_QWORD *)(v6 + 232) )
  {
    if ( v6 )
    {
      v23 = *(_QWORD *)(v6 + 224);
      *(_QWORD *)v6 = off_22F498;
      *(_QWORD *)(v6 + 184) = &off_22F560;
      if ( v23 )
        qfree();
      if ( *(_QWORD *)(v6 + 200) )
      {
        *(_QWORD *)(v6 + 208) = 0;
        qfree();
      }
      *(_QWORD *)v6 = &stru_235898;
      v24 = (_QWORD *)(v6 + 152);
      do
      {
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
        }
        v24 -= 3;
      }
      while ( (_QWORD *)(v6 + 56) != v24 );
      qfree();
    }
    if ( *((_QWORD *)v5 + 1) )
      sub_92120((__int64)"Module '%s' has no names", *(const char **)v5);
    else
      sub_92120((__int64)"Module '%s' has no names", s1);
    return 0;
  }
  sub_1954F0(v41, v6, 0, 0);
  v27 = v6 + 184;
  if ( !v6 )
    v27 = 0;
  v42 = v27;
  sub_197BC0(v6, 0, v41);
  v28 = *(_QWORD *)(a2 + 8);
  v25 = 0;
  if ( v28 != 1 )
  {
    v25 = 2;
    memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v28 - 8);
    v30 = v47;
    --*(_QWORD *)(a2 + 8);
    if ( !v30 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( v47 )
  {
LABEL_38:
    v48 = 0;
    qfree();
  }
LABEL_39:
  if ( v45 )
  {
    v46 = 0;
    qfree();
  }
  if ( v43 )
  {
    v44 = 0;
    qfree();
  }
  return v25;
}

