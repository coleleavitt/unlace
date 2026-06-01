__int64 __fastcall sub_40D3B0(const void *a1, int a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  v2 = sub_496740();
  *(_DWORD *)v2 = 0;
  v3 = off_656088;
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 8) = v3;
  sub_40D2C0(v2, a1, a2, v4, v5, v6);
  return v2;
}

