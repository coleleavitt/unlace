__int64 __fastcall sub_2223940(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int8 *v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    if ( !*(_BYTE *)(a1 + 104) )
    {
      v1 = *(_QWORD *)(a1 + 32);
      v2 = *(unsigned __int8 **)(a1 + 16);
      v3 = *(_QWORD *)(a1 + 64);
      if ( v1 >= v3 && (unsigned __int64)v2 <= v3 )
        sub_2223530(a1, *(unsigned __int8 **)(a1 + 64), *(_QWORD *)(a1 + 32) - v3);
      else
        sub_2223530(a1, v2, *(_QWORD *)(a1 + 32) - (_QWORD)v2);
      *(_QWORD *)(a1 + 64) = v1;
    }
    *(_BYTE *)(a1 + 104) = 1;
    sub_227C100(a1);
    v4 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 64) = v4;
  }
  return a1;
}
