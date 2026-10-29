__int64 __fastcall sub_1F57720(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rsi
  int v19; // ecx
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // rsi

  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  v10 = *(_QWORD *)(*a1 + 8);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  sub_1EDDEE0(v10, a2, *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9), *(_QWORD *)(v8 + 32), a5, a6);
  v11 = sub_1EE7490(*a1);
  v12 = *a1;
  *(_DWORD *)(a2 + 4) = v11;
  v13 = sub_1EE7490(v12);
  v14 = *a1;
  *(_DWORD *)(a2 + 8) = v13;
  v15 = *(unsigned int *)(v14 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15);
  v17 = *(_QWORD *)(v14 + 8);
  v18 = *(unsigned int *)(v17 + 13072);
  v19 = *(_DWORD *)(v17 + 13072);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v17 + 13064) + 8 * v18 - 8);
  v20 = *(_QWORD *)(*(_QWORD *)(v17 + 13064) + 8LL * (unsigned int)(v18 - 1) - 8);
  v21 = (unsigned int)(v19 - 2);
  *(_DWORD *)(v17 + 13072) = v21;
  result = (unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1;
  *(_QWORD *)(a2 + 8 * result + 24) = v20;
  if ( v16 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(v17 + 13064) + 8 * v21 - 8);
    *(_DWORD *)(v17 + 13072) = v19 - 3;
    *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 24) = v23;
    result = sub_1EE7490(v14);
    *(_DWORD *)(a2 + 8LL * (((*(_WORD *)a2 & 0x200) != 0) + 2) + 24) = result;
  }
  return result;
}
