__int64 __fastcall sub_1766D30(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  _DWORD *v10; // r8
  __int64 v11; // rdx
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax

  v4 = *(_QWORD *)(a2 + 24);
  v5 = sub_175B800(a1, (unsigned __int16 *)v4);
  if ( v5 == 1 )
    return 1;
  v7 = v5;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    v8 = sub_17473B0((__int64)a1, v4);
    if ( !v8 )
      return 1;
  }
  v9 = *a1;
  v10 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  v11 = *(unsigned int *)(*a1 + 12632);
  if ( (_DWORD)v11 || *(_DWORD **)(a2 + 24) != v10 || v8 != *(_QWORD *)(a2 + 16) )
    return sub_19BD000(
             v9,
             *(unsigned int *)(a2 + 4),
             (*(_QWORD *)a2 & 0x80000LL) != 0,
             (*(_QWORD *)a2 & 0x100000LL) != 0,
             v10);
  if ( v8 )
  {
    v4 = *(unsigned int *)(a2 + 4);
    sub_1910D40(v9, v4, v8, 1);
    v10 = *(_DWORD **)(a2 + 24);
  }
  if ( (*v10 & 0x10000) == 0 )
  {
    v13 = *(_QWORD *)(*a1 + 248);
    v14 = sub_C93F60(a2, v4, v11, v6);
    v15 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v13, v14) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v15 + 16) == 48 )
    {
      v20 = sub_F60F10(*v15, v14, v16, v17, v18, v19);
      v21 = *a1;
      v22 = sub_1A69EF0(*a1, v20);
      sub_1910D40(v21, *(unsigned int *)(a2 + 4), v22, 1);
    }
  }
  return a2;
}
