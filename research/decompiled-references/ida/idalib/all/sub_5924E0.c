unsigned __int64 __fastcall sub_5924E0(__int64 a1, __int64 a2, signed __int64 a3)
{
  _QWORD *exception; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  const void *v8; // rbp
  void *v9; // rdi
  __int64 v10; // rax
  void *v11; // rdx
  __m128i v12; // xmm0
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 48);
  if ( v4 < v6 )
  {
    if ( !*(_BYTE *)(a1 + 60) )
      sub_378C70((__int64)"Too short OMF record");
    exception = __cxa_allocate_exception(8u);
    *exception = &off_2BFB280;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_58FF20);
  }
  if ( a3 == -1 )
  {
    if ( v6 == v4 )
      goto LABEL_10;
    a3 = v4 - v6;
  }
  else
  {
    if ( v6 == v4 )
    {
LABEL_10:
      *(_QWORD *)(a2 + 8) = 0;
      return v16 - __readfsqword(0x28u);
    }
    v7 = v4 - v6;
    if ( a3 > v7 )
      a3 = v7;
  }
  if ( a3 <= 0 )
    goto LABEL_10;
  v8 = (const void *)(*(_QWORD *)a1 + v6);
  ptr = nullptr;
  v15 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, a3 + 1, 1);
  v15.m128i_i64[0] = a3 + 1;
  memmove(ptr, v8, a3);
  *((_BYTE *)ptr + a3) = 0;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = ptr;
  v12 = _mm_loadu_si128(&v15);
  ptr = *(void **)a2;
  v9 = ptr;
  *(_QWORD *)a2 = v11;
  v15.m128i_i64[1] = v10;
  *(__m128i *)(a2 + 8) = v12;
  if ( v9 )
  {
    v15.m128i_i64[0] = 0;
    qfree(v9);
  }
  return v16 - __readfsqword(0x28u);
}
