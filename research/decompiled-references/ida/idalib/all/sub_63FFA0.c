unsigned __int64 __fastcall sub_63FFA0(__m128i *a1, __int64 a2, __int64 a3)
{
  __m128i v3; // rax
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  __m128i *v10; // r8
  _DWORD *v11; // rcx
  __int8 v12; // si
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  int v18; // [rsp+10h] [rbp-28h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v3.m128i_i64[1] = a3;
  v19 = __readfsqword(0x28u);
  v3.m128i_i64[0] = a2;
  if ( (dword_2CCC3C8 & 0x200000) != 0 )
  {
    v3.m128i_i64[1] -= a2;
    v18 = 0;
    v10 = &v17;
    if ( v3.m128i_i64[1] > 0x14uLL )
      v3.m128i_i32[2] = 20;
    v17 = 0;
    v11 = (_DWORD *)a2;
    v12 = v3.m128i_i8[8];
    if ( v3.m128i_i32[2] >= 8u )
    {
      v3.m128i_i32[2] = v3.m128i_i8[8] & 0x18;
      LODWORD(v15) = 0;
      do
      {
        v16 = (unsigned int)v15;
        v15 = (unsigned int)(v15 + 8);
        *(__int64 *)((char *)v17.m128i_i64 + v16) = *(_QWORD *)(v3.m128i_i64[0] + v16);
      }
      while ( (unsigned int)v15 < v3.m128i_i32[2] );
      v10 = (__m128i *)((char *)&v17 + v15);
      v11 = (_DWORD *)(v3.m128i_i64[0] + v15);
    }
    v13 = 0;
    if ( (v12 & 4) != 0 )
    {
      v10->m128i_i32[0] = *v11;
      v13 = 2;
      if ( (v12 & 2) == 0 )
      {
LABEL_13:
        if ( (v12 & 1) == 0 )
        {
LABEL_14:
          v14 = v18;
          *a1 = _mm_load_si128(&v17);
          a1[1].m128i_i64[0] = v14;
          return v19 - __readfsqword(0x28u);
        }
LABEL_23:
        v10->m128i_i8[v13 * 2] = *((_BYTE *)v11 + v13 * 2);
        goto LABEL_14;
      }
    }
    else if ( (v12 & 2) == 0 )
    {
      goto LABEL_13;
    }
    v10->m128i_i16[v13] = *(_WORD *)((char *)v11 + v13 * 2);
    ++v13;
    if ( (v12 & 1) == 0 )
      goto LABEL_14;
    goto LABEL_23;
  }
  v17 = v3;
  v4 = is_cvt64(a1, a2, v3.m128i_i64[1]);
  v5 = v17.m128i_i64[1];
  if ( v4 )
  {
    v7 = (unsigned int)unpack_dd(&v17);
    if ( v7 == 0xFFFFFFFFLL )
      v7 = -1;
  }
  else
  {
    v7 = unpack_dq(&v17);
  }
  a1->m128i_i64[0] = v7;
  if ( (unsigned __int8)is_cvt64(&v17, v5, v6) )
  {
    v8 = (unsigned int)v7 + (unsigned int)unpack_dd(&v17);
    if ( v8 == 0xFFFFFFFFLL )
      v8 = -1;
  }
  else
  {
    v8 = v7 + unpack_dq(&v17);
  }
  a1->m128i_i64[1] = v8;
  a1[1].m128i_i64[0] = unpack_dq(&v17);
  return v19 - __readfsqword(0x28u);
}
