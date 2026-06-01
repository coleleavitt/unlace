__int64 __fastcall sub_531FD0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  int v3; // eax

  v2 = *a2;
  v3 = *(_DWORD *)(*a2 + 48);
  LOBYTE(v3) = v3 & 0x3F;
  if ( (unsigned int)*a1 == 1 )
  {
    LOBYTE(v3) = v3 | 0x80;
    *(_DWORD *)(v2 + 48) = v3;
    return 0;
  }
  else
  {
    if ( (unsigned int)*a1 == 2 )
      v3 |= 0x40u;
    *(_DWORD *)(v2 + 48) = v3;
    return 0;
  }
}
