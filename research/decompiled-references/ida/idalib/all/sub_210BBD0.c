void __fastcall sub_210BBD0(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // r11
  int v8; // r9d
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdi
  const __m128i *v24; // rsi
  const __m128i *v25; // rsi
  __int64 v26; // rax
  int i; // ebp
  __int64 v28; // r12
  unsigned int v29; // [rsp+0h] [rbp-5Ch]
  __m128i v30; // [rsp+4h] [rbp-58h] BYREF
  __m128i v31; // [rsp+14h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
  {
    v4 = a2[1];
    v5 = *(_QWORD *)(a2[36] + 8LL);
    v6 = *(_DWORD *)(v4 + 1800);
    v7 = *(_QWORD *)(v4 + 1784);
    if ( v6 )
    {
      v8 = v6 - 1;
      v9 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
      v10 = *(_QWORD *)(v7 + 8LL * v9);
      if ( v5 != v10 )
      {
        if ( v10 == -4096 )
          return;
        for ( i = 1; ; ++i )
        {
          v9 = v8 & (i + v9);
          v28 = *(_QWORD *)(v7 + 8LL * v9);
          if ( v5 == v28 )
            break;
          if ( v28 == -4096 )
            return;
        }
      }
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        v26 = *(_QWORD *)(a1 - 8);
        v12 = *(_QWORD *)v26;
        v11 = v26 + 24;
        if ( *(_QWORD *)v26 )
        {
          if ( *(_BYTE *)(v26 + 24) == 95 )
          {
            --v12;
            v11 = v26 + 25;
          }
          goto LABEL_7;
        }
      }
      else
      {
        v11 = 0;
      }
      v12 = 0;
LABEL_7:
      v15 = a3;
      v29 = *(_DWORD *)(v4 + 1780);
      v16 = sub_2239B50(a3, *a4);
      v17 = *a4;
      LODWORD(v15) = sub_223B700(v15, *a4, v16);
      v22 = sub_2108670(v4, v17, v18, v19, v20, v21);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 208LL))(a2, v22, 0);
      v23 = a2[1];
      v30.m128i_i64[0] = v11;
      v30.m128i_i64[1] = v12;
      v31.m128i_i64[0] = __PAIR64__(v15, v29);
      v24 = *(const __m128i **)(v23 + 1832);
      v31.m128i_i64[1] = v22;
      if ( v24 == *(const __m128i **)(v23 + 1840) )
      {
        sub_210BA50(v23 + 1824, v24, &v30);
      }
      else
      {
        v25 = v24 + 2;
        v25[-2] = _mm_load_si128(&v30);
        v25[-1] = _mm_load_si128(&v31);
        *(_QWORD *)(v23 + 1832) = v25;
      }
    }
  }
}
