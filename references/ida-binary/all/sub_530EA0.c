unsigned __int64 __fastcall sub_530EA0(__int64 a1, const char *a2)
{
  size_t v3; // rax
  __int64 v4; // r14
  size_t v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rdi
  __int64 v10; // rax
  void *v11; // rdx
  __m128i v12; // xmm0
  void *v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v14 = nullptr;
  v15 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    v14 = (void *)qvector_reserve(&v14, 0, v3 + 1, 1);
    v15.m128i_i64[0] = v4;
    memmove(v14, a2, v5);
    *((_BYTE *)v14 + v5) = 0;
  }
  sub_52FD10((__int64)&v14, "&", (const char *)&unk_5C2F25);
  sub_52FD10((__int64)&v14, "~", (const char *)&unk_5C2F25);
  v10 = *(_QWORD *)(a1 + 48);
  v11 = v14;
  v12 = _mm_loadu_si128(&v15);
  v14 = *(void **)(a1 + 32);
  v9 = v14;
  *(_QWORD *)(a1 + 32) = v11;
  v15.m128i_i64[1] = v10;
  *(__m128i *)(a1 + 40) = v12;
  if ( v9 )
    qfree(v9, "~", v11, v6, v7, v8, v14, 0, v15.m128i_i64[1]);
  return v16 - __readfsqword(0x28u);
}
