__int64 __fastcall sub_1F45E90(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax

  sub_1F45A70(a1, a2);
  v2 = a1[2];
  v3 = *(_QWORD **)(v2 + 8);
  v4 = sub_1EE13A0((__int64)v3, *(_QWORD *)(v2 + 16), (__int64 *)(v2 + 32), (_DWORD *)(v2 + 24));
  *(_QWORD *)(a2 + 80) = sub_1EDB980(v3, v4, v5, v6, v7, v8);
  v9 = a1[2];
  v10 = *(_QWORD **)(v9 + 8);
  v11 = sub_1EE13A0((__int64)v10, *(_QWORD *)(v9 + 16), (__int64 *)(v9 + 32), (_DWORD *)(v9 + 24));
  *(_QWORD *)(a2 + 88) = sub_1EDB980(v10, v11, v12, v13, v14, v15);
  v16 = a1[2];
  v17 = *(unsigned int *)(v16 + 24);
  *(_DWORD *)(v16 + 24) = v17 + 1;
  v18 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17) & 1LL;
  result = (unsigned int)v18 | *(_BYTE *)(a2 + 96) & 0xFE;
  *(_BYTE *)(a2 + 96) = v18 | *(_BYTE *)(a2 + 96) & 0xFE;
  return result;
}
