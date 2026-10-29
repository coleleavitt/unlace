__int64 __fastcall sub_4CB1B0(__int64 *a1, unsigned int a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v8[6]; // [rsp+0h] [rbp-28h] BYREF
  int v9[2]; // [rsp+18h] [rbp-10h]

  *(_QWORD *)v9 = __readfsqword(0x28u);
  v8[3] = a4;
  v8[0] = a5;
  v8[1] = a6;
  v8[2] = a7;
  return sub_4CADA0(a1, a2, a3, (__int64 *)v8);
}

