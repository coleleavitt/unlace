__int64 __fastcall sub_7D2870(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rax

  v2 = sub_7D17D0(a1);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 72);
  v4 = v2;
  v5 = (_QWORD *)sub_7D24C0(a1 + 32, v3);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)(a2 + 8) = (int)qlread(v4, *v5, v3);
  return 0;
}
