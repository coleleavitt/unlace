__m128i *__fastcall sub_9EE5F0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  size_t v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-A8h] BYREF
  __m128i *v12; // [rsp+10h] [rbp-98h] BYREF
  __int64 v13; // [rsp+18h] [rbp-90h]
  __m128i v14; // [rsp+20h] [rbp-88h] BYREF
  void *v15[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  __m128i v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h] BYREF
  char v19; // [rsp+70h] [rbp-38h]

  v3 = *(_QWORD *)(a3 + 2320);
  v4 = *(_QWORD *)(a3 + 2312);
  v11 = 0;
  sub_9B4ED0(&v17, a2, v4, v3, (__int64)&v11);
  if ( !v19 )
  {
    a1[2].m128i_i8[0] = 0;
    return a1;
  }
  v12 = &v14;
  v6 = j__strlen("std::span<");
  sub_9EB4F0(&v12, "std::span<", (__int64)&aStdSpan[v6]);
  sub_9EE560(&v12, v17.m128i_i64[0], v17.m128i_u64[1]);
  if ( BYTE8(v11) )
  {
    v10 = j__strlen(" ");
    if ( v10 > 0x7FFFFFFFFFFFFFFFLL - v13 )
LABEL_15:
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&v12, " ", v10);
    sub_F71C30(v15, &v11);
    sub_9EE560(&v12, (_BYTE *)v15[0], (size_t)v15[1]);
    if ( v15[0] != &v16 )
      operator delete(v15[0]);
  }
  v7 = j__strlen(">");
  if ( v7 > 0x7FFFFFFFFFFFFFFFLL - v13 )
    goto LABEL_15;
  sub_9EE560(&v12, ">", v7);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v12 == &v14 )
  {
    a1[1] = _mm_load_si128(&v14);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v12;
    a1[1].m128i_i64[0] = v14.m128i_i64[0];
  }
  v8 = v13;
  v9 = v19 == 0;
  a1[2].m128i_i8[0] = 1;
  a1->m128i_i64[1] = v8;
  if ( v9 || (__int64 *)v17.m128i_i64[0] == &v18 )
    return a1;
  operator delete((void *)v17.m128i_i64[0]);
  return a1;
}
