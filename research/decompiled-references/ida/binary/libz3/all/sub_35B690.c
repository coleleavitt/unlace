__int64 __fastcall sub_35B690(__int64 *a1, unsigned int a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax

  if ( !a2 )
    return *(_QWORD *)(*a1 + 856);
  v4 = (_QWORD *)a1[3];
  v5 = v4[3];
  if ( !v5 || *(_DWORD *)(v5 - 4) < a2 )
    return *(_QWORD *)(*a1 + 864);
  sub_35A840(a1, v4, a2);
  return *(_QWORD *)(*(_QWORD *)(a1[3] + 24) + 8LL * (a2 - 1));
}

