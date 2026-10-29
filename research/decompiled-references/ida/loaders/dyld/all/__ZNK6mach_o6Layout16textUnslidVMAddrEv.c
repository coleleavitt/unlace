__int64 __fastcall mach_o::Layout::textUnslidVMAddr(mach_o::Layout *this)
{
  __int64 v1; // x9
  _DWORD *v2; // x8
  __int64 v3; // x9

  v1 = *((_QWORD *)this + 2);
  if ( !v1 )
    return 0;
  v2 = *((_DWORD **)this + 1);
  v3 = 48 * v1;
  while ( v2[11] != 1 )
  {
    v2 += 12;
    v3 -= 48;
    if ( !v3 )
      return 0;
  }
  return *(_QWORD *)v2;
}
