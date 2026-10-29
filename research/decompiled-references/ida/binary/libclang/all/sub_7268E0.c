__int64 __fastcall sub_7268E0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 *v4; // r12
  _BYTE *v5; // rax
  __int64 v6; // rsi
  _WORD *v7; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__attribute__((acquired_before");
  sub_5FF0F0(a2, &byte_3B9466E);
  v3 = *(__int64 **)(a1 + 40);
  v4 = &v3[*(unsigned int *)(a1 + 36)];
  if ( v3 == v4 )
  {
    sub_5FF0F0(a2, &byte_3B9466E);
  }
  else
  {
    v5 = *(_BYTE **)(a2 + 32);
    if ( v5 == *(_BYTE **)(a2 + 24) )
    {
      sub_26240F0(a2, "(", 1);
    }
    else
    {
      *v5 = 40;
      ++*(_QWORD *)(a2 + 32);
    }
    while ( 1 )
    {
      v6 = *v3++;
      sub_2623950(a2, v6);
      if ( v4 == v3 )
        break;
      v7 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 <= 1u )
      {
        sub_26240F0(a2, ", ", 2);
      }
      else
      {
        *v7 = 8236;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
    }
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
  }
  return sub_5FF0F0(a2, "))");
}

