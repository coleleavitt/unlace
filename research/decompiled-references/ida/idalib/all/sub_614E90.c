__int64 __fastcall sub_614E90(
        __int64 a1,
        double a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int64 a7,
        __int64 a8)
{
  __int64 *v9; // [rsp+0h] [rbp-18h]

  return ((unsigned int)sub_613380(
                          *(__int64 **)(*(_QWORD *)a1 + 1648LL),
                          0xFFFFFFFFFFFFFFFFLL,
                          a5,
                          a6,
                          a7,
                          a2,
                          a3,
                          a8,
                          v9) >> 1)
       & 1;
}
