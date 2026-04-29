__int64 __fastcall sub_11B7D0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  int v5; // edx
  __int64 result; // rax
  __int64 v7[6]; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+30h] [rbp-68h] BYREF
  __m128i v9; // [rsp+38h] [rbp-60h] BYREF
  __m128i v10; // [rsp+48h] [rbp-50h] BYREF
  char v11; // [rsp+58h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp-28h]
  char v15; // [rsp+78h] [rbp-20h]
  unsigned __int64 v16; // [rsp+88h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  v8 = &off_4B01D0;
  v7[0] = (__int64)&off_4B0130;
  v13 = a3;
  v10 = 0u;
  v11 = 0;
  v12 = 0;
  v14 = a5;
  v15 = a4;
  memset(&v7[1], 0, 32);
  v7[5] = (__int64)&v8;
  v9 = (__m128i)(unsigned __int64)a1;
  v5 = sub_11B520(a1, v7);
  result = v12;
  if ( v5 || v12 )
  {
    *(__m128i *)(a2 + 8) = _mm_loadu_si128(&v9);
    *(__m128i *)(a2 + 24) = _mm_loadu_si128(&v10);
  }
  return result;
}
