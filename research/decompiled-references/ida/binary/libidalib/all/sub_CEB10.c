__int64 __fastcall sub_CEB10(__int64 a1)
{
  int v1; // edx
  _DWORD *v2; // rdi
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return sub_CEA20(0);
  v2 = (_DWORD *)qword_252590;
  v3 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v3 )
    return sub_CEA20(0);
  while ( v1 != *v2 )
  {
    v2 += 64;
    if ( (_DWORD *)v3 == v2 )
      return sub_CEA20(0);
  }
  return sub_CEA20((__int64)v2);
}

