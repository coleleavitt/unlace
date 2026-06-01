__int64 __fastcall sub_AE0B0(signed int a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // r12d
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // xmm2
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __m128i v18; // xmm3
  __int64 v19; // r14
  __m128i v20; // xmm1
  __int64 v21; // rcx
  __m128i v22; // xmm4
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  __m128i v26; // xmm5
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rax
  _QWORD *v35; // rdi
  __m128i v36; // [rsp+0h] [rbp-148h] BYREF
  __m128i v37; // [rsp+10h] [rbp-138h] BYREF
  __m128i *v38; // [rsp+20h] [rbp-128h] BYREF
  __int64 v39; // [rsp+28h] [rbp-120h]
  _QWORD *v40; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-110h]
  __int64 v42; // [rsp+40h] [rbp-108h] BYREF
  __m128i v43; // [rsp+48h] [rbp-100h]
  __int64 v44; // [rsp+58h] [rbp-F0h]
  __m128i v45; // [rsp+60h] [rbp-E8h]
  __int64 v46; // [rsp+70h] [rbp-D8h]
  __m128i v47; // [rsp+78h] [rbp-D0h]
  __int64 v48; // [rsp+88h] [rbp-C0h]
  __m128i v49; // [rsp+90h] [rbp-B8h]
  int v50[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v51; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-90h]
  __m128i v53; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-78h]
  __m128i v55; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-60h]
  __m128i v57; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+108h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( a1 >= 16 * ((qword_251F98 == 0) + (unsigned int)((qword_251F98 - qword_251F78) >> 3) - 1)
           + (unsigned int)((qword_251F70 - qword_251F60) >> 5)
           + (unsigned int)((qword_251F80 - qword_251F88) >> 5) )
    return 0;
  if ( !a2 )
    return 0;
  v4 = sub_C9B90(a2, 0);
  v5 = v4;
  if ( v4 == -1 )
    return 0;
  v6 = sub_A0A20((__int64)xmmword_251F20, a1);
  if ( *(_DWORD *)(v6 + 8) != 1 )
    return 0;
  v7 = (unsigned __int8)byte_252088;
  if ( !byte_252088 )
  {
    v39 = a1;
    v38 = xmmword_251F20;
    if ( a1 < (unsigned __int64)sub_AC580(&qword_251F80, &qword_251F60) )
    {
      v9 = sub_AC5C0(&v38, 0);
      v40 = v9;
      v41 = v10;
      if ( v9 )
      {
        if ( v41 < 16 * ((unsigned __int64)(v9[15] == 0) + ((__int64)(v9[15] - v9[11]) >> 3) - 1)
                 + ((__int64)(v9[10] - v9[8]) >> 5)
                 + ((__int64)(v9[12] - v9[13]) >> 5) )
        {
          sub_A6C80((__int64)&v42, *(_DWORD *)(dbg + 64LL));
          sub_AC830((__int64)v50, &v40);
          v11 = *(_QWORD *)v50;
          *(_QWORD *)v50 = 0;
          v12 = _mm_loadu_si128(&v51);
          v51 = 0;
          if ( v42 )
          {
            v36 = v12;
            v43.m128i_i64[0] = 0;
            qfree();
            v12 = _mm_load_si128(&v36);
          }
          v13 = v44;
          v43 = v12;
          v14 = _mm_load_si128(&v53);
          v42 = v11;
          v36.m128i_i64[0] = v52;
          v52 = 0;
          v37 = v14;
          v53 = 0;
          if ( v44 )
          {
            v15 = v45.m128i_i64[0];
            if ( v45.m128i_i64[0] )
            {
              v16 = 0;
              do
              {
                v17 = v13 + 32 * v16;
                if ( *(int *)v17 >= -1 && *(_QWORD *)(v17 + 8) )
                {
                  *(_QWORD *)(v17 + 16) = 0;
                  qfree();
                  v13 = v44;
                }
                ++v16;
              }
              while ( v15 != v16 );
            }
            v45.m128i_i64[0] = 0;
            qfree();
          }
          v18 = _mm_load_si128(&v37);
          v19 = v54;
          v54 = 0;
          v20 = _mm_loadu_si128(&v55);
          v44 = v36.m128i_i64[0];
          v45 = v18;
          v55 = 0;
          if ( v46 )
          {
            v36 = v20;
            v47.m128i_i64[0] = 0;
            qfree();
            v20 = _mm_load_si128(&v36);
          }
          v21 = v48;
          v46 = v19;
          v22 = _mm_load_si128(&v57);
          v47 = v20;
          v36.m128i_i64[0] = v56;
          v56 = 0;
          v37 = v22;
          v57 = 0;
          if ( v48 )
          {
            v23 = v49.m128i_i64[0];
            v24 = 0;
            if ( v49.m128i_i64[0] )
            {
              do
              {
                v25 = v21 + 32 * v24;
                if ( *(_QWORD *)(v25 + 8) )
                {
                  *(_QWORD *)(v25 + 16) = 0;
                  qfree();
                  v21 = v48;
                }
                ++v24;
              }
              while ( v23 != v24 );
            }
            v49.m128i_i64[0] = 0;
            qfree();
          }
          v26 = _mm_load_si128(&v37);
          v48 = v36.m128i_i64[0];
          v49 = v26;
          sub_9EEC0(v50);
          sub_A8780((__int64)v50, &v42);
          if ( a3 )
          {
            if ( (v5 & 0x80000000) == 0LL && v5 < (unsigned __int64)xmmword_2524F8 )
            {
              v30 = qword_2524F0 + 56 * v5;
              if ( v30 )
                sub_C7700(
                  v30,
                  a3,
                  (unsigned int)v50,
                  v27,
                  v28,
                  v29,
                  v36.m128i_i32[0],
                  v36.m128i_i32[2],
                  v37.m128i_i32[0],
                  v37.m128i_i32[2],
                  (_DWORD)v38,
                  v39,
                  (__int64)v40);
            }
          }
          v31 = *(_QWORD *)v50;
          if ( *(_QWORD *)v50 )
          {
            v32 = v51.m128i_i64[0];
            if ( v51.m128i_i64[0] )
            {
              v33 = 0;
              do
              {
                v34 = v31 + 32 * v33;
                if ( *(int *)v34 >= -1 )
                {
                  if ( *(_QWORD *)(v34 + 8) )
                  {
                    *(_QWORD *)(v34 + 16) = 0;
                    qfree();
                    v31 = *(_QWORD *)v50;
                  }
                }
                ++v33;
              }
              while ( v32 != v33 );
            }
            v51.m128i_i64[0] = 0;
            qfree();
          }
          v7 = 1;
          sub_9EEC0(&v42);
        }
      }
    }
    return v7;
  }
  v35 = *(_QWORD **)(v6 + 24);
  if ( !v35 )
    return 0;
  return sub_9E6D0(v35, v5, a3, 1);
}

