__int64 __fastcall sub_10901B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  bool v6; // cl
  __int64 result; // rax
  bool v8; // r8
  int v9; // r10d

  v6 = a3 != 15;
  if ( a3 == 7 )
  {
    if ( *(_DWORD *)a2 == 1836020833 && *(_WORD *)(a2 + 4) == 25449 && *(_BYTE *)(a2 + 6) == 115 )
    {
      a6 = *(unsigned __int8 *)(a1 + 516);
      result = 1;
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( a3 == 11 )
  {
    if ( *(_QWORD *)a2 == 0x6D656D2D6B6C7562LL && *(_WORD *)(a2 + 8) == 29295 && *(_BYTE *)(a2 + 10) == 121 )
    {
      a6 = *(unsigned __int8 *)(a1 + 517);
      result = 1;
      goto LABEL_4;
    }
LABEL_3:
    result = 0;
LABEL_4:
    if ( (unsigned __int8)result | (a3 != 18) )
      goto LABEL_5;
    if ( *(_QWORD *)a2 ^ 0x6F69747065637865LL | *(_QWORD *)(a2 + 8) ^ 0x696C646E61682D6ELL
      || *(_WORD *)(a2 + 16) != 26478 )
    {
      goto LABEL_24;
    }
    a6 = *(unsigned __int8 *)(a1 + 520);
    result = 1;
LABEL_25:
    if ( !((unsigned __int8)result | (a3 != 11)) )
    {
      if ( *(_QWORD *)a2 == 0x6D656D69746C756DLL && *(_WORD *)(a2 + 8) == 29295 && *(_BYTE *)(a2 + 10) == 121 )
      {
        a6 = *(unsigned __int8 *)(a1 + 523);
        result = 1;
        goto LABEL_10;
      }
      if ( !(v6 | (unsigned __int8)result) )
        goto LABEL_28;
      goto LABEL_10;
    }
LABEL_8:
    if ( (unsigned __int8)result | (a3 != 10) )
      goto LABEL_9;
    if ( *(_QWORD *)a2 == 0x6C617669746C756DLL && *(_WORD *)(a2 + 8) == 25973 )
    {
      a6 = *(unsigned __int8 *)(a1 + 524);
      result = 1;
      v8 = a3 != 12;
LABEL_11:
      v9 = *(_DWORD *)(a1 + 512);
      if ( (unsigned __int8)result | v8 )
        goto LABEL_12;
      if ( *(_QWORD *)a2 == 0x2D646578616C6572LL && *(_DWORD *)(a2 + 8) == 1684892019 )
      {
        result = 1;
        LOBYTE(a6) = v9 > 1;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
LABEL_10:
    v8 = a3 != 12;
    if ( !((unsigned __int8)result | (a3 != 19))
      && !(*(_QWORD *)a2 ^ 0x70706172746E6F6ELL | *(_QWORD *)(a2 + 8) ^ 0x6F7470662D676E69LL)
      && *(_WORD *)(a2 + 16) == 28265
      && *(_BYTE *)(a2 + 18) == 116 )
    {
      a6 = *(unsigned __int8 *)(a1 + 526);
      v9 = *(_DWORD *)(a1 + 512);
      result = 1;
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if ( a3 != 15 )
  {
    if ( a3 == 22 )
    {
      if ( !(*(_QWORD *)a2 ^ 0x646E692D6C6C6163LL | *(_QWORD *)(a2 + 8) ^ 0x766F2D7463657269LL)
        && *(_DWORD *)(a2 + 16) == 1869378149
        && *(_WORD *)(a2 + 20) == 26478 )
      {
        a6 = *(unsigned __int8 *)(a1 + 519);
        result = 1;
        goto LABEL_24;
      }
      result = 0;
      goto LABEL_25;
    }
    goto LABEL_3;
  }
  if ( *(_QWORD *)a2 == 0x6D656D2D6B6C7562LL
    && *(_DWORD *)(a2 + 8) == 762933871
    && *(_WORD *)(a2 + 12) == 28783
    && *(_BYTE *)(a2 + 14) == 116 )
  {
    a6 = *(unsigned __int8 *)(a1 + 518);
    result = 1;
  }
  else
  {
    result = 0;
  }
LABEL_5:
  if ( a3 == 14 && !(_BYTE)result )
  {
    if ( *(_QWORD *)a2 == 0x6465646E65747865LL && *(_DWORD *)(a2 + 8) == 1852793645 && *(_WORD *)(a2 + 12) == 29811 )
    {
      a6 = *(unsigned __int8 *)(a1 + 521);
      result = 1;
    }
    goto LABEL_8;
  }
LABEL_24:
  if ( (unsigned __int8)result | (a3 != 4) )
    goto LABEL_25;
  if ( *(_DWORD *)a2 != 909209702 )
    goto LABEL_8;
  a6 = *(unsigned __int8 *)(a1 + 522);
  result = 1;
LABEL_9:
  if ( (unsigned __int8)result | v6 )
    goto LABEL_10;
LABEL_28:
  if ( *(_QWORD *)a2 == 0x2D656C626174756DLL
    && *(_DWORD *)(a2 + 8) == 1651469415
    && *(_WORD *)(a2 + 12) == 27745
    && *(_BYTE *)(a2 + 14) == 115 )
  {
    a6 = *(unsigned __int8 *)(a1 + 525);
    result = 1;
    v9 = *(_DWORD *)(a1 + 512);
LABEL_12:
    if ( (unsigned __int8)result | (a3 != 8) )
      goto LABEL_13;
LABEL_31:
    if ( *(_QWORD *)a2 == 0x7478652D6E676973LL )
    {
      result = 1;
      a6 = *(unsigned __int8 *)(a1 + 528);
LABEL_16:
      if ( !(_BYTE)result )
        return result;
      return a6;
    }
    goto LABEL_14;
  }
  if ( *(_QWORD *)a2 == 0x636E657265666572LL
    && *(_DWORD *)(a2 + 8) == 2037656933
    && *(_WORD *)(a2 + 12) == 25968
    && *(_BYTE *)(a2 + 14) == 115 )
  {
    a6 = *(unsigned __int8 *)(a1 + 527);
    result = 1;
    v9 = *(_DWORD *)(a1 + 512);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 512);
    if ( !((unsigned __int8)result | (a3 != 8)) )
      goto LABEL_31;
  }
LABEL_13:
  if ( !((unsigned __int8)result | (a3 != 7)) )
  {
    if ( *(_DWORD *)a2 == 1684892019 && *(_WORD *)(a2 + 4) == 12849 && *(_BYTE *)(a2 + 6) == 56 )
    {
      LOBYTE(a6) = v9 > 0;
      return a6;
    }
    goto LABEL_15;
  }
LABEL_14:
  if ( !((unsigned __int8)result | (a3 != 9)) )
  {
    if ( *(_QWORD *)a2 == 0x6C61632D6C696174LL && *(_BYTE *)(a2 + 8) == 108 )
      return *(unsigned __int8 *)(a1 + 529);
    goto LABEL_16;
  }
LABEL_15:
  if ( (unsigned __int8)result | v6 )
    goto LABEL_16;
  if ( *(_QWORD *)a2 == 0x6972612D65646977LL
    && *(_DWORD *)(a2 + 8) == 1701668980
    && *(_WORD *)(a2 + 12) == 26996
    && *(_BYTE *)(a2 + 14) == 99 )
  {
    return *(unsigned __int8 *)(a1 + 530);
  }
  else
  {
    return 0;
  }
}

