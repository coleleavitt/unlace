__int16 __fastcall sub_2AE60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = *(_QWORD *)(a2 + 128);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v6 = *(_QWORD *)(a2 + 208);
      if ( !*(_QWORD *)(a2 + 168) )
      {
        if ( v6 )
        {
          LOWORD(v2) = 2245;
          if ( v6 == 1 )
          {
            LOWORD(v2) = 2241;
            if ( *(_QWORD *)(a2 + 248) )
              LOWORD(v2) = 2245;
          }
        }
        else
        {
          v7 = *(_QWORD *)(a2 + 248);
          LOWORD(v2) = 2240;
          if ( v7 )
            LOWORD(v2) = (v7 != 1) + 2244;
        }
        goto LABEL_6;
      }
      if ( !v6 )
      {
        if ( *(_QWORD *)(a2 + 248) )
          return v2;
        LOWORD(v2) = 2242;
        goto LABEL_6;
      }
      if ( v6 == 1 && !*(_QWORD *)(a2 + 248) )
      {
        LOWORD(v2) = 2243;
        goto LABEL_6;
      }
    }
    else
    {
      if ( v2 != 2 )
        return v2;
      v5 = *(_QWORD *)(a2 + 208);
      if ( !*(_QWORD *)(a2 + 168) )
      {
        if ( v5 )
        {
          LOWORD(v2) = 2251;
          if ( v5 == 1 )
          {
            LOWORD(v2) = 2247;
            if ( *(_QWORD *)(a2 + 248) )
              LOWORD(v2) = 2251;
          }
        }
        else
        {
          v8 = *(_QWORD *)(a2 + 248);
          LOWORD(v2) = 2246;
          if ( v8 )
            LOWORD(v2) = (v8 != 1) + 2250;
        }
        goto LABEL_6;
      }
      if ( !v5 )
      {
        if ( *(_QWORD *)(a2 + 248) )
          return v2;
        LOWORD(v2) = 2248;
        goto LABEL_6;
      }
      if ( v5 == 1 )
      {
        LOWORD(v2) = 2249;
        if ( !*(_QWORD *)(a2 + 248) )
        {
LABEL_6:
          *(_WORD *)(a2 + 24) = v2;
          *(_BYTE *)(a2 + 121) = 0;
          *(_BYTE *)(a2 + 161) = 0;
          *(_BYTE *)(a2 + 201) = 0;
          *(_BYTE *)(a2 + 241) = 0;
        }
      }
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 208);
    if ( !*(_QWORD *)(a2 + 168) )
    {
      if ( v3 )
      {
        LOWORD(v2) = 2239;
        if ( v3 == 1 )
        {
          LOWORD(v2) = 2235;
          if ( *(_QWORD *)(a2 + 248) )
            LOWORD(v2) = 2239;
        }
      }
      else
      {
        v4 = *(_QWORD *)(a2 + 248);
        LOWORD(v2) = 2234;
        if ( v4 )
          LOWORD(v2) = (v4 != 1) + 2238;
      }
      goto LABEL_6;
    }
    if ( !v3 )
    {
      if ( *(_QWORD *)(a2 + 248) )
        return v2;
      LOWORD(v2) = 2236;
      goto LABEL_6;
    }
    if ( v3 == 1 && !*(_QWORD *)(a2 + 248) )
    {
      LOWORD(v2) = 2237;
      goto LABEL_6;
    }
  }
  return v2;
}
