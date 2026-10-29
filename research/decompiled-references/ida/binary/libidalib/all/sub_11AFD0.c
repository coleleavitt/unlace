__int64 sub_11AFD0()
{
  if ( find_plugin() )
    run_plugin();
  else
    sub_92200(
      (__int64)"ICON ERROR\n"
               "AUTOHIDE NONE\n"
               "Could not load the TDS info. It could be due to one of 3 reasons:\n"
               "1. The current file is not an MS Windows PE file\n"
               "2. The TDS plugin is not present in the plugins subdirectory\n"
               "3. The current directory does not contain a valid TDS file",
      1);
  return 1;
}

