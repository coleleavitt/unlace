unsigned __int64 __fastcall sub_E54A50(__int64 a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  char v10; // al

  while ( 1 )
  {
    v2 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (unsigned int)v2 - 59 <= 2 )
    {
      v3 = *(_QWORD *)(a1 + 128);
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 10) & 0x20) != 0 )
        {
          v4 = sub_B733B0(a1);
          if ( v4 && (*(_BYTE *)(v4 + 28) & 0x7F) == 0x2B )
          {
            v5 = *(_QWORD *)(v4 + 16);
            result = v5 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v5 & 4) != 0 )
            {
              result = *(_QWORD *)result;
              if ( result )
                return result;
            }
            else if ( result )
            {
              return result;
            }
          }
          v2 = *(_BYTE *)(a1 + 28) & 0x7F;
        }
      }
    }
    if ( v2 == 8 )
    {
      v7 = *(_QWORD *)(a1 + 120);
      if ( v7 )
      {
        if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x2B )
          break;
      }
    }
    v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v9 = *(_QWORD *)v9;
    v10 = *(_BYTE *)(v9 + 8) & 0x7F;
    if ( ((v10 + 102) & 0x7Fu) > 1 && v10 != 7 )
      return sub_B6AD60(v9);
    a1 = sub_B68470(v9);
  }
  v8 = *(_QWORD *)(v7 + 16);
  result = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v8 & 4) != 0 )
    return *(_QWORD *)result;
  return result;
}

