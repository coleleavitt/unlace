__int64 __fastcall sub_DAEB0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v6; // rdx
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // r12d
  __int64 v11; // rax
  _DWORD *v12; // rbx
  int v13; // r13d
  __int64 v14; // rax
  _DWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp-10h] [rbp-50h]
  __int64 v20; // [rsp+0h] [rbp-40h] BYREF
  __int128 v21; // [rsp+8h] [rbp-38h]
  unsigned __int64 v22; // [rsp+18h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 200);
  if ( v2 == -1 )
    return 0;
  v3 = *(_DWORD **)(a1 + 8);
  v6 = &v3[*(_QWORD *)(a1 + 16)];
  if ( v3 != v6 )
  {
    while ( v2 != *v3 )
    {
      if ( v6 == ++v3 )
        goto LABEL_8;
    }
    if ( v6 != v3 )
      return 0;
  }
LABEL_8:
  v20 = 0;
  v21 = 0;
  v20 = qvector_reserve(&v20, 0, 1, 4);
  *(_DWORD *)(v20 + 4 * v21) = v2;
  v8 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)&v21 = v21 + 1;
  v9 = sub_DA5C0((__int64 *)(a1 + 144), v8, a2, &v20, 0, 4, nullptr);
  if ( v9 > 1 )
  {
    if ( !under_debugger )
      sub_37EEE0(52689);
LABEL_24:
    BUG();
  }
  if ( v9 != 1 )
  {
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    return 0;
  }
  v10 = sub_11F0B0(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL), *(unsigned int *)(a1 + 200), v19);
  if ( v10 == -1 )
  {
    if ( !under_debugger )
      sub_37EEE0(52690);
    goto LABEL_24;
  }
  v11 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 204) = 1;
  v12 = *(_DWORD **)(a1 + 8);
  v13 = *(_DWORD *)(a1 + 200);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v11 + 1) )
  {
    v18 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v11 + 1, 4);
    *(_QWORD *)(a1 + 8) = v18;
    v12 = (_DWORD *)v18;
    v11 = *(_QWORD *)(a1 + 16);
  }
  memmove(v12 + 1, v12, 4 * v11);
  *v12 = v13;
  v14 = *(_QWORD *)(a1 + 96);
  ++*(_QWORD *)(a1 + 16);
  v15 = *(_DWORD **)(a1 + 88);
  if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v14 + 1) )
  {
    v17 = qvector_reserve(a1 + 88, *(_QWORD *)(a1 + 88), v14 + 1, 4);
    *(_QWORD *)(a1 + 88) = v17;
    v15 = (_DWORD *)v17;
    v14 = *(_QWORD *)(a1 + 96);
  }
  memmove(v15 + 1, v15, 4 * v14);
  *v15 = v10;
  v16 = v20;
  ++*(_QWORD *)(a1 + 96);
  if ( v16 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v16);
  }
  return 1;
}
