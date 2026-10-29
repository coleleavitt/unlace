__int64 __fastcall sub_BD6670(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx
  __int16 v3; // dx
  int v4; // ecx
  unsigned __int64 v5; // rcx

  do
  {
    result = *(_QWORD *)(a1 + 16);
    if ( result )
    {
      while ( 1 )
      {
        v3 = *(_WORD *)result & 0x1FF;
        if ( v3 == 48 )
        {
          v2 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(result + 16) & 4) != 0 )
            v2 = *(_QWORD *)(v2 + 40);
        }
        else if ( v3 == 116 )
        {
          v2 = *(_QWORD *)(result + 24);
        }
        else if ( ((v3 + 452) & 0x1FFu) <= 1 )
        {
          v2 = *(_QWORD *)(result + 16);
        }
        else
        {
          if ( v3 != 103 )
            goto LABEL_15;
          if ( *(_DWORD *)(result + 16) != 1 )
          {
            if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x7F) != 0x14 )
              return result;
LABEL_37:
            result = *(_QWORD *)(result + 40);
            if ( result )
            {
              while ( 1 )
              {
LABEL_30:
                v3 = *(_WORD *)result & 0x1FF;
                if ( v3 == 48 )
                {
                  v5 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(result + 16) & 4) != 0 )
                    v5 = *(_QWORD *)(v5 + 40);
                }
                else if ( v3 == 116 )
                {
                  v5 = *(_QWORD *)(result + 24);
                }
                else if ( ((v3 + 452) & 0x1FFu) <= 1 )
                {
                  v5 = *(_QWORD *)(result + 16);
                }
                else
                {
                  if ( v3 != 103 )
                    goto LABEL_17;
                  if ( *(_DWORD *)(result + 16) != 1 )
                    return result;
                  v5 = *(_QWORD *)(result + 48);
                }
                if ( v5 == result )
                  goto LABEL_17;
                result = v5;
              }
            }
LABEL_41:
            BUG();
          }
          v2 = *(_QWORD *)(result + 48);
        }
        if ( result == v2 )
          break;
        result = v2;
      }
      v3 = *(_WORD *)result & 0x1FF;
    }
    else
    {
      v3 = 383;
    }
LABEL_15:
    v4 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
    if ( v4 == 20 )
    {
      if ( v3 != 114 )
        goto LABEL_37;
      result = *(_QWORD *)(result + 48);
      if ( result )
        goto LABEL_30;
      goto LABEL_41;
    }
    if ( v4 == 19 && v3 == 92 )
    {
      result = sub_C70940(result);
      v3 = *(_WORD *)result & 0x1FF;
    }
LABEL_17:
    a1 = result;
  }
  while ( v3 == 79 );
  return result;
}

