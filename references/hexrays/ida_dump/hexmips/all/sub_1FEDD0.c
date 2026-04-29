__int64 __fastcall sub_1FEDD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  vars0[3] = __readfsqword(0x28u);
  vars0[0] = 0;
  v4 = *(_DWORD **)(v3 + 1504);
  vars0[1] = 0;
  sub_1EB190(v4, (__int64 *)(v3 + 496), a2, *(_DWORD *)(a2 + 88), vars0, 0);
  cleanup_argloc(vars0);
  return sub_1EC030(*(_QWORD *)(a1 + 56), -1, 26, v5, v6, v7);
}
