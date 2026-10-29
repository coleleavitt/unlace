void __fastcall sub_1D2330(__int64 *a1)
{
  __int64 v1; // rbp
  char *v2; // rax

  if ( a1[1] )
  {
    v1 = *a1;
    if ( !strncmp((const char *)*a1, "IDA View-", 9u) )
    {
      v2 = sub_1CAC40((char *)(v1 + 9));
      if ( v2 )
        sub_169A50(a1, (__int64)"IDA View-%s", v2);
    }
  }
}
