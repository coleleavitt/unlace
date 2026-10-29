__int64 __fastcall sub_3F1DF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  _DWORD *v4; // rdx
  int v5; // esi
  __m128i v7; // xmm1
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // xmm1_8
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r12
  __m128i v21; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  unsigned int *v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  unsigned int *v25; // [rsp+28h] [rbp-50h]
  __m128i v26; // [rsp+30h] [rbp-48h] BYREF

  result = a2;
  v3 = *(_QWORD *)(a2 + 32);
  if ( !*(_WORD *)(v3 + 4) )
  {
    v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      if ( v5 == *v4 && !v4[1] )
      {
        v7 = _mm_loadl_epi64((const __m128i *)(result + 40));
        while ( 1 )
        {
          if ( *v4 != v5 || v4[1] )
          {
LABEL_8:
            v8 = *(_QWORD *)(a1 + 16);
            v26 = _mm_unpacklo_epi64((__m128i)v3, v7);
            v9 = sub_15DCAD0(v8, (int)&v26, 0);
            v24 = v9;
            if ( v9 )
              ++*(_DWORD *)(v9 + 8);
            v21.m128i_i64[0] = v9;
            sub_3E6950((unsigned int **)(a1 + 56), &v24);
            return v21.m128i_i64[0];
          }
          v10 = *(unsigned int **)a1;
          v11 = *(_QWORD *)(v3 + 40);
          v22 = 0;
          v23 = v10;
          if ( v7.m128i_i64[0] == v11 )
            break;
          v12 = *(_QWORD *)(a1 + 80);
          v24 = 0;
          v25 = v10;
          v26.m128i_i64[0] = 0;
          v26.m128i_i64[1] = (__int64)v10;
          v21.m128i_i64[0] = v7.m128i_i64[0];
          sub_3FA320(a1 + 88, v12, v11, &v24, 1);
          v13 = *(_QWORD *)(a1 + 80);
          v21.m128i_i64[1] = v21.m128i_i64[0];
          sub_3FA320(a1 + 88, v13, v21.m128i_i64[0], &v26, 1);
          v14 = v26.m128i_i64[0];
          v21.m128i_i64[0] = v24;
          sub_3E5D20(v26.m128i_i64[0], v26.m128i_i64[1]);
          sub_3E5D20(v24, (__int64)v25);
          v15 = *(unsigned int **)a1;
          if ( v21.m128i_i64[0] == v14 )
            break;
          v21.m128i_i64[0] = *(_QWORD *)a1;
          sub_15E1B70((int)v15);
          v16 = sub_15E1A70(v21.m128i_i32[0]);
          v17 = v21.m128i_i64[1];
          v18 = v16;
          if ( v16 )
            ++*(_DWORD *)(v16 + 8);
          v21.m128i_i64[0] = v17;
          sub_3E5D20(v22, (__int64)v23);
          v22 = v18;
          sub_3F1D80((unsigned int **)a1, &v22);
          v3 = *(_QWORD *)(v3 + 32);
          sub_3E5D20(v22, (__int64)v23);
          v5 = *(_DWORD *)(a1 + 8);
          v7 = _mm_loadl_epi64(&v21);
          if ( !*(_WORD *)(v3 + 4) )
          {
            v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
            if ( v4 )
              continue;
          }
          goto LABEL_8;
        }
        v19 = sub_15E1B70(*(_QWORD *)a1);
        v20 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        sub_3E5D20(v22, (__int64)v23);
        v22 = v20;
        sub_3F1D80((unsigned int **)a1, &v22);
        v21.m128i_i64[0] = *(_QWORD *)(v3 + 48);
        sub_3E5D20(v22, (__int64)v23);
        return v21.m128i_i64[0];
      }
    }
  }
  return result;
}

