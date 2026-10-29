__int64 __fastcall sub_B8E290(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned int v2; // esi
  unsigned __int8 v3; // cl
  __int64 v5; // rax
  __int64 v6; // rbx

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)(v1 + 8);
  v2 = sub_B8E180(v1);
  if ( (_BYTE)v2 )
  {
    while ( 1 )
    {
      v3 = *(_BYTE *)(v1 + 8) & 0x7F;
      if ( v3 <= 0x12u )
      {
        LOBYTE(v2) = ((1LL << v3) & 0x40182) != 0;
        return v2;
      }
      if ( ((v3 + 94) & 0x7Fu) <= 5 )
        return v2;
      if ( (unsigned int)v3 - 58 > 4 )
        break;
      if ( (unsigned int)v3 - 59 <= 2 && v1 != 64 )
      {
        v5 = *(_QWORD *)(v1 + 64);
        if ( v5 )
        {
          if ( (*(_BYTE *)(v5 + 10) & 0x20) != 0 )
            return v2;
        }
      }
      v6 = *(_QWORD *)(sub_B8C1B0(v1) + 16);
      if ( (v6 & 4) != 0 )
        v1 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      else
        v1 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    }
    return 0;
  }
  return v2;
}
