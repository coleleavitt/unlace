__int64 __fastcall has_backup_metadata(__int64 a1)
{
  _QWORD *func; // rax
  unsigned int v2; // edx
  __int64 v3; // rax

  func = (_QWORD *)get_func(a1);
  v2 = 0;
  if ( func )
  {
    v3 = ea2node(*func);
    LOBYTE(v2) = netnode_blobsize(v3, 1085440, 83) != 0;
  }
  return v2;
}
