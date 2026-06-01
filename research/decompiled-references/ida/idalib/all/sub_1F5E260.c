unsigned __int64 __fastcall sub_1F5E260(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx

  sub_1F58FC0(a1, (__int64)a2);
  a2[4] = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  result = sub_1EAC8F0((__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  a2[2] = result;
  a2[3] = v3;
  return result;
}
