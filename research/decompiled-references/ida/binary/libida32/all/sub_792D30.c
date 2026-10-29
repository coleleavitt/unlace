__int64 __fastcall sub_792D30(__int64 a1, char a2, unsigned int a3)
{
  __int64 result; // rax
  char v4; // cl
  unsigned int v5; // edi
  char v6; // di

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    while ( 1 )
    {
      v4 = *(_BYTE *)result;
      if ( !*(_BYTE *)result )
      {
        while ( !*(_DWORD *)(result + 4) )
        {
          while ( 1 )
          {
            v5 = *(_DWORD *)(result + 8);
            if ( !v5 )
              return 0;
            if ( !a2 )
              break;
            v6 = *(_BYTE *)(result + 12);
            result += 12;
            if ( v6 )
            {
              v4 = v6;
              goto LABEL_7;
            }
            if ( *(_DWORD *)(result + 4) )
              goto LABEL_8;
          }
          if ( a3 < v5 )
            return 1;
          result += 12;
          if ( *(_BYTE *)result )
            goto LABEL_8;
        }
      }
LABEL_7:
      if ( a2 == v4 && a3 >= *(_DWORD *)(result + 4) && a3 < *(_DWORD *)(result + 8) )
        return 1;
LABEL_8:
      result += 12;
    }
  }
  return result;
}

