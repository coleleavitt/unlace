unsigned __int64 __fastcall sub_5A8740(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  const char *v8; // r15
  char *v9; // rbp
  __int64 v10; // r12
  char *v11; // rbx
  char *v12; // rax
  void **p_dest; // rax
  __int64 *v14; // rbx
  unsigned __int64 v15; // rbp
  size_t v17; // rax
  size_t v18; // r8
  size_t v19; // rax
  size_t v20; // rbx
  void *v21; // rdi
  size_t v22; // rbp
  void *v23; // r13
  void *v24; // rdi
  void *v25; // rdi
  size_t v26; // rbx
  __int64 v27; // rax
  size_t v28; // [rsp+8h] [rbp-90h]
  size_t v29; // [rsp+8h] [rbp-90h]
  char *s[2]; // [rsp+10h] [rbp-88h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __int128 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v35 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1592);
  ptr = nullptr;
  dest = nullptr;
  *(__m128i *)s = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v32 = 0;
  v34 = 0;
  v7 = unpack_dq(s);
  v8 = s[0];
  v9 = s[1];
  v10 = v7;
  v11 = s[0];
  do
  {
    if ( v11 >= s[1] )
      goto LABEL_4;
    ++v11;
  }
  while ( *(v11 - 1) );
  s[0] = v11;
  if ( !v8 || (v17 = strlen(v8), (v18 = v17) == 0) )
  {
    v8 = v11;
LABEL_4:
    *(_QWORD *)&v32 = 0;
    goto LABEL_5;
  }
  v25 = ptr;
  v26 = v17 + 1;
  if ( *((_QWORD *)&v32 + 1) < v17 + 1 )
  {
    v29 = v17;
    ptr = (void *)qvector_reserve(&ptr, ptr, v26, 1);
    v18 = v29;
    v25 = ptr;
  }
  v28 = v18;
  *(_QWORD *)&v32 = v26;
  memmove(v25, v8, v18);
  *((_BYTE *)ptr + v28) = 0;
  v9 = s[1];
  v8 = s[0];
LABEL_5:
  v12 = (char *)v8;
  do
  {
    if ( v12 >= v9 )
      goto LABEL_8;
    ++v12;
  }
  while ( *(v12 - 1) );
  s[0] = v12;
  if ( !v8 || (v19 = strlen(v8), (v20 = v19) == 0) )
  {
LABEL_8:
    *(_QWORD *)&v34 = 0;
    goto LABEL_9;
  }
  v21 = dest;
  v22 = v19 + 1;
  if ( *((_QWORD *)&v34 + 1) < v19 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v22, 1);
    v21 = dest;
  }
  *(_QWORD *)&v34 = v22;
  memmove(v21, v8, v20);
  *((_BYTE *)dest + v20) = 0;
LABEL_9:
  p_dest = &dest;
  if ( !a3 )
    p_dest = &ptr;
  v14 = (__int64 *)(*(_QWORD *)(v6 + 8) + 24 * v10);
  if ( v14 != (__int64 *)p_dest )
  {
    v15 = (unsigned __int64)p_dest[1];
    if ( v15 > 1 )
    {
      v23 = *p_dest;
      v24 = (void *)*v14;
      if ( v14[2] < v15 )
      {
        v27 = qvector_reserve(v14, *v14, p_dest[1], 1);
        *v14 = v27;
        v24 = (void *)v27;
      }
      v14[1] = v15;
      memmove(v24, v23, v15 - 1);
      *(_BYTE *)(*v14 + v15 - 1) = 0;
    }
    else
    {
      v14[1] = 0;
    }
  }
  if ( dest )
  {
    *(_QWORD *)&v34 = 0;
    qfree(dest);
  }
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  return v35 - __readfsqword(0x28u);
}
