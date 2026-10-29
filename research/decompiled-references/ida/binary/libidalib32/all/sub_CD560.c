__int64 __fastcall sub_CD560(__int64 a1)
{
  int v1; // edx
  _DWORD *v2; // rdi
  _DWORD *v3; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return sub_CD470(0);
  v2 = (_DWORD *)qword_251410;
  v3 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
  if ( (_DWORD *)qword_251410 == v3 )
    return sub_CD470(0);
  while ( v1 != *v2 )
  {
    v2 += 58;
    if ( v3 == v2 )
      return sub_CD470(0);
  }
  return sub_CD470((__int64)v2);
}

