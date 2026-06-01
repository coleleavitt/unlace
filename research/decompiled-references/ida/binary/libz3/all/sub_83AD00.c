__int64 __fastcall sub_83AD00(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  _DWORD *v3; // rax

  v2 = 1;
  if ( *(_WORD *)(*(_QWORD *)a2 + 4LL) )
    return 1;
  v3 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 24LL);
  if ( !v3 || *v3 != 5 )
    return 1;
  LOBYTE(v2) = v3[1] != 6;
  return v2;
}

