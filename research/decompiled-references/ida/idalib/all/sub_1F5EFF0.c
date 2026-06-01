__int64 __fastcall sub_1F5EFF0(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx

  sub_1F58FC0(a1, a2);
  v2 = *(_QWORD **)(*a1 + 8);
  v3 = sub_1EE13A0((__int64)v2, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v2, v3, v4, v5, v6, v7);
  v8 = *(_QWORD **)(*a1 + 8);
  v9 = sub_1EE13A0((__int64)v8, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v14 = sub_1EDB980(v8, v9, v10, v11, v12, v13);
  if ( v14 )
    v14 = sub_B8D340(v14);
  *(_QWORD *)(a2 + 24) = v14;
  *(_DWORD *)(a2 + 4) = sub_1EE7490(*a1);
  v15 = *a1;
  v16 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v15 + 24) = v16 + 1;
  LODWORD(v15) = 8 * (*(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v16) & 1);
  result = (unsigned int)v15 | *(_BYTE *)(a2 + 2) & 0xF7;
  *(_BYTE *)(a2 + 2) = v15 | *(_BYTE *)(a2 + 2) & 0xF7;
  if ( (result & 8) != 0 )
  {
    v18 = *(_QWORD *)(*a1 + 8);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 13064) + 8LL * *(unsigned int *)(v18 + 13072) - 8);
    result = (unsigned int)(*(_DWORD *)(v18 + 13072) - 1);
    *(_DWORD *)(v18 + 13072) = result;
    *(_QWORD *)(a2 + 32) = v19;
  }
  return result;
}
