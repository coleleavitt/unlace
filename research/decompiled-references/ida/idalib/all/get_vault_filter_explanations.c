const char *get_vault_filter_explanations()
{
  return "; By default all vault files are visible.\n"
         "; The admin can set up permissions to deny access\n"
         "; to some files. The user too can set up filter\n"
         "; patterns to make some files invisible. For that,\n"
         "; each site has a user-controlled filter table.\n"
         ";\n"
         "; The below table controls vault file visibility.\n"
         "; The table is scanned from the beginning to the end.\n"
         "; Lines starting with '!' hide the matching files.\n"
         "; Other lines make the matching files visible.\n"
         "; If the first line starts with '!', all files are\n"
         "; visible by default. Otherwise, all files are\n"
         "; invisible by default.\n"
         "; Example: !*.mov will hide all *.mov files.\n"
         "\n";
}
