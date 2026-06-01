__int64 __fastcall sub_37C4A0(__int64 a1, __int64 a2)
{
  __int64 edm_by_tid; // rax
  void *v3; // rdi
  void *v4; // rax
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v10; // [rsp+10h] [rbp-50h]
  void *v11; // [rsp+20h] [rbp-40h]
  __m128i v12; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v8 = 0;
  v10 = 0;
  ptr = nullptr;
  v11 = nullptr;
  v12 = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  edm_by_tid = get_edm_by_tid(&v8, &ptr);
  v3 = v11;
  if ( edm_by_tid != -1 )
  {
    v4 = *(void **)(a2 + 8);
    v5 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v11;
    v6 = _mm_load_si128(&v12);
    v11 = v4;
    v3 = v4;
    v12.m128i_i64[1] = v5;
    *(__m128i *)(a2 + 16) = v6;
  }
  if ( v3 )
  {
    v12.m128i_i64[0] = 0;
    qfree(v3);
  }
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  clear_tinfo_t(&v8);
  return 0;
}
