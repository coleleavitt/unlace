__int64 __fastcall sub_80AE0(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  if ( a1 <= 0x3E7 )
  {
    sub_9A810(a2, 48, (unsigned int)"%llu ms", a1, a5, a6);
    return a2;
  }
  else
  {
    if ( a1 <= 0x270F )
      sub_9A810(a2, 48, (unsigned int)"%.1f sec", a4, a5, a6, (double)(int)a1 / 1000.0);
    else
      sub_9A810(a2, 48, (unsigned int)"%llu sec", a1 / 0x3E8, a5, a6);
    return a2;
  }
}

