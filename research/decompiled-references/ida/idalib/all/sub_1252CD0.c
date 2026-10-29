unsigned __int64 __fastcall sub_1252CD0(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rsi
  __m128i *v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-90h] BYREF
  __m128i v9; // [rsp+10h] [rbp-88h] BYREF
  __int64 v10; // [rsp+20h] [rbp-78h]
  __m128i v11[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(__int64 **)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 40);
  v2 = v8;
  *(_QWORD *)(a1 + 40) = v8 + 1;
  if ( v3 == *(__int64 **)(a1 + 16) )
  {
    sub_1250420(a1, v3, &v8);
  }
  else
  {
    *v3 = v2;
    *(_QWORD *)(a1 + 8) = v3 + 1;
  }
  v9.m128i_i32[0] = 8;
  v9.m128i_i64[1] = -1;
  v10 = v8;
  sub_124FC70(v11, &v9);
  v4 = *(__m128i **)(a1 + 64);
  if ( v4 == *(__m128i **)(a1 + 72) )
  {
    sub_1252750(a1 + 56, *(const __m128i **)(a1 + 64), v11);
    v5 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    sub_124FC70(v4, v11);
    v5 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v5;
  }
  v6 = 0xAAAAAAAAAAAAAAABLL * ((v5 - *(_QWORD *)(a1 + 56)) >> 4);
  if ( v6 > 0x186A0 )
    abort();
  sub_124FBE0((__int64)v11);
  sub_124FBE0((__int64)&v9);
  return v6 - 1;
}
