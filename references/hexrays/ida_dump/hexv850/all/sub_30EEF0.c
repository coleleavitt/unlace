__int64 __fastcall sub_30EEF0(__int64 a1, int *a2)
{
  int v2; // eax
  int v3; // edx

  if ( a2[1] != *(_DWORD *)(a1 + 4) )
  {
    if ( !under_debugger )
      sub_37CFE0(51846);
    goto LABEL_26;
  }
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 8 )
  {
    v3 = *a2;
    if ( *a2 != 1 )
    {
      if ( v3 == 8 )
      {
        sub_30D2C0(a1);
        *(_DWORD *)a1 = 8;
        return 1;
      }
      if ( v2 )
      {
        if ( !v3 )
          goto LABEL_18;
        if ( v2 == 1 )
        {
          if ( a2 != (int *)a1 )
          {
            sub_30D2C0(a1);
            sub_30D380(a1, a2);
          }
          return 1;
        }
        if ( (unsigned int)sub_30D500(a1, (__int64)a2) )
        {
          if ( (unsigned __int64)*(int *)(a1 + 4) > 8 )
          {
            if ( !under_debugger )
              sub_37CFE0(51949);
          }
          else
          {
            if ( (*(_DWORD *)a1 & 0xF) == 2 && (*a2 & 0xF) == 2 )
            {
              if ( (unsigned __int8)sub_312800(a1 + 8, a2 + 2) )
              {
                if ( *(_QWORD *)(a1 + 16) )
                  return 1;
LABEL_18:
                sub_30D2C0(a1);
                return 1;
              }
              return 0;
            }
            if ( !under_debugger )
              sub_37CFE0(51979);
          }
LABEL_26:
          BUG();
        }
      }
    }
  }
  return 0;
}
