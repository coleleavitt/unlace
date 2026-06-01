__int64 __fastcall sub_98ADE0(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  int v7; // edx

  result = 0;
  if ( !*(_WORD *)(a1 + 4) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
    if ( v2 )
    {
      if ( *v2 == 5 && v2[1] == 9 )
      {
        v3 = a1 + 32;
        v4 = 8LL * *(unsigned int *)(a1 + 24);
        v5 = a1 + 32 + v4;
        if ( v4 )
        {
          while ( 1 )
          {
            if ( !*(_WORD *)(*(_QWORD *)v3 + 4LL) )
            {
              v6 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v3 + 16LL) + 24LL);
              if ( v6 )
              {
                if ( *v6 == 5 )
                {
                  v7 = v6[1];
                  if ( !v7 || v7 == 9 )
                    break;
                }
              }
            }
            v3 += 8;
            if ( v5 == v3 )
              return 1;
          }
          return 0;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

