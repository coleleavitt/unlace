unsigned __int64 __fastcall sub_154F1B0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // edx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return sub_1CB3C60(*(_QWORD *)v1, *(unsigned int *)(v1 + 8));
  v3 = *(_DWORD *)(a1 + 16);
  if ( !v3 )
    v3 = *(_DWORD *)(a1 + 20);
  return ((unsigned __int64)*(unsigned int *)(a1 + 20) << 32) | v3;
}
