__int64 __fastcall sub_BAFEC0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  _DWORD *v4; // rax

  v2 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL) + 8LL * a2);
  if ( *(_WORD *)(v3 + 4) )
    return 1;
  v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
  if ( !v4 || *(_DWORD *)(a1 + 1888) != *v4 )
    return 1;
  LOBYTE(v2) = v4[1] != 67;
  return v2;
}

