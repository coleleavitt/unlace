__int64 __fastcall sub_C8D10(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  _QWORD v8[4]; // [rsp+0h] [rbp-38h] BYREF
  int v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v8[3] = a1;
  v8[0] = off_230430;
  v9 = a2;
  v8[1] = 0;
  v8[2] = 0;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(86, v8, 2, &callui, a5, a6);
  v8[0] = &off_236C80;
  qsem_free();
  return v6;
}

