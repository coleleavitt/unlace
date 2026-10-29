__int64 sub_11AB30()
{
  if ( find_plugin() )
    run_plugin();
  else
    sub_92120(
      (__int64)"%s",
      "ICON ERROR\n"
      "AUTOHIDE NONE\n"
      "Could not load the PDB plugin. It could be due to 3 reasons:\n"
      "1. The current file is not an MS Windows PE file\n"
      "2. The PDB plugin is not present in the plugins subdirectory\n"
      "3. dbghelp.dll on you system is too old");
  return 1;
}

