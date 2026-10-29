unsigned __int64 __fastcall sub_8C4680(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    return sub_77D590(*(_QWORD *)(a1 + 16));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    if ( (*(_WORD *)result & 0x1FF) == 0x3D )
      return *(_QWORD *)(result + 16);
  }
  return result;
}

