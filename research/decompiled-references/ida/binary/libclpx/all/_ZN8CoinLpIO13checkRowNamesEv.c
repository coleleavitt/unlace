__int64 __fastcall CoinLpIO::checkRowNames(CoinMessageHandler **this, double a2)
{
  int NumRows; // ebx
  CoinMessageHandler *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 RowNames; // r14
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rbp
  CoinMessageHandler *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21[32]; // [rsp+0h] [rbp-338h] BYREF
  char s[568]; // [rsp+100h] [rbp-238h] BYREF

  NumRows = CoinLpIO::getNumRows((CoinLpIO *)this);
  if ( *((_DWORD *)this + 78) != NumRows + 1 )
  {
    CoinLpIO::setDefaultRowNames((CoinLpIO *)this);
    v3 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
    v8 = CoinMessageHandler::operator<<(
           v3,
           (__int64)"### CoinLpIO::checkRowNames(): non distinct or missing row names or objective function name.\n"
                    "Now using default row names.",
           v4,
           v5,
           v6,
           v7,
           v21[0]);
    CoinMessageHandler::operator<<(v8, 0, a2);
  }
  RowNames = CoinLpIO::getRowNames((CoinLpIO *)this);
  result = CoinLpIO::getRowSense((CoinLpIO *)this);
  v11 = result;
  if ( NumRows > 0 )
  {
    v12 = (unsigned int)(NumRows - 1);
    v13 = 0;
    v14 = v12 + 1;
    while ( 1 )
    {
      if ( *(_BYTE *)(v11 + v13) == 82 )
      {
        sprintf((char *)v21, "%s_low", *(const char **)(RowNames + 8 * v13));
        result = CoinLpIO::findHash((CoinLpIO *)this, (const char *)v21, 0);
        if ( (_DWORD)result != -1 )
          break;
      }
      if ( v14 == ++v13 )
        return result;
    }
    CoinLpIO::setDefaultRowNames((CoinLpIO *)this);
    sprintf(
      s,
      "### CoinLpIO::checkRowNames(): ranged constraint %d has a name %s identical to another constraint name or objectiv"
      "e function name.\n"
      "Use getPreviousNames() to get the old row names.\n"
      "Now using default row names.",
      v13,
      (const char *)v21);
    v15 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
    v20 = CoinMessageHandler::operator<<(v15, (__int64)s, v16, v17, v18, v19, v21[0]);
    return CoinMessageHandler::operator<<(v20, 0, a2);
  }
  return result;
}

