bool __fastcall sub_1894B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r12d
  int v7; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int8 v19; // al
  __int64 v20; // rax

  v6 = *(_DWORD *)(a1 + 40);
  v7 = *(_DWORD *)(a2 + 24);
  if ( !v6 )
  {
    if ( !v7 )
      return 0;
    v9 = **(_QWORD **)(a2 + 16);
    if ( !v9 )
      return 0;
    goto LABEL_6;
  }
  if ( !v7 )
    return 0;
  v9 = **(_QWORD **)(a2 + 16);
  if ( !v9 )
    return 0;
  v19 = *(_BYTE *)(v9 + 28) & 0x7F;
  if ( ((v19 + 52) & 0x7Fu) <= 1 || (unsigned int)v19 - 53 <= 1 )
  {
    v20 = sub_B72ED0(v9);
    if ( !v20 )
      goto LABEL_26;
    v19 = *(_BYTE *)(v20 + 28) & 0x7F;
  }
  if ( v19 == 19 )
    return 1;
LABEL_26:
  if ( v6 == 11 )
    return 0;
LABEL_6:
  v10 = *(_BYTE *)(v9 + 28) & 0x7F;
  v11 = (unsigned __int8)v10;
  if ( (((_BYTE)v10 + 52) & 0x7Fu) <= 1 || (v12 = (unsigned int)(unsigned __int8)v10 - 53, (unsigned int)v12 <= 1) )
  {
    v13 = sub_B72ED0(v9);
    v9 = v13;
    if ( !v13 )
      return 0;
    v10 = *(_BYTE *)(v13 + 28) & 0x7F;
    v11 = (unsigned __int8)v10;
  }
  v14 = v11 - 58;
  if ( v14 <= 9 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( v14 > 3 || (*(_BYTE *)(*(_QWORD *)(v15 + 2320) + 1LL) & 8) != 0 )
    {
      v16 = *(_QWORD *)(v9 + 48);
      if ( !v16 )
        v16 = sub_A7AA70(v15, v9, v10, v12, a5, a6);
      v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
      v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v18 == 34 || (_BYTE)v18 == 11 || (*(_BYTE *)(v17 + 17) & 4) != 0 || (unsigned int)(v18 - 35) <= 1 )
        return 1;
    }
    return 0;
  }
  return (_BYTE)v10 == 20;
}
