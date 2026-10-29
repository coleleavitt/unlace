unsigned __int64 __fastcall sub_ADDE0(_QWORD *a1, int a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 i; // rbx
  __int64 v14; // rax
  __m128i v15; // xmm3
  __int64 v16; // rbx
  __m128i v17; // xmm1
  __int64 v18; // r13
  __m128i v19; // xmm4
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 j; // rbx
  __int64 v23; // rax
  __m128i v24; // xmm5
  __m128i v25; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD v26[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD *v27; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-A0h]
  int v29[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v30; // [rsp+38h] [rbp-90h] BYREF
  __int64 v31; // [rsp+48h] [rbp-80h]
  __m128i v32; // [rsp+50h] [rbp-78h] BYREF
  __int64 v33; // [rsp+60h] [rbp-68h]
  __m128i v34; // [rsp+68h] [rbp-60h] BYREF
  __int64 v35; // [rsp+78h] [rbp-50h]
  __m128i v36; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  if ( a2 < 16 * ((unsigned __int64)(a1[15] == 0) + ((__int64)(a1[15] - a1[11]) >> 3) - 1)
          + ((__int64)(a1[10] - a1[8]) >> 5)
          + ((__int64)(a1[12] - a1[13]) >> 5) )
  {
    v26[0] = a1;
    v26[1] = a2;
    if ( a1 )
    {
      v2 = sub_ACB20(v26);
      v27 = v2;
      v28 = v3;
      if ( v2 )
      {
        v4 = sub_AC580(v2 + 12, v2 + 8);
        if ( v28 < v4 )
        {
          if ( sub_A19D0((__int64)&v27)[3] )
          {
            sub_AC830((__int64)v29, &v27);
            v6 = (_QWORD *)sub_A19D0((__int64)&v27)[3];
            v7 = *(_QWORD *)v29;
            *(_QWORD *)v29 = 0;
            v8 = _mm_loadu_si128(&v30);
            v30 = 0;
            if ( *v6 )
            {
              v6[1] = 0;
              v25 = v8;
              qfree();
              v8 = _mm_load_si128(&v25);
            }
            *(__m128i *)(v6 + 1) = v8;
            *v6 = v7;
            v9 = _mm_load_si128(&v32);
            v10 = v31;
            v32 = 0;
            v31 = 0;
            v11 = v6[3];
            v25 = v9;
            if ( v11 )
            {
              v12 = v6[4];
              if ( v12 )
              {
                for ( i = 0; i != v12; ++i )
                {
                  v14 = v11 + 32 * i;
                  if ( *(int *)v14 >= -1 && *(_QWORD *)(v14 + 8) )
                  {
                    *(_QWORD *)(v14 + 16) = 0;
                    qfree();
                    v11 = v6[3];
                  }
                }
              }
              v6[4] = 0;
              qfree();
            }
            v15 = _mm_load_si128(&v25);
            v6[3] = v10;
            *((__m128i *)v6 + 2) = v15;
            v16 = v33;
            v17 = _mm_loadu_si128(&v34);
            v33 = 0;
            v34 = 0;
            if ( v6[6] )
            {
              v6[7] = 0;
              v25 = v17;
              qfree();
              v17 = _mm_load_si128(&v25);
            }
            v6[6] = v16;
            *(__m128i *)(v6 + 7) = v17;
            v18 = v35;
            v19 = _mm_load_si128(&v36);
            v35 = 0;
            v36 = 0;
            v20 = v6[9];
            v25 = v19;
            if ( v20 )
            {
              v21 = v6[10];
              if ( v21 )
              {
                for ( j = 0; j != v21; ++j )
                {
                  v23 = v20 + 32 * j;
                  if ( *(_QWORD *)(v23 + 8) )
                  {
                    *(_QWORD *)(v23 + 16) = 0;
                    qfree();
                    v20 = v6[9];
                  }
                }
              }
              v6[10] = 0;
              qfree();
            }
            v24 = _mm_load_si128(&v25);
            v6[9] = v18;
            *((__m128i *)v6 + 5) = v24;
            sub_9EEC0(v29);
          }
        }
      }
    }
  }
  return v37 - __readfsqword(0x28u);
}

