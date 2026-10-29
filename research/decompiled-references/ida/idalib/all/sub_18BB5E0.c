__int64 __fastcall sub_18BB5E0(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rdi
  unsigned __int64 v5; // rdi

  v2 = *(_WORD *)a1 & 0x1FF;
  if ( v2 == 71 )
  {
    v3 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    if ( v2 != 46 )
      return 0;
    v5 = *(_QWORD *)(a1 + 16);
    if ( !v5 || !(unsigned __int8)sub_BFE300(v5) )
      return 0;
    v3 = *(_QWORD *)(a1 + 24);
  }
  if ( v3
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) <= 4u )
  {
    return (unsigned int)sub_B79700(v3) ^ 1;
  }
  return 0;
}
