__int64 __fastcall sub_15AD270(__int64 a1, int a2, int a3, char **a4, _DWORD *a5)
{
  char v5; // al
  unsigned __int8 v6; // r9
  char *v7; // rax

  v5 = *(_BYTE *)(a1 + 1);
  v6 = v5 & 3;
  if ( (v5 & 3) != 0 )
  {
    v7 = (char *)"imaginary";
    if ( v6 != 1 )
    {
      v7 = "unspecified";
      if ( v6 )
        v7 = (char *)"complex";
    }
    *a4 = v7;
    if ( v6 == a2 )
      *a5 = 97;
    else
      *a5 = 4033;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 184) = a3;
    *(_BYTE *)(a1 + 1) = a2 & 3 | v5 & 0xFC;
    return 0;
  }
}
