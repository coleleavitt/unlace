__int64 __fastcall sub_7843D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v8[48]; // [rsp+18h] [rbp-30h] BYREF

  v7[0] = 0;
  sub_1862370(v7, "max_conflicts", 0);
  sub_1862300(v7, "enable_pre_simplify", 1);
  v2 = sub_186B270(0x40u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C54648;
  *(_QWORD *)(v2 + 16) = 0;
  sub_1858590(v2 + 24, a2);
  *(_QWORD *)(v2 + 48) = a1;
  *(_QWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  v7[1] = a2;
  sub_17F9A60(v8, "sat");
  sub_18572D0(v8);
  v3 = sub_EE8D70(v2);
  v4 = sub_EE8E00(v3, v7);
  v5 = sub_EE8D70(v4);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, a2);
  sub_18572D0(v7);
  return v5;
}

