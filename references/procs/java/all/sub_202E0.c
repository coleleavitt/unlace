__int64 __fastcall sub_202E0(__int64 a1, char a2)
{
  int v2; // eax
  _WORD *v3; // rdx
  unsigned int v4; // r12d
  unsigned __int16 *v6; // rdx
  unsigned __int16 v7; // cx
  int v8; // eax

  if ( (a2 & 2) == 0 )
    goto LABEL_14;
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_WORD **)(a1 + 8);
    if ( *v3 == 76 )
    {
      while ( 1 )
      {
        *(_DWORD *)(a1 + 16) = v2 - 1;
        *(_QWORD *)(a1 + 8) = v3 + 1;
LABEL_14:
        v4 = sub_1FDC0(a1);
        if ( !(_BYTE)v4 )
          return 0;
        v8 = *(_DWORD *)(a1 + 16);
        if ( !v8 )
          return (((unsigned __int8)(a2 & 2) >> 1) ^ 1) & v4;
        v6 = *(unsigned __int16 **)(a1 + 8);
        v7 = *v6;
        if ( *v6 == 59 )
          break;
        if ( v7 > 0x3Bu )
        {
          if ( v7 != 60 )
          {
LABEL_34:
            LOBYTE(v4) = v7 == 0;
            return (((unsigned __int8)(a2 & 2) >> 1) ^ 1) & v4;
          }
          if ( (a2 & 1) == 0 || !(unsigned __int8)sub_201E0(a1) )
            return 0;
LABEL_29:
          if ( (a2 & 2) == 0 )
            return v4;
          v8 = *(_DWORD *)(a1 + 16);
          if ( !v8 )
            return 0;
          v6 = *(unsigned __int16 **)(a1 + 8);
LABEL_32:
          if ( *v6 != 59 )
            return 0;
          *(_DWORD *)(a1 + 16) = v8 - 1;
          *(_QWORD *)(a1 + 8) = v6 + 1;
          return v4;
        }
        if ( v7 == 46 )
        {
          while ( *v6 != 59 )
          {
            if ( *v6 != 46 )
              return 0;
            *(_DWORD *)(a1 + 16) = v8 - 1;
            *(_QWORD *)(a1 + 8) = v6 + 1;
            sub_1F840(a1);
            if ( !(unsigned __int8)sub_1FDC0(a1) )
              return 0;
            v8 = *(_DWORD *)(a1 + 16);
            if ( !v8 )
              return 0;
            v6 = *(unsigned __int16 **)(a1 + 8);
            if ( *v6 == 60 )
            {
              if ( !(unsigned __int8)sub_201E0(a1) )
                return 0;
              v8 = *(_DWORD *)(a1 + 16);
              if ( !v8 )
                return 0;
              v6 = *(unsigned __int16 **)(a1 + 8);
            }
          }
          goto LABEL_29;
        }
        if ( v7 != 47 )
          goto LABEL_34;
        if ( (unsigned __int8)sub_1F840(a1) )
        {
          v2 = *(_DWORD *)(a1 + 16);
          if ( v2 )
          {
            v3 = *(_WORD **)(a1 + 8);
            if ( *v3 == 47 )
              continue;
          }
        }
        return 0;
      }
      if ( (a2 & 2) == 0 )
        return v4;
      goto LABEL_32;
    }
  }
  return 0;
}
