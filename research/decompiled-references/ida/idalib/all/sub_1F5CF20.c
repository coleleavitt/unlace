__int64 __fastcall sub_1F5CF20(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax

  sub_1F58FC0(a1, (__int64)a2);
  v2 = *(_QWORD *)(*a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 13072))-- - 8);
  a2[2] = v3;
  v4 = *(_QWORD **)(*a1 + 8);
  v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  a2[3] = sub_1EDB980(v4, v5, v6, v7, v8, v9);
  result = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  a2[4] = result;
  return result;
}
