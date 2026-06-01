__int64 __fastcall sub_D50080(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v5[2]; // [rsp+8h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+10h] [rbp-20h] BYREF

  *(_QWORD *)v5 = a2;
  v6[0] = 2;
  v2 = *(_QWORD *)(a1 + 8);
  v6[1] = 0;
  v3 = sub_15DCAD0(v2, (int)v5, 0);
  sub_15D0DF0(v6);
  return v3;
}

