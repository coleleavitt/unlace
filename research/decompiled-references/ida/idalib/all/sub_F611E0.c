bool __fastcall sub_F611E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v15; // rax

  v6 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 47 )
    return 0;
  v8 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, a3, a4, a5, a6)[5];
  if ( (v8 & 7) != 0 )
    return 0;
  v12 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v12 )
    return 0;
  v13 = *(_QWORD *)(v12 + 16);
  if ( *(_DWORD *)v13 != 11
    || *(_QWORD *)(v13 + 16) != 0x61765F6E67696C61LL
    || *(_WORD *)(v13 + 24) != 24428
    || *(_BYTE *)(v13 + 26) != 116 )
  {
    return 0;
  }
  v15 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, 0x61765F6E67696C61LL, v9, v10, v11);
  return sub_B8EC80((__int64)v15);
}
