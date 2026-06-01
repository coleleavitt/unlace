__int64 __fastcall sub_4477E0(__int64 a1)
{
  char *v1; // rbx
  char *v2; // rcx
  _DWORD v4[58]; // [rsp+0h] [rbp-F8h] BYREF

  if ( a1 )
  {
    v1 = (char *)sub_4445F0(0, a1, -1, v4);
    v2 = strchr(v1, 61);
    if ( v2 != v1 && v2 != nullptr )
    {
      *v2 = 0;
      sub_447540(v1, v2 + 1);
    }
    sub_49F100(v4);
  }
  return 0;
}

