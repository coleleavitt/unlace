__int64 __fastcall sub_698000(__int64 a1)
{
  __int64 result; // rax
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8

  if ( !*(_BYTE *)(a1 + 97) || !*(_QWORD *)(a1 + 8) )
    return 4;
  result = sub_697F70(a1);
  if ( !(_DWORD)result )
  {
    if ( v2 == 1 )
    {
      result = sub_697F70(a1 + 64);
      if ( !(_DWORD)result )
        return sub_697F70(v6);
    }
    else if ( v2 == 2 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      if ( v3 )
      {
        v4 = *(_QWORD *)(a1 + 24);
        if ( v4 + 56 * v3 != v4 )
        {
          do
          {
            result = sub_697F70(v4);
            if ( (_DWORD)result )
              break;
            v4 += 56;
          }
          while ( v4 != v5 );
        }
      }
      else
      {
        return 6;
      }
    }
    else
    {
      return 5;
    }
  }
  return result;
}
