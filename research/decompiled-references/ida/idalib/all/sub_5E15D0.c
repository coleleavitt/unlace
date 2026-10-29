__int64 __fastcall sub_5E15D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // esi

  v1 = *(_QWORD *)(a1 + 120);
  v2 = *(_QWORD *)(a1 + 112);
  v3 = *(_QWORD *)(v2 + 120);
  *(_QWORD *)(v2 + 120) = *(_QWORD *)(v1 + 120);
  v4 = *(_DWORD *)(v1 + 112);
  *(_QWORD *)(v1 + 120) = v3;
  LODWORD(v3) = *(_DWORD *)(v2 + 112);
  *(_DWORD *)(v2 + 112) = v4;
  *(_DWORD *)(v1 + 112) = v3;
  return 0;
}
