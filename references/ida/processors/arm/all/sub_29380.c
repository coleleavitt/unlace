__int64 __fastcall sub_29380(__int64 a1)
{
  unsigned __int16 v1; // cx
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rdx
  __int64 v6; // rax
  char v7; // al

  v1 = *(_WORD *)(a1 + 24);
  if ( (unsigned __int16)(v1 - 370) <= 1u )
  {
    v6 = a1 + 40;
    if ( *(_BYTE *)(a1 + 41) != 12 )
      goto LABEL_22;
    v3 = *(_DWORD *)(a1 + 48);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a1 + 81) == 12 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    v3 = v2;
    if ( v1 <= 0x8Du )
    {
      if ( v1 > 0x72u )
      {
        v4 = 1LL << ((unsigned __int8)v1 - 115);
        if ( (v4 & 0x4000004) != 0 )
          return (unsigned int)(8 * v2 + 4);
        if ( (v4 & 0x2000002) != 0 )
          return (unsigned int)(4 * v2);
        if ( (v4 & 0x1000001) != 0 )
          return (unsigned int)(8 * v2);
      }
      goto LABEL_22;
    }
    if ( v1 == 343 || v1 == 416 )
    {
      v6 = a1 + 80;
LABEL_13:
      v7 = *(_BYTE *)(v6 + 5);
      switch ( v7 )
      {
        case 4:
          return (unsigned int)(8 * v3);
        case 3:
          return (unsigned int)(4 * v3);
        case 18:
          return (unsigned int)(2 * v3);
      }
    }
  }
LABEL_22:
  if ( under_debugger )
    BUG();
  interr(10499);
  return sub_29480();
}
