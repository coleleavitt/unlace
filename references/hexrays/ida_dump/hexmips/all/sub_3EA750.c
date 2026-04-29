__int64 __fastcall sub_3EA750(__int64 a1, double a2)
{
  unsigned __int16 v3; // di
  __int64 v4; // rax
  char *v5; // rsi
  char *v6; // rcx
  __int64 v7; // rdx
  signed int v8; // eax
  signed int v9; // edx

  v3 = *(_WORD *)(a1 + 48);
  v4 = 308;
  v5 = (char *)&unk_415E60;
  while ( v4 > 0 )
  {
    while ( 1 )
    {
      v6 = &v5[8 * (v4 >> 1)];
      if ( *(_WORD *)v6 >= v3 )
        break;
      v5 = v6 + 8;
      v4 = v4 - 1 - (v4 >> 1);
      if ( v4 <= 0 )
        goto LABEL_5;
    }
    v4 >>= 1;
  }
LABEL_5:
  if ( v5 == (char *)&unk_416800 || v3 != *(_WORD *)v5 )
    return 0;
  v7 = *(_QWORD *)v5;
  *(_QWORD *)(a1 + 888) = *(_QWORD *)v5;
  v8 = WORD1(v7);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  if ( v8 <= v9 )
  {
    if ( !(_WORD)v8 )
    {
      if ( (*(_BYTE *)(a1 + 892) & 1) != 0 )
      {
LABEL_10:
        if ( (*(_BYTE *)(a1 + 52) & 4) != 0 )
        {
          switch ( *(_BYTE *)(a1 + 56) )
          {
            case 'd':
            case 'l':
              *(_WORD *)(a1 + 890) = 8;
              return 1;
            case 'p':
              return 0;
            case 's':
            case 'w':
              *(_WORD *)(a1 + 890) = 4;
              return 1;
            default:
              if ( !under_debugger )
                sub_37E160(0xCCB4u, (__int64)v5, a2);
              goto LABEL_26;
          }
        }
        if ( !under_debugger )
          sub_37E160(0xCCB3u, (__int64)v5, a2);
LABEL_26:
        BUG();
      }
      *(_WORD *)(a1 + 890) = v9;
    }
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 892) & 1) != 0 )
  {
    if ( !(_WORD)v8 )
      goto LABEL_10;
    return 1;
  }
  sub_32C190(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x32u);
  return 0;
}
