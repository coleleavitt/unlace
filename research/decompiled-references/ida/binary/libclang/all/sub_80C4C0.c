__int64 __fastcall sub_80C4C0(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx
  __int16 v3; // dx
  unsigned __int64 v4; // rax
  unsigned __int16 v5; // ax
  int v6; // eax

  do
  {
LABEL_1:
    result = a1;
    while ( 2 )
    {
      a1 = *(_QWORD *)(result + 16);
      if ( !a1 )
      {
        v3 = 383;
        if ( ((*(_WORD *)(result + 2) >> 3) & 0x7F) != 0x14 )
          return a1;
LABEL_23:
        if ( v3 != 115 )
          goto LABEL_36;
        a1 = *(_QWORD *)(a1 + 48);
        if ( a1 )
          goto LABEL_30;
        goto LABEL_37;
      }
      while ( 1 )
      {
        v3 = *(_WORD *)a1 & 0x1FF;
        if ( v3 == 49 )
        {
          v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
            v2 = *(_QWORD *)(v2 + 40);
          goto LABEL_6;
        }
        if ( v3 == 117 )
        {
          v2 = *(_QWORD *)(a1 + 24);
          goto LABEL_6;
        }
        if ( (unsigned __int16)v3 <= 0x3Cu )
          goto LABEL_16;
        if ( (unsigned __int16)v3 <= 0x3Eu )
        {
          v2 = *(_QWORD *)(a1 + 16);
          goto LABEL_6;
        }
        if ( v3 != 104 )
          break;
        if ( *(_DWORD *)(a1 + 16) != 1 )
        {
LABEL_16:
          if ( ((*(_WORD *)(result + 2) >> 3) & 0x7F) != 0x14 )
            return a1;
LABEL_36:
          a1 = *(_QWORD *)(a1 + 40);
          if ( !a1 )
LABEL_37:
            BUG();
LABEL_30:
          while ( 2 )
          {
            v5 = *(_WORD *)a1 & 0x1FF;
            if ( v5 == 49 )
            {
              v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
                v4 = *(_QWORD *)(v4 + 40);
              goto LABEL_28;
            }
            if ( v5 == 117 )
            {
              v4 = *(_QWORD *)(a1 + 24);
LABEL_28:
              if ( v4 == a1 )
                return a1;
              a1 = v4;
              continue;
            }
            break;
          }
          if ( v5 <= 0x3Cu )
            return a1;
          if ( v5 <= 0x3Eu )
          {
            v4 = *(_QWORD *)(a1 + 16);
            goto LABEL_28;
          }
          if ( v5 == 104 )
          {
            if ( *(_DWORD *)(a1 + 16) != 1 )
              return a1;
            v4 = *(_QWORD *)(a1 + 48);
            goto LABEL_28;
          }
          if ( v5 != 80 )
            return a1;
          goto LABEL_1;
        }
        v2 = *(_QWORD *)(a1 + 48);
LABEL_6:
        if ( v2 == a1 )
          goto LABEL_16;
        a1 = v2;
      }
      v6 = (*(_WORD *)(result + 2) >> 3) & 0x7F;
      if ( v6 == 20 )
        goto LABEL_23;
      if ( v6 == 19 && v3 == 93 )
      {
        result = sub_8C3120();
        if ( (*(_WORD *)result & 0x1FF) != 0x50 )
          return result;
        continue;
      }
      break;
    }
  }
  while ( v3 == 80 );
  return a1;
}

