__int64 __fastcall sub_5520(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int16 v10; // dx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 441) )
    return v2;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 <= 2 )
    return v2;
  v5 = *(unsigned __int16 *)(a1 + 57);
  if ( (unsigned __int16)v5 <= 0x1F2u )
  {
    if ( (unsigned __int16)v5 > 0x1BFu )
    {
      v13 = 0x7000000000015LL;
      LOWORD(v5) = v5 - 448;
      LOBYTE(v2) = _bittest64(&v13, v5);
      if ( !(_BYTE)v2 )
        return v2;
      goto LABEL_9;
    }
    if ( (unsigned __int16)v5 <= 0x168u )
    {
      if ( (unsigned __int16)v5 <= 0x14Bu )
        return v2;
      LOWORD(v5) = v5 - 332;
      v6 = 335544321;
      LOBYTE(v2) = _bittest64(&v6, v5);
      if ( !(_BYTE)v2 )
        return v2;
      goto LABEL_9;
    }
    v11 = (unsigned int)(v5 - 418);
    if ( (unsigned __int16)(v5 - 418) <= 6u )
    {
      v12 = 81;
      LOBYTE(v2) = _bittest64(&v12, v11);
      if ( !(_BYTE)v2 )
        return v2;
      goto LABEL_9;
    }
LABEL_19:
    LOBYTE(v2) = (_WORD)v5 == 512 || (_WORD)v5 == 388;
    if ( !(_BYTE)v2 )
      return v2;
    goto LABEL_9;
  }
  if ( (_WORD)v5 != 0x8664 )
  {
    if ( (unsigned __int16)v5 > 0x8664u )
    {
      if ( (_WORD)v5 != 0xA641 && (_WORD)v5 != 0xAA64 )
        return v2;
      goto LABEL_9;
    }
    LOBYTE(v10) = *(_WORD *)(a1 + 57);
    HIBYTE(v10) = BYTE1(v5) & 0xFE;
    if ( v10 != 614 && (_WORD)v5 != 1126 )
      goto LABEL_19;
  }
LABEL_9:
  v2 = 0;
  if ( !strcmp((const char *)a2, ".drectve") )
  {
    v2 = (*(_DWORD *)(a2 + 72) >> 11) & 1;
    LOBYTE(v2) = *(_DWORD *)(a2 + 72) == -1073741760 || (*(_DWORD *)(a2 + 72) & 0x800) != 0;
    if ( (_BYTE)v2 )
    {
      *(_DWORD *)(a1 + 449) = v4 + 1;
      v7 = qalloc();
      *(_QWORD *)(a1 + 441) = v7;
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 16) + *(_QWORD *)(a2 + 40);
        v9 = qlseek(*(_QWORD *)(a1 + 8), 0, 1);
        qlseek(*(_QWORD *)(a1 + 8), v8, 0);
        if ( qlread(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 441), *(unsigned int *)(a1 + 449)) == *(_DWORD *)(a1 + 449) )
        {
          *(_BYTE *)(a1 + 453) = (*(_BYTE *)(a2 + 73) & 8) == 0;
        }
        else
        {
          qfree(*(_QWORD *)(a1 + 441));
          *(_QWORD *)(a1 + 441) = 0;
        }
        qlseek(*(_QWORD *)(a1 + 8), v9, 0);
      }
    }
  }
  return v2;
}

