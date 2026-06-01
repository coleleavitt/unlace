unsigned __int64 __fastcall sub_1F56330(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 result; // rax

  v2 = a1[2];
  v3 = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  v5 = v4 >> 1;
  v6 = v4 & 1;
  if ( (_DWORD)v6 )
    v6 = sub_1F6A0A0(*(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16)) & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)(a2 + 176) = (unsigned int)v5 | v6;
  v7 = a1[2];
  v8 = *(_QWORD **)(v7 + 8);
  v9 = sub_1EE13A0((__int64)v8, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
  *(_QWORD *)(a2 + 168) = sub_1EDB980(v8, v9, v10, v11, v12, v13);
  sub_1F54BC0(a1, (char *)a2);
  v14 = a1[2];
  v15 = *(unsigned int *)(v14 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  *(_BYTE *)(a2 + 85) = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15) & 3 | *(_BYTE *)(a2 + 85) & 0xFC;
  v16 = a1[2];
  v17 = *(_QWORD **)(v16 + 8);
  v18 = sub_1EE13A0((__int64)v17, *(_QWORD *)(v16 + 16), (__int64 *)(v16 + 32), (_DWORD *)(v16 + 24));
  *(_QWORD *)(a2 + 184) = *(_QWORD *)(a2 + 184) & 7LL | sub_1EDB980(v17, v18, v19, v20, v21, v22);
  v23 = a1[2];
  v24 = *(unsigned int *)(v23 + 24);
  *(_DWORD *)(v23 + 24) = v24 + 1;
  result = *(_QWORD *)(a2 + 184) & 0xFFFFFFFFFFFFFFF9LL
         | (2 * (unsigned __int16)*(_QWORD *)(*(_QWORD *)(v23 + 32) + 8 * v24)) & 0x1FE;
  *(_QWORD *)(a2 + 184) = result;
  return result;
}
