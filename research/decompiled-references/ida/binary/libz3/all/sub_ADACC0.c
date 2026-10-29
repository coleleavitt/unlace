__int64 __fastcall sub_ADACC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  char v3; // [rsp+0h] [rbp-18h]

  v1 = a1 + 176;
  if ( !(unsigned __int8)sub_15AABF0(a1 + 176, **(_QWORD **)(a1 + 24), a1 + 144) )
  {
    sub_1875640("invalid cost function '%s', switching to default one", v3);
    if ( !(unsigned __int8)sub_15AABF0(v1, "(+ weight generation)", a1 + 144) )
    {
      sub_1872CE0("");
      sub_1873130(114, 55);
    }
  }
  if ( !(unsigned __int8)sub_15AABF0(v1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), a1 + 160) )
  {
    sub_1875640("invalid new_gen function '%s', switching to default one", v3);
    if ( !(unsigned __int8)sub_15AABF0(v1, "cost", a1 + 160) )
    {
      sub_1872CE0("");
      sub_1873130(114, 61);
    }
  }
  result = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 992) = *(_QWORD *)(result + 64);
  return result;
}

