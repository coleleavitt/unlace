__int64 __fastcall sub_1907C00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  char v11; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // [rsp+8h] [rbp-30h]

  v11 = a4;
  if ( a6 )
  {
    v16 = a5;
    v13 = sub_15AB9E0(a6, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
    a5 = v16;
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  return sub_19075A0(a1, a2, a3, v11, a5, a9, a7, a8, v13, v14, a10, a11);
}
