__int64 __fastcall sub_6E7130(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // ebp
  unsigned __int64 v3; // rsi

  result = a1[179];
  if ( !result )
  {
    v2 = sub_600210(a1[2168], "Protocol", 8u);
    v3 = sub_6E2C00((unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL), *(_QWORD *)(a1[264] + 80LL));
    if ( v3 )
      LODWORD(v3) = v3 + 40;
    result = sub_7B9F60((_DWORD)a1, v3, 0, v2, 0, 0, 0, 1);
    a1[179] = result;
  }
  return result;
}

