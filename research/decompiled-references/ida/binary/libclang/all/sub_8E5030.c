void __fastcall sub_8E5030(unsigned __int8 ***a1, _QWORD *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r15
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v12[96]; // [rsp+18h] [rbp-60h] BYREF

  v3 = *a2;
  v4 = sub_2575D50(*a2);
  v5 = *a2;
  ptr = v12;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v6 = 59 * v4 + 195;
  v8 = sub_2575D20(v3, a2, v7);
  v9 = v6 / 0xC4;
  if ( v5 == v8 )
    sub_2584F50(a2, &ptr, v9, 3, 1);
  else
    sub_2584B70(a2, &ptr, v9, 3, 1);
  sub_838D50(*a1, ptr, si128.m128i_u64[0]);
  if ( ptr != v12 )
    free(ptr);
}

