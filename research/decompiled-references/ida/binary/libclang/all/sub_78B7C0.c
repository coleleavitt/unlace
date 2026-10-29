__int64 __fastcall sub_78B7C0(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx

  v2 = *(_BYTE *)(a1 + 68);
  if ( (v2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 <= 7 && !(_DWORD)v3 )
    {
      v6 = *(_QWORD *)(a1 + 72);
      if ( (~v2 & 0xC) != 0 && (v2 & 0xC) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( (*(_DWORD *)v6 & 0x20000) == 0 && !(unsigned int)sub_781830(a1) )
        return 1;
    }
  }
  v4 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_79A2B0(a1);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( v8 < v9 )
  {
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 281 )
    {
      v8 += 8LL;
      if ( v9 == v8 )
        return 0;
    }
  }
  else
  {
    if ( v8 == v9 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 281 )
    {
      v9 += 8LL;
      if ( v8 == v9 )
        return 0;
    }
  }
  if ( v8 == v9 )
    return 0;
  v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v10 + 16LL) != 47 )
    return 0;
  v11 = sub_B14A40(*v10);
  v12 = sub_78B3D0(v11);
  v13 = v12;
  if ( !v12 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(v13 + 128) + 1LL) & 2) == 0 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 17288) + 340LL) != 10 )
    return 1;
  v14 = sub_7868A0(v13);
  if ( !v14 )
    return v4;
LABEL_28:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 47 )
    return 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v14 + 8);
    v14 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 <= 7 )
      return v4;
    if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 47 <= 2 )
      goto LABEL_28;
  }
}

