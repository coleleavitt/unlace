__int64 __fastcall sub_4A0370(__int64 a1, int a2, int a3, __int64 a4)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v9[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  int v11; // [rsp+10h] [rbp-48h]
  void *v12; // [rsp+18h] [rbp-40h]
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  void *ptr; // [rsp+30h] [rbp-28h]

  sub_1684300(&v10, a4);
  v14 = 0;
  ptr = nullptr;
  sub_4A3F80((int)v9, (int)&v13, a3, v5, v6, v7, a2, v10, v11, v12);
  if ( ptr )
    sub_186B220(ptr);
  return 1;
}

