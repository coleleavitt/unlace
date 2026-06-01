__int64 __fastcall sub_C7A1A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // r12

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C58A38;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = (__int64 *)sub_186B270(0x350u);
  sub_C79B40(v4, a2, a1 + 24);
  *(_QWORD *)(v3 + 16) = v4;
  return v3;
}

