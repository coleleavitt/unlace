void __fastcall __noreturn CoinModel::badType(CoinModel *this)
{
  fwrite("******** operation not allowed when in block mode ****\n", 1u, 0x37u, stderr);
  abort();
}

