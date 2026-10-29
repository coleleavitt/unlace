__int64 __fastcall sub_76D140(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  int v8; // r12d
  __int64 v9; // rdi
  char v10; // al
  char v11; // dl
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  int v14; // ebx
  unsigned int v15; // ebx
  char *v16; // r12
  __int64 i; // rbp
  char v18; // al
  char v19; // dl
  unsigned __int16 v20; // ax
  __m128i v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+10h] [rbp-38h]

  v7 = a1[1].m128i_i64[0];
  if ( v7 && !(unsigned __int8)sub_8123C0(v7) )
    v8 = (*(_DWORD *)a1[1].m128i_i64[0] >> 14) & 0x11 | 0xE;
  else
    v8 = 14;
  v9 = a1[2].m128i_i64[0];
  if ( v9 )
  {
    v10 = sub_A7AF30(v9);
    v11 = -((v10 & 4) != 0);
    v12 = (2 * v10) & 0x10 | v10 & 3;
    a4 = v8 | v12 & 0x11u;
    a3 = (2 * ((v12 >> 1) & 1)) | (unsigned int)a4 | v11 & 0xC;
    v8 = a3;
  }
  v13 = a1[4].m128i_i64[0];
  v22 = _mm_loadu_si128(a1 + 3);
  v23 = v13;
  v14 = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64))sub_7925F0)(
          &v22,
          a2,
          a3,
          a4,
          a5,
          a6);
  v15 = v8 | sub_7925A0(&v22) | (2 * v14);
  if ( (a1->m128i_i8[2] & 0x10) != 0 )
  {
    if ( a1[4].m128i_i32[2] )
    {
      v16 = &a1[5].m128i_i8[8];
      for ( i = (__int64)&a1[2 * a1[5].m128i_u32[1] + 5].m128i_i64[1];
            (char *)i != v16;
            v15 |= (2 * ((v20 >> 1) & 1)) | v20 & 0x11 | v19 & 0xC )
      {
        v18 = sub_AFD280(v16);
        v19 = -((v18 & 4) != 0);
        v16 += 32;
        v20 = (2 * v18) & 0x10 | v18 & 3;
      }
    }
  }
  return v15;
}

