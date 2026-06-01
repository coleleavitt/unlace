__int64 __fastcall sub_1F1E8C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rdi
  bool v20; // zf
  unsigned __int64 v21; // rbx
  int v22; // edx
  unsigned __int64 v23; // rbx
  __int64 v24; // [rsp+8h] [rbp-40h]

  v5 = *a1;
  v6 = *(unsigned int *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_BYTE *)(a3 + 16) = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6) != 0;
  v7 = sub_1EE7490(v5);
  v8 = *a1;
  *(_DWORD *)a3 = v7;
  *(_DWORD *)(a3 + 4) = sub_1EE7490(v8);
  if ( ((*(_WORD *)(a2 + 18) >> 3) & 0x7F) != 0 )
  {
    v9 = a3 + 24;
    v10 = a3 + 8LL * (((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu) - 1) + 32;
    do
    {
      v9 += 8;
      *(_QWORD *)(v9 - 8) = sub_1F19370(*a1);
    }
    while ( v10 != v9 );
  }
  v11 = sub_1EE7490(*a1);
  v12 = *a1;
  *(_DWORD *)(a3 + 8) = v11;
  *(_DWORD *)(a3 + 12) = sub_1EE7490(v12);
  result = *(_BYTE *)(a2 + 19) >> 2;
  if ( *(_BYTE *)(a2 + 19) >> 2 )
  {
    v14 = 0;
    v15 = 4LL * (unsigned int)(result - 1) + 4;
    do
    {
      while ( 1 )
      {
        v16 = *a1;
        v17 = *(unsigned int *)(*a1 + 24);
        v18 = *(_QWORD *)(*a1 + 16);
        v19 = *(_QWORD *)(*a1 + 8);
        v20 = *(_QWORD *)(v18 + 856) == 0;
        *(_DWORD *)(v16 + 24) = v17 + 1;
        v21 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17);
        if ( !v20 )
        {
          v24 = v15;
          sub_1EDF870(v19, v18);
          v15 = v24;
        }
        v22 = __ROR4__(v21, 1);
        v23 = HIDWORD(v21);
        if ( v23 )
          v18 = *(_QWORD *)(*(_QWORD *)(v18 + 3320) + 8LL * (unsigned int)(v23 - 1));
        result = a3 + (*(_WORD *)(a2 + 18) & 0x3F8);
        if ( !v22 )
          break;
        v14 += 4;
        *(_DWORD *)(v14 + result + 20) = v22 + *(_DWORD *)(v18 + 1648) - 2;
        if ( v14 == v15 )
          return result;
      }
      *(_DWORD *)(v14 + result + 24) = 0;
      v14 += 4;
    }
    while ( v14 != v15 );
  }
  return result;
}
