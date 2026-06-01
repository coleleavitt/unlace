__int64 __fastcall sub_1F45900(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rdi
  bool v10; // zf
  unsigned __int64 v11; // r12
  int v12; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // r12
  int v20; // eax
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // r12
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rbx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 result; // rax

  v2 = a2;
  sub_1F458C0(a1, a2);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(unsigned int *)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_QWORD *)(v8 + 856) == 0;
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  if ( !v10 )
  {
    a2 = v8;
    sub_1EDF870(v9, v8);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v8 + 1648) - 2;
  *(_DWORD *)(v2 + 48) = v12;
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(unsigned int *)(v14 + 24);
  v16 = *(_QWORD *)(v14 + 16);
  v17 = *(_QWORD *)(v14 + 8);
  v18 = (unsigned int)(v15 + 1);
  v10 = *(_QWORD *)(v16 + 856) == 0;
  *(_DWORD *)(v14 + 24) = v18;
  v19 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15);
  if ( !v10 )
  {
    a2 = v16;
    sub_1EDF870(v17, v16);
  }
  v20 = __ROR4__(v19, 1);
  v21 = HIDWORD(v19);
  if ( v21 )
  {
    v15 = *(_QWORD *)(v16 + 3320);
    v18 = (unsigned int)(v21 - 1);
    v16 = *(_QWORD *)(v15 + 8 * v18);
  }
  if ( v20 )
  {
    v15 = *(unsigned int *)(v16 + 1648);
    v20 = v20 + v15 - 2;
  }
  *(_DWORD *)(v2 + 52) = v20;
  v22 = sub_1F194E0(*(_QWORD *)(a1 + 16), a2, v15, v18, v4, v5);
  *(_QWORD *)(v2 + 64) = v23;
  *(_QWORD *)(v2 + 56) = v22;
  v24 = *(_QWORD *)(a1 + 16);
  v25 = *(_QWORD **)(v24 + 8);
  v26 = sub_1EE13A0((__int64)v25, *(_QWORD *)(v24 + 16), (__int64 *)(v24 + 32), (_DWORD *)(v24 + 24));
  *(_QWORD *)(v2 + 72) = sub_1EDB980(v25, v26, v27, v28, v29, v30);
  v31 = *(_QWORD *)(a1 + 16);
  v32 = *(_QWORD **)(v31 + 8);
  v33 = sub_1EE13A0((__int64)v32, *(_QWORD *)(v31 + 16), (__int64 *)(v31 + 32), (_DWORD *)(v31 + 24));
  result = sub_1EDB980(v32, v33, v34, v35, v36, v37);
  if ( result )
    result = sub_B8D340(result);
  *(_QWORD *)(v2 + 80) = result;
  return result;
}
