__int64 __fastcall sub_BA8670(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = sub_B8C330(a1);
  v3 = *(_QWORD *)(a1 + 80);
  v4[0] = sub_F67970(&v3, v1);
  return sub_F69C10(v4, v1, 0, 0, 1);
}
