__int64 __fastcall sub_B60070(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  char v14; // al
  __int64 v15; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = sub_B8C330(v1);
  v3 = sub_B7D2B0(v1, v2);
  if ( !(_BYTE)v3 )
    return v3;
  v5 = sub_F63270(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) & 0xFFFFFFFFFFFFFFF0LL));
  v6 = sub_B7E900(v5);
  if ( v6 )
  {
    v7 = 0;
    v8 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
    {
      do
      {
        if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 49 > 2 )
        {
          do
          {
            v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v8 = v9;
            if ( !v9 )
              goto LABEL_9;
          }
          while ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 49 > 2 );
        }
        ++v7;
        v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( v8 );
      if ( v7 )
        return 0;
LABEL_13:
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_B7E900(v5) + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      v14 = *(_BYTE *)(v12 + 16);
      switch ( v14 )
      {
        case 13:
          if ( (((*(_WORD *)(v12 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            return 0;
          break;
        case 47:
          v15 = sub_F60F10(v12, v2, v10, v11, v13);
          if ( (*(_BYTE *)(v15 + 74) & 1) == 0 && (*(_QWORD *)(v15 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            return 0;
          break;
        case 10:
          break;
        default:
          return 0;
      }
      return v3;
    }
LABEL_9:
    if ( !v7 )
      goto LABEL_13;
  }
  return 0;
}
