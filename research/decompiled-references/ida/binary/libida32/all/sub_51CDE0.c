char __fastcall sub_51CDE0(__int64 a1)
{
  if ( a1
    && *(_QWORD *)(a1 + 32)
    && ((*(_BYTE *)(a1 + 70) & 0x3F) != 0xD || (*(_BYTE *)(*(_QWORD *)a1 + 45LL) & 8) == 0) )
  {
    return sub_51CD00(a1);
  }
  else
  {
    return 1;
  }
}

