unsigned __int64 __fastcall sub_199F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v4[4])(_QWORD, unsigned __int64 *, _QWORD); // [rsp+0h] [rbp-68h] BYREF
  _QWORD v5[5]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v6 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 2216) )
    sub_EC40();
  sub_198E0(a2);
  v5[2] = a1;
  v5[0] = &off_3C2C8;
  v4[0] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))&off_3C330;
  v5[1] = 0;
  v5[3] = a2;
  v4[1] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))a1;
  v4[2] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))v5;
  sub_12B20(a1, v4, a2 + 112);
  return v6 - __readfsqword(0x28u);
}
