__int64 __fastcall sub_7B04B0(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // eax
  int v4; // ebx
  bool v5; // bp
  int v6; // eax

  v3 = a3[4];
  if ( v3 == -2 )
  {
    v5 = 0;
    v4 = 1;
LABEL_3:
    v6 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a3 + 32LL))(a3);
    if ( !v6 )
      return 0;
    goto LABEL_4;
  }
  v4 = *(_DWORD *)(*a2 + 4LL * (v3 >> 1));
  v5 = v4 == 0;
  if ( (v3 & 1) == 0 )
    goto LABEL_3;
  v4 = -v4;
  v6 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( !v6 )
    return 0;
LABEL_4:
  if ( !v5 )
    return 2 * (unsigned int)(v4 == v6) - 1;
  return 0;
}

