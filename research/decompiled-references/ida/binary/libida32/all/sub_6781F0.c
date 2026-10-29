__int64 __fastcall sub_6781F0(__int64 a1)
{
  __int64 result; // rax
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8

  if ( !*(_BYTE *)(a1 + 89) || !*(_QWORD *)(a1 + 8) )
    return 4;
  result = sub_678170(a1);
  if ( !(_DWORD)result )
  {
    if ( v2 == 1 )
    {
      result = sub_678170(a1 + 56);
      if ( !(_DWORD)result )
        return sub_678170(v6);
    }
    else if ( v2 == 2 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      if ( v3 )
      {
        v4 = *(_QWORD *)(a1 + 24);
        if ( v4 + 40 * v3 != v4 )
        {
          do
          {
            result = sub_678170(v4);
            if ( (_DWORD)result )
              break;
            v4 += 40;
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

