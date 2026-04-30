__int64 __fastcall sub_2F2AC0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  unsigned int v8; // ebx
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  __int128 v11; // [rsp+8h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v8 = (unsigned __int8)sub_2F2720(3, (const char *)&v10, 1u, 0.0, a2, a3, a4, a5, a6, a7, a8);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10, (const char *)&v10);
  }
  return v8;
}
