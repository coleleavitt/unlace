__int64 __fastcall sub_2266790(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  unsigned int v4; // r12d
  _BYTE *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned int v8; // r12d
  void *v10; // r13
  __int64 v11; // rdi
  void *v12; // rdi
  void *ptr; // [rsp+0h] [rbp-148h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-140h]
  _BYTE v15[304]; // [rsp+18h] [rbp-130h] BYREF

  v2 = a1[1];
  v3 = *a1;
  v4 = sub_2259FA0(*a1, v2);
  v5 = (_BYTE *)sub_228B1B0(v3, v2, v4);
  ptr = v15;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  sub_A1FE50(&ptr, v5, &v5[v6]);
  sub_228F0B0(&ptr, 1, v4);
  v7 = n[0];
  if ( n[0] )
  {
    v10 = ptr;
    a1[1] = 0;
    v11 = 0;
    if ( v7 > a1[2] )
    {
      sub_2236E10((__int64)a1, a1 + 3, v7, 1);
      v11 = a1[1];
    }
    v12 = (void *)(*a1 + v11);
    memcpy(v12, v10, v7);
    a1[1] += v7;
    v8 = 0;
    std::_V2::system_category((std::_V2 *)v12);
  }
  else
  {
    v8 = 22;
    std::_V2::generic_category((std::_V2 *)&ptr);
  }
  if ( ptr != v15 )
    free(ptr);
  return v8;
}
