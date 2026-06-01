void __fastcall sub_1667960(__int64 a1, __int32 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // bp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // r9
  __int32 v16; // edi
  __m128i *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  const __m128i *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-78h] BYREF
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+10h] [rbp-68h] BYREF
  __int64 v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29[3]; // [rsp+20h] [rbp-58h] BYREF
  __int32 v30; // [rsp+38h] [rbp-40h]
  __int32 v31; // [rsp+3Ch] [rbp-3Ch]

  v25 = a4;
  v26 = a5;
  if ( a3 )
  {
    v7 = a3;
    if ( (a3 & 2) != 0 )
    {
      v12 = *(unsigned int *)(a1 + 8);
      v13 = *(_QWORD *)a1;
      v14 = *(unsigned int *)(a1 + 12);
      v15 = *(_QWORD *)(a1 + 88);
      v16 = *(_DWORD *)(a1 + 96);
      v17 = (__m128i *)(v13 + 32 * v12);
      if ( v12 >= v14 )
      {
        v22 = v12 + 1;
        v29[0] = a4;
        v23 = (const __m128i *)v29;
        v29[1] = a5;
        v29[2] = v15;
        v30 = v16;
        v31 = a2;
        if ( v14 < v22 )
        {
          v24 = a1 + 16;
          if ( v13 > (unsigned __int64)v29 || v17 <= (__m128i *)v29 )
          {
            sub_2237220(a1, v24, v22, 32);
            v17 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
          }
          else
          {
            sub_2237220(a1, v24, v22, 32);
            v23 = (const __m128i *)((char *)v29 + *(_QWORD *)a1 - v13);
            v17 = (__m128i *)(32LL * *(unsigned int *)(a1 + 8) + *(_QWORD *)a1);
          }
        }
        *v17 = _mm_loadu_si128(v23);
        v17[1] = _mm_loadu_si128(v23 + 1);
        ++*(_DWORD *)(a1 + 8);
      }
      else
      {
        v17->m128i_i64[0] = a4;
        v17->m128i_i64[1] = a5;
        v17[1].m128i_i64[0] = v15;
        v17[1].m128i_i32[2] = v16;
        v17[1].m128i_i32[3] = a2;
        ++*(_DWORD *)(a1 + 8);
      }
    }
    else if ( (a3 & 4) != 0 )
    {
      v10 = *(unsigned int *)(a1 + 8);
      if ( v26 )
      {
        v19 = *(_QWORD *)a1 + 32 * v10;
        v29[0] = *(_QWORD *)a1;
        v28 = v19;
        sub_1665000(&v27, &v28, v29, (__int64)&v25);
        v20 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 != v27 )
        {
          v21 = v27 - 32;
          *(_QWORD *)(a1 + 88) = *(_QWORD *)(v27 - 16);
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(v21 + 24);
          *(_DWORD *)(a1 + 8) = (__int64)(v21 - v20) >> 5;
        }
      }
      else if ( (_DWORD)v10 )
      {
        v11 = *(_QWORD *)a1 + 32LL * (unsigned int)v10 - 32;
        *(_QWORD *)(a1 + 88) = *(_QWORD *)(v11 + 16);
        LODWORD(v11) = *(_DWORD *)(v11 + 24);
        *(_DWORD *)(a1 + 8) = v10 - 1;
        *(_DWORD *)(a1 + 96) = v11;
      }
    }
    if ( (v7 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 88) = a6;
      *(_DWORD *)(a1 + 96) = a2;
    }
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 96) = a2;
    *(_QWORD *)(a1 + 88) = v18;
  }
}
