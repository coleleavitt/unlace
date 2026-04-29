__int64 __fastcall sub_38AC30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[5] = __readfsqword(0x28u);
  v7[3] = a3;
  v7[1] = a1;
  v7[2] = a2;
  v7[0] = off_4BA558;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(172, v7, &callui, a4, a5, a6);
}
