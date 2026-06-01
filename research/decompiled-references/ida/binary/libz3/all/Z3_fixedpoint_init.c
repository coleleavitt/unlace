__int64 __fastcall Z3_fixedpoint_init(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rsi
  _BYTE v11[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD **)(a2 + 24);
  v3[1] = a3;
  sub_180C5A0(v11, "datalog_relation");
  v4 = v3[6];
  if ( !(unsigned __int8)sub_15D1480(v4 + 560, v11)
    || (v10 = (unsigned int)sub_15D1320(v4 + 560, v11), !sub_15D2690(v4, v10)) )
  {
    v5 = sub_186B270(0xA0u);
    sub_1624E10(v5);
    sub_15DA890(v4, v11, v5);
  }
  result = sub_654200(v3 + 6, 0);
  v7 = v3[377];
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 192LL))(v7);
    v9 = sub_186B270(0x30u);
    sub_4E8030(v9, v3, v8);
    return sub_4C8680(v8, v9);
  }
  return result;
}

