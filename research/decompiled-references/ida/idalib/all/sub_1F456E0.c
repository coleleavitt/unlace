__int64 __fastcall sub_1F456E0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // r13
  bool v8; // zf
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  int v11; // eax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rdi
  unsigned __int64 v29; // r12
  int v30; // eax
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // r12
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // r12
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 result; // rax

  sub_1F43F90(a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD **)(v4 + 8);
  v8 = *(_QWORD *)(v6 + 856) == 0;
  v9 = v6;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( !v8 )
  {
    sub_1EDF870((__int64)v7, v6);
    v4 = a1[2];
    v7 = *(_QWORD **)(v4 + 8);
    v9 = *(_QWORD *)(v4 + 16);
  }
  v11 = __ROR4__(v10, 1);
  v12 = HIDWORD(v10);
  if ( v12 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v12 - 1));
  if ( v11 )
    v11 = v11 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 36) = v11;
  v13 = sub_1EE13A0((__int64)v7, v9, (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  *(_QWORD *)(a2 + 48) = sub_1EDB980(v7, v13, v14, v15, v16, v17);
  v18 = a1[2];
  v19 = *(_QWORD **)(v18 + 8);
  v20 = sub_1EE13A0((__int64)v19, *(_QWORD *)(v18 + 16), (__int64 *)(v18 + 32), (_DWORD *)(v18 + 24));
  *(_QWORD *)(a2 + 56) = sub_1EDB980(v19, v20, v21, v22, v23, v24);
  v25 = a1[2];
  v26 = *(unsigned int *)(v25 + 24);
  v27 = *(_QWORD *)(v25 + 16);
  v28 = *(_QWORD *)(v25 + 8);
  v8 = *(_QWORD *)(v27 + 856) == 0;
  *(_DWORD *)(v25 + 24) = v26 + 1;
  v29 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26);
  if ( !v8 )
    sub_1EDF870(v28, v27);
  v30 = __ROR4__(v29, 1);
  v31 = HIDWORD(v29);
  if ( v31 )
    v27 = *(_QWORD *)(*(_QWORD *)(v27 + 3320) + 8LL * (unsigned int)(v31 - 1));
  if ( v30 )
    v30 = v30 + *(_DWORD *)(v27 + 1648) - 2;
  *(_DWORD *)(a2 + 40) = v30;
  v32 = a1[2];
  v33 = *(_QWORD **)(v32 + 8);
  v34 = sub_1EE13A0((__int64)v33, *(_QWORD *)(v32 + 16), (__int64 *)(v32 + 32), (_DWORD *)(v32 + 24));
  *(_QWORD *)(a2 + 64) = sub_1EDB980(v33, v34, v35, v36, v37, v38);
  v39 = a1[2];
  v40 = *(_QWORD **)(v39 + 8);
  v41 = sub_1EE13A0((__int64)v40, *(_QWORD *)(v39 + 16), (__int64 *)(v39 + 32), (_DWORD *)(v39 + 24));
  *(_QWORD *)(a2 + 72) = sub_1EDB980(v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(a2 + 80) = sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  result = sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  *(_QWORD *)(a2 + 88) = result;
  return result;
}
