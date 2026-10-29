__m128i *__fastcall sub_8EE240(__m128i *a1, _DWORD *a2, unsigned __int64 a3, unsigned __int64 a4, int a5, __int64 a6)
{
  unsigned __int64 v8; // rbp
  __m128i v9; // xmm0
  bool v10; // zf
  __int64 v11; // r9
  __m128i v13; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+30h] [rbp-68h]
  unsigned int v15; // [rsp+38h] [rbp-60h]
  __m128i v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  unsigned int v18; // [rsp+58h] [rbp-40h]
  unsigned __int64 v19; // [rsp+68h] [rbp-30h]

  v8 = a3;
  v19 = __readfsqword(0x28u);
  if ( a3 == -1 && (int)a2[16] > 0 )
    v8 = (int)a2[16];
  sub_8EE080(&v13, (unsigned int)a2[11], v8, a4, a5, a6);
  v9 = _mm_loadu_si128(&v13);
  v10 = a2[24] == 1;
  v17 = v14;
  v16 = v9;
  v18 = v15;
  if ( v10 )
    v16.m128i_i32[0] = 27;
  sub_8E5180(&v16, a2 + 1);
  sub_8E5520(a1, v8, a4, a5, a2[36], v11, (__int128)_mm_load_si128(&v16), v17, v18);
  return a1;
}

