__int64 __fastcall sub_18C3500(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  char v6; // al
  unsigned __int8 v7; // al
  __int64 v8; // rbp
  __int64 *v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = *(_WORD *)a2 & 0x1FF;
  if ( v2 == 71 )
  {
    if ( (*(_QWORD *)a2 & 0x80000LL) == 0 || !*(_QWORD *)(a2 + 32) )
      return 0;
    v4 = *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
      v5 = *(_QWORD *)v5;
    v6 = *(_BYTE *)(v5 + 8) & 0x7F;
    if ( v6 == 62 )
      v6 = *(_BYTE *)(sub_B8EAA0(v5) + 8) & 0x7F;
    if ( ((v6 + 70) & 0x7Fu) > 3 )
      return 0;
    v7 = *(_BYTE *)(v4 + 28) & 0x7F;
    if ( (unsigned int)v7 - 49 > 2 && v7 != 32 )
    {
      if ( (unsigned int)v7 - 35 <= 3 )
        return sub_B98200((_QWORD *)v4, a2);
      return 0;
    }
  }
  else
  {
    if ( v2 != 24 )
      return 0;
    if ( !*(_QWORD *)(a2 + 40) )
      return 0;
    v8 = a2 + 64 + 8LL * *(unsigned int *)(a2 + 4);
    if ( a2 + 64 == v8 )
      return 0;
    v9 = (__int64 *)(a2 + 72);
    v10 = *(_QWORD *)(a2 + 64) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 35 > 3 )
      return 0;
    while ( !(unsigned __int8)sub_B98200((_QWORD *)v10, a2) )
    {
      if ( (__int64 *)v8 != v9 )
      {
        v11 = *v9++;
        v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 35 <= 3 )
          continue;
      }
      return 0;
    }
  }
  return 1;
}
