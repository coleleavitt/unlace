__int64 __fastcall sub_1663420(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( a4 )
    v10[0] = sub_EEC8C0(a4, a2, a7);
  else
    v10[0] = 0;
  return sub_16629D0(a1, (unsigned int)a2, a3, v10, a5, a6, a7);
}
