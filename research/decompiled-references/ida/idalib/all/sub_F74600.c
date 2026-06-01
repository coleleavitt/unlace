__int64 __fastcall sub_F74600(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  _BOOL4 v7; // ebx
  int v8; // ebx
  __int64 result; // rax

  v6 = a1->m128i_u8[2];
  v7 = (a1->m128i_i8[2] & 8) != 0;
  if ( (v6 & 0x10) == 0 )
  {
    v6 = (unsigned int)v6 & 0xFFFFFFF7;
    a1->m128i_i8[2] = v6;
  }
  v8 = 8 * v7;
  sub_F744F0(a1, *(_QWORD *)(a2 + 32), a3, v6, a5, a6);
  result = v8 | a1->m128i_i8[2] & 0xF7u;
  a1->m128i_i8[2] = v8 | a1->m128i_i8[2] & 0xF7;
  return result;
}
