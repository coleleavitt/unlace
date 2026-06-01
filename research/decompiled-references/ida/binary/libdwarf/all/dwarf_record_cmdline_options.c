char *__fastcall dwarf_record_cmdline_options(int a1)
{
  *(_DWORD *)dwarf_cmdline_options = a1;
  return dwarf_cmdline_options;
}

