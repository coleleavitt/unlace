// Alternative name is '_ZN12CoinSnapshotC1ERKS_'
void __fastcall CoinSnapshot::CoinSnapshot(CoinSnapshot *this, const CoinSnapshot *a2)
{
  *(_QWORD *)this = off_4D2308;
  CoinSnapshot::gutsOfDestructor(this, 13);
  CoinSnapshot::gutsOfCopy(this, a2);
}

