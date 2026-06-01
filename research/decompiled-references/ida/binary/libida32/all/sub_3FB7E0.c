bool __fastcall sub_3FB7E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  int v5; // eax
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  unsigned int v8; // r14d

  if ( *(_DWORD *)(a2 + 8) != -1 )
    return *(_WORD *)(a2 + 14) != 0;
  v4 = a3;
  v5 = sub_559920(a1, a2, a3, 2);
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( v5 > 1 )
  {
    v7 = v4 + 1;
    v8 = v5 + v4;
    while ( (sub_3B9AA0(a1, v7, 4) & 0x400) == 0 )
    {
      if ( ++v7 == v8 )
        goto LABEL_10;
    }
    goto LABEL_8;
  }
LABEL_10:
  if ( (unsigned __int8)sub_409FA0(a1, v4, v6) || sub_375980(0x20u, a2, 1) < 0 )
  {
LABEL_8:
    *(_WORD *)(a2 + 14) = 0;
    return 0;
  }
  return 1;
}

