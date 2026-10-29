__int64 __fastcall sub_3AC430(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = -2;
  return (*(unsigned int (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)a3 + 104LL))(
           a3,
           v4,
           a1,
           0xFFFFFFFFLL,
           a2);
}
