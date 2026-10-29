unsigned __int64 __fastcall sub_1F60A10(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 result; // rax

  sub_1F58FC0(a1, (__int64)a2);
  a2[4] = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v2 = *(_QWORD **)(*a1 + 8);
  v3 = sub_1EE13A0((__int64)v2, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  a2[3] = sub_1EDB980(v2, v3, v4, v5, v6, v7);
  if ( (a2[2] & 4) != 0 )
  {
    result = (unsigned __int64)sub_1F19370(*a1) | 4;
    a2[2] = result;
  }
  else
  {
    v8 = *(_QWORD *)(*a1 + 8);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 13072))-- - 8);
    a2[2] = v9 & 0xFFFFFFFFFFFFFFFBLL;
    return v9 & 0xFFFFFFFFFFFFFFFBLL;
  }
  return result;
}
