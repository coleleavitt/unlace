__int64 __fastcall sub_EE5840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v9 = *(char **)(a2 + 16);
  if ( v9 )
    sub_EE16F0((_QWORD *)a1, v9, a3, a4, a5, a6, a7);
  else
    sub_EE0C80((__int64 *)a1);
  v10 = *(_QWORD *)a1;
  if ( *(_BYTE *)(a2 + 36) )
    sub_971800(v10, "->");
  else
    sub_971800(v10, ".");
  v11 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a2 + 40) )
  {
    sub_E6C510(*(_QWORD *)(a2 + 40), *(_QWORD *)a1, (const __m128i *)(a1 + 24), 0, 1);
    v11 = *(_QWORD *)a1;
  }
  return sub_B62620(v11, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL));
}

