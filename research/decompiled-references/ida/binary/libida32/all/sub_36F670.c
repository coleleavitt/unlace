__int64 __fastcall sub_36F670(__int64 a1, __m128i *a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  unsigned int v5; // r13d
  int v6; // r12d
  char *v7; // rdi
  void *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __m128i v12; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 40);
  v13 = __readfsqword(0x28u);
  v3 = nullptr;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 72);
    ptr = nullptr;
    v12 = 0;
    if ( v2 != -1 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
      memset((char *)ptr + v12.m128i_i64[0], 0, v2 + 1 - v12.m128i_i64[0]);
      v12.m128i_i64[0] = v2 + 1;
      v3 = ptr;
    }
    v3[v2] = 0;
    if ( v6 )
    {
      v10 = *(_QWORD *)(qword_2CA1698 + 536);
      if ( v10 )
      {
        if ( (*(_BYTE *)(v10 + 32) & 0x40) != 0 )
          callui();
        callui();
      }
    }
    else
    {
      v7 = &byte_2CA12E1;
      if ( v12.m128i_i64[0] )
        v7 = (char *)ptr;
      if ( v2 == get_bytes(v7, v2, v5, 0, 0) )
      {
        v8 = ptr;
        v9 = _mm_loadu_si128(&v12);
        a2->m128i_i8[0] = 7;
        a2->m128i_i64[1] = (__int64)v8;
        a2[1] = v9;
        return 0;
      }
    }
    if ( ptr )
    {
      v12.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  return 0;
}

