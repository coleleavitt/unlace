void __fastcall dwarf_srclines_dealloc_b(char *a1)
{
  _QWORD *v2; // r13
  struct Dwarf_Debug_s *v3; // r12
  __int64 v4; // r14
  __int64 v5; // rbp
  void *v6; // rsi
  _QWORD *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbp
  void *v10; // rsi
  bool v11; // zf
  _QWORD *v12; // rbp
  struct Dwarf_Debug_s *v13; // r12
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi

  if ( a1 && *(_DWORD *)a1 == -804450031 )
  {
    v2 = *((_QWORD **)a1 + 38);
    v3 = *((struct Dwarf_Debug_s **)a1 + 36);
    if ( v2 )
    {
      v4 = *((_QWORD *)a1 + 39);
      v5 = 0;
      if ( v4 > 0 )
      {
        do
        {
          v6 = (void *)v2[v5++];
          dwarf_dealloc(v3, v6, 9u);
        }
        while ( v4 != v5 );
      }
      dwarf_dealloc(v3, v2, 0xFu);
    }
    v7 = *((_QWORD **)a1 + 40);
    *((_QWORD *)a1 + 38) = 0;
    *((_QWORD *)a1 + 39) = 0;
    if ( v7 )
    {
      v8 = *((_QWORD *)a1 + 41);
      v9 = 0;
      if ( v8 > 0 )
      {
        do
        {
          v10 = (void *)v7[v9++];
          dwarf_dealloc(v3, v10, 9u);
        }
        while ( v8 != v9 );
      }
      dwarf_dealloc(v3, v7, 0xFu);
    }
    v11 = *(_DWORD *)a1 == -804450031;
    *((_QWORD *)a1 + 40) = 0;
    *((_QWORD *)a1 + 41) = 0;
    if ( v11 )
    {
      v12 = *((_QWORD **)a1 + 27);
      v13 = *((struct Dwarf_Debug_s **)a1 + 36);
      while ( v12 )
      {
        v14 = v12;
        v12 = (_QWORD *)*v12;
        free(v14);
      }
      v15 = *((void **)a1 + 32);
      *((_QWORD *)a1 + 27) = 0;
      *((_QWORD *)a1 + 31) = 0;
      *(_OWORD *)(a1 + 232) = 0;
      if ( v15 )
      {
        free(v15);
        *((_QWORD *)a1 + 32) = 0;
      }
      free(*((void **)a1 + 22));
      v16 = *((void **)a1 + 26);
      *((_QWORD *)a1 + 22) = 0;
      free(v16);
      v17 = *((void **)a1 + 18);
      *((_QWORD *)a1 + 26) = 0;
      if ( v17 )
      {
        free(v17);
        *((_QWORD *)a1 + 18) = 0;
      }
      *(_DWORD *)a1 = 57005;
      dwarf_dealloc(v13, a1, 0x24u);
    }
  }
}

