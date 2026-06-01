void __fastcall sub_1A0F80(TCluster *a1)
{
  *(_QWORD *)a1 = &off_23D258;
  TCluster::~TCluster(a1);
  operator delete(a1, 0x58u);
}

