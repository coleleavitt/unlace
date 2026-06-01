void __fastcall dwarf_internal_globals_dealloc(Dwarf_Debug a1, _QWORD *a2, __int64 a3)
{
  __int64 i; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // [rsp+0h] [rbp-40h]

  if ( a1 && *(_QWORD *)a1 == 3959286781LL && a2 )
  {
    if ( a3 > 0 )
    {
      v7 = 0;
      for ( i = 0; i != a3; ++i )
      {
        v5 = a2[i];
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 16);
          if ( v6 )
          {
            if ( v6 != v7 )
            {
              dwarf_dealloc(a1, *(void **)(v5 + 16), *(unsigned int *)(v6 + 4));
              v7 = v6;
            }
          }
          dwarf_dealloc(a1, (void *)v5, *(unsigned __int16 *)(v5 + 24));
        }
      }
    }
    dwarf_dealloc(a1, a2, 0xFu);
  }
}

