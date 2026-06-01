__int64 __fastcall dwarf_free_all_of_one_debug(char *ptr)
{
  void *v2; // rdi
  void *v3; // rdi
  FILE *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // r13
  _QWORD *v10; // r12
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  int v14; // eax
  __int64 v15; // rbp

  if ( ptr && *(_QWORD *)ptr == 3959286781LL )
  {
    v2 = *((void **)ptr + 1035);
    if ( v2 )
    {
      dwarf_dealloc_xu_header(v2);
      *((_QWORD *)ptr + 1035) = 0;
    }
    v3 = *((void **)ptr + 1036);
    if ( v3 )
    {
      dwarf_dealloc_xu_header(v3);
      *((_QWORD *)ptr + 1036) = 0;
    }
    v4 = *((FILE **)ptr + 1355);
    if ( v4 )
    {
      fclose(v4);
      *((_QWORD *)ptr + 1355) = 0;
    }
    v5 = *((_QWORD **)ptr + 14);
    while ( v5 )
    {
      v6 = (_QWORD *)v5[78];
      v7 = v5;
      _dwarf_free_abbrev_hash_table_contents(v6, 0);
      v6[3] = 0;
      v5 = (_QWORD *)v5[80];
      v7[80] = 0;
      free(v6);
      v7[78] = 0;
      dwarf_dealloc((Dwarf_Debug)ptr, v7, 0x20u);
    }
    v8 = *((_QWORD **)ptr + 20);
    *((_QWORD *)ptr + 14) = 0;
    while ( v8 )
    {
      v9 = (_QWORD *)v8[78];
      v10 = v8;
      _dwarf_free_abbrev_hash_table_contents(v9, 0);
      v9[3] = 0;
      v8 = (_QWORD *)v8[80];
      v10[80] = 0;
      free(v9);
      v10[78] = 0;
      dwarf_dealloc((Dwarf_Debug)ptr, v10, 0x20u);
    }
    *((_QWORD *)ptr + 20) = 0;
    _dwarf_malloc_section_free(ptr + 360);
    _dwarf_malloc_section_free(ptr + 592);
    _dwarf_malloc_section_free(ptr + 824);
    _dwarf_malloc_section_free(ptr + 1056);
    _dwarf_malloc_section_free(ptr + 1288);
    _dwarf_malloc_section_free(ptr + 1520);
    _dwarf_malloc_section_free(ptr + 1752);
    _dwarf_malloc_section_free(ptr + 1984);
    _dwarf_malloc_section_free(ptr + 2216);
    _dwarf_malloc_section_free(ptr + 2448);
    _dwarf_malloc_section_free(ptr + 2680);
    _dwarf_malloc_section_free(ptr + 2912);
    _dwarf_malloc_section_free(ptr + 3144);
    _dwarf_malloc_section_free(ptr + 3840);
    _dwarf_malloc_section_free(ptr + 4536);
    _dwarf_malloc_section_free(ptr + 4768);
    _dwarf_malloc_section_free(ptr + 5000);
    _dwarf_malloc_section_free(ptr + 5232);
    _dwarf_malloc_section_free(ptr + 5464);
    _dwarf_malloc_section_free(ptr + 5696);
    _dwarf_malloc_section_free(ptr + 5928);
    _dwarf_malloc_section_free(ptr + 6160);
    _dwarf_malloc_section_free(ptr + 6392);
    _dwarf_malloc_section_free(ptr + 6656);
    _dwarf_malloc_section_free(ptr + 6888);
    _dwarf_malloc_section_free(ptr + 7120);
    _dwarf_malloc_section_free(ptr + 3376);
    _dwarf_malloc_section_free(ptr + 3608);
    _dwarf_malloc_section_free(ptr + 4072);
    _dwarf_malloc_section_free(ptr + 4304);
    _dwarf_harmless_cleanout(ptr + 10776);
    _dwarf_dealloc_rnglists_context(ptr);
    _dwarf_dealloc_loclists_context(ptr);
    v11 = *((void **)ptr + 1352);
    if ( v11 && !*((_DWORD *)ptr + 2707) )
      free(v11);
    _dwarf_destroy_group_map(ptr);
    v12 = *((void **)ptr + 36);
    if ( v12 )
    {
      ptr[70] = 1;
      _dwarf_tdestroy(v12);
      ptr[70] = 0;
      *((_QWORD *)ptr + 36) = 0;
    }
    _dwarf_free_static_errlist();
    v13 = *((void **)ptr + 1357);
    if ( v13 )
    {
      _dwarf_tdestroy(v13);
      *((_QWORD *)ptr + 1357) = 0;
    }
    free(*((void **)ptr + 10));
    v14 = *((_DWORD *)ptr + 24);
    *((_QWORD *)ptr + 10) = 0;
    if ( v14 )
    {
      v15 = 0;
      do
      {
        free(*(void **)(*((_QWORD *)ptr + 11) + 8 * v15));
        *(_QWORD *)(*((_QWORD *)ptr + 11) + 8 * v15++) = 0;
      }
      while ( (unsigned int)v15 < *((_DWORD *)ptr + 24) );
    }
    free(*((void **)ptr + 11));
    free(ptr);
    return 0;
  }
  else
  {
    _dwarf_free_static_errlist();
    return 0xFFFFFFFFLL;
  }
}

