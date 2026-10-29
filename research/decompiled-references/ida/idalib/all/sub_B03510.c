__int64 __fastcall sub_B03510(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 *v4; // r12
  _BYTE *v5; // rax
  __int64 v6; // rsi
  _WORD *v7; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((locks_excluded");
  sub_995540(a2, &byte_22F0C30);
  v3 = *(__int64 **)(a1 + 48);
  v4 = &v3[*(unsigned int *)(a1 + 40)];
  if ( v3 == v4 )
  {
    sub_995540(a2, &byte_22F0C30);
  }
  else
  {
    v5 = *(_BYTE **)(a2 + 32);
    if ( v5 == *(_BYTE **)(a2 + 24) )
    {
      sub_227BF10(a2, "(", 1);
    }
    else
    {
      *v5 = 40;
      ++*(_QWORD *)(a2 + 32);
    }
    while ( 1 )
    {
      v6 = *v3++;
      sub_227B9B0(a2, v6);
      if ( v4 == v3 )
        break;
      v7 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 > 1u )
      {
        *v7 = 8236;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(a2, ", ", 2);
      }
    }
    sub_995540(a2, &byte_22F0C30);
    sub_995540(a2, ")");
  }
  return sub_995540(a2, "))");
}
