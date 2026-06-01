__int64 __fastcall sub_1497F0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rax

  if ( dword_244108 < 0 )
    return 0xFFFFFFFFLL;
  v2 = -1;
  if ( dword_244108 < (unsigned __int64)xmmword_251418 )
  {
    v3 = qword_251410 + 232LL * dword_244108;
    if ( a2 < *(_QWORD *)(v3 + 96) )
      return *(unsigned int *)(*(_QWORD *)(v3 + 88) + 16 * a2);
  }
  return v2;
}

