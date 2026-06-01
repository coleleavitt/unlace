__int64 __fastcall sub_2129D20(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  const __m128i *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rbp
  void *v20; // rdi
  __int64 v21; // rdi
  __int64 result; // rax
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  const __m128i *v32; // [rsp+40h] [rbp-C8h]
  _QWORD v33[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h]
  __int16 v36; // [rsp+90h] [rbp-78h]
  __m128i v37; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v38; // [rsp+C0h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 != v7 + 112LL * *(unsigned int *)(a1 + 232) )
  {
    v8 = *(const __m128i **)(a1 + 224);
    v32 = (const __m128i *)(v7 + 112LL * *(unsigned int *)(a1 + 232));
    do
    {
      v9 = v8->m128i_i64[1];
      v36 = 261;
      v10 = *(_QWORD *)(a1 + 32);
      v34 = v9;
      v35 = v8[1].m128i_i64[0];
      v11 = v8->m128i_i64[0];
      v12 = _mm_loadu_si128(v8 + 6);
      *(_BYTE *)(a1 + 240) = 1;
      v37 = v12;
      sub_223BFB0(v10, v11, 0, (unsigned int)&v34, (unsigned int)&v37, 1, 0, 0, 1);
      v13 = *(_QWORD *)(a1 + 360);
      v14 = *(_QWORD *)(a1 + 368);
      while ( v13 != v14 )
      {
        v15 = *(__int64 **)(v14 - 8);
        v16 = *(_QWORD *)(a1 + 32);
        v14 -= 8;
        v37.m128i_i64[0] = (__int64)"while in macro instantiation";
        v17 = *v15;
        v38 = 259;
        v33[0] = 0;
        v33[1] = 0;
        sub_223BFB0(v16, v17, 3, (unsigned int)&v37, (unsigned int)v33, 1, 0, 0, 1);
      }
      v8 += 7;
    }
    while ( v32 != v8 );
    v18 = *(_QWORD *)(a1 + 224);
    v19 = v18 + 112LL * *(unsigned int *)(a1 + 232);
    while ( v18 != v19 )
    {
      while ( 1 )
      {
        v19 -= 112;
        v20 = *(void **)(v19 + 8);
        if ( v20 == (void *)(v19 + 32) )
          break;
        free(v20);
        if ( v18 == v19 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v21 = *(_QWORD *)(a1 + 32);
  v37.m128i_i64[0] = a4;
  v37.m128i_i64[1] = a5;
  *(_DWORD *)(a1 + 232) = 0;
  result = sub_223BFB0(v21, a2, 3, a3, (unsigned int)&v37, 1, 0, 0, 1);
  v23 = *(_QWORD *)(a1 + 360);
  if ( v23 != *(_QWORD *)(a1 + 368) )
  {
    v24 = a1;
    v25 = *(_QWORD *)(a1 + 368);
    do
    {
      v26 = *(__int64 **)(v25 - 8);
      v37.m128i_i64[0] = (__int64)"while in macro instantiation";
      v27 = *(_QWORD *)(v24 + 32);
      v38 = 259;
      v28 = *v26;
      v25 -= 8;
      v34 = 0;
      v35 = 0;
      result = sub_223BFB0(v27, v28, 3, (unsigned int)&v37, (unsigned int)&v34, 1, 0, 0, 1);
    }
    while ( v23 != v25 );
  }
  return result;
}
