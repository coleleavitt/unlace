unsigned __int64 __fastcall sub_1F5D710(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r12
  bool v11; // zf
  __int64 v12; // rsi
  _DWORD *v13; // rcx
  __int64 *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  _QWORD *v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // edx
  unsigned __int64 result; // rax
  _QWORD *v38; // rbp
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rdi
  __int64 v53; // rsi

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD **)(*a1 + 8);
  v8 = *(_QWORD *)(v6 + 8 * v5);
  v9 = (unsigned int)(*(_DWORD *)(*a1 + 24) + 1);
  *(_DWORD *)(v4 + 24) = v5 + 2;
  v10 = (2 * v8) & 0x1FFFFFFFELL;
  v11 = *(_QWORD *)(v6 + 8 * v9) == 0;
  v12 = *(_QWORD *)(v4 + 16);
  v13 = (_DWORD *)(v4 + 24);
  v14 = (__int64 *)(v4 + 32);
  if ( v11 )
  {
    v44 = sub_1EE13A0((__int64)v7, v12, v14, v13);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 16) & 3LL | sub_1EDB980(v7, v44, v45, v46, v47, v48) & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 24) & 1LL | v10;
  }
  else
  {
    v15 = sub_1EE13A0((__int64)v7, v12, v14, v13);
    v20 = sub_1EDB980(v7, v15, v16, v17, v18, v19);
    v21 = *(_QWORD **)(*a1 + 8);
    v22 = sub_1EE13A0((__int64)v21, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
    v27 = sub_1EDB980(v21, v22, v23, v24, v25, v26);
    v28 = *(_QWORD *)(a2 + 24) & 7LL;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 16) & 7LL | v20 | 4;
    *(_QWORD *)(a2 + 24) = (v28 | v27) & 0xFFFFFFFFFFFFFFF9LL | v10;
  }
  v29 = sub_1EE7490(*a1);
  v30 = *a1;
  *(_DWORD *)(a2 + 32) = v29;
  v31 = sub_1EE7490(v30);
  v32 = *a1;
  *(_DWORD *)(a2 + 36) = v31;
  v33 = *(_QWORD *)(v32 + 32);
  v34 = *(unsigned int *)(v32 + 24);
  v35 = (unsigned int)(v34 + 1);
  v36 = *(_DWORD *)(v32 + 24);
  result = *(_QWORD *)(v33 + 8 * v34);
  *(_DWORD *)(v32 + 24) = v35;
  if ( result == 1 )
  {
    v51 = nullptr;
    if ( (unsigned int)v35 < *(_DWORD *)(v32 + 40) )
    {
      v52 = *(_QWORD **)(v32 + 8);
      v53 = *(_QWORD *)(v32 + 16);
      *(_DWORD *)(v32 + 24) = v36 + 2;
      v51 = (_QWORD *)(sub_1F15160(v52, v53, *(_QWORD *)(v33 + 8 * v35)) & 0xFFFFFFFFFFFFFFF0LL);
    }
    result = *v51 & 0xFFFFFFFFFFFFFFF9LL | 2;
    *(_QWORD *)(a2 + 40) = result;
  }
  else if ( result )
  {
    if ( result == 2 )
    {
      v38 = *(_QWORD **)(v32 + 8);
      v39 = sub_1EE13A0((__int64)v38, *(_QWORD *)(v32 + 16), (__int64 *)(v32 + 32), (_DWORD *)(v32 + 24));
      result = sub_1EDB980(v38, v39, v40, v41, v42, v43) & 0xFFFFFFFFFFFFFFF9LL | 4;
      *(_QWORD *)(a2 + 40) = result;
    }
  }
  else
  {
    v49 = *(_QWORD *)(v32 + 8);
    v50 = *(_QWORD *)(*(_QWORD *)(v49 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v49 + 13072))-- - 8);
    *(_QWORD *)(a2 + 40) = v50 & 0xFFFFFFFFFFFFFFF9LL;
    return v50 & 0xFFFFFFFFFFFFFFF9LL;
  }
  return result;
}
