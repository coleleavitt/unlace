__int64 __fastcall sub_F09580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v9 = *(char **)(a2 + 16);
  if ( v9 )
    sub_F05430((_QWORD *)a1, v9, a3, a4, a5, a6, a7);
  else
    sub_F049C0((__int64 *)a1);
  v10 = *(_QWORD *)a1;
  if ( *(_BYTE *)(a2 + 36) )
    sub_995540(v10, "->");
  else
    sub_995540(v10, ".");
  v11 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a2 + 40) )
  {
    sub_E90250(*(_QWORD *)(a2 + 40), *(_QWORD *)a1, (const __m128i *)(a1 + 24), 0, 1);
    v11 = *(_QWORD *)a1;
  }
  return sub_B86360(v11, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL));
}
