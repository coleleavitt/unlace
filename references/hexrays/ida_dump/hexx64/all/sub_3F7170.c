__int64 __fastcall sub_3F7170(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int8 a6,
        double a7,
        __m128 a8)
{
  char *v12; // rsi
  char v13; // al
  char v15[40]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  qstrncpy(v15, a2, 32);
  v12 = (char *)"fs";
  if ( *(_BYTE *)(a1 + 56) != 33 )
    v12 = "gs";
  qstrncat(v15, v12, 32);
  v13 = sub_3EE260(a1 + 24);
  if ( (unsigned __int8)v13 <= 1u )
    sub_1D6840(a1, v13, 2u, a3, a3, 0);
  return sub_3F50D0(a1, v15, a3, a4, a5, a6, a7, a8);
}
