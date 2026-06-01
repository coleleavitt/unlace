void __fastcall sub_1838230(char *a1, char *a2)
{
  char *v2; // rax
  unsigned int v3; // r8d
  int v4; // r10d
  char *v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ecx
  char *v8; // rdx
  int v9; // eax

  if ( a1 != a2 )
  {
    v2 = a1 + 8;
    if ( a2 != a1 + 8 )
    {
      do
      {
        v3 = *(_DWORD *)v2;
        v4 = *((_DWORD *)v2 + 1);
        v5 = v2 + 8;
        if ( *(_DWORD *)v2 >= *(_DWORD *)a1 )
        {
          v7 = *((_DWORD *)v2 - 2);
          v8 = v2 - 8;
          if ( v3 < v7 )
          {
            while ( 1 )
            {
              v9 = *((_DWORD *)v8 + 1);
              *((_DWORD *)v8 + 2) = v7;
              v7 = *((_DWORD *)v8 - 2);
              *((_DWORD *)v8 + 3) = v9;
              if ( v3 >= v7 )
                break;
              v8 -= 8;
            }
            *(_DWORD *)v8 = v3;
            *((_DWORD *)v8 + 1) = v4;
          }
          else
          {
            *(_DWORD *)v2 = v3;
            *((_DWORD *)v2 + 1) = v4;
          }
        }
        else
        {
          v6 = (v2 - a1) >> 3;
          if ( v2 - a1 > 0 )
          {
            do
            {
              v2 -= 8;
              *((_DWORD *)v2 + 2) = *(_DWORD *)v2;
              *((_DWORD *)v2 + 3) = *((_DWORD *)v2 + 1);
              --v6;
            }
            while ( v6 );
          }
          *(_DWORD *)a1 = v3;
          *((_DWORD *)a1 + 1) = v4;
        }
        v2 = v5;
      }
      while ( a2 != v5 );
    }
  }
}
