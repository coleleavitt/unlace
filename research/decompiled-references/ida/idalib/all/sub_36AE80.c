__int64 __fastcall sub_36AE80(_QWORD *a1, __m128i *a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  void *v6; // rdi
  __m128i v7; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v10; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v2 = a1[1] == 65;
  v3 = a1[5];
  v11 = __readfsqword(0x28u);
  if ( v2 )
  {
    a2->m128i_i64[1] = netnode_altval(v3, a1[9], 65);
  }
  else
  {
    v4 = a1[9];
    ptr = nullptr;
    v10 = 0;
    v5 = netnode_qsupstr(v3, &ptr, v4, 83);
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
  }
  return 0;
}
