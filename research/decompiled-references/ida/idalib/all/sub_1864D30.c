unsigned __int64 __fastcall sub_1864D30(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi

  v5 = *(_QWORD *)(a1 + 4184);
  if ( v5 )
    return sub_183D390(a1, v5, a2, a3);
  v5 = sub_1864A00(a1, a3, "type_identity", nullptr);
  *(_QWORD *)(a1 + 4184) = v5;
  if ( v5 )
    return sub_183D390(a1, v5, a2, a3);
  else
    return 0;
}
