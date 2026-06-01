__int64 __fastcall sub_378970(__int64 a1, __m128i *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rsi
  void *v5; // rax
  __m128i v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-70h] BYREF
  void *v9; // [rsp+8h] [rbp-68h] BYREF
  __int128 v10; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-50h]
  __m128i v12; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 40);
  v13 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  v10 = 0;
  v12 = 0;
  v8 = 0;
  v9 = nullptr;
  ptr = nullptr;
  if ( !(unsigned __int8)get_type_by_tid(&v8, v4) || get_tinfo_property4(v8, 294, &v9, v2, -1, 0) == -1 )
  {
    if ( ptr )
    {
      v12.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  else
  {
    v5 = ptr;
    v6 = _mm_load_si128(&v12);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = (__int64)v5;
    a2[1] = v6;
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  clear_tinfo_t(&v8);
  return 0;
}

