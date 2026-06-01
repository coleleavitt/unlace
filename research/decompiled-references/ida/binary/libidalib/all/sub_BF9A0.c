__int64 __fastcall sub_BF9A0(const char *a1)
{
  __int64 v1; // r12
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 (*v5)(); // rax

  v1 = xmmword_2525B8;
  if ( !(_QWORD)xmmword_2525B8 )
    return sub_8F740((__int64)"Could not load debug info for module: \"%s\"\n", a1);
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_QWORD *)qword_2525B0 + v3);
    v5 = *(__int64 (**)())(*(_QWORD *)v4 + 80LL);
    if ( v5 != sub_B7490 )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, const char *))v5)(v4, a1) )
        break;
    }
    if ( v1 == ++v3 )
      return sub_8F740((__int64)"Could not load debug info for module: \"%s\"\n", a1);
  }
  return sub_14A820();
}

