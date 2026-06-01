__int64 __fastcall sub_10E7DA0(__int64 a1, const void **a2)
{
  size_t v3; // r12
  const void *v4; // rax
  const void *v5; // r13
  size_t v6; // rax
  unsigned __int64 v7; // rax
  __m128i *v8; // rax
  __int64 *v9; // rdi
  size_t v11; // rax
  size_t v12; // rax
  void *v13[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF

  v3 = (size_t)a2[1];
  v4 = a2[5];
  if ( v3 )
  {
    if ( v4 )
    {
      *(_QWORD *)a1 = a1 + 16;
      v11 = j__strlen("the 'Dir' and 'Error' keys may not both be specified");
      sub_DD43A0((_QWORD *)a1, "the 'Dir' and 'Error' keys may not both be specified", (__int64)&aTheDirAndError[v11]);
      return a1;
    }
  }
  else if ( !v4 )
  {
    *(_QWORD *)a1 = a1 + 16;
    v12 = j__strlen("one of the 'Dir' and 'Error' keys must be specified");
    sub_DD43A0((_QWORD *)a1, "one of the 'Dir' and 'Error' keys must be specified", (__int64)&aOneOfTheDirAnd[v12]);
    return a1;
  }
  v5 = *a2;
  v6 = j__strlen("/");
  if ( v3 < v6 || v6 && memcmp(v5, "/", v6) )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    sub_BE13C0((__int64)v13, "paths must be relative but \"", (__int64)a2);
    v7 = j__strlen("\" starts with \"/\"");
    if ( v7 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v13[1] )
      std::__throw_length_error("basic_string::append");
    v8 = (__m128i *)sub_9CA820(v13, "\" starts with \"/\"", v7);
    *(_QWORD *)a1 = a1 + 16;
    if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
    {
      *(__m128i *)(a1 + 16) = _mm_loadu_si128(v8 + 1);
    }
    else
    {
      *(_QWORD *)a1 = v8->m128i_i64[0];
      *(_QWORD *)(a1 + 16) = v8[1].m128i_i64[0];
    }
    *(_QWORD *)(a1 + 8) = v8->m128i_i64[1];
    v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
    v9 = (__int64 *)v13[0];
    v8->m128i_i64[1] = 0;
    v8[1].m128i_i8[0] = 0;
    if ( v9 != &v14 )
    {
      operator delete(v9);
      return a1;
    }
  }
  return a1;
}

