__int64 __fastcall sub_658850(_QWORD *a1, unsigned int a2, __int16 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // bl
  unsigned int v7; // edx
  int v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v6 = a3;
  v11 = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v9, (int)&v10, (int)&callui, a6);
  v7 = -(a3 & 1);
  if ( (v6 & 1) != 0 )
    return sub_3BC980(a1, a2, v7, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_39AFB0, nullptr);
  else
    return sub_3BCA60(a1, a2, v7, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_39AFB0, nullptr);
}

