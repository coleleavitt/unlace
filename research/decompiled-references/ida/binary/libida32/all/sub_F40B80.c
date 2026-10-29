__int64 __fastcall sub_F40B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  char v8; // al
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rdx

  v6 = a1;
  if ( *(_BYTE *)(a1 + 16) != 14 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14 )
      return 0;
    v6 = sub_F3F130(a1);
    if ( !v6 )
      return 0;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  if ( v8 == 13 )
  {
    result = v6;
    if ( (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
      return result;
    return 0;
  }
  if ( v8 != 47 )
  {
    if ( v8 == 10 )
      return v6;
    return 0;
  }
  v10 = sub_F3D150(*(_QWORD **)(v7 + 24), a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)v10 + 74) & 1) == 0 && (v10[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v15 = (char *)sub_F3D150(*(_QWORD **)(v7 + 24), a2, v11, v12, v13, v14);
  result = v6;
  if ( v15[76] < 0 )
    return 0;
  return result;
}

