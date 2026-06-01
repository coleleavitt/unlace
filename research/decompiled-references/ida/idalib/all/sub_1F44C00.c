__int64 __fastcall sub_1F44C00(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rdi
  bool v21; // zf
  unsigned __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  __int64 result; // rax
  unsigned __int64 v31; // rbx

  sub_1F43F90(a1, a2);
  v3 = a1[2];
  v4 = *(unsigned int *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) )
  {
    v5 = *(_QWORD **)(v3 + 8);
    v6 = sub_1EE13A0((__int64)v5, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
    *(_QWORD *)(a2 + 40) = sub_1EDB980(v5, v6, v7, v8, v9, v10) & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    *(_QWORD *)(a2 + 40) = (unsigned __int64)sub_1F19370(v3) | 4;
  }
  v11 = 0;
  if ( *(_DWORD *)(a2 + 64) >> 1 )
  {
    do
    {
      v12 = sub_1EE7800(a1[2]);
      v13 = v11++;
      *(_QWORD *)(a2 + 8 * v13 + 72) = v12;
    }
    while ( *(_DWORD *)(a2 + 64) >> 1 != v11 );
  }
  v14 = sub_1EE13A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  if ( v14 )
    *(_QWORD *)(a2 + 48) = 2 * v14 + 1;
  else
    *(_QWORD *)(a2 + 48) = 0;
  v15 = a1[2];
  v16 = *(unsigned int *)(v15 + 24);
  *(_DWORD *)(v15 + 24) = v16 + 1;
  *(_BYTE *)(a2 + 64) = (*(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v16) != 0) | *(_BYTE *)(a2 + 64) & 0xFE;
  v17 = a1[2];
  v18 = *(unsigned int *)(v17 + 24);
  v19 = *(_QWORD *)(v17 + 16);
  v20 = *(_QWORD *)(v17 + 8);
  v21 = *(_QWORD *)(v19 + 856) == 0;
  *(_DWORD *)(v17 + 24) = v18 + 1;
  v22 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 8 * v18);
  if ( !v21 )
    sub_1EDF870(v20, v19);
  v23 = __ROR4__(v22, 1);
  v24 = HIDWORD(v22);
  if ( v24 )
    v19 = *(_QWORD *)(*(_QWORD *)(v19 + 3320) + 8LL * (unsigned int)(v24 - 1));
  if ( v23 )
    v23 = v23 + *(_DWORD *)(v19 + 1648) - 2;
  *(_DWORD *)(a2 + 56) = v23;
  v25 = a1[2];
  v26 = *(unsigned int *)(v25 + 24);
  v27 = *(_QWORD *)(v25 + 16);
  v28 = *(_QWORD *)(v25 + 8);
  v21 = *(_QWORD *)(v27 + 856) == 0;
  *(_DWORD *)(v25 + 24) = v26 + 1;
  v29 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26);
  if ( !v21 )
    sub_1EDF870(v28, v27);
  result = (unsigned int)__ROR4__(v29, 1);
  v31 = HIDWORD(v29);
  if ( v31 )
    v27 = *(_QWORD *)(*(_QWORD *)(v27 + 3320) + 8LL * (unsigned int)(v31 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v27 + 1648) - 2);
  *(_DWORD *)(a2 + 60) = result;
  return result;
}
