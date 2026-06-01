unsigned __int64 __fastcall sub_1252C10(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __m128i *v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __m128i v8; // [rsp+0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+10h] [rbp-78h]
  __m128i v10[5]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD **)(a1 + 8);
  v8.m128i_i32[0] = 9;
  v8.m128i_i64[1] = -1;
  v3 = *--v2;
  *(_QWORD *)(a1 + 8) = v2;
  v9 = v3;
  sub_124FC70(v10, &v8);
  v4 = *(__m128i **)(a1 + 64);
  if ( v4 == *(__m128i **)(a1 + 72) )
  {
    sub_1252750(a1 + 56, *(const __m128i **)(a1 + 64), v10);
    v5 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    sub_124FC70(v4, v10);
    v5 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v5;
  }
  v6 = 0xAAAAAAAAAAAAAAABLL * ((v5 - *(_QWORD *)(a1 + 56)) >> 4);
  if ( v6 > 0x186A0 )
    abort();
  sub_124FBE0((__int64)v10);
  sub_124FBE0((__int64)&v8);
  return v6 - 1;
}
