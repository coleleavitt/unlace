__int64 __fastcall sub_4A0660(__int64 a1, int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  _DWORD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rcx

  v2 = *(_QWORD *)(a1 + 2392);
  v3 = 0;
  v4 = *(_DWORD **)(v2 + 56);
  if ( !v4 )
    return v3;
  v5 = *(int *)(v2 + 48);
  if ( (int)v5 <= 0 )
    return v3;
  v6 = &v4[v5];
  do
  {
    if ( ((a2 ^ *v4) & 0x70000) == 0 )
      return 1;
    ++v4;
  }
  while ( v4 != v6 );
  return 0;
}
