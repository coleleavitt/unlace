__int64 __fastcall sub_7A9450(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 72);
  if ( (v1 & 0x80u) != 0LL )
    return 2014;
  v2 = sub_7A9010(a1);
  if ( *(_BYTE *)(v2 + 265) )
  {
    set_qerrno(2012);
    return 0;
  }
  else if ( *(_DWORD *)v2 )
  {
    if ( *(_DWORD *)v2 == 2 )
      *(_DWORD *)(v2 + 8) = (char)v1 + 1;
    else
      set_qerrno(2005);
    return 0;
  }
  else
  {
    *(_DWORD *)v2 = 1;
    *(_DWORD *)(v2 + 4) = (char)v1;
    return 0;
  }
}
