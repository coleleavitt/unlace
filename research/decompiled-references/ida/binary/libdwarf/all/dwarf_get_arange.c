__int64 __fastcall dwarf_get_arange(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdi

  if ( a1 )
  {
    v6 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 8 * v6);
        v8 = *(_QWORD *)(v7 + 8);
        if ( a3 >= v8 && a3 < *(_QWORD *)(v7 + 16) + v8 )
          break;
        if ( a2 == ++v6 )
          return 0xFFFFFFFFLL;
      }
      *a4 = v7;
      return 0;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    _dwarf_error(0, a5, 138);
    return 1;
  }
}

