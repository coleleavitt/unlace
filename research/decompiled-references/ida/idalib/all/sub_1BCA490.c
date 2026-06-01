char __fastcall sub_1BCA490(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char result; // al
  int v6; // esi
  int v7; // edx
  char v8; // r10
  char v9; // r9
  char v10; // r8
  char v11; // di

  if ( a2 == a3 )
    return 0;
  if ( *(_BYTE *)(a2 + 16) != *(_BYTE *)(a3 + 16) )
  {
    switch ( *(_BYTE *)(a2 + 16) )
    {
      case 0:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
        v8 = 0;
        result = 0;
        v9 = 1;
        v11 = 1;
        v10 = 1;
        break;
      case 1:
      case 3:
      case 4:
        v8 = 1;
        result = 1;
        v11 = 1;
        v9 = 1;
        v10 = 1;
        break;
      case 2:
        v8 = 0;
        result = 0;
        v9 = 0;
        v10 = 1;
        v11 = 1;
        break;
      case 5:
      case 6:
        v8 = 0;
        result = 1;
        v11 = 1;
        v9 = 1;
        v10 = 1;
        break;
      case 0xB:
      case 0xC:
        v8 = 0;
        result = 0;
        v9 = 0;
        v10 = 0;
        v11 = 0;
        break;
      case 0xD:
        v8 = 0;
        result = 0;
        v9 = 0;
        v10 = 0;
        v11 = 1;
        break;
    }
    switch ( *(_BYTE *)(a3 + 16) )
    {
      case 1:
      case 3:
      case 4:
        return 0;
      case 2:
        return v9;
      case 5:
      case 6:
        return v8;
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xF:
      case 0x10:
      case 0x11:
        return result;
      case 0xB:
      case 0xC:
        return v11;
      case 0xD:
        return v10;
      default:
        BUG();
    }
  }
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
    return 0;
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v4 )
    return v6 != 0;
  v7 = *(_DWORD *)(v4 + 24);
  if ( !v6 )
    return 0;
  if ( v7 )
    return sub_10246C0(*(_QWORD *)(*(_QWORD *)a1 + 272LL), v6, v7);
  else
    return 1;
}
