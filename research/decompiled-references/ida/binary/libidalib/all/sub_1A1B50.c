void __fastcall sub_1A1B50(TCluster *a1)
{
  *(_QWORD *)a1 = &off_23E338;
  TCluster::~TCluster(a1);
  operator delete(a1, 0x58u);
}

