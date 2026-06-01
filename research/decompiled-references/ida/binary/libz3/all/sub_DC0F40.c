__int64 __fastcall sub_DC0F40(__int64 a1)
{
  int v1; // ebp
  int i; // eax
  int v3; // eax
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  int v7; // eax
  int v9; // [rsp+0h] [rbp-28h]
  int v10; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+10h] [rbp-18h]
  __int64 v12; // [rsp+18h] [rbp-10h]

  v1 = a1 + 16;
  for ( i = *(_DWORD *)(a1 + 1424); i == 2; *(_DWORD *)(a1 + 1424) = i )
  {
    v4 = *(_QWORD *)(a1 + 1408);
    --*(_DWORD *)(a1 + 2096);
    if ( v4 )
      v3 = *(_DWORD *)(v4 - 4);
    else
      v3 = 0;
    *(_DWORD *)(a1 + 2068) = v3;
    i = sub_DDB0A0(v1, v9, v10, v11, v12);
  }
  v5 = *(_DWORD *)(a1 + 2096);
  if ( v5 < 0 )
  {
    *(_DWORD *)(a1 + 2096) = 0;
    if ( i != 9 )
    {
      v5 = 0;
      goto LABEL_16;
    }
    return 1;
  }
  if ( i != 9 )
    goto LABEL_16;
  if ( !v5 )
    return 1;
LABEL_10:
  if ( i != 9 )
  {
    if ( i == 1 )
    {
      *(_DWORD *)(a1 + 2096) = v5 + 1;
    }
    else
    {
      while ( i == 2 )
      {
        v6 = *(_QWORD *)(a1 + 1408);
        *(_DWORD *)(a1 + 2096) = v5 - 1;
        if ( v6 )
          goto LABEL_14;
LABEL_21:
        v7 = 0;
LABEL_15:
        *(_DWORD *)(a1 + 2068) = v7;
        i = sub_DDB0A0(v1, v9, v10, v11, v12);
        v5 = *(_DWORD *)(a1 + 2096);
        *(_DWORD *)(a1 + 1424) = i;
        if ( v5 < 0 )
        {
          *(_DWORD *)(a1 + 2096) = 0;
          v5 = 0;
          if ( i == 1 )
            return 1;
        }
        else
        {
LABEL_16:
          if ( v5 )
            goto LABEL_10;
          if ( i == 1 )
            return 1;
        }
        if ( i == 9 )
          return 0;
      }
    }
    v6 = *(_QWORD *)(a1 + 1408);
    if ( !v6 )
      goto LABEL_21;
LABEL_14:
    v7 = *(_DWORD *)(v6 - 4);
    goto LABEL_15;
  }
  return 0;
}

