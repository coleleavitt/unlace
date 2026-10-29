__int64 __fastcall sub_E21F10(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r12
  __int64 v4; // [rsp+0h] [rbp-28h]
  _BYTE v5[32]; // [rsp+8h] [rbp-20h] BYREF

  v1 = a1;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
  sub_17F9A60(v5, "solver");
  if ( (unsigned __int8)sub_1859630(v4, "slice", v5, 0) )
  {
    v3 = sub_186B270(0x120u);
    sub_E2C430(v3, a1);
    v1 = v3;
  }
  sub_18572D0(v5);
  return v1;
}

