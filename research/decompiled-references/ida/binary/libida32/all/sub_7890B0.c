__int64 __fastcall sub_7890B0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 68);
  if ( (v2 & 0x80u) != 0 )
    return 2014;
  v3 = sub_788C70(a1);
  if ( *(_BYTE *)(v3 + 265) )
  {
    set_qerrno(2012, a2);
    return 0;
  }
  else if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 == 2 )
      *(_DWORD *)(v3 + 8) = (char)v2 + 1;
    else
      set_qerrno(2005, a2);
    return 0;
  }
  else
  {
    *(_DWORD *)v3 = 1;
    *(_DWORD *)(v3 + 4) = (char)v2;
    return 0;
  }
}

