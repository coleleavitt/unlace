// Alternative name is '_ZN14CoinFileIOBaseC2ERKSs'
void __fastcall CoinFileIOBase::CoinFileIOBase(CoinFileIOBase *this, const std::string *a2)
{
  std::string *v2; // rdi

  v2 = (CoinFileIOBase *)((char *)this + 8);
  *((_QWORD *)v2 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  std::string::string(v2, a2);
}

