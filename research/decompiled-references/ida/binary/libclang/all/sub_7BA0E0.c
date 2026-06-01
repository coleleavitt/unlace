_QWORD *__fastcall sub_7BA0E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rsi

  v3 = sub_798D40(a1);
  v4 = *(_QWORD *)(a1 + 120);
  v5 = v3;
  if ( !v4 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v4 = *(_QWORD *)(a1 + 120);
  }
  v6 = 0;
  if ( v4 > 7 )
    v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  return sub_6C1BE0(v5, v6, a2);
}

