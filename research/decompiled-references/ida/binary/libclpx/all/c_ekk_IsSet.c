__int64 __fastcall c_ekk_IsSet(__int64 a1, int a2)
{
  return (*(int *)(a1 + 4LL * (a2 >> 5)) >> a2) & 1;
}

