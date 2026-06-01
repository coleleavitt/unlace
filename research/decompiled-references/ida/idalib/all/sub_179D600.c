unsigned __int64 __fastcall sub_179D600(unsigned __int64 a1)
{
  unsigned __int8 v1; // cl
  __int64 v3; // rdi

  while ( 1 )
  {
    v1 = *(_BYTE *)(a1 + 8) & 0x7F;
    if ( !v1 || v1 == 24 )
      return a1;
    if ( v1 > 0x12u )
    {
      if ( ((v1 + 94) & 0x7Fu) <= 5 )
        return a1;
      v3 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
      if ( (v3 & 4) != 0 )
        goto LABEL_10;
LABEL_7:
      a1 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( ((1LL << v1) & 0x40182) != 0 )
        return a1;
      v3 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
      if ( (v3 & 4) == 0 )
        goto LABEL_7;
LABEL_10:
      a1 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
}
