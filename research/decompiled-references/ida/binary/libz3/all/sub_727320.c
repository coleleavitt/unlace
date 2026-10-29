__int64 __fastcall sub_727320(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d

  v2 = sub_186B270(0x28u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C53978;
  *(_QWORD *)(v2 + 16) = a2;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = sub_186B270(0x5D8u);
  sub_1230FB0(v4, *(_QWORD *)(v3 + 16), a1 + 24, v5, v6, v7);
  *(_QWORD *)(v3 + 32) = v4;
  return v3;
}

