__int64 __fastcall has_backup_metadata(__int64 a1)
{
  unsigned int *func; // rax
  unsigned int v2; // edx
  unsigned int v3; // eax

  func = (unsigned int *)get_func(a1);
  v2 = 0;
  if ( func )
  {
    v3 = ea2node(*func);
    LOBYTE(v2) = netnode_blobsize(v3, &stru_109000, 83) != 0;
  }
  return v2;
}

