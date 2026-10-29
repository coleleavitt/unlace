__int64 __fastcall sub_1F5CA50(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v2 = *(_QWORD **)(*a1 + 8);
  v3 = sub_1EE13A0((__int64)v2, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  result = sub_1EDB980(v2, v3, v4, v5, v6, v7);
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
