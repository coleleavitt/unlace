__int64 __fastcall sub_500A0(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v4; // rdx
  const char *v5; // rsi
  const char *v6; // r12
  size_t v7; // rdx
  const char *v8; // rsi

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = "";
  }
  v5 = v2;
  v6 = haystack;
  sub_3DC50(a2, v5, v4);
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(const char **)(a1 + 24);
  if ( v6 )
  {
    v7 = strlen(v6) + 1;
  }
  else
  {
    v7 = 1;
    v6 = "";
  }
  sub_3DC50(a2, v6, v7);
  v8 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v8 = *(const char **)(a1 + 48);
  sub_47F00(a2, v8);
  sub_45AA0(a2, *(_DWORD *)(a1 + 72));
  sub_45AA0(a2, *(_DWORD *)(a1 + 76));
  sub_45AA0(a2, *(_DWORD *)(a1 + 80));
  return sub_3D2F0(a2, *(_BYTE *)(a1 + 84));
}

