__int64 __fastcall sub_FCE780(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __m128i *a5, _QWORD *a6)
{
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rbx
  char v16; // al
  const __m128i *v17; // rbp
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int8 v20; // al
  __int64 v22; // [rsp+8h] [rbp-40h]

  result = 1;
  if ( (*(_BYTE *)(a1 + 904) & 4) == 0 )
  {
    v8 = a1;
    if ( (*(_BYTE *)(a1 + 904) & 1) != 0 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v8 + 896);
        if ( v11 )
        {
          *a6 = v11;
          return 0;
        }
        v12 = *(_DWORD *)(v8 + 808);
        if ( v12 )
          break;
LABEL_13:
        v8 = *(_QWORD *)(v8 + 40);
      }
      v13 = *(_QWORD *)(v8 + 800);
      v14 = 0;
      v15 = 8 * (5LL * (unsigned int)(v12 - 1) + 5);
      while ( 1 )
      {
        v16 = sub_FC9700(*(_WORD **)(v14 + v13), *(_QWORD *)(v14 + v13 + 8), a2, a3);
        v13 = *(_QWORD *)(v8 + 800);
        if ( v16 != *(_BYTE *)(v13 + v14 + 32) )
          break;
        v14 += 40;
        if ( v15 == v14 )
          goto LABEL_13;
      }
      v22 = v13 + v14;
      sub_9CAB60(a4, v13 + v14);
      *(_BYTE *)(a4 + 32) = *(_BYTE *)(v22 + 32);
      return 0;
    }
    else
    {
      while ( !*(_DWORD *)(v8 + 712) )
        v8 = *(_QWORD *)(v8 + 40);
      v17 = *(const __m128i **)(v8 + 704);
      a5->m128i_i32[0] = v17->m128i_i32[0];
      a5->m128i_i32[1] = v17->m128i_i32[1];
      sub_9CAB60((__int64)&a5->m128i_i64[1], (__int64)&v17->m128i_i64[1]);
      v18 = _mm_loadu_si128(v17 + 3);
      v19 = _mm_loadu_si128(v17 + 4);
      a5[2].m128i_i8[8] = v17[2].m128i_i8[8];
      v20 = v17[2].m128i_i8[9];
      a5[3] = v18;
      a5[2].m128i_i8[9] = v20;
      result = 0;
      a5[4] = v19;
    }
  }
  return result;
}

