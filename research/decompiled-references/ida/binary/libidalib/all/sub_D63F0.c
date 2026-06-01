__int64 __fastcall sub_D63F0(__int64 a1)
{
  int v1; // edx
  _DWORD *v3; // rdi
  __int64 v4; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v3 = (_DWORD *)qword_252590;
  v4 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v4 )
    return 0;
  while ( v1 != *v3 )
  {
    v3 += 64;
    if ( (_DWORD *)v4 == v3 )
      return 0;
  }
  if ( v3 && dword_25274C < 0 )
    return sub_D4880((__int64)v3, (8 * *(unsigned __int8 *)(a1 + 12)) | (*(_DWORD *)(a1 + 24) << 12) | 2u);
  else
    return 0;
}

