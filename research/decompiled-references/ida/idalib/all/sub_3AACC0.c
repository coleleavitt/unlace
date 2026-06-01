unsigned __int64 __fastcall sub_3AACC0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+18h] [rbp-20h]
  char v9; // [rsp+1Ch] [rbp-1Ch]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v8 = a4;
  v7[1] = a3;
  v7[2] = a2;
  v9 = 1;
  v4 = *(unsigned __int8 *)(dbg + 80LL);
  v5 = a3 - v4 + 1;
  if ( a3 < v4 )
    v5 = 0;
  v7[0] = &off_2B25E00;
  sub_3AAA80(*(_QWORD *)(qword_2CCB598 + 1576) + 72LL, (__int64)v7, v5, a3 + a4);
  return v10 - __readfsqword(0x28u);
}
