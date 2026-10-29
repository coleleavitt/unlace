char __fastcall sub_7A99C0(__int64 a1)
{
  unsigned __int64 v1; // rax
  char result; // al

  v1 = sub_7A4880(a1);
  if ( v1 )
    return (*(_BYTE *)(v1 + 84) & 3) != 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x10) != 0 )
    return *(_BYTE *)(sub_798D60(a1) + 1) >> 7;
  return result;
}

