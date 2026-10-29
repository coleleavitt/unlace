_BOOL8 __fastcall sub_B99930(__int64 a1)
{
  char v1; // dl
  _BOOL8 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_BYTE *)(a1 + 23);
  result = 1;
  if ( (v1 & 0x20) == 0 )
  {
    result = 0;
    if ( v1 < 0 )
    {
      v3 = a1 + 24 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF);
      if ( a1 + 24 != v3 )
      {
        v4 = *(_QWORD *)(v3 - 8);
        if ( (*(_BYTE *)(v4 + 29) & 2) != 0 )
        {
          v5 = v3 - 8;
          while ( 1 )
          {
            if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x43 )
            {
              result = (*(_BYTE *)(v4 + 60) & 4) != 0;
              if ( (*(_BYTE *)(v4 + 60) & 4) != 0 && v4 != -80 && (**(_DWORD **)(v4 + 80) & 0x4000) != 0 )
                break;
            }
            if ( a1 + 24 != v5 )
            {
              v4 = *(_QWORD *)(v5 - 8);
              v5 -= 8;
              if ( (*(_BYTE *)(v4 + 29) & 2) != 0 )
                continue;
            }
            return 0;
          }
        }
      }
    }
  }
  return result;
}

