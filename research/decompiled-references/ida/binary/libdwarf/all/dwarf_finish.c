int __fastcall dwarf_finish(Dwarf_Debug a1, Dwarf_Error *a2)
{
  unsigned __int8 **v3; // rdi
  __int64 v4; // rdx

  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    v3 = *((unsigned __int8 ***)a1 + 1);
    if ( v3 )
    {
      if ( (unsigned __int8)(**v3 - 70) <= 0xAu )
      {
        v4 = 1153;
        if ( _bittest64(&v4, (unsigned int)**v3 - 70) )
          (*((void (**)(void))v3[1] + 9))();
      }
    }
    if ( *((_BYTE *)a1 + 68) )
    {
      _dwarf_closer(*((_DWORD *)a1 + 16));
      *((_BYTE *)a1 + 68) = 0;
    }
    free(*((void **)a1 + 10));
    *((_QWORD *)a1 + 10) = 0;
    return dwarf_object_finish(a1, a2);
  }
  else
  {
    _dwarf_free_static_errlist();
    return 0;
  }
}

