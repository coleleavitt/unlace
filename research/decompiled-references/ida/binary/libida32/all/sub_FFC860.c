__int64 __fastcall sub_FFC860(__int64 a1, int a2)
{
  __int64 v3; // rax
  int v4; // rbp^4
  __int64 v5; // rax
  int v6; // esi

  if ( a2 >= 0 )
    return (unsigned int)a2;
  v3 = sub_A5CA10(a1, a2);
  v4 = HIDWORD(v3);
  v5 = sub_FFBE40(a1, v3);
  v6 = *(_DWORD *)(v5 + 8);
  if ( !v6 )
    v6 = *(_DWORD *)(v5 + 12);
  return (unsigned int)(v6 + v4);
}

