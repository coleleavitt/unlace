__int64 __fastcall sub_789EF0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax
  char v5; // al
  char v7; // dl
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rdx

  if ( (*(_BYTE *)(a1 + 84) & 3) != 2 )
  {
    v1 = a1;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v1 + 80) & 0x7Fu) - 33 <= 3 )
      {
        v2 = *(_QWORD *)(sub_79A2E0(v1 + 72) + 16);
        v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v2 & 4) != 0 )
          v3 = (_QWORD *)*v3;
        if ( v3 )
        {
          v4 = v3[8];
          if ( v4 )
          {
            if ( (*(_BYTE *)(v4 + 10) & 0x20) != 0
              && (*(_DWORD *)(v1 + 40) & 7) == 6
              && *(_DWORD *)(*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 42 )
            {
              goto LABEL_42;
            }
          }
        }
      }
      if ( (*(_BYTE *)(v1 + 83) & 2) != 0 )
      {
LABEL_42:
        v7 = *(_BYTE *)(v1 + 84);
        if ( (v7 & 3) != 2 )
          goto LABEL_20;
      }
      v5 = *(_BYTE *)(v1 + 28) & 0x7F;
      if ( v5 == 36 && (*(_BYTE *)(v1 + 87) & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v1 + 184) && (*(_BYTE *)(v1 + 84) & 4) != 0 )
          return 1;
LABEL_14:
        v1 = *(_QWORD *)(v1 + 184);
        goto LABEL_15;
      }
      v11 = *(_QWORD *)(v1 + 152);
      if ( v11 > 7 )
        break;
LABEL_24:
      v8 = sub_789AD0(v1, 1);
      if ( v8 && (unsigned __int8)sub_789EF0(v8) )
        return 1;
      if ( (*(_BYTE *)(v1 + 28) & 0x7Fu) - 33 > 3 || !(unsigned __int8)sub_7A5D20(v1) )
        return 0;
      v9 = *(_QWORD *)(sub_79A2E0(v1 + 72) + 16);
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v9 & 4) != 0 )
        v10 = (_QWORD *)*v10;
      if ( v10 )
        v10 -= 8;
      v1 = sub_7A3750(v10);
LABEL_15:
      if ( (*(_BYTE *)(v1 + 84) & 3) == 2 )
        return 1;
    }
    if ( (v11 & 6) != 0 || (*(_BYTE *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 32 > 5 )
    {
      v7 = *(_BYTE *)(v1 + 84);
      if ( (v7 & 3) == 1 )
      {
LABEL_20:
        if ( (v7 & 4) != 0 )
          return 1;
        v5 = *(_BYTE *)(v1 + 28) & 0x7F;
      }
    }
    if ( v5 == 36 && (*(_BYTE *)(v1 + 87) & 0x20) != 0 )
      goto LABEL_14;
    goto LABEL_24;
  }
  return 1;
}

