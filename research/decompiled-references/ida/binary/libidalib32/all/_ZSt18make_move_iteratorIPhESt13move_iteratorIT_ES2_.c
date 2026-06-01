__int64 __fastcall std::make_move_iterator<unsigned char *>(__int64 a1)
{
  __int64 v2; // [rsp+18h] [rbp-8h] BYREF

  std::move_iterator<unsigned char *>::move_iterator(&v2, a1);
  return v2;
}

