__int64 __fastcall sub_141AE90(unsigned __int8 *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v5; // r13d
  int v7; // edx
  __int64 v9; // [rsp+8h] [rbp-120h] BYREF
  void *v10[2]; // [rsp+10h] [rbp-118h] BYREF
  __int64 v11; // [rsp+20h] [rbp-108h] BYREF
  void *v12; // [rsp+30h] [rbp-F8h] BYREF
  signed __int64 v13; // [rsp+38h] [rbp-F0h]
  _BYTE v14[32]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int8 *v15[10]; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v16; // [rsp+B0h] [rbp-78h] BYREF
  signed __int64 v17; // [rsp+C0h] [rbp-68h]
  _BYTE v18[16]; // [rsp+C8h] [rbp-60h] BYREF
  __int16 v19; // [rsp+D8h] [rbp-50h]
  char v20; // [rsp+E8h] [rbp-40h]
  char v21; // [rsp+F8h] [rbp-30h]

  v5 = 0;
  v14[0] = 0;
  v19 = 0;
  v12 = v14;
  v13 = 0;
  v16.m128i_i64[0] = 0;
  v16.m128i_i64[1] = (__int64)v18;
  v17 = 0;
  v18[0] = 0;
  v20 = 0;
  v21 = 0;
  v9 = 0;
  if ( !(unsigned __int8)sub_FF24C0((__int64)a3, a1, a2, (__int64)&v12, &v16, &v9) )
  {
    if ( v16.m128i_i32[1] )
    {
      v5 = 1;
      sub_FC70B0((__int64)v15, a4, v16.m128i_i32[1], 36);
      sub_AE9DF0(v15, (unsigned __int8)v19, 2u);
      sub_AEC220(v15, (_BYTE *)v16.m128i_i64[1], v17);
      sub_AEA040((__int64)v15);
    }
    else
    {
      v7 = *((_DWORD *)a3 + 8);
      if ( v9 )
      {
        sub_FC70B0((__int64)v15, a4, v7, 41);
        sub_AEC220(v15, (_BYTE *)*a3, a3[1]);
        sub_AEA040((__int64)v15);
        sub_FC70B0((__int64)v15, a4, *(_DWORD *)(v9 + 32), 113);
        v5 = 1;
        sub_AEA040((__int64)v15);
      }
      else
      {
        sub_FC70B0((__int64)v15, a4, v7, 42);
        sub_FEEE60((__int64)v10, a3, 0);
        sub_AEC220(v15, (_BYTE *)v10[0], (signed __int64)v10[1]);
        sub_AE9DF0(v15, v14[16], 2u);
        sub_AEC220(v15, v12, v13);
        if ( v10[0] != &v11 )
          operator delete(v10[0]);
        v5 = 1;
        sub_AEA040((__int64)v15);
      }
    }
  }
  if ( (_BYTE *)v16.m128i_i64[1] != v18 )
    operator delete((void *)v16.m128i_i64[1]);
  if ( v12 != v14 )
    operator delete(v12);
  return v5;
}
