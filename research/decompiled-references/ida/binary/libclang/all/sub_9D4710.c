__int64 __fastcall sub_9D4710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax

  if ( *(_DWORD *)(a3 + 48) )
    return 1;
  v3 = *(_QWORD *)(a3 + 24);
  if ( !v3 )
    return 1;
  if ( !*(_BYTE *)(v3 + 25) )
    return 1;
  v5 = sub_A1C2E0(a3);
  if ( (_BYTE)v5 )
    return 1;
  v7 = *(_DWORD *)(a3 + 48);
  if ( v7 == 1 )
  {
    v8 = *(__int64 **)(a3 + 24);
  }
  else
  {
    if ( (unsigned int)(v7 - 2) <= 1 )
      BUG();
    v8 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 32LL);
  }
  v9 = *v8;
  v10 = 0;
  if ( (v9 & 2) == 0 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 38 >= 7 )
      v10 = 0;
  }
  if ( *(_QWORD *)(a1 + 216) == v10 )
  {
    return 1;
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24))
         && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
  {
    v11 = *(_DWORD *)(a3 + 48);
    if ( v11 == 1 )
    {
      v12 = *(__int64 **)(a3 + 24);
    }
    else
    {
      if ( (unsigned int)(v11 - 2) <= 1 )
        BUG();
      v12 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 32LL);
    }
    v13 = *v12;
    v14 = 0;
    if ( (v13 & 2) == 0 )
    {
      v15 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v14 = v15;
      if ( v15 )
      {
        if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 24 >= 0x1B )
          v14 = 0;
      }
    }
    sub_9D4530(a1, a2, v14);
  }
  return v5;
}

