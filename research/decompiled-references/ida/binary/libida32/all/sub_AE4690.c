__int64 __fastcall sub_AE4690(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 *v4; // r12
  _BYTE *v5; // rax
  __int64 v6; // rsi
  _WORD *v7; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "__attribute__((acquired_after");
  sub_971800(a2, &byte_22CD811);
  v3 = *(__int64 **)(a1 + 48);
  v4 = &v3[*(unsigned int *)(a1 + 40)];
  if ( v3 == v4 )
  {
    sub_971800(a2, &byte_22CD811);
  }
  else
  {
    v5 = *(_BYTE **)(a2 + 32);
    if ( v5 == *(_BYTE **)(a2 + 24) )
    {
      sub_22581D0(a2, "(", 1);
    }
    else
    {
      *v5 = 40;
      ++*(_QWORD *)(a2 + 32);
    }
    while ( 1 )
    {
      v6 = *v3++;
      sub_2257C70(a2, v6);
      if ( v3 == v4 )
        break;
      v7 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 > 1u )
      {
        *v7 = 8236;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
      else
      {
        sub_22581D0(a2, ", ", 2);
      }
    }
    sub_971800(a2, &byte_22CD811);
    sub_971800(a2, ")");
  }
  return sub_971800(a2, "))");
}

