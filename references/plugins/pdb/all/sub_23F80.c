__int64 __fastcall sub_23F80(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = a3;
  v7 = a4;
  v5[2] = a1;
  v5[1] = a2;
  v5[0] = &off_A9B78;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)a1 + 16LL))(a1, a2, 2, v5);
}
