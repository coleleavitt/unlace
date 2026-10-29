__int64 __fastcall sub_22239C0(__int64 a1, int a2)
{
  unsigned __int8 *v3; // r12
  unsigned __int8 *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int8 *v7; // rsi
  __int64 v8; // rsi

  if ( !*(_BYTE *)(a1 + 104) )
  {
    v3 = *(unsigned __int8 **)(a1 + 32);
    v4 = *(unsigned __int8 **)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 64);
    if ( (unsigned __int64)v3 >= v5 && (unsigned __int64)v4 <= v5 )
      sub_2223530(a1, *(unsigned __int8 **)(a1 + 64), *(_QWORD *)(a1 + 32) - v5);
    else
      sub_2223530(a1, v4, *(_QWORD *)(a1 + 32) - (_QWORD)v4);
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *(unsigned __int8 **)(a1 + 16);
    *(_QWORD *)(a1 + 64) = v3;
    if ( !*(_BYTE *)(a1 + 104) )
    {
      if ( (unsigned __int64)v3 <= v6 && v3 >= v7 )
        sub_2223530(a1, v3, v6 - (_QWORD)v3);
      else
        sub_2223530(a1, v7, v6 - (_QWORD)v7);
      *(_QWORD *)(a1 + 64) = v6;
    }
  }
  v8 = (unsigned int)(a2 - *(_DWORD *)(a1 + 56));
  if ( a2 - *(_DWORD *)(a1 + 56) <= 0 )
    v8 = 1;
  sub_227D090(a1, v8);
  return a1;
}
