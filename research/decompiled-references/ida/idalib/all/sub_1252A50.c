unsigned __int64 __fastcall sub_1252A50(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __m128 v5; // xmm0
  __m128i *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  double v10[2]; // [rsp+0h] [rbp-98h] BYREF
  int v11; // [rsp+10h] [rbp-88h] BYREF
  __m128 v12; // [rsp+18h] [rbp-80h]
  char v13; // [rsp+28h] [rbp-70h]
  __m128i v14[5]; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&v10[0] = a3;
  *(_QWORD *)&v10[1] = a2;
  v11 = 2;
  v5 = _mm_loadh_ps(v10);
  v13 = a4;
  v12 = v5;
  sub_124FC70(v14, (const __m128i *)&v11);
  v6 = *(__m128i **)(a1 + 64);
  if ( v6 == *(__m128i **)(a1 + 72) )
  {
    sub_1252750(a1 + 56, *(const __m128i **)(a1 + 64), v14);
    v7 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    sub_124FC70(v6, v14);
    v7 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v7;
  }
  v8 = 0xAAAAAAAAAAAAAAABLL * ((v7 - *(_QWORD *)(a1 + 56)) >> 4);
  if ( v8 > 0x186A0 )
    abort();
  sub_124FBE0((__int64)v14);
  sub_124FBE0((__int64)&v11);
  return v8 - 1;
}
