__int64 __fastcall ClpModel::setStrParam(__int64 a1, int a2, const std::string *a3)
{
  if ( a2 )
    return 0;
  std::string::assign((std::string *)(a1 + 688), a3);
  return 1;
}

