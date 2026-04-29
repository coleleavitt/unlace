__int64 __fastcall sub_35A570(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi

  v2 = *(_QWORD *)(a1 + 176);
  v4 = 120LL * *(_QWORD *)(a1 + 184);
  v5 = v2 + v4;
  v6 = 0xEEEEEEEEEEEEEEEFLL * (v4 >> 3);
  v7 = v2;
  while ( v6 > 0 )
  {
    while ( 1 )
    {
      v8 = v7 + 120 * (v6 >> 1);
      if ( *(_QWORD *)(v8 + 32) >= a2 )
        break;
      v7 = v8 + 120;
      v6 = v6 - 1 - (v6 >> 1);
      if ( v6 <= 0 )
        goto LABEL_5;
    }
    v6 >>= 1;
  }
LABEL_5:
  if ( v5 == v7 || *(_QWORD *)(v7 + 32) != a2 )
    return 0xFFFFFFFFLL;
  else
    return -286331153 * (unsigned int)((v7 - v2) >> 3);
}
