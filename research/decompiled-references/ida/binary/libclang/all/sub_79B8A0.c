__int64 __fastcall sub_79B8A0(unsigned __int64 a1)
{
  int v2; // eax
  unsigned __int8 v3; // dl
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 *v10; // rdx

LABEL_1:
  while ( 2 )
  {
    v2 = *(_BYTE *)(a1 + 8) & 0x7F;
    v3 = *(_BYTE *)(a1 + 8) & 0x7F;
    if ( v2 == 22 || (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
      return 0;
    while ( 1 )
    {
      if ( v3 == 59 )
        return 1;
      if ( (unsigned int)(v2 - 57) <= 2 )
      {
        if ( sub_7A47A0(a1 - 64) )
          return 1;
        v8 = *(_QWORD *)(a1 + 64);
        if ( v8 && (*(_BYTE *)(v8 + 10) & 0x20) != 0 )
        {
          v5 = *(_BYTE *)(v8 + 104) & 3;
          if ( v5 == 1 )
            return 1;
          if ( v5 == 2 )
            return 0;
        }
        v2 = *(_BYTE *)(a1 + 8) & 0x7F;
      }
      if ( (unsigned int)(v2 - 32) > 5 )
        break;
      if ( sub_780E20(a1 - 72) )
        return 1;
      v6 = sub_79A2E0(a1);
      if ( (*(_WORD *)(v6 + 30) & 0x180) == 0 )
        goto LABEL_20;
      v7 = *(_QWORD *)(v6 + 16);
      a1 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) == 0 )
        goto LABEL_1;
      a1 = *(_QWORD *)(a1 + 8);
      v3 = *(_BYTE *)(a1 + 8) & 0x7F;
      v2 = v3;
      if ( !v3 || v3 == 22 )
        return 0;
    }
    v6 = sub_79A2E0(a1);
LABEL_20:
    v9 = *(_QWORD *)(v6 + 16);
    v10 = (unsigned __int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    a1 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 4) != 0 )
    {
      a1 = *v10;
      if ( *v10 )
        continue;
      return 0;
    }
    else
    {
      if ( v10 )
        continue;
      return 0;
    }
  }
}

