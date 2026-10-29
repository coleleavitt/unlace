unsigned __int64 __fastcall sub_58E580(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  const char *v9; // r15
  char *v10; // rbp
  __int64 v11; // r12
  char *v12; // rbx
  char *v13; // rax
  void **p_dest; // rax
  __int64 *v15; // rbx
  unsigned __int64 v16; // rbp
  size_t v18; // rax
  size_t v19; // r8
  size_t v20; // rax
  size_t v21; // rbx
  void *v22; // rdi
  size_t v23; // rbp
  void *v24; // r13
  void *v25; // rdi
  void *v26; // rdi
  size_t v27; // rbx
  __int64 v28; // rax
  size_t v29; // [rsp+8h] [rbp-90h]
  size_t v30; // [rsp+8h] [rbp-90h]
  char *s[2]; // [rsp+10h] [rbp-88h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v33; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __int128 v35; // [rsp+48h] [rbp-50h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v36 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1400);
  ptr = nullptr;
  v7 = v3 + v4;
  dest = nullptr;
  *(__m128i *)s = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v7);
  v33 = 0;
  v35 = 0;
  v8 = unpack_dq(s, v7);
  v9 = s[0];
  v10 = s[1];
  v11 = v8;
  v12 = s[0];
  do
  {
    if ( v12 >= s[1] )
      goto LABEL_4;
    ++v12;
  }
  while ( *(v12 - 1) );
  s[0] = v12;
  if ( !v9 || (v18 = strlen(v9), (v19 = v18) == 0) )
  {
    v9 = v12;
LABEL_4:
    *(_QWORD *)&v33 = 0;
    goto LABEL_5;
  }
  v26 = ptr;
  v27 = v18 + 1;
  if ( *((_QWORD *)&v33 + 1) < v18 + 1 )
  {
    v30 = v18;
    ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
    v19 = v30;
    v26 = ptr;
  }
  v29 = v19;
  *(_QWORD *)&v33 = v27;
  memmove(v26, v9, v19);
  *((_BYTE *)ptr + v29) = 0;
  v10 = s[1];
  v9 = s[0];
LABEL_5:
  v13 = (char *)v9;
  do
  {
    if ( v13 >= v10 )
      goto LABEL_8;
    ++v13;
  }
  while ( *(v13 - 1) );
  s[0] = v13;
  if ( !v9 || (v20 = strlen(v9), (v21 = v20) == 0) )
  {
LABEL_8:
    *(_QWORD *)&v35 = 0;
    goto LABEL_9;
  }
  v22 = dest;
  v23 = v20 + 1;
  if ( *((_QWORD *)&v35 + 1) < v20 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v23, 1);
    v22 = dest;
  }
  *(_QWORD *)&v35 = v23;
  memmove(v22, v9, v21);
  *((_BYTE *)dest + v21) = 0;
LABEL_9:
  p_dest = &dest;
  if ( !a3 )
    p_dest = &ptr;
  v15 = (__int64 *)(*(_QWORD *)(v6 + 8) + 24 * v11);
  if ( v15 != (__int64 *)p_dest )
  {
    v16 = (unsigned __int64)p_dest[1];
    if ( v16 > 1 )
    {
      v24 = *p_dest;
      v25 = (void *)*v15;
      if ( v15[2] < v16 )
      {
        v28 = qvector_reserve(v15, *v15, p_dest[1], 1);
        *v15 = v28;
        v25 = (void *)v28;
      }
      v15[1] = v16;
      memmove(v25, v24, v16 - 1);
      *(_BYTE *)(*v15 + v16 - 1) = 0;
    }
    else
    {
      v15[1] = 0;
    }
  }
  if ( dest )
  {
    *(_QWORD *)&v35 = 0;
    qfree(dest);
  }
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    qfree(ptr);
  }
  return v36 - __readfsqword(0x28u);
}

