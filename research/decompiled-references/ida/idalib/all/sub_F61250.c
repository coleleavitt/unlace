bool __fastcall sub_F61250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  _DWORD *v14; // rax
  _QWORD *v16; // rax

  v6 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 47 )
    return 0;
  v8 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, a3, a4, a5, a6)[5];
  if ( (v8 & 7) != 0 )
    return 0;
  v13 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v13 )
    return 0;
  v14 = *(_DWORD **)(v13 + 16);
  if ( *v14 != 4 || v14[4] != 1702132066 )
    return 0;
  v16 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, v9, v10, v11, v12);
  return sub_B8EC80((__int64)v16);
}
