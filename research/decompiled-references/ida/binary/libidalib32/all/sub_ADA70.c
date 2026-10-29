__int64 __fastcall sub_ADA70(signed int a1, __int64 a2, __int64 a3)
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
  _QWORD *v31; // rdi
  __m128i v32; // [rsp+0h] [rbp-148h] BYREF
  __m128i v33; // [rsp+10h] [rbp-138h] BYREF
  __m128i *v34; // [rsp+20h] [rbp-128h] BYREF
  __int64 v35; // [rsp+28h] [rbp-120h]
  _QWORD *v36; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-110h]
  __int64 v38; // [rsp+40h] [rbp-108h] BYREF
  __m128i v39; // [rsp+48h] [rbp-100h]
  __int64 v40; // [rsp+58h] [rbp-F0h]
  __m128i v41; // [rsp+60h] [rbp-E8h]
  __int64 v42; // [rsp+70h] [rbp-D8h]
  __m128i v43; // [rsp+78h] [rbp-D0h]
  __int64 v44; // [rsp+88h] [rbp-C0h]
  __m128i v45; // [rsp+90h] [rbp-B8h]
  int v46[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v47; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-90h]
  __m128i v49; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-78h]
  __m128i v51; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-60h]
  __m128i v53; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+108h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( a1 >= 16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1)
           + (unsigned int)((qword_250EB0 - qword_250EA0) >> 5)
           + (unsigned int)((qword_250EC0 - qword_250EC8) >> 5) )
    return 0;
  if ( !a2 )
    return 0;
  v4 = sub_C86D0(a2, 0);
  v5 = v4;
  if ( v4 == -1 )
    return 0;
  v6 = sub_A0850((__int64)xmmword_250E60, a1);
  if ( *(_DWORD *)(v6 + 8) != 1 )
    return 0;
  v7 = (unsigned __int8)byte_250FC0;
  if ( !byte_250FC0 )
  {
    v35 = a1;
    v34 = xmmword_250E60;
    if ( a1 < (unsigned __int64)sub_ABF40(&qword_250EC0, &qword_250EA0) )
    {
      v9 = sub_ABF80(&v34, 0);
      v36 = v9;
      v37 = v10;
      if ( v9 )
      {
        if ( v37 < 16 * ((unsigned __int64)(v9[15] == 0) + ((__int64)(v9[15] - v9[11]) >> 3) - 1)
                 + ((__int64)(v9[10] - v9[8]) >> 5)
                 + ((__int64)(v9[12] - v9[13]) >> 5) )
        {
          sub_A6780((__int64)&v38, *(_DWORD *)(dbg + 64LL));
          sub_AC1F0((__int64)v46, &v36);
          v11 = *(_QWORD *)v46;
          *(_QWORD *)v46 = 0;
          v12 = _mm_loadu_si128(&v47);
          v47 = 0;
          if ( v38 )
          {
            v32 = v12;
            v39.m128i_i64[0] = 0;
            qfree();
            v12 = _mm_load_si128(&v32);
          }
          v13 = v40;
          v39 = v12;
          v14 = _mm_load_si128(&v49);
          v38 = v11;
          v32.m128i_i64[0] = v48;
          v48 = 0;
          v33 = v14;
          v49 = 0;
          if ( v40 )
          {
            v15 = v41.m128i_i64[0];
            if ( v41.m128i_i64[0] )
            {
              v16 = 0;
              do
              {
                v17 = v13 + 32 * v16;
                if ( *(int *)v17 >= -1 && *(_QWORD *)(v17 + 8) )
                {
                  *(_QWORD *)(v17 + 16) = 0;
                  qfree();
                  v13 = v40;
                }
                ++v16;
              }
              while ( v15 != v16 );
            }
            v41.m128i_i64[0] = 0;
            qfree();
          }
          v18 = _mm_load_si128(&v33);
          v19 = v50;
          v50 = 0;
          v20 = _mm_loadu_si128(&v51);
          v40 = v32.m128i_i64[0];
          v41 = v18;
          v51 = 0;
          if ( v42 )
          {
            v32 = v20;
            v43.m128i_i64[0] = 0;
            qfree();
            v20 = _mm_load_si128(&v32);
          }
          v21 = v44;
          v42 = v19;
          v22 = _mm_load_si128(&v53);
          v43 = v20;
          v32.m128i_i64[0] = v52;
          v52 = 0;
          v33 = v22;
          v53 = 0;
          if ( v44 )
          {
            v23 = v45.m128i_i64[0];
            v24 = 0;
            if ( v45.m128i_i64[0] )
            {
              do
              {
                v25 = v21 + 32 * v24;
                if ( *(_QWORD *)(v25 + 8) )
                {
                  *(_QWORD *)(v25 + 16) = 0;
                  qfree();
                  v21 = v44;
                }
                ++v24;
              }
              while ( v23 != v24 );
            }
            v45.m128i_i64[0] = 0;
            qfree();
          }
          v26 = _mm_load_si128(&v33);
          v44 = v32.m128i_i64[0];
          v45 = v26;
          sub_9ED80(v46);
          sub_A81C0((__int64)v46, &v38);
          if ( a3 && (v5 & 0x80000000) == 0LL && v5 < (unsigned __int64)xmmword_251378 )
          {
            v30 = qword_251370 + 56 * v5;
            if ( v30 )
              sub_C6270(
                v30,
                a3,
                (unsigned int)v46,
                v27,
                v28,
                v29,
                v32.m128i_i32[0],
                v32.m128i_i32[2],
                v33.m128i_i32[0],
                v33.m128i_i32[2],
                (_DWORD)v34,
                v35,
                (__int64)v36);
          }
          sub_9C140((__int64 *)v46);
          v7 = 1;
          sub_9ED80(&v38);
        }
      }
    }
    return v7;
  }
  v31 = *(_QWORD **)(v6 + 24);
  if ( !v31 )
    return 0;
  return sub_9E590(v31, v5, a3, 1);
}

