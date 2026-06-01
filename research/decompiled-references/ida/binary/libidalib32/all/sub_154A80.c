__int64 __fastcall sub_154A80(__int64 a1, int *a2)
{
  int v2; // ecx
  _DWORD *v3; // rsi
  _DWORD *v4; // rdx
  _DWORD *v5; // rax

  v2 = *a2;
  v3 = *(_DWORD **)(a1 + 184);
  v4 = &v3[*(_QWORD *)(a1 + 192)];
  if ( v3 == v4 )
    return 0;
  v5 = *(_DWORD **)(a1 + 184);
  while ( v2 != *v5 )
  {
    if ( v4 == ++v5 )
      return 0;
  }
  if ( v4 == v5 )
    return 0;
  else
    return v5 - v3;
}

