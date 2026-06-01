char __fastcall sub_F53190(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rsi

  LOBYTE(v3) = a2;
  v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a1->m128i_i8[5] & 1) != 0 )
  {
    v3 = v4[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v4[1] | (unsigned __int8)v3) & 7;
    v4 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (v3 & 8) != 0 )
    v4 = (_QWORD *)*v4;
  return sub_F521E0(a1, (__int64)v4, a3);
}

