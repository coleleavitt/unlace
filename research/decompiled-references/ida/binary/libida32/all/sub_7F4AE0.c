__int64 __fastcall sub_7F4AE0(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char v7; // [rsp+0h] [rbp-8h]

  if ( a1 <= 0x3E7 )
  {
    qsnprintf(a2, 48, (int)"%llu ms", a1, a5, a6, v7);
    return a2;
  }
  else
  {
    if ( a1 <= 0x270F )
      qsnprintf(a2, 48, (int)"%.1f sec", a4, a5, a6, v7);
    else
      qsnprintf(a2, 48, (int)"%llu sec", a1 / 0x3E8, a5, a6, v7);
    return a2;
  }
}

