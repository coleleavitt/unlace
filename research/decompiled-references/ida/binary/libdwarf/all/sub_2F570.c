void __fastcall sub_2F570(__int64 a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 1
    && *(_DWORD *)(*(_QWORD *)a1 + 4LL) == dword_B8D44
    && !strcmp((const char *)lookfor_name, *(const char **)(*(_QWORD *)a1 + 8LL)) )
  {
    dword_B8D40 = 1;
  }
}

