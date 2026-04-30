__int64 __fastcall sub_5AE568(const char *a1, char *a2, unsigned __int64 a3)
{
  __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = (int)sub_5AE506(a1, a2, a3);
  if ( v5 < 0 || a3 <= v5 )
    return 0;
  a2[v5] = 0;
  return 1;
}
