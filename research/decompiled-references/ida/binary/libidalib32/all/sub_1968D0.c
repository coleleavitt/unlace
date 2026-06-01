__int64 __fastcall sub_1968D0(__int64 *a1, double a2, double a3, __m128 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rax

  v5 = sub_1965F0(a1, nullptr, 1, a2, a3, a4);
  LOBYTE(v4) = v5 != 0;
  if ( v5 )
    sub_1963F0(a1, (_BYTE *)&qword_68 + 1, 0, (_BYTE *)&qword_68 + 1, 0, 1, a2, a3, a4, 7u);
  return v4;
}

