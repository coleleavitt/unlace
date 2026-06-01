__int64 __fastcall sub_2541C0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  const char *v8; // rsi
  unsigned int v9; // ebx
  int v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  __int128 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v8 = (const char *)(unsigned int)dword_8BA594;
  v14 = __readfsqword(0x28u);
  v11 = -2;
  v13 = 0;
  v12 = *((_QWORD *)&xmmword_8CC810 + 1);
  v9 = (unsigned __int8)sub_2532C0(
                          dword_8CC428,
                          (unsigned int)dword_8BA594,
                          (__int64)&v11,
                          0.0,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8);
  if ( v11 >= -1 && v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v8);
  }
  return v9;
}
