__int64 __fastcall sub_1DF2100(
        __int64 a1,
        __int16 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned int v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]
  __int16 v20; // [rsp+38h] [rbp-10h]
  char v21; // [rsp+3Ah] [rbp-Eh]

  v8 = 0;
  if ( a2 )
  {
    v13 = a1;
    v20 = 1;
    v9 = *a2;
    v14 = 0;
    v10 = v9 & 0x1FF;
    v16 = 0;
    v15 = 0;
    v17 = a3;
    v18 = 0;
    v19 = 0;
    v21 = 0;
    if ( v10 == 69 )
    {
      v11 = sub_1DE85A0(&v13, (__int64)a2, 1u, nullptr, a7, a8);
    }
    else if ( v10 == 24 )
    {
      v11 = sub_1DE8A40(&v13, (unsigned __int64)a2, 1u, *(double *)a7.m128_u64, a8);
    }
    else
    {
      v11 = (__int64)sub_1DC71F0(&v13, (unsigned __int64)a2, a3, a4, a5, a6, a7, a8);
    }
    v8 = v11;
    operator delete(v14, 16LL * v16, 8);
  }
  return v8;
}
