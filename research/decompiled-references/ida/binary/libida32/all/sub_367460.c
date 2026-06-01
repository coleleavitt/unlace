__int64 __fastcall sub_367460(__int64 a1, __m128i *a2)
{
  const char *v2; // rdx
  bool v3; // zf
  unsigned int v4; // eax
  __int64 v5; // rax
  void *v6; // rdi
  __m128i v7; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v10; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 48) == 0;
  v4 = *(_DWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v10 = 0;
  if ( !v3 )
    v2 = *(const char **)(a1 + 40);
  v5 = netnode_qhashnext(v4, &ptr, v2, 72);
  v6 = ptr;
  if ( v5 < 0 )
  {
    if ( ptr )
    {
      v10.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  else
  {
    v7 = _mm_loadu_si128(&v10);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = (__int64)v6;
    a2[1] = v7;
  }
  return 0;
}

