__int64 __fastcall sub_3E3C70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 v4; // rbx
  int v5; // ebp

  v2 = operator new(0x168u);
  v3 = *(_DWORD *)(a1 + 80);
  v4 = v2;
  sub_1948B0(v2, a2);
  v5 = *(_DWORD *)(v4 + 24) * v3;
  *(_QWORD *)v4 = &off_4BFA30;
  *(_DWORD *)(v4 + 352) = v5;
  return v4;
}
