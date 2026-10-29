__int64 __fastcall sub_80E700(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int16 v6; // ax
  __int64 v8; // rsi
  void *v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-20h]

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    return v2;
  v3 = *(unsigned __int64 **)(a1 + 16);
  if ( (unsigned int)((__int64)(*(_QWORD *)(a1 + 24) - (_QWORD)v3) >> 3) != 1 )
    return v2;
  v4 = *v3;
  if ( !v4 )
    return v2;
  while ( 1 )
  {
    v6 = *(_WORD *)v4 & 0x1FF;
    if ( v6 == 80 )
      goto LABEL_5;
    if ( v6 > 0x3Cu )
    {
      if ( v6 <= 0x3Eu )
      {
LABEL_5:
        v5 = *(_QWORD *)(v4 + 16);
      }
      else
      {
        if ( v6 != 117 )
          return 0;
        v5 = *(_QWORD *)(v4 + 24);
      }
LABEL_6:
      if ( v5 == v4 )
        return 0;
      goto LABEL_7;
    }
    if ( v6 != 49 )
      break;
    v5 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 16) & 4) == 0 )
      goto LABEL_6;
    v5 = *(_QWORD *)(v5 + 40);
    if ( v5 == v4 )
      return 0;
LABEL_7:
    v4 = v5;
  }
  if ( v6 != 53 )
    return 0;
  v8 = *(unsigned int *)(v4 + 24);
  if ( (unsigned __int64)(v8 + 63) <= 0x7F )
  {
    v9 = *(void **)(v4 + 16);
    goto LABEL_21;
  }
  sub_2585D40(&v9, v8, (unsigned __int64)(v8 + 63) >> 6, *(_QWORD *)(v4 + 16));
  v2 = v10;
  if ( v10 <= 0x40 )
  {
LABEL_21:
    LOBYTE(v2) = v9 == nullptr;
    return v2;
  }
  v2 -= sub_2587400(&v9);
  if ( v2 <= 0x40 )
  {
    LOBYTE(v2) = *(_QWORD *)v9 == 0;
    goto LABEL_25;
  }
  if ( !v9 )
    return 0;
  v2 = 0;
LABEL_25:
  operator delete[](v9);
  return v2;
}

