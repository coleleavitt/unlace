char __fastcall sub_E24160(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // ecx
  char result; // al
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
LABEL_10:
        result = 1;
        if ( v3 == 2 )
          return result;
LABEL_11:
        if ( v3 != 1 )
        {
          result = 0;
          if ( v2 == v3 )
            return *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
          return result;
        }
LABEL_32:
        v5 = *(_QWORD *)(a2 + 32);
        if ( !v5 )
          goto LABEL_34;
        goto LABEL_33;
      }
    }
    else
    {
      if ( v2 == 3 )
      {
        result = 1;
        if ( v3 == 3 )
          return result;
        if ( v3 != 1 )
          return 0;
        goto LABEL_32;
      }
      if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)a1 )
      {
        if ( v2 != 1 )
          goto LABEL_11;
LABEL_21:
        result = 1;
        if ( v3 == 1 )
          return result;
        v5 = *(_QWORD *)(a2 + 32);
        if ( !v3 )
        {
          v5 = **(_QWORD **)(v5 + 32);
          goto LABEL_24;
        }
        if ( v3 == 2 )
        {
          if ( v5 )
          {
            v7 = *(_QWORD *)(v5 + 16);
            v5 = v7 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v7 & 4) != 0 )
              v5 = 0;
          }
          goto LABEL_24;
        }
LABEL_53:
        v5 = *(_QWORD *)(a2 + 32);
        if ( v5 )
        {
LABEL_33:
          v5 = *(_QWORD *)v5;
LABEL_34:
          v6 = *(_QWORD *)(a1 + 32);
          if ( !v2 )
            return v5 == **(_QWORD **)(v6 + 32);
          if ( v2 == 2 )
          {
            if ( v6 )
            {
              v8 = *(_QWORD *)(v6 + 16);
              v6 = v8 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v8 & 4) != 0 )
                v6 = 0;
            }
            return v5 == v6;
          }
LABEL_25:
          if ( v6 )
            v6 = *(_QWORD *)v6;
          return v5 == v6;
        }
LABEL_24:
        v6 = *(_QWORD *)(a1 + 32);
        goto LABEL_25;
      }
    }
  }
  else if ( *(_QWORD *)(a1 + 32) )
  {
    goto LABEL_11;
  }
  if ( !v3 || v3 == 2 )
  {
    result = *(_QWORD *)(a2 + 32) == 0;
    if ( !*(_QWORD *)(a2 + 32) )
      return result;
LABEL_8:
    if ( v2 != 1 )
      goto LABEL_9;
    goto LABEL_21;
  }
  if ( v3 == 3 )
  {
    if ( v2 != 1 )
    {
LABEL_9:
      if ( v2 != 2 )
        goto LABEL_11;
      goto LABEL_10;
    }
    goto LABEL_53;
  }
  if ( *(_QWORD *)(a2 + 40) )
    goto LABEL_8;
  result = 1;
  if ( *(_QWORD *)a2 )
    goto LABEL_8;
  return result;
}
