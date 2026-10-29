bool __fastcall calc_switch_cases(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  __int64 v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-20h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v7 = a2;
  v8 = a1;
  v5 = &off_2AFEA50;
  v6 = -1;
  return (unsigned int)sub_43A340(*(_QWORD **)(qword_2CA1698 + 1480), a3, a4, (__int64)&v5, a1 == 0) != -1;
}

