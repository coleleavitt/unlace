__int64 __fastcall sub_1F3BF0(__int64 a1, __int64 a2, double a3)
{
  char v3; // al
  __int64 v4; // rcx
  int v5; // r12d
  int v6; // ebx
  const char *v7; // rdi
  unsigned __int64 v8; // rax
  void *v9; // rax
  void *v10; // r12
  size_t v11; // rbx
  __int64 v12; // r13
  __m128i v13; // xmm0
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  bool v18; // [rsp+Fh] [rbp-79h] BYREF
  void *src; // [rsp+10h] [rbp-78h] BYREF
  _BYTE *v20; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  int v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+38h] [rbp-50h]
  void *dest; // [rsp+40h] [rbp-48h] BYREF
  __m128i v26; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v3 = sub_1F07A0(a1, (__int64)&v21, (__int64)&v23, &v18);
  v5 = v22;
  v6 = v24;
  if ( !v3 || !v18 || sub_1EB270(a1, a2, 0, v4, a3) <= 0 )
    return -1;
  v7 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  v8 = qustrlen(v7);
  if ( v8 < v6 )
    v6 = v8;
  src = *(void **)a2;
  if ( v6 <= v5 )
    v5 = v6;
  if ( skip_utf8(&src, v5) )
    return -1;
  v20 = src;
  v9 = (void *)skip_utf8(&v20, v6 - v5);
  if ( v9 )
    return -1;
  v10 = src;
  dest = nullptr;
  v26 = 0;
  v11 = v20 - (_BYTE *)src;
  v12 = v20 - (_BYTE *)src + 1;
  if ( v20 - (_BYTE *)src != -1 )
  {
    v9 = (void *)qvector_reserve(&dest, 0, v20 - (_BYTE *)src + 1, 1);
    dest = v9;
  }
  v26.m128i_i64[0] = v12;
  *((_BYTE *)v9 + v11) = 0;
  memmove(dest, v10, v11);
  v13 = _mm_loadu_si128(&v26);
  v14 = *(char **)a2;
  v15 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = dest;
  dest = v14;
  v26.m128i_i64[1] = v15;
  *(__m128i *)(a2 + 8) = v13;
  v16 = (v13.m128i_i64[0] == 0) + v13.m128i_i64[0] - 1;
  if ( v14 )
  {
    v26.m128i_i64[0] = 0;
    qfree(v14, (const char *)v10);
  }
  return v16;
}
