__int64 __fastcall sub_16C55E0(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  char v11; // al

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 35 <= 3 )
  {
    LOBYTE(v7) = sub_B979F0((_QWORD *)a1);
    v6 = v7 ^ 1;
  }
  v8 = sub_B8DC30(a1, 1);
  if ( v8 )
  {
    LOBYTE(v8) = (unsigned __int8)BYTE3(*(_QWORD *)(v8 + 16)) >> 7;
  }
  else
  {
    v11 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( v11 == 8 )
    {
      LOBYTE(v8) = (*(_BYTE *)(a1 + 49) & 0x20) != 0;
    }
    else
    {
      if ( v11 != 18 )
      {
        if ( a3 )
          goto LABEL_19;
LABEL_13:
        *(_DWORD *)a4 = a2 - 1;
        *(_QWORD *)(a4 + 4) = 0x200000000LL;
        if ( (_BYTE)v6 )
        {
          if ( a2 != 1 )
          {
            *(_DWORD *)a4 = a2 - 2;
            return v6;
          }
          return 0;
        }
        return 1;
      }
      v8 = (*(_QWORD *)(a1 + 56) >> 18) & 1LL;
    }
  }
  if ( !a3 )
    goto LABEL_13;
  if ( (_BYTE)v8 )
  {
    v9 = a2 - 1;
    *(_DWORD *)(a4 + 8) = 1;
    *(_DWORD *)a4 = a2 - 1;
    goto LABEL_8;
  }
LABEL_19:
  v9 = a2 - 1;
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)a4 = a2 - 1;
LABEL_8:
  *(_DWORD *)(a4 + 4) = a3 - 1;
  if ( !(_BYTE)v6 )
    return 1;
  if ( v9 )
  {
    *(_DWORD *)a4 = a2 - 2;
    if ( a3 != 1 )
    {
      *(_DWORD *)(a4 + 4) = a3 - 2;
      return v6;
    }
    return 1;
  }
  return 0;
}
