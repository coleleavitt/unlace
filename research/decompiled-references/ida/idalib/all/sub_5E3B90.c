__int64 __fastcall sub_5E3B90(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = a1[17];
  v3 = a1[16];
  if ( !v3 )
    v3 = a1[14];
  sub_5E3850(v3, v2);
  v4 = a1[56];
  v5 = *(_QWORD *)(a1[55] + 8 * v4 - 8);
  if ( v4 )
    a1[56] = v4 - 1;
  a1[17] = v5;
  return 0;
}
