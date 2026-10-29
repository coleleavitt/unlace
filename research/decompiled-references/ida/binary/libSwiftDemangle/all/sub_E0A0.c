__int64 __fastcall sub_E0A0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 *v3; // rdx
  char v4; // al

  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
    return 0;
  v2 = (unsigned int)(v1 - 1);
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8 * v2);
  if ( *((_WORD *)v3 + 8) != 221 )
    return 0;
  *(_DWORD *)(a1 + 96) = v2;
  if ( !v3 )
    return 0;
  v4 = *((_BYTE *)v3 + 18);
  if ( v4 != 3 )
  {
    if ( v4 != 5 )
      return 0;
    if ( *((_DWORD *)v3 + 2) != 1 )
      return 0;
    v3 = (__int64 *)*v3;
  }
  return *v3;
}

