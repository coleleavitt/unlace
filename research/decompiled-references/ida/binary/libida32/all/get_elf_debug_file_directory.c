const char *get_elf_debug_file_directory()
{
  __int64 current_config; // rax
  const char *v1; // rdx

  current_config = get_current_config();
  v1 = haystack;
  if ( *(_QWORD *)(current_config + 424) )
    return *(const char **)(current_config + 416);
  return v1;
}

