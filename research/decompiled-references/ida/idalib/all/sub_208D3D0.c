__int64 __fastcall sub_208D3D0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  char v5; // dl
  int v7; // esi

  v7 = *(_DWORD *)(a1 + 32);
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 120LL);
  if ( !v1 )
    return v1;
  v2 = (unsigned int)(v7 + 2);
  if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 8) )
    return 0;
  v1 = *(_QWORD *)(v1 + 8 * v2 + 48);
  if ( !v1 )
    return v1;
  sub_2049440(v1, 86);
  v4 = 0;
  if ( v5 )
  {
    v4 = v3;
    if ( v3 )
      return *(_QWORD *)(v3 + 16);
  }
  return v4;
}
