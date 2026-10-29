__int64 __fastcall sub_37E3F0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  const char *sourcefile; // r12

  result = get_source_linnum(*(unsigned int *)(a1 + 16));
  v2 = (unsigned int)result;
  if ( (_DWORD)result != -1 )
  {
    sourcefile = (const char *)get_sourcefile(*(unsigned int *)(a1 + 16), 0);
    result = sub_375980(0x18u, a1, sourcefile, v2);
    if ( result != 1 )
    {
      if ( sourcefile )
        return sub_37CA70(a1, (__int64)"#line \"%s\" %zu", sourcefile, v2);
      else
        return sub_37CA70(a1, (__int64)"#line %zu", v2);
    }
  }
  return result;
}

