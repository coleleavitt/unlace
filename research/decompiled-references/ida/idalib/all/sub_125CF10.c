__int64 __fastcall sub_125CF10(__int64 a1)
{
  int v1; // eax
  char v3; // si
  int v4; // edx

  v1 = *(_DWORD *)(a1 + 152);
  if ( v1 == 10 )
  {
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v3 = 1;
  }
  else
  {
    if ( v1 != 9 )
      return 0;
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v3 = 0;
  }
  v4 = *(_DWORD *)a1 & 8;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    if ( v4 )
      sub_125C9A0(a1, v3);
    else
      sub_125AD90(a1, v3);
    return 1;
  }
  else
  {
    if ( v4 )
      sub_125BE20(a1, v3);
    else
      sub_125A3B0(a1, v3);
    return 1;
  }
}
