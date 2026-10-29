char __fastcall sub_F76ED0(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  _QWORD *v5; // rsi

  LOBYTE(v4) = a2;
  v5 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a1->m128i_i8[5] & 1) != 0 )
  {
    v4 = v5[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v5[1] | (unsigned __int8)v4) & 7;
    v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (v4 & 8) != 0 )
    v5 = (_QWORD *)*v5;
  return sub_F75F20(a1, (__int64)v5, a3, a4);
}
