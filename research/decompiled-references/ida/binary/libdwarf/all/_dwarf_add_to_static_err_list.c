void __fastcall dwarf_add_to_static_err_list(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx

  if ( a1 )
  {
    v1 = 0;
    if ( dword_B8D30 )
    {
      do
      {
        if ( !qword_B8CE0[v1] )
        {
          qword_B8CE0[(unsigned int)v1] = a1;
          return;
        }
        ++v1;
      }
      while ( dword_B8D30 != v1 );
      if ( dword_B8D30 == 10 )
        return;
      v2 = dword_B8D30 + 1;
    }
    else
    {
      v2 = 1;
    }
    qword_B8CE0[dword_B8D30] = a1;
    dword_B8D30 = v2;
  }
}

