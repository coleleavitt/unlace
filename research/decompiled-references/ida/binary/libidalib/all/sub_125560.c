__int64 __fastcall sub_125560(__int64 a1, int *a2)
{
  __int64 v2; // rax
  int v3; // ecx
  _DWORD *v4; // rsi
  _DWORD *v5; // rdx
  _DWORD *v6; // rax

  v2 = *(_QWORD *)(a1 + 224);
  if ( !v2 )
    return -1;
  v3 = *a2;
  if ( *a2 <= 0 )
    return -1;
  v4 = *(_DWORD **)(a1 + 216);
  v5 = &v4[v2];
  if ( v4 == v5 )
    return -1;
  v6 = *(_DWORD **)(a1 + 216);
  while ( v3 != *v6 )
  {
    if ( v5 == ++v6 )
      return -1;
  }
  if ( v5 == v6 )
    return -1;
  else
    return v6 - v4;
}

