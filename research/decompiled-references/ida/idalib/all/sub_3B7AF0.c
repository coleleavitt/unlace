unsigned __int64 __fastcall sub_3B7AF0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  char *v4; // r13
  unsigned __int16 v5; // ax
  __int64 v6; // rbx
  __int64 v7; // rbx
  char *v8; // r14
  __int64 v9; // r15
  void **p_ptr; // rcx
  char *v11; // rax
  _QWORD **v12; // rbx
  void *v13; // rdi
  __int64 v15; // [rsp+8h] [rbp-C0h]
  __int64 v16; // [rsp+10h] [rbp-B8h]
  __m128i v18; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v20; // [rsp+38h] [rbp-90h]
  __int64 v21; // [rsp+50h] [rbp-78h] BYREF
  int v22; // [rsp+58h] [rbp-70h] BYREF
  void *v23; // [rsp+60h] [rbp-68h]
  int *v24; // [rsp+68h] [rbp-60h]
  int *v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v27 = __readfsqword(0x28u);
  v18 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + *(unsigned int *)(a2 + 4)));
  v15 = unpack_dq(&v18);
  v4 = (char *)unpack_dq(&v18);
  v16 = unpack_dq(&v18);
  v20 = 0;
  ptr = nullptr;
  v5 = unpack_dw(&v18, v18.m128i_i64[1]);
  v6 = v5;
  if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)v5 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v5, 8);
    *(_QWORD *)&v20 = v6;
  }
  else
  {
    *(_QWORD *)&v20 = v5;
    if ( !v5 )
      goto LABEL_5;
  }
  v7 = 8 * v6;
  v8 = v4;
  v9 = 0;
  do
  {
    v8 += unpack_dq(&v18);
    *(_QWORD *)((char *)ptr + v9) = v8;
    v9 += 8;
  }
  while ( v9 != v7 );
LABEL_5:
  v22 = 0;
  p_ptr = &ptr;
  v23 = nullptr;
  v24 = &v22;
  v25 = &v22;
  v26 = 0;
  if ( a3 )
  {
    v11 = v4;
    v4 = (char *)v15;
    p_ptr = nullptr;
    v15 = (__int64)v11;
  }
  sub_3B40A0(&v21, v4, v16, p_ptr);
  sub_3B7060((__int64)v4, v15, (__int64)&v21);
  v12 = (_QWORD **)v23;
  if ( v23 )
  {
    do
    {
      sub_3AC530(v12[3]);
      v13 = v12;
      v12 = (_QWORD **)v12[2];
      operator delete(v13, 0x28u);
    }
    while ( v12 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  return v27 - __readfsqword(0x28u);
}
