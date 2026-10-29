bool __fastcall sub_18BFE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax

  if ( *(_BYTE *)(a1 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    a1 = sub_F63050(a1, a2, a3, a4);
    if ( !a1 )
      return 0;
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (unsigned int)*(unsigned __int8 *)(v4 + 16) - 35;
  if ( (unsigned int)v5 > 1 )
  {
    v4 = sub_F63050(v4, a2, v5, a4);
    if ( !(*(_BYTE *)(v4 + 19) >> 2) )
      return 0;
  }
  else if ( !(*(_BYTE *)(v4 + 19) >> 2) )
  {
    return 0;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 13 )
    return 0;
  return ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 489;
}
