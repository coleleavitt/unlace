__int64 __fastcall sub_7B57A0(__int64 a1, char a2, unsigned __int64 a3)
{
  __int64 result; // rax
  char v4; // cl
  unsigned __int64 v5; // rdi
  char v6; // di

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    while ( 1 )
    {
      v4 = *(_BYTE *)result;
      if ( !*(_BYTE *)result )
      {
        while ( !*(_QWORD *)(result + 8) )
        {
          while ( 1 )
          {
            v5 = *(_QWORD *)(result + 16);
            if ( !v5 )
              return 0;
            if ( !a2 )
              break;
            v6 = *(_BYTE *)(result + 24);
            result += 24;
            if ( v6 )
            {
              v4 = v6;
              goto LABEL_7;
            }
            if ( *(_QWORD *)(result + 8) )
              goto LABEL_8;
          }
          if ( a3 < v5 )
            return 1;
          result += 24;
          if ( *(_BYTE *)result )
            goto LABEL_8;
        }
      }
LABEL_7:
      if ( a2 == v4 && a3 >= *(_QWORD *)(result + 8) && a3 < *(_QWORD *)(result + 16) )
        return 1;
LABEL_8:
      result += 24;
    }
  }
  return result;
}
