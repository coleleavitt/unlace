__int64 __fastcall sub_57A5D0(__int64 a1)
{
  unsigned int v1; // r11d
  __int64 v2; // r9
  int v3; // r8d
  __int64 i; // rsi
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  bool v11; // al
  __int64 v12; // rax
  unsigned __int16 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int8 *v16; // rax
  unsigned __int64 v17; // rdx

  v1 = *(_DWORD *)(a1 + 16) - 1;
  if ( *(_DWORD *)(a1 + 16) == 1 )
    return 0;
  v2 = 32LL * v1;
  v3 = *(_DWORD *)(a1 + 16) - 1;
  for ( i = v2 + *(_QWORD *)(a1 + 8); ; i -= 32 )
  {
    v5 = *(unsigned __int64 **)i;
    if ( v1 == v3 )
    {
      v6 = *v5;
    }
    else
    {
      v6 = *v5;
      if ( (v6 & 1) != 0 )
        v7 = (v6 >> 1) & 1;
      else
        LOBYTE(v7) = *(_BYTE *)(v6 + 44) & 1;
      if ( (_BYTE)v7 )
        return 0;
      if ( (v6 & 1) != 0 )
        v8 = (v6 >> 3) & 1;
      else
        LOBYTE(v8) = (*(_BYTE *)(v6 + 44) & 4) != 0;
      if ( !(_BYTE)v8 )
      {
        v9 = **(_QWORD **)(i - v2 + 32LL * (unsigned int)(*(_DWORD *)(a1 + 16) - 2));
        if ( *(_WORD *)(v9 + 66) )
        {
          if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 128LL)
                        + 2LL
                        * (*(unsigned __int16 *)(v9 + 66)
                         * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 36LL)
                         + *(_DWORD *)(i + 24))) )
            return 0;
        }
      }
    }
    if ( (v6 & 1) != 0 )
      v11 = (v6 & 8) != 0;
    else
      v11 = (*(_BYTE *)(v6 + 44) & 4) != 0;
    if ( v11 )
      return 0;
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( *(_DWORD *)(v12 + 32) )
    {
      v13 = (unsigned __int16 *)(*(_QWORD *)(v12 + 88)
                               + 4LL
                               * *(unsigned __int16 *)(**(_QWORD **)(i
                                                                   - v2
                                                                   + 32LL * (unsigned int)(*(_DWORD *)(a1 + 16) - 2))
                                                     + 66LL));
      v14 = *(_QWORD *)(v12 + 96);
      v15 = *v13;
      v16 = (unsigned __int8 *)(v14 + 4 * v15);
      v17 = v14 + 4 * (v15 + v13[1]);
      if ( (unsigned __int64)v16 < v17 )
        break;
    }
LABEL_22:
    if ( !--v3 )
      return 0;
  }
  while ( v16[3] || v16[2] != *(_DWORD *)(i + 24) )
  {
    v16 += 4;
    if ( (unsigned __int64)v16 >= v17 )
      goto LABEL_22;
  }
  return *(unsigned __int16 *)v16;
}
