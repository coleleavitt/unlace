unsigned __int64 __fastcall sub_1F60440(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) )
  {
    v7 = *(_QWORD **)(v2 + 8);
    v8 = sub_1EE13A0((__int64)v7, *(_QWORD *)(v2 + 16), (__int64 *)(v2 + 32), (_DWORD *)(v2 + 24));
    result = sub_1EDB980(v7, v8, v9, v10, v11, v12) | 4;
    *(_QWORD *)(a2 + 16) = result;
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 8);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 13072))-- - 8);
    *(_QWORD *)(a2 + 16) = v5 & 0xFFFFFFFFFFFFFFFBLL;
    return v5 & 0xFFFFFFFFFFFFFFFBLL;
  }
  return result;
}
