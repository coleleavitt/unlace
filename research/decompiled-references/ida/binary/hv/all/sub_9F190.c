__int64 __fastcall sub_9F190(FILE *a1)
{
  __off64_t v1; // r12
  __int64 v2; // rbp

  if ( !a1 )
  {
    if ( !byte_1671A1 )
      sub_96F80(552);
    BUG();
  }
  v1 = sub_95930(a1);
  sub_95990(a1, 0, 2);
  v2 = sub_95930(a1);
  sub_95990(a1, v1, 0);
  return v2;
}

