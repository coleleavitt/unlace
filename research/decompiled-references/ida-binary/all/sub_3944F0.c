void __fastcall sub_3944F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int64 v8; // r12
  signed __int64 v9; // r13
  __int64 v10; // r14
  const char *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // r10
  __int64 v17; // r11
  const char *v18; // rbp
  __int64 v19; // r15
  const char *v20; // rsi
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r10
  char *v27; // r11
  __int64 v28; // rax
  __m128i v29; // xmm2
  __int64 v30; // rbp
  __m128i v31; // xmm3
  __int64 v32; // rbx
  __int64 v33; // r12
  __m128i v34; // xmm1
  __int64 v35; // rdi
  __int64 v36; // rdi
  __m128i v37; // xmm4
  __m128i v38; // xmm5
  __m128i v39; // [rsp+0h] [rbp-78h] BYREF
  __m128i v40; // [rsp+10h] [rbp-68h] BYREF
  __m128i v41; // [rsp+20h] [rbp-58h] BYREF
  const char *v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h]

  v41.m128i_i64[0] = a3;
  v39.m128i_i64[0] = a6;
  if ( a4 )
  {
    v8 = a4;
    v9 = a5;
    if ( a5 )
    {
      if ( a5 + a4 == 2 )
      {
LABEL_9:
        v42 = (const char *)a1;
        v20 = (const char *)a1;
        v40.m128i_i64[0] = a2;
        v21 = ((__int64 (__fastcall *)(__int64, __int64))v39.m128i_i64[0])(a2, a1);
        v26 = v40.m128i_i64[0];
        v27 = (char *)v42;
        if ( v21 )
        {
          v29 = _mm_loadu_si128((const __m128i *)(v42 + 8));
          v30 = *(_QWORD *)v42;
          *(_QWORD *)v42 = 0;
          *(_OWORD *)(v27 + 8) = 0;
          v31 = _mm_loadu_si128((const __m128i *)v27 + 2);
          v32 = *((_QWORD *)v27 + 3);
          v33 = *(_QWORD *)v26;
          v34 = _mm_loadu_si128((const __m128i *)(v26 + 8));
          *(_QWORD *)v26 = 0;
          *(_OWORD *)(v26 + 8) = 0;
          v35 = *(_QWORD *)v27;
          v40 = v29;
          v39 = v31;
          if ( v35 )
          {
            *((_QWORD *)v27 + 1) = 0;
            v43 = v26;
            qfree(v35, v20, v22, v23, v24, v25, *(_OWORD *)&v39, *(_OWORD *)&v40, *(_OWORD *)&v34);
            v26 = v43;
            v34 = _mm_load_si128(&v41);
            v27 = (char *)v42;
          }
          *(_QWORD *)v27 = v33;
          *(__m128i *)(v27 + 8) = v34;
          *((_QWORD *)v27 + 3) = *(_QWORD *)(v26 + 24);
          *((_QWORD *)v27 + 4) = *(_QWORD *)(v26 + 32);
          *((_QWORD *)v27 + 5) = *(_QWORD *)(v26 + 40);
          v36 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 )
          {
            *(_QWORD *)(v26 + 8) = 0;
            v42 = (const char *)v26;
            qfree(v36, v20);
            v26 = (__int64)v42;
          }
          v37 = _mm_load_si128(&v40);
          v38 = _mm_load_si128(&v39);
          *(_QWORD *)v26 = v30;
          *(_QWORD *)(v26 + 24) = v32;
          *(__m128i *)(v26 + 8) = v37;
          *(__m128i *)(v26 + 32) = v38;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v9 >= v8 )
          {
            v42 = (const char *)a2;
            v40.m128i_i64[0] = a1;
            v19 = v9 / 2;
            v18 = (const char *)(a2 + 16 * (v9 / 2 + ((v9 + ((unsigned __int64)v9 >> 63)) & 0xFFFFFFFFFFFFFFFELL)));
            v28 = sub_394460(
                    a1,
                    a2,
                    (__int64)v18,
                    (unsigned __int8 (__fastcall *)(__int64, unsigned __int64))v39.m128i_i64[0]);
            v17 = v40.m128i_i64[0];
            v16 = v42;
            v11 = (const char *)v28;
            v10 = 0xAAAAAAAAAAAAAAABLL * ((v28 - v40.m128i_i64[0]) >> 4);
          }
          else
          {
            v42 = (const char *)a1;
            v40.m128i_i64[0] = a2;
            v10 = v8 / 2;
            v11 = (const char *)(a1 + 16 * (v8 / 2 + ((v8 + ((unsigned __int64)v8 >> 63)) & 0xFFFFFFFFFFFFFFFELL)));
            v12 = sub_3943D0(
                    a2,
                    v41.m128i_i64[0],
                    (__int64)v11,
                    (unsigned __int8 (__fastcall *)(unsigned __int64, __int64))v39.m128i_i64[0]);
            v16 = (const char *)v40.m128i_i64[0];
            v17 = (__int64)v42;
            v18 = (const char *)v12;
            v19 = 0xAAAAAAAAAAAAAAABLL * ((v12 - v40.m128i_i64[0]) >> 4);
          }
          v40.m128i_i64[0] = v17;
          v42 = sub_389FB0(v11, v16, v18, v13, v14, v15);
          v9 -= v19;
          sub_3944F0(v40.m128i_i64[0], v11, v42, v10, v19, v39.m128i_i64[0]);
          v8 -= v10;
          if ( !v8 || !v9 )
            break;
          a1 = (__int64)v42;
          a2 = (__int64)v18;
          if ( v9 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
