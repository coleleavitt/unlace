char __fastcall sub_AF2F40(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v4; // ebx
  unsigned int v5; // ecx
  char result; // al
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v3 = a3 & 7;
  v4 = a2 & 7;
  if ( v4 == 7 )
  {
    v5 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v3 != 7 )
      return 0;
    if ( v5 > 3 )
      v5 = 3;
    v7 = v5 + 8;
  }
  else
  {
    v7 = a2 & 7;
    v8 = a3 & 7;
    if ( v3 != 7 )
    {
      if ( v3 != v4 )
        return 0;
      goto LABEL_7;
    }
  }
  v9 = 3;
  if ( *(_DWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
    v9 = *(_DWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = v9 + 8;
  if ( v8 != v7 )
    return 0;
LABEL_7:
  switch ( v8 )
  {
    case 0:
      if ( (a3 & 7) != 0 )
      {
        if ( (a2 & 7) != 0 )
          return 1;
        v13 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        return v13 == v11;
      }
      v10 = a3 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v10;
      result = v10 == 0;
      if ( (a2 & 7) == 0 )
      {
        v12 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 && v10 )
          return sub_AEB2F0(v12, v10);
        return v13 == v11;
      }
      return result;
    case 1:
    case 2:
    case 7:
      return 1;
    case 3:
    case 4:
    case 5:
      v16 = 0;
      if ( (unsigned int)(v3 - 3) <= 2 )
        v16 = *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v17 = 0;
      if ( (unsigned int)(v4 - 3) <= 2 )
        v17 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      return sub_AF1C90(a1, v17, v16);
    case 6:
      v14 = 0;
      if ( v4 == 6 )
        v14 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
      v15 = 0;
      if ( v3 == 6 )
        v15 = *(_DWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL);
      return v15 == v14;
  }
}
