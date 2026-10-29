unsigned __int64 __fastcall sub_1A8CD60(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        int a8,
        unsigned int a9,
        _BYTE *a10,
        __int64 a11,
        int a12,
        int a13,
        unsigned int a14,
        char a15,
        unsigned __int8 a16)
{
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-100h]
  __int64 v26; // [rsp+10h] [rbp-F8h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  char v29; // [rsp+37h] [rbp-D1h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v31[200]; // [rsp+40h] [rbp-C8h] BYREF

  LODWORD(v26) = a8;
  v17 = sub_168B6C0((__int64)a1);
  v18 = a2;
  v19 = v17;
  if ( a6 )
  {
    v28 = v17;
    v21 = sub_1A8B8D0(*a1, a3, a2, a5, a6, (v26 << 32) | a4, a7, a15, a16);
    v18 = v21;
    v19 = v28;
    if ( a15 )
    {
      if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
    }
  }
  if ( !a11 )
    return v18;
  v22 = sub_A787C0(v19, v18, a10, a11, &v29, 0);
  v18 = v22;
  if ( v29 )
  {
    v25 = v22;
    sub_168B9F0((__int64)v31, a1, a3, 0xFD5u, 0);
    v30 = __PAIR64__(a14, a9);
    sub_1587DB0((__int64)v31, (__int64 *)&v30);
    sub_15F7200(v31);
    if ( a15 )
      return 0;
    return v25;
  }
  if ( !a15 || (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    return v18;
  return 0;
}
