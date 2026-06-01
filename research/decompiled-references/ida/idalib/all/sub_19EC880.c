__int64 __fastcall sub_19EC880(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  _BYTE *v8; // rax
  _BYTE *v9; // rdx

  v3 = *a1;
  if ( *a1 == 1 )
    goto LABEL_10;
  if ( v3 )
  {
    if ( v3 > 3u )
      goto LABEL_10;
    return 0;
  }
  else
  {
    v4 = *((_DWORD *)a1 + 1);
    while ( 1 )
    {
      result = 0;
      if ( v4 == 1 )
        break;
      if ( v4 == 2 || !v4 )
        return 1;
LABEL_10:
      v4 = *((_DWORD *)a1 + 1);
      if ( !v4 )
      {
        v6 = *(_QWORD *)(a3 + 8);
        if ( v6 )
        {
          v7 = *(_BYTE **)a3;
          if ( !*v7 )
            return 0;
          v8 = v7 + 1;
          v9 = &v7[v6];
          while ( v9 != v8 )
          {
            if ( !*v8++ )
              return 0;
          }
        }
        return 1;
      }
    }
  }
  return result;
}
