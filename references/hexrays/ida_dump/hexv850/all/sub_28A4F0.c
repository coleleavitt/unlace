__int64 __fastcall sub_28A4F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // eax

  if ( *(_DWORD *)(a2 + 8) != 20 )
    return 0;
  LOBYTE(v4) = sub_27F1E0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8), a2);
  v2 = v4;
  if ( !(_BYTE)v4
    || *(_DWORD *)(sub_24FC00(*(_QWORD *)(a2 + 24)) + 8) == 20
    || *(_DWORD *)(sub_24FC00(*(_QWORD *)(a2 + 32)) + 8) == 20 )
  {
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 23;
    sub_23EE00(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
  }
  return v2;
}
