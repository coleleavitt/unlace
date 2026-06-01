__int64 __fastcall google_breakpad::SafeReadLink(google_breakpad *this, char *a2, char *a3)
{
  __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = (int)sub_1C1846((const char *)this, a2, (int)a3);
  if ( v5 < 0 || (unsigned __int64)a3 <= v5 )
    return 0;
  a2[v5] = 0;
  return 1;
}

