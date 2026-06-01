__int64 __fastcall sub_33D910(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v9[32]; // [rsp+0h] [rbp-20h] BYREF

  v1 = a1 + 880;
  v2 = *(_QWORD *)(a1 + 888);
  sub_180C5A0(v9, "pb");
  v3 = (unsigned int)sub_15D1320(v2 + 560, v9);
  v4 = sub_8E3AC0(a1 + 880);
  if ( (_DWORD)v3 == -1
    || (result = *(_QWORD *)(v4 + 8672)) == 0
    || (unsigned int)v3 >= *(_DWORD *)(result - 4)
    || !*(_QWORD *)(result + 8 * v3) )
  {
    v6 = sub_8E3AC0(v1);
    v7 = sub_186B270(0x3C8u);
    v8 = sub_8E3AC0(v1);
    sub_B04810(v7, v8);
    return sub_8F1E10(v6, v7);
  }
  return result;
}

