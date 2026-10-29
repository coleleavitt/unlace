unsigned __int64 __fastcall vault_errstr(__int64 a1, unsigned int a2, __int64 a3)
{
  void *v4; // rdi
  __int64 v5; // rax
  void *v6; // rdx
  __m128i v7; // xmm0
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __m128i v10; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v10 = 0;
  if ( a2 > 0x39 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
    v10.m128i_i64[0] = 2;
    *(_BYTE *)ptr = 63;
    *((_BYTE *)ptr + 1) = 0;
  }
  else
  {
    if ( !a3 )
      get_error_string(0);
    sub_35A790((char **)&ptr);
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = ptr;
  v7 = _mm_loadu_si128(&v10);
  ptr = *(void **)a1;
  v4 = ptr;
  *(_QWORD *)a1 = v6;
  v10.m128i_i64[1] = v5;
  *(__m128i *)(a1 + 8) = v7;
  if ( v4 )
  {
    v10.m128i_i64[0] = 0;
    qfree(v4);
  }
  return v11 - __readfsqword(0x28u);
}
