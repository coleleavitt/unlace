int __fastcall sub_254490(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rbx
  int result; // eax
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // eax

  v3 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 8) <= v3 )
  {
    if ( *(_DWORD *)(a2 + 8) < v3 )
      return 1;
    v4 = a2;
    v5 = a1;
    if ( !(_DWORD)a3 || !(unsigned __int8)compare_tinfo(*(_QWORD *)(a1 + 48), *(_QWORD *)(a2 + 48), a3) )
      goto LABEL_11;
    while ( 1 )
    {
      switch ( *(_DWORD *)(v5 + 8) )
      {
        case 0:
          return 0;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x3A:
          result = sub_254490(*(_QWORD *)(v5 + 24), *(_QWORD *)(v4 + 24), 0);
          if ( result )
            return result;
          v5 = *(_QWORD *)(v5 + 32);
          v4 = *(_QWORD *)(v4 + 32);
          goto LABEL_9;
        case 0x10:
          result = sub_254490(*(_QWORD *)(v5 + 24), *(_QWORD *)(v4 + 24), 0);
          if ( result )
            return result;
          result = sub_254490(*(_QWORD *)(v5 + 32), *(_QWORD *)(v4 + 32), 0);
          if ( result )
            return result;
          v5 = *(_QWORD *)(v5 + 40);
          v4 = *(_QWORD *)(v4 + 40);
          goto LABEL_9;
        case 0x2E:
        case 0x2F:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x43:
          goto LABEL_8;
        case 0x30:
        case 0x45:
          result = lexcompare_tinfo(*(_QWORD *)(v5 + 48), *(_QWORD *)(v4 + 48), 0);
          if ( result )
            return result;
          if ( *(_DWORD *)(v5 + 8) == 69 )
            return 0;
LABEL_8:
          v5 = *(_QWORD *)(v5 + 24);
          v4 = *(_QWORD *)(v4 + 24);
LABEL_9:
          v7 = *(_DWORD *)(v4 + 8);
          if ( *(_DWORD *)(v5 + 8) < v7 )
            return -1;
          if ( *(_DWORD *)(v5 + 8) > v7 )
            return 1;
LABEL_11:
          result = lexcompare_tinfo(*(_QWORD *)(v5 + 48), *(_QWORD *)(v4 + 48), 0);
          if ( result )
            return result;
          break;
        case 0x39:
          result = sub_254490(*(_QWORD *)(v5 + 24), *(_QWORD *)(v4 + 24), 0);
          if ( !result )
            return sub_254E60(*(_QWORD *)(v5 + 32), *(_QWORD *)(v4 + 32));
          return result;
        case 0x3B:
        case 0x3C:
          result = sub_254490(*(_QWORD *)(v5 + 24), *(_QWORD *)(v4 + 24), 0);
          if ( result )
            return result;
          v8 = *(_DWORD *)(v4 + 32);
          v9 = *(_DWORD *)(v5 + 32);
          if ( v8 < v9 )
            return -1;
          return v9 < v8;
        case 0x3D:
          v10 = **(_QWORD **)(v5 + 24);
          v11 = **(_QWORD **)(v4 + 24);
          if ( v10 < v11 )
            return -1;
          return v11 < v10;
        case 0x3E:
          return ecmp(*(_QWORD *)(v5 + 24), *(_QWORD *)(v4 + 24));
        case 0x3F:
        case 0x44:
          return strcmp(*(const char **)(v5 + 24), *(const char **)(v4 + 24));
        case 0x40:
          v10 = *(_QWORD *)(v4 + 24);
          v11 = *(_QWORD *)(v5 + 24);
          if ( v10 < v11 )
            return -1;
          return v11 < v10;
        case 0x41:
          v12 = *(_QWORD *)(v5 + 24);
          v13 = *(_QWORD *)(v4 + 24);
          if ( v13 < v12 )
            return 1;
          if ( v12 < v13 )
            return -1;
          v14 = *(_DWORD *)(v5 + 32);
          if ( *(_DWORD *)(v4 + 32) < v14 )
            return -1;
          return *(_DWORD *)(v4 + 32) > v14;
        case 0x42:
          return sub_2542E0(*(_QWORD *)(v5 + 24), *(_QWORD *)(v4 + 24));
        default:
          if ( !under_debugger )
            sub_37CFE0(50066);
          BUG();
      }
    }
  }
  return -1;
}
