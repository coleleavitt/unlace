__int64 __fastcall sub_207FA20(__int64 *a1, const __m128i **a2, const __m128i ***a3)
{
  int v3; // ebx
  const __m128i *v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int32 v11; // eax
  int v14; // ebx
  int v15; // eax
  const __m128i *v16; // rsi
  unsigned int v17; // eax
  const __m128i **v18; // rcx
  const __m128i *v19; // rdx
  int v20; // r8d
  const __m128i **v21; // rdi
  __int8 *v22; // rcx
  __int32 v23; // [rsp+4h] [rbp-64h] BYREF
  __int64 v24; // [rsp+8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+18h] [rbp-50h] BYREF
  __m128i v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+30h] [rbp-38h]
  __int64 v29[6]; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = *a1;
    v7 = (*a2)[-1].m128i_u8[0];
    if ( (v7 & 2) != 0 )
    {
      v8 = *(_QWORD *)v5[-2].m128i_i64[0];
      v25 = v8;
      v9 = v5[-2].m128i_i64[0];
    }
    else
    {
      v22 = &v5->m128i_i8[-8 * ((v7 >> 2) & 0xF)];
      v8 = *((_QWORD *)v22 - 2);
      v9 = (__int64)(v22 - 16);
      v25 = v8;
    }
    v26 = *(_QWORD *)(v9 + 8);
    v27 = _mm_loadu_si128(v5 + 1);
    v28 = v5[2].m128i_i64[0];
    v29[0] = v5[2].m128i_i64[1];
    if ( (_BYTE)v28 )
    {
      v10 = v27.m128i_i64[1];
      v11 = v27.m128i_i32[0];
    }
    else
    {
      v10 = 0;
      v11 = 0;
    }
    v24 = v10;
    v23 = v11;
    v14 = v3 - 1;
    v15 = sub_2077090(v8, &v26, &v23, &v24, v29);
    v16 = *a2;
    v17 = v14 & v15;
    v18 = (const __m128i **)(v6 + 8LL * v17);
    v19 = *v18;
    if ( *v18 == *a2 )
    {
LABEL_18:
      *a3 = v18;
      return 1;
    }
    else
    {
      if ( v19 != (const __m128i *)-4096LL )
      {
        v20 = 1;
        v21 = nullptr;
        while ( 1 )
        {
          if ( v19 != (const __m128i *)-8192LL || v21 )
            v18 = v21;
          v17 = v14 & (v20 + v17);
          v19 = *(const __m128i **)(v6 + 8LL * v17);
          if ( v19 == v16 )
          {
            v18 = (const __m128i **)(v6 + 8LL * v17);
            goto LABEL_18;
          }
          if ( v19 == (const __m128i *)-4096LL )
            break;
          ++v20;
          v21 = v18;
          v18 = (const __m128i **)(v6 + 8LL * v17);
        }
        if ( !v18 )
          v18 = (const __m128i **)(v6 + 8LL * v17);
      }
      *a3 = v18;
      return 0;
    }
  }
  else
  {
    *a3 = nullptr;
    return 0;
  }
}
