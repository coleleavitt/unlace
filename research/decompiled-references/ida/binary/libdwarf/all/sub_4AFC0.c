unsigned __int64 __fastcall sub_4AFC0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 *v3; // r15
  int v4; // edx
  __int64 v5; // rsi
  int v6; // r14d
  int v7; // edx
  char *v8; // rsi
  time_t v9; // r12
  __int64 v10; // r12
  unsigned __int8 *v11; // r13
  int v12; // edx
  __int64 v13; // rsi
  time_t timer; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v17[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  LOBYTE(v2) = *(_WORD *)(a2 + 24) != 5;
  v18 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a2 + 216);
  dwarfstring_constructor_static(v17, qword_B9260, 200);
  dwarfstring_append_printf_i(v17, "  file names count      %d\n", *(_QWORD *)(a2 + 232));
  v5 = dwarfstring_string(v17, "  file names count      %d\n", v4);
  _dwarf_printf(a1, v5);
  dwarfstring_reset(v17, v5);
  if ( v3 )
  {
    v2 = (unsigned __int8)v2;
    v6 = 0;
    while ( 1 )
    {
      v9 = v3[4];
      if ( *(_QWORD *)(a2 + 232) > 9u )
        dwarfstring_append_printf_u(v17, "  file[%2u] ", v6);
      else
        dwarfstring_append_printf_u(v17, "  file[%u]  ", v6);
      dwarfstring_append_printf_s();
      dwarfstring_append_printf_u(v17, "(file-number: %u)\n", v2);
      v8 = (char *)dwarfstring_string(v17, "(file-number: %u)\n", v7);
      _dwarf_printf(a1, v8);
      dwarfstring_reset(v17, v8);
      if ( *((_BYTE *)v3 + 88) )
      {
        v8 = "    dir index %d\n";
        dwarfstring_append_printf_i(v17, "    dir index %d\n", v3[3]);
      }
      if ( *((_BYTE *)v3 + 89) )
      {
        timer = v9;
        dwarfstring_append_printf_u(v17, "    last time 0x%x ", v9);
        v8 = ctime(&timer);
        dwarfstring_append();
      }
      if ( *((_BYTE *)v3 + 90) )
      {
        v10 = v3[5];
        dwarfstring_append_printf_i(v17, "    file length %ld ", v10);
        v8 = "0x%lx\n";
        dwarfstring_append_printf_u(v17, "0x%lx\n", v10);
        if ( *((_BYTE *)v3 + 91) )
        {
LABEL_23:
          v11 = (unsigned __int8 *)(v3 + 9);
          dwarfstring_append();
          if ( v3 + 9 < v3 + 11 )
          {
            do
            {
              v12 = *v11++;
              dwarfstring_append_printf_u(v17, "%02x", v12);
            }
            while ( v3 + 11 != (__int64 *)v11 );
          }
          v8 = "\n";
          dwarfstring_append();
        }
      }
      else if ( *((_BYTE *)v3 + 91) )
      {
        goto LABEL_23;
      }
      if ( v3[2] )
      {
        v8 = "%-20s\n";
        dwarfstring_append_printf_s();
      }
      if ( v3[6] )
      {
        v8 = "%-20s\n";
        dwarfstring_append_printf_s();
      }
      if ( *((_BYTE *)v3 + 92) )
      {
        v8 = "    gnu decl file %d\n";
        dwarfstring_append_printf_i(v17, "    gnu decl file %d\n", v3[7]);
      }
      if ( *((_BYTE *)v3 + 93) )
      {
        v8 = "    gnu decl line %d\n";
        dwarfstring_append_printf_i(v17, "    gnu decl line %d\n", v3[8]);
      }
      if ( dwarfstring_strlen(v17) )
      {
        ++v6;
        ++v2;
        v13 = dwarfstring_string(v17, v8);
        _dwarf_printf(a1, v13);
        dwarfstring_reset(v17, v13);
        v3 = (__int64 *)*v3;
        if ( !v3 )
          break;
      }
      else
      {
        v3 = (__int64 *)*v3;
        ++v6;
        ++v2;
        if ( !v3 )
          break;
      }
    }
  }
  dwarfstring_destructor(v17);
  return v18 - __readfsqword(0x28u);
}

