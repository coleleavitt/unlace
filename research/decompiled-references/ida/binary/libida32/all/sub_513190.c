__int64 __fastcall sub_513190(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v4; // rax
  unsigned int v6; // edx

  v4 = (_DWORD *)sub_5AFCE0(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 1480LL));
  if ( !v4 || *v4 != a3 )
    return 0;
  LOBYTE(v6) = get_ea_name(a2, a3, 0, 0) > 0;
  return v6;
}

