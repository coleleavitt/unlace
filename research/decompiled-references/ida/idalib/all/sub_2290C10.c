__int64 sub_2290C10()
{
  int v0; // eax
  unsigned int v1; // edx
  char *v3; // rax
  int v4; // eax
  _BYTE v5[2]; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int16 v6; // [rsp+Ah] [rbp-Eh]

  v0 = isatty(2);
  v1 = 0;
  if ( !v0 )
    return v1;
  v3 = getenv("COLUMNS");
  if ( v3 )
  {
    v1 = strtol(v3, nullptr, 10);
    if ( (int)v1 > 0 )
      return v1;
  }
  v4 = ioctl(1, 0x5413u, v5);
  v1 = 0;
  if ( v4 )
    return v1;
  else
    return v6;
}
