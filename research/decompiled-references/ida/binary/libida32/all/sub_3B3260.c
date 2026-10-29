unsigned __int64 __fastcall sub_3B3260(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // r13d
  unsigned __int16 v5; // ax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // r15
  void **p_ptr; // rcx
  unsigned int v13; // eax
  _QWORD **v14; // rbx
  void *v15; // rdi
  int v17; // [rsp+4h] [rbp-B4h]
  int v18; // [rsp+8h] [rbp-B0h]
  __m128i v20; // [rsp+10h] [rbp-A8h] BYREF
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int128 v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+40h] [rbp-78h] BYREF
  int v24; // [rsp+48h] [rbp-70h] BYREF
  void *v25; // [rsp+50h] [rbp-68h]
  int *v26; // [rsp+58h] [rbp-60h]
  int *v27; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v29 = __readfsqword(0x28u);
  v20 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + *(unsigned int *)(a2 + 4)));
  v17 = unpack_dd(&v20);
  v4 = unpack_dd(&v20);
  v18 = unpack_dd(&v20);
  v22 = 0;
  ptr = nullptr;
  v5 = unpack_dw(&v20, v20.m128i_i64[1]);
  v8 = v5;
  if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)v5 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v5, 4);
    *(_QWORD *)&v22 = v8;
  }
  else
  {
    *(_QWORD *)&v22 = v5;
    if ( !v5 )
      goto LABEL_5;
  }
  v9 = 4 * v8;
  v10 = v4;
  v11 = 0;
  do
  {
    v10 += unpack_dd(&v20);
    *(_DWORD *)((char *)ptr + v11) = v10;
    v11 += 4;
  }
  while ( v11 != v9 );
LABEL_5:
  v24 = 0;
  p_ptr = &ptr;
  v25 = nullptr;
  v26 = &v24;
  v27 = &v24;
  v28 = 0;
  if ( a3 )
  {
    v13 = v4;
    v4 = v17;
    p_ptr = nullptr;
    v17 = v13;
  }
  sub_3AF8F0(&v23, v4, v18, p_ptr, v6, v7);
  sub_3B27E0(v4, v17, (__int64)&v23);
  v14 = (_QWORD **)v25;
  if ( v25 )
  {
    do
    {
      sub_3A7E50(v14[3]);
      v15 = v14;
      v14 = (_QWORD **)v14[2];
      operator delete(v15, 0x28u);
    }
    while ( v14 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return v29 - __readfsqword(0x28u);
}

