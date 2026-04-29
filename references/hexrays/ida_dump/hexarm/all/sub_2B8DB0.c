__int64 __fastcall sub_2B8DB0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  unsigned int v4; // ebp
  __m128i v6; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+18h] [rbp-C0h]
  __int64 v8; // [rsp+20h] [rbp-B8h]
  __int128 v9; // [rsp+28h] [rbp-B0h]
  __int64 v10; // [rsp+38h] [rbp-A0h]
  __m128i v11; // [rsp+40h] [rbp-98h]
  int v12; // [rsp+50h] [rbp-88h]
  __int64 (__fastcall **v13)(); // [rsp+60h] [rbp-78h]
  __m128i v14; // [rsp+68h] [rbp-70h] BYREF
  __int64 v15; // [rsp+78h] [rbp-60h]
  __int64 v16; // [rsp+80h] [rbp-58h]
  __int128 v17; // [rsp+88h] [rbp-50h]
  __int64 v18; // [rsp+98h] [rbp-40h]
  __m128i v19; // [rsp+A0h] [rbp-38h]
  int v20; // [rsp+B0h] [rbp-28h]
  unsigned __int64 v21; // [rsp+B8h] [rbp-20h]

  v2 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v21 = __readfsqword(0x28u);
  v9 = 0;
  v14 = v2;
  v19 = v2;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v13 = off_4DB968;
  v20 = -2;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v12 = -2;
  v17 = 0;
  v6 = v3;
  v11 = v3;
  v4 = sub_258000((__int64)&v6, (__int64)&v14);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  v13 = off_4DB968;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v4;
}
