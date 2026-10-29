__m128i *__fastcall sub_FFF6C0(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rax

  v3 = (__int64 *)sub_FFF2F0(a2, a3, 0);
  sub_FF9C60(a1, v3, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), 0);
  return a1;
}

