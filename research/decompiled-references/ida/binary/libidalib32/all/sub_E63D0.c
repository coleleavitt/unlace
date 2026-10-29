_BOOL8 sub_E63D0()
{
  int v0; // eax
  int v1; // ebx
  const char *v3; // rsi

  v0 = sub_E5C20(0xFFFFFFFF, 0xFFFFFFFF);
  v1 = v0;
  if ( v0 == -3 )
  {
    sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nSorry, the debugger does not support this command");
    return 0;
  }
  else if ( v0 == -2 )
  {
    v3 = "The debugger could not find running processes corresponding to this database.";
    if ( (unsigned __int8)is_miniidb() )
      v3 = "The process list of the remote machine is empty.";
    sub_92120((__int64)"AUTOHIDE NONE\n%s", v3);
    return v1 >= 0;
  }
  else
  {
    if ( v0 == -1 )
      sub_92120((__int64)"ICON ERROR\n"
                         "AUTOHIDE NONE\n"
                         "The debugger could not attach to the selected process.\n"
                         "This can perhaps indicate the process was just terminated, or that you don't have the necessary privileges.");
    return v1 >= 0;
  }
}

