__int64 __fastcall sub_100490(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d

  v3 = 24LL * a3;
  v4 = v3 + *(_QWORD *)(a1 + 8);
  sub_63FD0((__int64 *)a2, (__int64 *)v4);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 16);
  sub_63D40((__int64 *)a2, (__int64 *)(v3 + *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL)), v5, v6, v7, v8);
  return sub_63980((__int64 *)a2, (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL) + v3));
}
