__int64 __fastcall sub_593A58(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  __int64 v6; // [rsp+8h] [rbp-28h]
  __int64 v7; // [rsp+10h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+18h] [rbp-18h] BYREF

  v6 = a1;
  v5 = a2;
  v7 = sub_5940AC(a1);
  v2 = sub_5940DC(&v5, &v7);
  v8[0] = sub_5939A6(v6);
  v3 = sub_594120(v8, v2);
  return sub_594160(v6, v3);
}
