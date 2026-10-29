__int64 __fastcall sub_690600(__m128i *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rax
  int v10[4]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  ptr = (void *)__readfsqword(0x28u);
  *(__m128i *)v10 = _mm_unpacklo_epi64(
                      (__m128i)*(unsigned __int64 *)(a2 + 8),
                      (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dq(v10);
  v6 = (__int64 *)unpack_dq(v10);
  v7 = unpack_dq(v10);
  if ( a3 )
  {
    v8 = v6;
    v6 = (__int64 *)v5;
    v5 = (__int64)v8;
  }
  sub_690120(a1, v6, v5, v7);
  return (__int64)ptr - __readfsqword(0x28u);
}
