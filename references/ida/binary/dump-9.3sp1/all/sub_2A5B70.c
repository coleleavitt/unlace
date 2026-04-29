__int64 __fastcall sub_2A5B70(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __m128i *v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)operator new(0x10u);
  *v2 = 3;
  v3 = v2;
  v2[1] = 0;
  v4 = (__m128i *)qalloc();
  if ( !v4 )
    sub_4D462(16);
  v4->m128i_i64[0] = 0;
  v4->m128i_i64[1] = 0;
  v3[1] = v4;
  sub_2A5950(v4, nullptr, a1);
  sub_29EDB0((__int64)a1, a2, v3);
  result = sub_29C0C0((__int64)a1, *(_QWORD *)(a2 + 96));
  a1[1] = result;
  return result;
}
