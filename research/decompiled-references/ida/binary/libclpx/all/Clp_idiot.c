void __fastcall Clp_idiot(ClpSimplex **a1, int a2)
{
  ClpSimplex *v2; // r12
  CoinMessageHandler *v3; // rdx
  _DWORD _0[46]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *a1;
  Idiot::Idiot((Idiot *)_0, *a1);
  v3 = *((CoinMessageHandler **)v2 + 43);
  _0[37] = a2 & 7;
  Idiot::crash((Idiot *)_0, a2 >> 3, v3, (ClpSimplex *)((char *)v2 + 416), 0);
  Idiot::~Idiot((Idiot *)_0);
}

