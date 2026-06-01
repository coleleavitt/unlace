__int64 __fastcall sub_1F44A60(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 i; // rbp
  __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rdi
  bool v26; // zf
  unsigned __int64 v27; // rbx
  __int64 result; // rax
  unsigned __int64 v29; // rbx

  sub_1F43F90(a1, a2);
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  *(_DWORD *)(a2 + 36) = v8;
  v9 = 8LL * (unsigned int)v8;
  v10 = *(_QWORD **)(*a1 + 144);
  v11 = v10[294];
  v10[304] += v9;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[295] >= v9 + v12 && v11 )
    v10[294] = v9 + v12;
  else
    v12 = sub_986170((__int64)(v10 + 294), v9, 8LL * (unsigned int)v8, 3, v4, v5);
  *(_QWORD *)(a2 + 40) = v12;
  if ( (_DWORD)v8 )
  {
    for ( i = 0; ; i += 8 )
    {
      *(_QWORD *)(v12 + i) = sub_1EE7800(a1[2]);
      if ( i == 8LL * (unsigned int)(v8 - 1) )
        break;
      v12 = *(_QWORD *)(a2 + 40);
    }
  }
  v14 = a1[2];
  v15 = *(unsigned int *)(v14 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15) )
  {
    v16 = *(_QWORD **)(v14 + 8);
    v17 = sub_1EE13A0((__int64)v16, *(_QWORD *)(v14 + 16), (__int64 *)(v14 + 32), (_DWORD *)(v14 + 24));
    *(_QWORD *)(a2 + 48) = sub_1EDB980(v16, v17, v18, v19, v20, v21) & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    *(_QWORD *)(a2 + 48) = (unsigned __int64)sub_1F19370(v14) | 4;
  }
  v22 = a1[2];
  v23 = *(unsigned int *)(v22 + 24);
  v24 = *(_QWORD *)(v22 + 16);
  v25 = *(_QWORD *)(v22 + 8);
  v26 = *(_QWORD *)(v24 + 856) == 0;
  *(_DWORD *)(v22 + 24) = v23 + 1;
  v27 = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 8 * v23);
  if ( !v26 )
    sub_1EDF870(v25, v24);
  result = (unsigned int)__ROR4__(v27, 1);
  v29 = HIDWORD(v27);
  if ( v29 )
    v24 = *(_QWORD *)(*(_QWORD *)(v24 + 3320) + 8LL * (unsigned int)(v29 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v24 + 1648) - 2);
  *(_DWORD *)(a2 + 56) = result;
  return result;
}
