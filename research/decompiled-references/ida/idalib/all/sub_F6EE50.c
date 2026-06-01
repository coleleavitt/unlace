void __fastcall sub_F6EE50(__int64 a1, char a2, char a3)
{
  _QWORD *v4; // rdx
  _BYTE *v5; // rax
  const char *v6; // rsi
  _BYTE *v7; // rax

  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 4) == 0 )
    {
      if ( (a2 & 2) == 0 )
        return;
      goto LABEL_8;
    }
    goto LABEL_3;
  }
  sub_995540(a1, "const");
  if ( (a2 & 4) != 0 )
  {
    v7 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(a1 + 24) )
    {
      sub_227BA10(a1, 32);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v7 + 1;
      *v7 = 32;
    }
LABEL_3:
    v4 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) - (_QWORD)v4 > 7u )
    {
      *v4 = 0x656C6974616C6F76LL;
      *(_QWORD *)(a1 + 32) += 8LL;
    }
    else
    {
      sub_227BF10(a1, "volatile", 8);
    }
  }
  if ( (a2 & 2) == 0 )
    return;
  v5 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 24) )
  {
    sub_227BA10(a1, 32);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v5 + 1;
    *v5 = 32;
  }
LABEL_8:
  v6 = "restrict";
  if ( !a3 )
    v6 = "__restrict";
  sub_995540(a1, v6);
}
