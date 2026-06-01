__int64 __fastcall sub_7D1DD0(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  v1 = *(_BYTE *)(a1 + 23);
  result = 1;
  if ( (v1 & 0x20) == 0 )
  {
    result = 0;
    if ( v1 < 0 )
    {
      v3 = a1 + 24 + (unsigned int)(8 * *(_DWORD *)(a1 + 20));
      if ( v3 != a1 + 24 )
      {
        do
        {
          v4 = *(_QWORD *)(v3 - 8);
          if ( (*(_BYTE *)(v4 + 29) & 2) == 0 )
            break;
          if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x41 && (*(_BYTE *)(v4 + 60) & 4) != 0 )
          {
            result = (**(_DWORD **)(v4 + 80) >> 14) & 1;
            if ( (_DWORD)result )
              return result;
          }
          v3 -= 8;
        }
        while ( a1 + 24 != v3 );
        return 0;
      }
    }
  }
  return result;
}

