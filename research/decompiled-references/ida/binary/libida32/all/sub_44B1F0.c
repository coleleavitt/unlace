__int64 __fastcall sub_44B1F0(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  char v7; // al
  __int64 result; // rax

  ++*(_QWORD *)(a1 + 448);
  sub_44AD40(a1, a3);
  if ( a2 )
  {
    v7 = *(_BYTE *)(a1 + 304);
    if ( (unsigned __int8)(v7 - 3) <= 1u )
    {
      if ( a5 )
      {
        *(_BYTE *)(a1 + 305) = v7;
        *(_BYTE *)(a1 + 304) = a4;
        *(_QWORD *)(a1 + 296) = a5;
      }
    }
    sub_44AF80();
  }
  result = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(a1 + 448) == result )
  {
    result = sub_445840(a1);
    if ( *(_BYTE *)(a1 + 309) )
    {
      switch_dbctx(*(int *)(a1 + 360));
      return sub_4441A0(a1, 1);
    }
  }
  return result;
}

