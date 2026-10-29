ClpModel *__fastcall ClpModel::getRowName(ClpModel *this, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+8h] [rbp-30h]
  char s[34]; // [rsp+16h] [rbp-22h] BYREF

  v3 = *(_QWORD *)(a2 + 368);
  if ( a3 < (int)((*(_QWORD *)(a2 + 376) - v3) >> 3) )
  {
    std::string::string(this, (const std::string *)(v3 + 8LL * a3));
  }
  else
  {
    sprintf(s, "R%7.7d", a3);
    std::string::string();
    *(_QWORD *)this = v5;
  }
  return this;
}

