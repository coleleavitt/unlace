__int64 __fastcall sub_16633B0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13[6]; // [rsp+18h] [rbp-30h] BYREF

  v13[0] = 0;
  if ( a5 )
  {
    v12 = a3;
    v9 = sub_EEC140(a4[a5 - 1]);
    v10 = sub_EEB7E0(*a4, a2, a7);
    a3 = v12;
    v13[0] = __PAIR64__(v9, v10);
    a2 = (unsigned int)a2;
  }
  return sub_16629D0(a1, a2, a3, (__int64 *)v13, a6, a6, a7);
}
