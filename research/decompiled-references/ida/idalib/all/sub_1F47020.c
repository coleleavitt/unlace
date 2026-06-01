__int64 __fastcall sub_1F47020(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  void *v17; // r12
  int v18; // eax
  __int64 v19; // rdi
  void *v20; // r12
  int v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // r12
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 result; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rsi
  unsigned __int64 v46; // rax

  v2 = 0;
  sub_1F458C0(a1, a2);
  v5 = sub_1EE7490(*(_QWORD *)(a1 + 16));
  v6 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 48) = v5;
  v7 = sub_1EE7490(v6);
  v8 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 52) = v7;
  v9 = *(unsigned int *)(v8 + 24);
  if ( (unsigned int)v9 < *(_DWORD *)(v8 + 40) )
  {
    v44 = *(_QWORD **)(v8 + 8);
    v45 = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v8 + 24) = v9 + 1;
    v46 = sub_1F15160(v44, v45, *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9));
    v8 = *(_QWORD *)(a1 + 16);
    v2 = v46;
  }
  v10 = sub_1F19370(v8);
  *(_QWORD *)(a2 + 56) = v2;
  v11 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 64) = v10;
  v12 = *(unsigned int *)(v11 + 24);
  *(_DWORD *)(v11 + 24) = v12 + 1;
  *(_WORD *)(a2 + 72) |= *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12);
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(unsigned int *)(v13 + 24);
  *(_DWORD *)(v13 + 24) = v14 + 1;
  *(_WORD *)(a2 + 74) = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14);
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(unsigned int *)(v15 + 24);
  *(_DWORD *)(v15 + 24) = v16 + 1;
  *(_BYTE *)(a2 + 76) = *(_BYTE *)(*(_QWORD *)(v15 + 32) + 8 * v16) & 3 | *(_BYTE *)(a2 + 76) & 0xFC;
  v17 = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v18 = sub_1EE7490(*(_QWORD *)(a1 + 16));
  *(_QWORD *)(a2 + 80) = v17;
  v19 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 96) = v18;
  v20 = sub_1F16D80(v19);
  v21 = sub_1EE7490(*(_QWORD *)(a1 + 16));
  *(_QWORD *)(a2 + 88) = v20;
  *(_DWORD *)(a2 + 100) = v21;
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(_QWORD **)(v22 + 8);
  v24 = sub_1EE13A0((__int64)v23, *(_QWORD *)(v22 + 16), (__int64 *)(v22 + 32), (_DWORD *)(v22 + 24));
  *(_QWORD *)(a2 + 104) = sub_1EDB980(v23, v24, v25, v26, v27, v28);
  v29 = *(_QWORD *)(a1 + 16);
  v30 = *(_QWORD **)(v29 + 8);
  v31 = sub_1EE13A0((__int64)v30, *(_QWORD *)(v29 + 16), (__int64 *)(v29 + 32), (_DWORD *)(v29 + 24));
  *(_QWORD *)(a2 + 112) = sub_1EDB980(v30, v31, v32, v33, v34, v35);
  v36 = *(_QWORD *)(a1 + 16);
  v37 = *(_QWORD **)(v36 + 8);
  v38 = sub_1EE13A0((__int64)v37, *(_QWORD *)(v36 + 16), (__int64 *)(v36 + 32), (_DWORD *)(v36 + 24));
  result = sub_1EDB980(v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(a2 + 120) = result;
  return result;
}
