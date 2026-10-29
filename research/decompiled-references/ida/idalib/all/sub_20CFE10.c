char __fastcall sub_20CFE10(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v1 + 9) & 0xC0) == 0x80 )
    return (**(__int64 (__fastcall ***)(__int64))v1)(v1);
  else
    return (*(_BYTE *)(v1 + 9) & 0xC0) == 0;
}
