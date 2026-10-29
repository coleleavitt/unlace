__int64 __fastcall sub_15AD2F0(__int64 a1, int a2, int a3, char **a4, _DWORD *a5)
{
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // al
  char *v7; // rdx

  v5 = *(_BYTE *)(a1 + 1);
  v6 = (v5 >> 2) & 3;
  if ( v6 )
  {
    v7 = "signed";
    if ( v6 != 1 )
      v7 = "unsigned";
    *a4 = v7;
    if ( v6 == a2 )
      *a5 = 97;
    else
      *a5 = 4033;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 188) = a3;
    *(_BYTE *)(a1 + 1) = (4 * (a2 & 3)) | v5 & 0xF3;
    return 0;
  }
}
