__int64 __fastcall database_persistent_t__::vfunc_0(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = netnode_inited();
  if ( (_BYTE)v1 )
  {
    QT::QString::assign(a1 + 8, &unk_5C2F25, 0);
    netnode_check(a1 + 32, "$ qregistry", 0, 1);
  }
  return v1;
}
