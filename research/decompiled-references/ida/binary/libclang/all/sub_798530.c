unsigned __int64 __fastcall sub_798530(__int64 a1)
{
  int v1; // eax
  unsigned __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v1 - 32) <= 5 )
    return sub_780E20(a1);
  if ( (unsigned int)(v1 - 57) <= 2 )
    return sub_7A47A0(a1);
  if ( (unsigned int)(v1 - 38) <= 6 )
    return sub_77CBA0(a1);
  result = 0;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x3F )
    return *(_QWORD *)(a1 + 88);
  return result;
}

