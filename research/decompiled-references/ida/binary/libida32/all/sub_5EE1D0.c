__int64 __fastcall sub_5EE1D0(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = a2;
  v3 = *(_DWORD *)(a1[2] + 4LL);
  if ( (unsigned int)(v3 - 12) <= 1 || v3 == 15 )
    goto LABEL_3;
  if ( v3 )
    return a2;
  if ( !(unsigned __int8)sub_615160(*a1, 3, 4) )
    return a2;
LABEL_3:
  if ( a2 <= 0x10 )
  {
    if ( (unsigned int)getinf(99) != 48 )
      return a2;
  }
  else if ( a2 != 48 )
  {
    return a2;
  }
  LOBYTE(v2) = a2 & 0xF;
  return v2 | 0x70;
}

