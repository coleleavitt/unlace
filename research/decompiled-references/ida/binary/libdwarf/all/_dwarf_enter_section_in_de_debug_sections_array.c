__int64 __fastcall dwarf_enter_section_in_de_debug_sections_array(
        __int64 a1,
        const char *a2,
        __int64 a3,
        int a4,
        unsigned int *a5)
{
  __int64 result; // rax

  result = sub_56BA0(a1, a2, (__int64)".debug_info", a3, ".debug_info", a4, a1 + 360, 0x1Fu, 0x20u, 1u, a5);
  if ( (_DWORD)result == -1 )
  {
    result = sub_56BA0(a1, a2, (__int64)".debug_info.dwo", a3, ".debug_info.dwo", 2, a1 + 360, 0x1Fu, 0x20u, 1u, a5);
    if ( (_DWORD)result == -1 )
    {
      result = sub_56BA0(a1, a2, (__int64)".debug_types", a3, ".debug_types", a4, a1 + 592, 0xEDu, 0xECu, 1u, a5);
      if ( (_DWORD)result == -1 )
      {
        result = sub_56BA0(
                   a1,
                   a2,
                   (__int64)".debug_types.dwo",
                   a3,
                   ".debug_types.dwo",
                   2,
                   a1 + 592,
                   0xEDu,
                   0xECu,
                   1u,
                   a5);
        if ( (_DWORD)result == -1 )
        {
          result = sub_56BA0(a1, a2, (__int64)".debug_abbrev", a3, ".debug_abbrev", a4, a1 + 824, 0x21u, 0x22u, 1u, a5);
          if ( (_DWORD)result == -1 )
          {
            result = sub_56BA0(
                       a1,
                       a2,
                       (__int64)".debug_abbrev.dwo",
                       a3,
                       ".debug_abbrev.dwo",
                       2,
                       a1 + 824,
                       0x21u,
                       0x22u,
                       1u,
                       a5);
            if ( (_DWORD)result == -1 )
            {
              result = sub_56BA0(
                         a1,
                         a2,
                         (__int64)".debug_aranges",
                         a3,
                         ".debug_aranges",
                         a4,
                         a1 + 1752,
                         0x23u,
                         0,
                         0,
                         a5);
              if ( (_DWORD)result == -1 )
              {
                result = sub_56BA0(a1, a2, (__int64)".debug_line", a3, ".debug_line", a4, a1 + 1056, 0x25u, 0, 1u, a5);
                if ( (_DWORD)result == -1 )
                {
                  result = sub_56BA0(
                             a1,
                             a2,
                             (__int64)".debug_line_str",
                             a3,
                             ".debug_line_str",
                             a4,
                             a1 + 1288,
                             0x25u,
                             0,
                             0,
                             a5);
                  if ( (_DWORD)result == -1 )
                  {
                    result = sub_56BA0(
                               a1,
                               a2,
                               (__int64)".debug_line.dwo",
                               a3,
                               ".debug_line.dwo",
                               2,
                               a1 + 1056,
                               0x25u,
                               0,
                               1u,
                               a5);
                    if ( (_DWORD)result == -1 )
                    {
                      result = sub_56BA0(
                                 a1,
                                 a2,
                                 (__int64)".debug_frame",
                                 a3,
                                 ".debug_frame",
                                 a4,
                                 a1 + 3840,
                                 0x6Bu,
                                 0,
                                 1u,
                                 a5);
                      if ( (_DWORD)result == -1 )
                      {
                        result = sub_56BA0(
                                   a1,
                                   a2,
                                   (__int64)".eh_frame",
                                   a3,
                                   ".eh_frame",
                                   a4,
                                   a1 + 4536,
                                   0x6Bu,
                                   0,
                                   1u,
                                   a5);
                        if ( (_DWORD)result == -1 )
                        {
                          result = sub_56BA0(
                                     a1,
                                     a2,
                                     (__int64)".debug_loc",
                                     a3,
                                     ".debug_loc",
                                     a4,
                                     a1 + 1520,
                                     0x27u,
                                     0,
                                     0,
                                     a5);
                          if ( (_DWORD)result == -1 )
                          {
                            result = sub_56BA0(
                                       a1,
                                       a2,
                                       (__int64)".debug_loc.dwo",
                                       a3,
                                       ".debug_loc.dwo",
                                       2,
                                       a1 + 1520,
                                       0x27u,
                                       0,
                                       0,
                                       a5);
                            if ( (_DWORD)result == -1 )
                            {
                              result = sub_56BA0(
                                         a1,
                                         a2,
                                         (__int64)".debug_pubnames",
                                         a3,
                                         ".debug_pubnames",
                                         a4,
                                         a1 + 2680,
                                         0x2Bu,
                                         0,
                                         0,
                                         a5);
                              if ( (_DWORD)result == -1 )
                              {
                                result = sub_56BA0(
                                           a1,
                                           a2,
                                           (__int64)".debug_str",
                                           a3,
                                           ".debug_str",
                                           a4,
                                           a1 + 2912,
                                           0x2Du,
                                           0,
                                           0,
                                           a5);
                                if ( (_DWORD)result == -1 )
                                {
                                  result = sub_56BA0(
                                             a1,
                                             a2,
                                             (__int64)".debug_str.dwo",
                                             a3,
                                             ".debug_str.dwo",
                                             2,
                                             a1 + 2912,
                                             0x2Du,
                                             0,
                                             0,
                                             a5);
                                  if ( (_DWORD)result == -1 )
                                  {
                                    result = sub_56BA0(
                                               a1,
                                               a2,
                                               (__int64)".debug_pubtypes",
                                               a3,
                                               ".debug_pubtypes",
                                               a4,
                                               a1 + 4768,
                                               0xC7u,
                                               0,
                                               0,
                                               a5);
                                    if ( (_DWORD)result == -1 )
                                    {
                                      result = sub_56BA0(
                                                 a1,
                                                 a2,
                                                 (__int64)".debug_loclists",
                                                 a3,
                                                 ".debug_loclists",
                                                 a4,
                                                 a1 + 3376,
                                                 0x166u,
                                                 0,
                                                 0,
                                                 a5);
                                      if ( (_DWORD)result == -1 )
                                      {
                                        result = sub_56BA0(
                                                   a1,
                                                   a2,
                                                   (__int64)".debug_loclists.dwo",
                                                   a3,
                                                   ".debug_loclists.dwo",
                                                   2,
                                                   a1 + 3376,
                                                   0x166u,
                                                   0,
                                                   0,
                                                   a5);
                                        if ( (_DWORD)result == -1 )
                                        {
                                          result = sub_56BA0(
                                                     a1,
                                                     a2,
                                                     (__int64)".debug_rnglists",
                                                     a3,
                                                     ".debug_rnglists",
                                                     a4,
                                                     a1 + 3608,
                                                     0x167u,
                                                     0,
                                                     0,
                                                     a5);
                                          if ( (_DWORD)result == -1 )
                                          {
                                            result = sub_56BA0(
                                                       a1,
                                                       a2,
                                                       (__int64)".debug_rnglists.dwo",
                                                       a3,
                                                       ".debug_rnglists.dwo",
                                                       2,
                                                       a1 + 3608,
                                                       0x167u,
                                                       0,
                                                       0,
                                                       a5);
                                            if ( (_DWORD)result == -1 )
                                            {
                                              result = sub_56BA0(
                                                         a1,
                                                         a2,
                                                         (__int64)".debug_str_offsets",
                                                         a3,
                                                         ".debug_str_offsets",
                                                         a4,
                                                         a1 + 6160,
                                                         0xF6u,
                                                         0,
                                                         0,
                                                         a5);
                                              if ( (_DWORD)result == -1 )
                                              {
                                                result = sub_56BA0(
                                                           a1,
                                                           a2,
                                                           (__int64)".debug_str_offsets.dwo",
                                                           a3,
                                                           ".debug_str_offsets.dwo",
                                                           2,
                                                           a1 + 6160,
                                                           0xF6u,
                                                           0,
                                                           0,
                                                           a5);
                                                if ( (_DWORD)result == -1 )
                                                {
                                                  result = sub_56BA0(
                                                             a1,
                                                             a2,
                                                             (__int64)".debug_funcnames",
                                                             a3,
                                                             ".debug_funcnames",
                                                             a4,
                                                             a1 + 5000,
                                                             0x98u,
                                                             0,
                                                             0,
                                                             a5);
                                                  if ( (_DWORD)result == -1 )
                                                  {
                                                    result = sub_56BA0(
                                                               a1,
                                                               a2,
                                                               (__int64)".debug_typenames",
                                                               a3,
                                                               ".debug_typenames",
                                                               a4,
                                                               a1 + 5232,
                                                               0x9Eu,
                                                               0,
                                                               0,
                                                               a5);
                                                    if ( (_DWORD)result == -1 )
                                                    {
                                                      result = sub_56BA0(
                                                                 a1,
                                                                 a2,
                                                                 (__int64)".debug_varnames",
                                                                 a3,
                                                                 ".debug_varnames",
                                                                 a4,
                                                                 a1 + 5464,
                                                                 0xA4u,
                                                                 0,
                                                                 0,
                                                                 a5);
                                                      if ( (_DWORD)result == -1 )
                                                      {
                                                        result = sub_56BA0(
                                                                   a1,
                                                                   a2,
                                                                   (__int64)".debug_weaknames",
                                                                   a3,
                                                                   ".debug_weaknames",
                                                                   a4,
                                                                   a1 + 5696,
                                                                   0xAAu,
                                                                   0,
                                                                   0,
                                                                   a5);
                                                        if ( (_DWORD)result == -1 )
                                                        {
                                                          result = sub_56BA0(
                                                                     a1,
                                                                     a2,
                                                                     (__int64)".debug_macinfo",
                                                                     a3,
                                                                     ".debug_macinfo",
                                                                     a4,
                                                                     a1 + 1984,
                                                                     0x29u,
                                                                     0,
                                                                     1u,
                                                                     a5);
                                                          if ( (_DWORD)result == -1 )
                                                          {
                                                            result = sub_56BA0(
                                                                       a1,
                                                                       a2,
                                                                       (__int64)".debug_macro",
                                                                       a3,
                                                                       ".debug_macro",
                                                                       a4,
                                                                       a1 + 2216,
                                                                       0x128u,
                                                                       0,
                                                                       1u,
                                                                       a5);
                                                            if ( (_DWORD)result == -1 )
                                                            {
                                                              result = sub_56BA0(
                                                                         a1,
                                                                         a2,
                                                                         (__int64)".debug_macro.dwo",
                                                                         a3,
                                                                         ".debug_macro.dwo",
                                                                         2,
                                                                         a1 + 2216,
                                                                         0x128u,
                                                                         0,
                                                                         1u,
                                                                         a5);
                                                              if ( (_DWORD)result == -1 )
                                                              {
                                                                result = sub_56BA0(
                                                                           a1,
                                                                           a2,
                                                                           (__int64)".debug_ranges",
                                                                           a3,
                                                                           ".debug_ranges",
                                                                           a4,
                                                                           a1 + 5928,
                                                                           0xCDu,
                                                                           0,
                                                                           1u,
                                                                           a5);
                                                                if ( (_DWORD)result == -1 )
                                                                {
                                                                  result = sub_56BA0(
                                                                             a1,
                                                                             a2,
                                                                             (__int64)".debug_sup",
                                                                             a3,
                                                                             ".debug_sup",
                                                                             a4,
                                                                             a1 + 3144,
                                                                             0x12Bu,
                                                                             0,
                                                                             1u,
                                                                             a5);
                                                                  if ( (_DWORD)result == -1 )
                                                                  {
                                                                    result = sub_56BA0(
                                                                               a1,
                                                                               a2,
                                                                               (__int64)".symtab",
                                                                               a3,
                                                                               ".symtab",
                                                                               a4,
                                                                               a1 + 7816,
                                                                               0xD1u,
                                                                               0,
                                                                               0,
                                                                               a5);
                                                                    if ( (_DWORD)result == -1 )
                                                                    {
                                                                      result = sub_56BA0(
                                                                                 a1,
                                                                                 a2,
                                                                                 (__int64)".strtab",
                                                                                 a3,
                                                                                 ".strtab",
                                                                                 a4,
                                                                                 a1 + 8048,
                                                                                 0xD2u,
                                                                                 0,
                                                                                 0,
                                                                                 a5);
                                                                      if ( (_DWORD)result == -1 )
                                                                      {
                                                                        result = sub_56BA0(
                                                                                   a1,
                                                                                   a2,
                                                                                   (__int64)".debug_addr",
                                                                                   a3,
                                                                                   ".debug_addr",
                                                                                   a4,
                                                                                   a1 + 6392,
                                                                                   0xF9u,
                                                                                   0,
                                                                                   1u,
                                                                                   a5);
                                                                        if ( (_DWORD)result == -1 )
                                                                        {
                                                                          result = sub_56BA0(
                                                                                     a1,
                                                                                     a2,
                                                                                     (__int64)".gdb_index",
                                                                                     a3,
                                                                                     ".gdb_index",
                                                                                     a4,
                                                                                     a1 + 6656,
                                                                                     0x104u,
                                                                                     0,
                                                                                     0,
                                                                                     a5);
                                                                          if ( (_DWORD)result == -1 )
                                                                          {
                                                                            result = sub_56BA0(
                                                                                       a1,
                                                                                       a2,
                                                                                       (__int64)".debug_names",
                                                                                       a3,
                                                                                       ".debug_names",
                                                                                       a4,
                                                                                       a1 + 2448,
                                                                                       0x129u,
                                                                                       0,
                                                                                       0,
                                                                                       a5);
                                                                            if ( (_DWORD)result == -1 )
                                                                            {
                                                                              result = sub_56BA0(
                                                                                         a1,
                                                                                         a2,
                                                                                         (__int64)".debug_cu_index",
                                                                                         a3,
                                                                                         ".debug_cu_index",
                                                                                         2,
                                                                                         a1 + 6888,
                                                                                         0x10Au,
                                                                                         0,
                                                                                         0,
                                                                                         a5);
                                                                              if ( (_DWORD)result == -1 )
                                                                              {
                                                                                result = sub_56BA0(
                                                                                           a1,
                                                                                           a2,
                                                                                           (__int64)".debug_tu_index",
                                                                                           a3,
                                                                                           ".debug_tu_index",
                                                                                           2,
                                                                                           a1 + 7120,
                                                                                           0x10Bu,
                                                                                           0,
                                                                                           0,
                                                                                           a5);
                                                                                if ( (_DWORD)result == -1 )
                                                                                {
                                                                                  result = sub_56BA0(
                                                                                             a1,
                                                                                             a2,
                                                                                             (__int64)".gnu_debuglink",
                                                                                             a3,
                                                                                             ".gnu_debuglink",
                                                                                             2,
                                                                                             a1 + 4072,
                                                                                             0x1C7u,
                                                                                             0,
                                                                                             1u,
                                                                                             a5);
                                                                                  if ( (_DWORD)result == -1 )
                                                                                  {
                                                                                    result = sub_56BA0(
                                                                                               a1,
                                                                                               a2,
                                                                                               (__int64)".note.gnu.build-id",
                                                                                               a3,
                                                                                               ".note.gnu.build-id",
                                                                                               2,
                                                                                               a1 + 4304,
                                                                                               0x1FCu,
                                                                                               0,
                                                                                               1u,
                                                                                               a5);
                                                                                    if ( (_DWORD)result == -1 )
                                                                                    {
                                                                                      result = sub_56BA0(
                                                                                                 a1,
                                                                                                 a2,
                                                                                                 (__int64)".debug_gnu_pubtypes.dwo",
                                                                                                 a3,
                                                                                                 ".debug_gnu_pubtypes.dwo",
                                                                                                 2,
                                                                                                 a1 + 7584,
                                                                                                 0x1DBu,
                                                                                                 0,
                                                                                                 0,
                                                                                                 a5);
                                                                                      if ( (_DWORD)result == -1 )
                                                                                      {
                                                                                        result = sub_56BA0(
                                                                                                   a1,
                                                                                                   a2,
                                                                                                   (__int64)".debug_gnu_pubtypes",
                                                                                                   a3,
                                                                                                   ".debug_gnu_pubtypes",
                                                                                                   a4,
                                                                                                   a1 + 7584,
                                                                                                   0x1DBu,
                                                                                                   0,
                                                                                                   0,
                                                                                                   a5);
                                                                                        if ( (_DWORD)result == -1 )
                                                                                        {
                                                                                          result = sub_56BA0(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     (__int64)".debug_gnu_pubnames.dwo",
                                                                                                     a3,
                                                                                                     ".debug_gnu_pubnames.dwo",
                                                                                                     2,
                                                                                                     a1 + 7352,
                                                                                                     0x1DAu,
                                                                                                     0,
                                                                                                     0,
                                                                                                     a5);
                                                                                          if ( (_DWORD)result == -1 )
                                                                                            return sub_56BA0(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     (__int64)".debug_gnu_pubnames",
                                                                                                     a3,
                                                                                                     ".debug_gnu_pubnames",
                                                                                                     a4,
                                                                                                     a1 + 7352,
                                                                                                     0x1DAu,
                                                                                                     0,
                                                                                                     0,
                                                                                                     a5);
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

