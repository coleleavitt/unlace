__int64 __fastcall sub_5884B0(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rbp
  size_t v9; // rdx

  v7 = (int)sub_4C9A10(a2);
  if ( a6 == 16 && (*(_BYTE *)(a1 + 1) & 0xA) == 0 && (unsigned __int8)(a2[1] - 48) <= 9u )
  {
    v9 = v7-- + 1;
    memmove(a2, a2 + 1, v9);
  }
  return v7;
}
