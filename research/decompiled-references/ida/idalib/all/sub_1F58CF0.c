__int64 __fastcall sub_1F58CF0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned int v25; // r9d
  unsigned int v26; // edx
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rbp
  __int64 result; // rax
  __int64 i; // rbx
  _QWORD *v34; // r13
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rdi
  bool v46; // zf
  unsigned __int64 v47; // r13
  unsigned __int64 v48; // r13

  v4 = *a1;
  ++*(_DWORD *)(v4 + 24);
  v5 = *(_QWORD **)(v4 + 8);
  v6 = sub_1EE13A0((__int64)v5, *(_QWORD *)(v4 + 16), (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  v11 = sub_1EDB980(v5, v6, v7, v8, v9, v10);
  sub_EEE270(a2, v11);
  v12 = *a1;
  v13 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v12 + 24) = v13 + 1;
  sub_EEE290(a2, *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13));
  v14 = *(_QWORD **)(*a1 + 8);
  v15 = sub_1EE13A0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v20 = sub_1EDB980(v14, v15, v16, v17, v18, v19);
  v21 = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(a2 + 24) = v20;
  v22 = a2 + 32;
  v23 = a2 + 8 * v21 + 32;
  if ( a2 + 32 == v23 )
  {
    v24 = *(_QWORD *)(*a1 + 8);
    v28 = *(_DWORD *)(v24 + 13072);
  }
  else
  {
    v24 = *(_QWORD *)(*a1 + 8);
    v25 = *(_DWORD *)(v24 + 13072);
    v26 = v25;
    do
    {
      v27 = v26;
      v22 += 8;
      --v26;
      *(_QWORD *)(v22 - 8) = *(_QWORD *)(*(_QWORD *)(v24 + 13064) + 8 * v27 - 8);
    }
    while ( v23 != v22 );
    v28 = v25 - 1 - ((unsigned __int64)(v23 - a2 - 40) >> 3);
    *(_DWORD *)(v24 + 13072) = v28;
  }
  v29 = *(_QWORD *)(*(_QWORD *)(v24 + 13064) + 8LL * v28 - 8);
  *(_DWORD *)(v24 + 13072) = v28 - 1;
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32) = v29;
  v30 = sub_EEE250(a2);
  sub_B7A170(v30, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32));
  v31 = sub_EEE240(a2) + 16LL * *(unsigned int *)(a2 + 8);
  result = sub_EEE240(a2);
  for ( i = result; v31 != i; i += 16 )
  {
    while ( 1 )
    {
      v34 = *(_QWORD **)(*a1 + 8);
      v35 = sub_1EE13A0((__int64)v34, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
      *(_QWORD *)i = *(_QWORD *)i & 7LL | sub_1EDB980(v34, v35, v36, v37, v38, v39);
      v40 = *a1;
      v41 = *(unsigned int *)(*a1 + 24);
      *(_DWORD *)(v40 + 24) = v41 + 1;
      *(_QWORD *)i = *(_QWORD *)i & 0xFFFFFFFFFFFFFFF9LL
                   | (2LL * *(_QWORD *)(*(_QWORD *)(v40 + 32) + 8 * v41)) & 0x1FFFFFFFELL;
      v42 = *a1;
      v43 = *(unsigned int *)(*a1 + 24);
      v44 = *(_QWORD *)(*a1 + 16);
      v45 = *(_QWORD *)(*a1 + 8);
      v46 = *(_QWORD *)(v44 + 856) == 0;
      *(_DWORD *)(v42 + 24) = v43 + 1;
      v47 = *(_QWORD *)(*(_QWORD *)(v42 + 32) + 8 * v43);
      if ( !v46 )
        sub_1EDF870(v45, v44);
      result = (unsigned int)__ROR4__(v47, 1);
      v48 = HIDWORD(v47);
      if ( v48 )
        v44 = *(_QWORD *)(*(_QWORD *)(v44 + 3320) + 8LL * (unsigned int)(v48 - 1));
      if ( !(_DWORD)result )
        break;
      i += 16;
      result = (unsigned int)(result + *(_DWORD *)(v44 + 1648) - 2);
      *(_DWORD *)(i - 8) = result;
      if ( v31 == i )
        return result;
    }
    *(_DWORD *)(i + 8) = 0;
  }
  return result;
}
