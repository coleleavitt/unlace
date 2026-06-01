bool __fastcall sub_1EC200(__int64 a1)
{
  __int64 v2; // rdi
  bool result; // al
  __int64 v4; // rsi
  int v5; // edx

  v2 = *(_QWORD *)(a1 + 224);
  result = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 248);
    if ( *(int *)(a1 + 940) > 740 )
      v5 = l_compare2(v2, v4, *(_QWORD *)(a1 + 728));
    else
      v5 = l_compare(v2, v4);
    result = 1;
    if ( !v5 )
      return *(_DWORD *)(a1 + 232) != *(_DWORD *)(a1 + 256);
  }
  return result;
}
