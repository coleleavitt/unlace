__int64 __fastcall sub_13D2810(__int64 a1, char *a2)
{
  char v2; // al
  int v4; // edx
  char v5; // al
  _BYTE *v6; // rax
  _BYTE *i; // rcx

  if ( *(char **)(a1 + 112) != a2 )
  {
    v2 = *(a2 - 1);
    if ( v2 != 10 && v2 != 13 )
      return 0;
  }
  v4 = *(_DWORD *)(a1 + 176);
  if ( !v4 )
    return 0;
  if ( *(_BYTE *)(a1 + 26) )
    return 0;
  v5 = *a2;
  if ( *a2 != a2[1] || v5 != a2[2] || a2[3] != v5 )
    return 0;
  v6 = (_BYTE *)sub_13D07B0((__int64)a2, *(_QWORD *)(a1 + 120), v4);
  if ( !v6 )
    return 0;
  for ( i = *(_BYTE **)(a1 + 120); v6 != i; ++v6 )
  {
    if ( *v6 == 13 )
      break;
    if ( *v6 == 10 )
      break;
  }
  *(_QWORD *)(a1 + 152) = v6;
  *(_DWORD *)(a1 + 176) = 0;
  return 1;
}
