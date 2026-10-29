__int64 __fastcall sub_1F5E9A0(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v2 = *(_QWORD **)(*a1 + 8);
  v3 = sub_1EE13A0((__int64)v2, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v2, v3, v4, v5, v6, v7);
  *(_DWORD *)(a2 + 24) = sub_1EE7490(*a1);
  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  *(_BYTE *)(a2 + 28) = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9) & 1 | *(_BYTE *)(a2 + 28) & 0xFE;
  v10 = *a1;
  v11 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  LODWORD(v10) = 2 * (*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11) & 1);
  result = (unsigned int)v10 | *(_BYTE *)(a2 + 28) & 0xFD;
  *(_BYTE *)(a2 + 28) = v10 | *(_BYTE *)(a2 + 28) & 0xFD;
  return result;
}
