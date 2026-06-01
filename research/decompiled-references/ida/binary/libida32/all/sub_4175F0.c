bool __fastcall sub_4175F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  _DWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v4 = sub_618160(a2);
  v6[0] = sub_6180E0(a2);
  v6[1] = v4;
  return (unsigned int)sub_79A4E0(a2, a3, v6, 0) == 0;
}

