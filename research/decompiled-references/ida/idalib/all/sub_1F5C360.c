__int64 __fastcall sub_1F5C360(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // r12
  int v16; // eax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rdi
  unsigned __int64 v22; // r12
  int v23; // eax
  unsigned __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *(_QWORD **)(*a1 + 8);
  v4 = sub_1EE13A0((__int64)v3, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v9 = sub_1EDB980(v3, v4, v5, v6, v7, v8);
  if ( v9 )
    v9 = sub_B8D340(v9);
  *(_QWORD *)(a2 + 24) = v9;
  v10 = *a1;
  v11 = *(unsigned int *)(*a1 + 24);
  v12 = *(_QWORD *)(*a1 + 16);
  v13 = *(_QWORD *)(*a1 + 8);
  v14 = *(_QWORD *)(v12 + 856) == 0;
  *(_DWORD *)(v10 + 24) = v11 + 1;
  v15 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11);
  if ( !v14 )
    sub_1EDF870(v13, v12);
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v12 = *(_QWORD *)(*(_QWORD *)(v12 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v12 + 1648) - 2;
  *(_DWORD *)(a2 + 16) = v16;
  v18 = *a1;
  v19 = *(unsigned int *)(*a1 + 24);
  v20 = *(_QWORD *)(*a1 + 16);
  v21 = *(_QWORD *)(*a1 + 8);
  v14 = *(_QWORD *)(v20 + 856) == 0;
  *(_DWORD *)(v18 + 24) = v19 + 1;
  v22 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19);
  if ( !v14 )
    sub_1EDF870(v21, v20);
  v23 = __ROR4__(v22, 1);
  v24 = HIDWORD(v22);
  if ( v24 )
    v20 = *(_QWORD *)(*(_QWORD *)(v20 + 3320) + 8LL * (unsigned int)(v24 - 1));
  if ( v23 )
    v23 = v23 + *(_DWORD *)(v20 + 1648) - 2;
  *(_DWORD *)(a2 + 20) = v23;
  v25 = *a1;
  v26 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v25 + 24) = v26 + 1;
  LODWORD(v25) = 8 * (*(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26) & 7);
  result = (unsigned int)v25 | *(_BYTE *)(a2 + 2) & 0xC7;
  *(_BYTE *)(a2 + 2) = v25 | *(_BYTE *)(a2 + 2) & 0xC7;
  return result;
}
