bool __fastcall add_byte(unsigned int a1, unsigned int a2)
{
  _QWORD *v2; // rbp
  __int64 v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  sub_3BA160(v2, v4, a1);
  return sub_3C98C0((__int64)v2, a1, v4[0] + a2);
}

