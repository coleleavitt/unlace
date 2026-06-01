__int64 __fastcall sub_80CD40(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 v2; // r9
  unsigned __int64 v3; // rax
  unsigned int v4; // r10d
  unsigned __int64 v6; // rax
  unsigned int v7; // r10d
  unsigned __int16 *v8; // rdi
  __int16 v9; // cx
  unsigned __int16 *v10; // rdx
  unsigned __int16 v11; // ax
  __int16 v12; // si
  unsigned int v13; // r10d
  unsigned __int16 *v14; // rdx
  __int16 v15; // cx
  unsigned __int16 *v16; // rdi
  unsigned __int16 v17; // ax
  __int16 v18; // si

  v1 = *(_WORD *)(a1 + 4);
  v2 = a1;
  if ( !v1 )
  {
    LOWORD(v3) = *(_WORD *)(a1 + 6);
    v4 = 0;
    if ( (v3 & 0x8000u) == 0LL )
    {
      while ( !(_WORD)v3 )
      {
        v6 = *(_QWORD *)(a1 + 6);
        v4 += 16;
        *(_QWORD *)(a1 + 12) = *(_QWORD *)(a1 + 14);
        *(_QWORD *)(a1 + 4) = v6;
        *(_WORD *)(a1 + 20) = 0;
        if ( v4 == 128 )
          return 128;
        v3 = v6 >> 16;
      }
      if ( (unsigned __int16)v3 <= 0xFFu )
      {
        v8 = (unsigned __int16 *)(a1 + 2);
        do
        {
          v9 = 0;
          v10 = (unsigned __int16 *)(v2 + 20);
          do
          {
            v11 = *v10;
            v12 = v9;
            --v10;
            v9 = HIBYTE(v11);
            v10[1] = v12 | (v11 << 8);
          }
          while ( v8 != v10 );
          LOWORD(v3) = *(_WORD *)(v2 + 6);
          v4 += 8;
        }
        while ( (unsigned __int16)v3 <= 0xFFu );
      }
      if ( (v3 & 0x8000u) == 0LL )
      {
        do
          sub_80CCC0(v2);
        while ( *(__int16 *)(v2 + 6) >= 0 );
        return v13;
      }
    }
    return v4;
  }
  if ( v1 > 0xFFu )
  {
    v14 = (unsigned __int16 *)(a1 + 4);
    v15 = 0;
    v16 = (unsigned __int16 *)(a1 + 22);
    do
    {
      v17 = *v14;
      v18 = v15;
      ++v14;
      v15 = v17 << 8;
      *(v14 - 1) = v18 | HIBYTE(v17);
    }
    while ( v14 != v16 );
    v4 = -8;
    if ( !*(_WORD *)(v2 + 4) )
      return v4;
  }
  do
    sub_80CC40(v2);
  while ( *(_WORD *)(v2 + 4) );
  return v7;
}

