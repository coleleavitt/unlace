unsigned __int16 *__fastcall sub_1DCD760(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned int v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int16 v17; // [rsp+38h] [rbp-10h]
  char v18; // [rsp+3Ah] [rbp-Eh]

  if ( !a2 )
    return nullptr;
  v10 = a1;
  v14 = a3;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  v8 = sub_1DC71F0(&v10, a2, a3, a4, a5, a6, a7, a8);
  operator delete(v11, 16LL * v13, 8);
  return v8;
}
