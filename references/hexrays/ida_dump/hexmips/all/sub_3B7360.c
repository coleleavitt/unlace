__int64 __fastcall sub_3B7360(double a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // r13
  char tinfo_property; // r12
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  v3 = (_QWORD *)sub_388DC0(*(_QWORD *)(a3 + 32), a3 + 80, a1);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( *v3 == -1 )
    return 0;
  v5 = v3[3];
  if ( *(_DWORD *)(v5 + 8) != 48 )
    return 0;
  v7 = *(_QWORD *)(v5 + 24);
  v13[0] = 0;
  v13[0] = get_tinfo_property(*(_QWORD *)(v7 + 48), 10);
  tinfo_property = get_tinfo_property(v13[0], 2);
  clear_tinfo_t(v13);
  if ( (tinfo_property & 0xF) != 0xC )
    return 0;
  v9 = set_op_tinfo(*v4, 0, v7 + 48);
  sub_390DC0(a3, 1u, v10, v11, v12, v9);
  return 1;
}
