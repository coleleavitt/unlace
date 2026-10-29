__int64 __fastcall sub_1DDF840(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v8; // ebx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned int v13; // [rsp+18h] [rbp-30h]
  __int64 v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int16 v17; // [rsp+38h] [rbp-10h]
  char v18; // [rsp+3Ah] [rbp-Eh]

  v8 = 0;
  if ( a3 )
  {
    v10 = a1;
    v14 = a5;
    v17 = 1;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v18 = 0;
    v8 = sub_1DDBD00(&v10, a2, a3, a4, a6, nullptr, a7, a8);
    operator delete(v11, 16LL * v13, 8);
  }
  return v8;
}
