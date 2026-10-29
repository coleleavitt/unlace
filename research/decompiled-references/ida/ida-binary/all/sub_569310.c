unsigned __int64 __fastcall sub_569310(
        __m128i *a1,
        unsigned __int32 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int32 v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax
  unsigned __int32 v14; // edi
  unsigned __int64 v15; // rsi
  unsigned __int32 v16; // edx
  unsigned int v17; // edi
  __int32 v18; // edx
  __int32 v19; // edx
  __int32 v20; // edx
  __int32 v21; // ecx
  unsigned int v22; // edi
  __int32 v23; // ecx

  v8 = sub_565DC0((__int64)a1, (__int64)a2, a3, a4, a5, a6, _mm_loadu_si128(a1).m128i_u32[0]);
  result = sub_565DD0((__int64)a1, (__int64)a2, v9, v10, v11, v12, (__int128)_mm_loadu_si128(a1));
  v14 = a2[1];
  v15 = HIDWORD(result);
  if ( v8 < v14 )
  {
    v19 = result;
    if ( *a2 >= v8 )
      goto LABEL_4;
    v20 = a2[7];
    v21 = a2[8];
    a1->m128i_i32[0] = a2[2];
    a1->m128i_i32[1] = v20;
    a1->m128i_i32[2] = v21;
  }
  else
  {
    v16 = a2[2] - v14;
    v17 = a2[5];
    v8 += v16;
    v18 = a2[7];
    if ( v17 < (unsigned int)result )
    {
      v19 = result + v18 - v17;
LABEL_4:
      a1->m128i_i32[0] = v8;
      a1->m128i_i32[1] = v19;
      a1->m128i_i32[2] = HIDWORD(result);
      return result;
    }
    result = a2[8];
    v22 = a2[6];
    a1->m128i_i32[0] = v8;
    a1->m128i_i32[1] = v18;
    v23 = result + v15 - v22;
    if ( (unsigned int)v15 < v22 )
      v23 = result;
    a1->m128i_i32[2] = v23;
  }
  return result;
}
