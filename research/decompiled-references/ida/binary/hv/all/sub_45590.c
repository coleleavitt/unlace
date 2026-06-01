__int64 __fastcall sub_45590(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v4; // rdx
  __int64 result; // rax
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = "";
  }
  sub_3DC50(a2, v2, v4);
  result = a2[1];
  v6 = *(_BYTE *)(a1 + 40);
  v7 = *a2;
  if ( a2[2] < (unsigned __int64)(result + 1) )
  {
    v8 = sub_96080(a2, v7, result + 1, 1);
    *a2 = v8;
    v7 = v8;
    result = a2[1];
  }
  *(_BYTE *)(v7 + result) = v6;
  ++a2[1];
  return result;
}

