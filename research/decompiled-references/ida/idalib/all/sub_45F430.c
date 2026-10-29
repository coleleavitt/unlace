__int64 __fastcall sub_45F430(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v8; // rsi
  char v9; // al
  __int64 result; // rax

  v8 = a3;
  ++*(_QWORD *)(a1 + 448);
  sub_45EF80(a1, a3);
  if ( a2 )
  {
    v9 = *(_BYTE *)(a1 + 304);
    if ( (unsigned __int8)(v9 - 3) <= 1u )
    {
      if ( a5 )
      {
        *(_BYTE *)(a1 + 305) = v9;
        *(_BYTE *)(a1 + 304) = a4;
        *(_QWORD *)(a1 + 296) = a5;
      }
    }
    sub_45F1C0(a1, v8);
  }
  result = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(a1 + 448) == result )
  {
    result = sub_459680(a1);
    if ( *(_BYTE *)(a1 + 309) )
    {
      switch_dbctx(*(int *)(a1 + 360));
      return sub_457FE0(a1, 1);
    }
  }
  return result;
}
