// Alternative name is '_ZN13CoinBaseModelC2Ev'
void __fastcall CoinBaseModel::CoinBaseModel(CoinBaseModel *this)
{
  CoinMessageHandler *v1; // rbp

  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = &off_4D17D0;
  *((_QWORD *)this + 2) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 4) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)this + 5) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)this + 6) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  CoinMessages::CoinMessages((CoinBaseModel *)((char *)this + 64), 0);
  *((_DWORD *)this + 24) = 0;
  v1 = (CoinMessageHandler *)operator new(0x640u);
  CoinMessageHandler::CoinMessageHandler(v1);
  *((_QWORD *)this + 7) = v1;
  std::string::assign((CoinBaseModel *)((char *)this + 32), "", 0);
  std::string::assign((CoinBaseModel *)((char *)this + 40), "row_master", 0xAu);
  std::string::assign((CoinBaseModel *)((char *)this + 48), "column_master", 0xDu);
}

