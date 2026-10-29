unsigned __int64 __fastcall sub_3A3D0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 617) )
  {
    if ( *(_BYTE *)(a1 + 616) || *(_WORD *)(a1 + 522) != 8 )
      result >>= 32;
  }
  else
  {
    result >>= 8;
  }
  return result;
}

