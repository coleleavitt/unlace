__int64 __fastcall sub_3996D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+0h] [rbp-448h] BYREF
  _BYTE v10[1032]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v11; // [rsp+428h] [rbp-20h]

  v6 = *(_QWORD *)(a2 + 24);
  v11 = __readfsqword(0x28u);
  qsnprintf((unsigned int)v10, 1024, (unsigned int)"*.%s", v6, a5, a6);
  v7 = *(_QWORD *)(a1 + 8);
  v9[0] = &off_2B25C78;
  v9[2] = a2;
  v9[1] = v7;
  return (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, _QWORD *, _QWORD))sub_641020)(0, 0, v10, v9, 0);
}
