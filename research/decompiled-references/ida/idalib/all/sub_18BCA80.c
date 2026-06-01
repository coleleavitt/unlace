__int64 __fastcall sub_18BCA80(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8)
{
  __int64 v8; // rdi
  __int64 v10; // rdi
  __int64 v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-60h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFD1LL )
  {
    LODWORD(v13) = a5;
    HIDWORD(v13) = a5;
    v14 = a5;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    sub_15AFAE0((__int64)&v15, a5, -(int)a4, (int *)&v13);
    v10 = *a1;
    v11 = 0;
    sub_1CE5E60(v10, 0, (__int64)&v11, a8);
    sub_F22A90(&v12, v11);
    return v12;
  }
  else
  {
    v16 = a4;
    v8 = *a1;
    v15 = 0;
    HIDWORD(v17) = a5;
    LODWORD(v17) = a5;
    v12 = 0;
    sub_1CE5E60(v8, 0, (__int64)&v12, a8);
    sub_F22A90(&v13, v12);
    return v13;
  }
}
