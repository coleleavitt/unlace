__int64 __fastcall sub_A582F0(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // r12d
  int v6; // eax

  v2 = sub_A577C0(a1, (__int64)a2);
  v3 = sub_A58070(a1, a2, v2);
  v4 = *(_QWORD *)(a1 + 18360);
  v5 = v3;
  if ( !v4 )
    return v5;
  v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 120LL))(v4, a2);
  if ( !v6 )
    return 1;
  if ( v6 != 1 )
    return v5;
  if ( v5 == 2 )
    return 4;
  return v5;
}

