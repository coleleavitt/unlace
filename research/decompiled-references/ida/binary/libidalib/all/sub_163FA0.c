__int64 __fastcall sub_163FA0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  void *v3; // r12
  size_t v4; // rbx
  __int64 v5; // r13
  __m128i v6; // xmm0
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rbx
  bool v11; // [rsp+Fh] [rbp-79h] BYREF
  void *src; // [rsp+10h] [rbp-78h]
  _BYTE *v13; // [rsp+18h] [rbp-70h]
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  int v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+38h] [rbp-50h]
  void *dest; // [rsp+40h] [rbp-48h]
  __m128i v19; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !(unsigned __int8)sub_161A40(a1, (__int64)&v14, (__int64)&v16, &v11) )
    return -1;
  if ( !v11 )
    return -1;
  if ( sub_15E4F0(a1, a2, 0) <= 0 )
    return -1;
  qustrlen();
  src = *(void **)a2;
  if ( skip_utf8() )
    return -1;
  v13 = src;
  v2 = (void *)skip_utf8();
  if ( v2 )
    return -1;
  v3 = src;
  dest = nullptr;
  v19 = 0;
  v4 = v13 - (_BYTE *)src;
  v5 = v13 - (_BYTE *)src + 1;
  if ( v13 - (_BYTE *)src != -1 )
  {
    v2 = (void *)qvector_reserve();
    dest = v2;
  }
  v19.m128i_i64[0] = v5;
  *((_BYTE *)v2 + v4) = 0;
  memmove(dest, v3, v4);
  v6 = _mm_loadu_si128(&v19);
  v7 = *(void **)a2;
  v8 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = dest;
  dest = v7;
  v19.m128i_i64[1] = v8;
  *(__m128i *)(a2 + 8) = v6;
  v9 = (v6.m128i_i64[0] == 0) + v6.m128i_i64[0] - 1;
  if ( v7 )
  {
    v19.m128i_i64[0] = 0;
    qfree();
  }
  return v9;
}

