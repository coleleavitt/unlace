bool __fastcall sub_199F840(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // edx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL) & 0x20) == 0 )
    return 0;
  v3 = sub_AAFC50(*(_QWORD **)(a1 + 248), a2, 0);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
  v5 = *(unsigned __int16 *)(v4 + 64);
  if ( (_WORD)v5 )
    return v3 > v5;
  v6 = *(unsigned __int8 *)(v4 + 25);
  if ( (unsigned __int8)v6 < *(_BYTE *)(v4 + 33) )
    v6 = *(unsigned __int8 *)(v4 + 33);
  return v3 > v6;
}
