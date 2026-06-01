__int64 __fastcall sub_172570(unsigned int a1, __int64 a2, char a3)
{
  int inited; // eax
  unsigned int v5; // ebx
  int v7; // eax
  const char *path; // rax

  if ( (unsigned __int8)netnode_inited() )
  {
    path = (const char *)get_path();
    sub_8F660(
      (__int64)"Unable to open a new database because another is currently open. Please close %s before attempting to open a new one.\n",
      path);
    return (unsigned int)-1;
  }
  inited = init_database();
  v5 = inited;
  if ( inited )
  {
    sub_8F660((__int64)"Database initialization failed with error %d\n", inited);
    return v5;
  }
  if ( (get_merge_state() & 4) == 0 )
  {
    sub_EB000();
    v7 = sub_10DFF0(a1, a2);
    if ( v7 )
    {
      v5 = v7;
      sub_8F660((__int64)"declare_ready_to_run failed with result: %d\n", v7);
      return v5;
    }
    if ( !a3 )
    {
      sub_8F660((__int64)"%s\n", "Database initialized, you need to call auto_wait() for running auto analysis");
      return v5;
    }
    if ( (unsigned __int8)auto_wait() )
    {
      sub_8F660((__int64)"%s\n", "Auto analysis completed");
      return v5;
    }
    sub_8F660((__int64)"%s\n", "Auto analysis failed");
    return (unsigned int)-1;
  }
  return v5;
}

