__int64 __fastcall op_offset(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v7[6]; // [rsp+0h] [rbp-28h] BYREF
  int v8[2]; // [rsp+18h] [rbp-10h]

  *(_QWORD *)v8 = __readfsqword(0x28u);
  v7[3] = a3;
  v7[0] = a4;
  v7[1] = a5;
  v7[2] = a6;
  return sub_4CADA0(*(__int64 **)(qword_2CA1698 + 1480), a1, a2, (__int64 *)v7);
}

