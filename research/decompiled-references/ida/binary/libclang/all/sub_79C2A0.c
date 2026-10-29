unsigned __int64 __fastcall sub_79C2A0(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( (_BYTE)v2 != 60 )
    goto LABEL_2;
  v7 = sub_79A2E0(a1);
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0 )
    v7 = sub_793320(v7);
  v3 = v1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 2160LL) + 1LL) & 8) != 0 )
  {
LABEL_2:
    v3 = v1;
    if ( (_BYTE)v2 == 60 )
      goto LABEL_8;
    while ( (unsigned __int8)v2 <= 0x17u )
    {
      v4 = 8388688;
      if ( !_bittest64(&v4, v2) )
        break;
      while ( 1 )
      {
        v5 = *(_QWORD *)(sub_79A2E0(v3) + 16);
        v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v5 & 4) != 0 )
          v3 = *(_QWORD *)v3;
        v2 = *(_BYTE *)(v3 + 8) & 0x7F;
        if ( (_BYTE)v2 != 60 )
          break;
LABEL_8:
        if ( *(char *)(v3 + 12) < 0 )
          return v3;
      }
    }
  }
  else
  {
    while ( *(char *)(v3 + 12) >= 0 )
    {
      while ( 1 )
      {
        do
        {
          v8 = *(_QWORD *)(sub_79A2E0(v3) + 16);
          v3 = v8 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v8 & 4) != 0 )
            v3 = *(_QWORD *)v3;
          v10 = *(_BYTE *)(v3 + 8) & 0x7F;
        }
        while ( (((_BYTE)v10 + 72) & 0x7Fu) <= 3 );
        if ( (_BYTE)v10 == 60 )
          break;
        if ( (unsigned __int8)v10 > 0x17u || !_bittest64(&v9, v10) )
          return v3;
      }
    }
  }
  return v3;
}

