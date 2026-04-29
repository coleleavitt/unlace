__int64 __fastcall sub_2A0F70(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __m128i *v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)operator new(0x10u);
  *v2 = 3;
  v3 = v2;
  v2[1] = 0;
  v4 = (__m128i *)qalloc(16);
  if ( !v4 )
    sub_4C27A();
  v4->m128i_i64[0] = 0;
  v4->m128i_i64[1] = 0;
  v3[1] = v4;
  sub_2A0D50(v4, nullptr, a1);
  sub_29A1B0((__int64)a1, a2, v3);
  result = sub_2974C0((__int64)a1, *(_QWORD *)(a2 + 96));
  a1[1] = result;
  return result;
}
