__int64 __fastcall set_refinfo(int a1, char a2, unsigned __int8 a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v7[6]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v7[3] = a3;
  v7[0] = a4;
  v7[1] = a5;
  v7[2] = a6;
  return sub_4CABE0(*(__int64 **)(qword_2CA1698 + 1480), a1, a2, v7);
}

