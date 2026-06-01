__int64 __fastcall sub_76CDC0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  int v8; // r12d
  int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebx
  char v12; // al
  char v13; // dl
  unsigned __int16 v14; // ax
  char *v15; // r12
  __int64 i; // rbp
  char v17; // al
  char v18; // dl
  unsigned __int16 v19; // ax
  __m128i v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h]

  v7 = a1[3].m128i_i64[0];
  v21 = _mm_loadu_si128(a1 + 2);
  v22 = v7;
  v8 = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64))sub_7925F0)(
         &v21,
         a2,
         a3,
         a4,
         a5,
         a6);
  v9 = sub_7925A0(&v21);
  v10 = a1[1].m128i_i64[0];
  v11 = v9 | (2 * v8) | 0xC;
  if ( v10 )
  {
    v12 = sub_A7AF30(v10);
    v13 = -((v12 & 4) != 0);
    v14 = (2 * v12) & 0x10 | v12 & 3;
    v11 |= (2 * ((v14 >> 1) & 1)) | v14 & 0x11 | v13 & 0xC;
  }
  if ( (a1->m128i_i8[2] & 8) != 0 )
  {
    if ( a1[3].m128i_i32[2] )
    {
      v15 = &a1[4].m128i_i8[8];
      for ( i = (__int64)&a1[2 * a1[4].m128i_u32[1] + 4].m128i_i64[1];
            (char *)i != v15;
            v11 |= (2 * ((v19 >> 1) & 1)) | v19 & 0x11 | v18 & 0xC )
      {
        v17 = sub_AFD280(v15);
        v18 = -((v17 & 4) != 0);
        v15 += 32;
        v19 = (2 * v17) & 0x10 | v17 & 3;
      }
    }
  }
  return v11;
}

