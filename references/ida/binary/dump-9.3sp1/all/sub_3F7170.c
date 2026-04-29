__int64 __fastcall sub_3F7170(
        __int64 a1,
        double a2,
        __m128 a3,
        __int64 a4,
        int a5,
        unsigned __int8 *a6,
        unsigned int a7)
{
  unsigned __int8 v10; // al
  _QWORD v12[13]; // [rsp+0h] [rbp-68h] BYREF

  v12[5] = __readfsqword(0x28u);
  qstrncpy();
  qstrncat();
  v10 = sub_3EE260(a1 + 24);
  if ( v10 <= 1u )
    sub_1D6840(a1, v10, 2, a5, a5, 0);
  return sub_3F50D0(a1, (__int64)v12, a5, a6, a7, a2, a3);
}
