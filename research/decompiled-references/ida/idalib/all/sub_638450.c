__int64 __fastcall sub_638450(__m128i *a1, __int64 a2, int a3)
{
  unsigned int v4; // ebp

  v4 = sub_635160(a1 + 40, a1->m128i_i8, 1u);
  if ( (_BYTE)v4 )
    qstrncpy(a2, &a1[40].m128i_u16[3], a3);
  return v4;
}
