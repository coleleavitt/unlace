__int64 __fastcall sub_5AE306(__int64 a1, const char *a2, unsigned __int64 a3)
{
  struct stat v6; // [rsp+20h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+B0h] [rbp-20h]
  unsigned __int64 v8; // [rsp+B8h] [rbp-18h]
  __off_t st_size; // [rsp+C0h] [rbp-10h]
  unsigned int v10; // [rsp+CCh] [rbp-4h]

  sub_5AE444(a1);
  v10 = sub_5AE1A3(a2, 2048, 0);
  if ( v10 == -1 )
    return 0;
  if ( (unsigned int)sub_5AE0EE(v10, &v6) == -1 || v6.st_size < 0 )
  {
    sub_5AE09E(v10);
    return 0;
  }
  else
  {
    st_size = v6.st_size;
    if ( a3 < v6.st_size )
    {
      v8 = st_size - a3;
      v7 = sub_5AE204(0, st_size - a3, 1, 2, v10, a3);
      sub_5AE09E(v10);
      if ( v7 == -1 )
      {
        return 0;
      }
      else
      {
        sub_5AE4CE(a1, v7, v8);
        return 1;
      }
    }
    else
    {
      sub_5AE09E(v10);
      return 1;
    }
  }
}
