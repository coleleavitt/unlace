__int64 __fastcall sub_85CEC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // rax

  LODWORD(v3) = 0;
  if ( *(_WORD *)(*a2 + 4LL) )
    return (unsigned int)v3;
  v4 = *(_DWORD **)(*(_QWORD *)(*a2 + 16LL) + 24LL);
  if ( !v4 || *(_DWORD *)(a1 + 112) != *v4 )
    return (unsigned int)v3;
  if ( v4[1] == 1 )
  {
    v3 = *(_QWORD *)(a3 + 64);
    LOBYTE(v3) = *(_QWORD *)(a2[22] + 64LL) == v3;
    return (unsigned int)v3;
  }
  LODWORD(v3) = 1;
  if ( v4[1] == 5 )
    return (unsigned int)v3;
  LOBYTE(v3) = v4[1] == 0;
  return (unsigned int)v3;
}

