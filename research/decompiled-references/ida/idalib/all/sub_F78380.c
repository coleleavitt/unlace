void __fastcall sub_F78380(unsigned __int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // r8

  v3 = *a1;
  v4 = (_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = v3 & 7;
  if ( (a3->m128i_i8[5] & 1) != 0 )
  {
    v3 = v5 | v4[1];
    v4 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
    v5 = v3 & 7;
  }
  if ( (v3 & 8) != 0 )
  {
    v5 |= v4[3];
    v4 = (_QWORD *)*v4;
  }
  sub_F780D0((__int64)v4, v5, a2, a3);
}
