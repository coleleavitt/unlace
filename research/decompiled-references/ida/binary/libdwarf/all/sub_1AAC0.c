__int64 __fastcall sub_1AAC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  a2[1] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 1, a3, 4);
  a2[3] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 3, a3 + 4, 4);
  a2[4] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 4, a3 + 8, 8);
  a2[5] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 5, a3 + 16, 8);
  a2[6] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 6, a3 + 24, 8);
  a2[7] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 7, a3 + 32, 8);
  a2[8] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 8, a3 + 40, 4);
  a2[10] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 10, a3 + 44, 4);
  a2[11] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 11, a3 + 48, 8);
  a2[12] = 0;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 96))(a2 + 12, a3 + 56, 8);
}

