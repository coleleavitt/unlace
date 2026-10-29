__int64 __fastcall get_wide_byte(unsigned int a1)
{
  __int64 v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  sub_3BA160(*(_QWORD **)(qword_2CA1698 + 1480), v2, a1);
  return v2[0];
}

