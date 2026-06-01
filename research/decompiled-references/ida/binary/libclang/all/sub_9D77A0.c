_BOOL8 __fastcall sub_9D77A0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  _BOOL8 result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int8 **v17; // rax
  __int64 v18[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_DWORD *)(a3 + 48);
  if ( v6 == 1 )
    goto LABEL_22;
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 2) <= 1 )
      BUG();
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL) + 48LL) )
      return 1;
LABEL_22:
    v12 = *(_QWORD **)(a1 + 200);
    v13 = v12[4];
    if ( v13 )
      goto LABEL_13;
    return 0;
  }
  v7 = *(_QWORD *)(a3 + 24);
  v8 = *(_DWORD *)(a3 + 32);
  v9 = *(_QWORD *)(v7 + 32);
  if ( v8 == *(_DWORD *)(v9 + 16) || !v8 )
  {
    if ( *(_BYTE *)(v9 + 48) )
      goto LABEL_6;
    return 1;
  }
  if ( (*(_BYTE *)(v7 + v8 + 28) & 1) == 0 )
    return 1;
LABEL_6:
  if ( *(_DWORD *)(v9 + 16) == v8 || !v8 || (v10 = v8, result = 1, (*(_BYTE *)(v7 + v10 + 28) & 0x40) == 0) )
  {
    v12 = *(_QWORD **)(a1 + 200);
    v13 = v12[4];
    if ( !v13 )
    {
LABEL_27:
      v16 = sub_8E8FB0(a3);
      v18[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v17 = (unsigned __int8 **)sub_A2E0C0(a1, v18, 2240, 0);
      if ( v17 )
      {
        sub_9B5660(v17, v16);
        return 0;
      }
      return 0;
    }
LABEL_13:
    v14 = *(_QWORD *)(v13 + 8);
    result = ((v14 >> 2) & 1) == 0;
    if ( ((v14 >> 2) & 1) != 0
      || (v15 = v14 & 0xFFFFFFFFFFFFFFF8LL) == 0
      || (((*(_BYTE *)(v15 + 28) & 0x7F) - 34) & 0xFD) != 0 )
    {
      while ( 1 )
      {
        v12 = (_QWORD *)v12[1];
        if ( !v12 )
          break;
LABEL_12:
        v13 = v12[4];
        if ( v13 )
          goto LABEL_13;
      }
LABEL_18:
      if ( v6 )
        return 0;
      goto LABEL_27;
    }
    if ( v12[8] != *(_QWORD *)(a3 + 24) )
    {
      v12 = (_QWORD *)v12[1];
      if ( v12 )
        goto LABEL_12;
      goto LABEL_18;
    }
  }
  return result;
}

