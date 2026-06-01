void __fastcall TCluster::~TCluster(TCluster *this)
{
  TCluster::~TCluster(this);
  operator delete(this, 0x58u);
}

