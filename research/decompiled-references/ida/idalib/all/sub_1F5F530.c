__int64 __fastcall sub_1F5F530(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) & 1)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_BYTE *)(a2 + 2) = (16 * (*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5) & 1)) | *(_BYTE *)(a2 + 2) & 0xEF;
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  *(_BYTE *)(a2 + 2) = (32 * (*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7) & 1)) | *(_BYTE *)(a2 + 2) & 0xDF;
  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  *(_BYTE *)(a2 + 2) = ((*(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9) & 1) << 6) | *(_BYTE *)(a2 + 2) & 0xBF;
  v10 = *(_QWORD **)(*a1 + 8);
  v11 = sub_1EE13A0((__int64)v10, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v10, v11, v12, v13, v14, v15);
  v16 = *(_QWORD *)(*a1 + 8);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v16 + 13072))-- - 8);
  *(_QWORD *)(a2 + 24) = v17;
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
