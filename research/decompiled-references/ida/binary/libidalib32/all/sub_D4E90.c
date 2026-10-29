__int64 __fastcall sub_D4E90(__int64 a1, double a2)
{
  int v2; // edx
  _DWORD *v4; // rdi
  _DWORD *v5; // rax

  v2 = *(_DWORD *)(a1 + 16);
  if ( !v2 )
    return 0;
  v4 = (_DWORD *)qword_251410;
  v5 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
  if ( (_DWORD *)qword_251410 == v5 )
    return 0;
  while ( v2 != *v4 )
  {
    v4 += 58;
    if ( v5 == v4 )
      return 0;
  }
  if ( v4 && dword_2515A4 < 0 )
    return sub_D3340((__int64)v4, (8 * *(unsigned __int8 *)(a1 + 12)) | (*(_DWORD *)(a1 + 24) << 12) | 2u, a2);
  else
    return 0;
}

