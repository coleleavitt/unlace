__int64 __fastcall CoinModelHash2::hashValue(CoinModelHash2 *this, unsigned int a2, unsigned int a3)
{
  return (254291 * HIBYTE(a2)
        + 256889 * BYTE2(a2)
        + 259459 * BYTE1(a2)
        + 236609 * BYTE2(a3)
        + 241667 * (unsigned __int8)a3
        + 239179 * BYTE1(a3)
        + 262139 * (unsigned __int8)a2
        + 233983 * HIBYTE(a3))
       % (unsigned int)(2 * *((_DWORD *)this + 3));
}

