unsigned __int64 __fastcall sub_C94C80(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    return sub_B74740(*(_QWORD *)(a1 + 16));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    if ( (*(_WORD *)result & 0x1FF) == 0x3C )
      return *(_QWORD *)(result + 16);
  }
  return result;
}
