__int64 __fastcall sub_381ED0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  const char *sourcefile; // r12

  result = get_source_linnum(*(_QWORD *)(a1 + 16));
  if ( result != -1 )
  {
    v2 = result;
    sourcefile = (const char *)get_sourcefile(*(_QWORD *)(a1 + 16), 0);
    result = sub_3792E0(0x18u, a1, sourcefile, v2);
    if ( result != 1 )
    {
      if ( sourcefile )
        return sub_3804E0(a1, (__int64)"#line \"%s\" %zu", sourcefile, v2);
      else
        return sub_3804E0(a1, (__int64)"#line %zu", v2);
    }
  }
  return result;
}
