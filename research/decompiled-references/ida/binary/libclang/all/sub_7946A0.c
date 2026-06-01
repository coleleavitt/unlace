_BOOL8 __fastcall sub_7946A0(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    a1 = sub_793320(a1);
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 2160LL);
  result = 1;
  if ( (*(_BYTE *)(v1 + 193) & 0x70) == 0 )
    return (*(_BYTE *)(v1 + 20) & 0x20) != 0;
  return result;
}

