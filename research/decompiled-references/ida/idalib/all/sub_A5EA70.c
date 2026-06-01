bool __fastcall sub_A5EA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rax

  if ( *(_BYTE *)(a1 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    a1 = sub_F63050(a1, a2, a3, a4, a5);
    if ( !a1 )
      return 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 35;
  if ( (unsigned int)v6 > 1 )
  {
    v5 = sub_F63050(v5, a2, v6, a4, a5);
    if ( *(_BYTE *)(v5 + 19) >> 2 )
      return 0;
  }
  else if ( *(_BYTE *)(v5 + 19) >> 2 )
  {
    return 0;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13 )
    return 0;
  return ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 490;
}
