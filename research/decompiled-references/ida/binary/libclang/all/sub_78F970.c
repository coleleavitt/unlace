__int64 __fastcall sub_78F970(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // ebp
  _DWORD *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdi

  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 7) != 0 )
    return 0;
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v3 )
    return 0;
  v6 = *(_DWORD **)(v3 + 16);
  v4 = 0;
  if ( *v6 != 4 )
    return v4;
  if ( v6[4] != 1852399981 )
    return v4;
  v8 = sub_798D60(a1);
  if ( *(char *)(v8 + 14) < 0 || (*(_BYTE *)(v8 + 89) & 1) != 0 )
    return v4;
  v11 = *(_QWORD *)(a1 + 16);
  v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v11 & 4) != 0 )
    v12 = (_QWORD *)*v12;
  v4 = 1;
  if ( (*(_BYTE *)(sub_79C2A0(v12, a2, v9, v10) + 8) & 0x7F) == 0 )
    return v4;
  return sub_78F820(a1);
}

