unsigned __int64 __fastcall sub_1B3990(__m128i *a1, unsigned __int64 a2)
{
  int v2; // eax
  char *v3; // rbx
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  const char *v7; // r13
  __int8 v8; // r12
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __m128i *v23; // r15
  __m128i si128; // xmm0
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdi
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // xmm0_8
  __int64 v36; // r13
  __int64 v37; // xmm1_8
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // r13
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __int64 v43; // rdi
  unsigned __int64 v44; // [rsp+18h] [rbp-E0h]
  __int64 v45; // [rsp+18h] [rbp-E0h]
  __int64 v46; // [rsp+20h] [rbp-D8h]
  __m128i v47; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+38h] [rbp-C0h]
  char *v49; // [rsp+40h] [rbp-B8h]
  __m128i *v50; // [rsp+48h] [rbp-B0h]
  _QWORD v51[2]; // [rsp+50h] [rbp-A8h] BYREF
  _UNKNOWN **v52; // [rsp+60h] [rbp-98h] BYREF
  __int64 v53; // [rsp+68h] [rbp-90h]
  _QWORD v54[2]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v55[24]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v56; // [rsp+98h] [rbp-60h]
  __int64 v57; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-40h]

  v50 = a1;
  v58 = __readfsqword(0x28u);
  sub_1E8790(a1, 0, 0, 0);
  a2 = (unsigned int)a2;
  sub_1E88C0(a1, (unsigned int)a2);
  v51[1] = 0;
  v51[0] = &simpleline_place_t___vtable;
  v52 = &simpleline_place_t___vtable;
  v2 = xmmword_8CAE48;
  v53 = 0;
  if ( !(_QWORD)xmmword_8CAE48 )
  {
    v3 = (char *)&unk_85D020;
    do
    {
      while ( 1 )
      {
        v7 = *((const char **)v3 + 1);
        v8 = *v3;
        memset(v55, 0, sizeof(v55));
        if ( v7 )
        {
          v9 = strlen(v7);
          v10 = v9 + 1;
          v11 = v9;
          a2 = (unsigned __int64)v7;
          *(_QWORD *)v55 = qvector_reserve(v55, 0, v9 + 1, 1);
          *(_QWORD *)&v55[8] = v10;
          memmove(*(void **)v55, v7, v11);
          *(_BYTE *)(*(_QWORD *)v55 + v11) = 0;
        }
        v12 = xmmword_8CAE48;
        v13 = qword_8CAE40;
        LOBYTE(v56) = v8;
        v14 = *((_QWORD *)&xmmword_8CAE48 + 1);
        HIDWORD(v56) = -1;
        v15 = xmmword_8CAE48 + 1;
        if ( (unsigned __int64)v55 < qword_8CAE40 )
          break;
        a2 = qword_8CAE40 + 32LL * *((_QWORD *)&xmmword_8CAE48 + 1);
        if ( (unsigned __int64)v55 >= a2 )
          break;
        a2 = *(_QWORD *)v55;
        v4 = _mm_loadl_epi64((const __m128i *)&v55[8]);
        memset(v55, 0, sizeof(v55));
        v5 = _mm_loadl_epi64((const __m128i *)&v55[16]);
        v44 = a2;
        if ( *((_QWORD *)&xmmword_8CAE48 + 1) < v15 )
        {
          v47.m128i_i64[1] = v5.m128i_i64[0];
          v47.m128i_i64[0] = v4.m128i_i64[0];
          v13 = qvector_reserve(&qword_8CAE40, 0, v15, 32);
          v34 = *((_QWORD *)&xmmword_8CAE48 + 1);
          *((_QWORD *)&xmmword_8CAE48 + 1) = v14;
          v35 = v47.m128i_i64[0];
          v36 = qword_8CAE40;
          a2 = xmmword_8CAE48 - 1;
          v46 = v34;
          v37 = v47.m128i_i64[1];
          if ( (__int64)xmmword_8CAE48 - 1 >= 0 )
          {
            v47.m128i_i8[0] = v8;
            v38 = xmmword_8CAE48 - 1;
            v49 = v3;
            v39 = qword_8CAE40;
            v40 = v13;
            v47.m128i_i64[1] = v35;
            v48 = v37;
            do
            {
              v41 = *(_QWORD *)v39;
              v42 = _mm_loadu_si128((const __m128i *)(v39 + 8));
              *(_QWORD *)v39 = 0;
              *(_QWORD *)(v39 + 16) = 0;
              *(_QWORD *)v40 = v41;
              *(__m128i *)(v40 + 8) = v42;
              *(_BYTE *)(v40 + 24) = *(_BYTE *)(v39 + 24);
              *(_DWORD *)(v40 + 28) = *(_DWORD *)(v39 + 28);
              v43 = *(_QWORD *)v39;
              if ( *(_QWORD *)v39 )
              {
                *(_QWORD *)(v39 + 8) = 0;
                qfree(v43, (const char *)a2);
              }
              v39 += 32;
              v40 += 32;
              v33 = v38-- == 0;
            }
            while ( !v33 );
            v8 = v47.m128i_i8[0];
            v35 = v47.m128i_i64[1];
            v37 = v48;
            v3 = v49;
            v36 = qword_8CAE40;
          }
          v47.m128i_i64[1] = v37;
          v47.m128i_i64[0] = v35;
          qfree(v36, (const char *)a2);
          qword_8CAE40 = v13;
          v5 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
          v4 = _mm_loadl_epi64(&v47);
          *((_QWORD *)&xmmword_8CAE48 + 1) = v46;
          v12 = xmmword_8CAE48;
        }
        v6 = v13 + 32 * v12;
        *(_QWORD *)v6 = v44;
        *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v4, v5);
        *(_BYTE *)(v6 + 24) = v8;
        *(_DWORD *)(v6 + 28) = -1;
        *(_QWORD *)&xmmword_8CAE48 = xmmword_8CAE48 + 1;
        if ( *(_QWORD *)v55 )
        {
          *(_QWORD *)&v55[8] = 0;
          qfree(*(_QWORD *)v55, (const char *)a2);
        }
        v3 += 16;
        if ( v3 == (char *)&unk_85D470 )
          goto LABEL_13;
      }
      if ( *((_QWORD *)&xmmword_8CAE48 + 1) < v15 )
      {
        a2 = 0;
        v13 = qvector_reserve(&qword_8CAE40, 0, v15, 32);
        v26 = *((_QWORD *)&xmmword_8CAE48 + 1);
        v27 = qword_8CAE40;
        *((_QWORD *)&xmmword_8CAE48 + 1) = v14;
        v45 = v26;
        v28 = xmmword_8CAE48 - 1;
        if ( (__int64)xmmword_8CAE48 - 1 >= 0 )
        {
          v29 = v13;
          do
          {
            v30 = *(_QWORD *)v27;
            v31 = _mm_loadu_si128((const __m128i *)(v27 + 8));
            *(_QWORD *)v27 = 0;
            *(_QWORD *)(v27 + 16) = 0;
            *(_QWORD *)v29 = v30;
            *(__m128i *)(v29 + 8) = v31;
            *(_BYTE *)(v29 + 24) = *(_BYTE *)(v27 + 24);
            *(_DWORD *)(v29 + 28) = *(_DWORD *)(v27 + 28);
            v32 = *(_QWORD *)v27;
            if ( *(_QWORD *)v27 )
            {
              *(_QWORD *)(v27 + 8) = 0;
              qfree(v32, nullptr);
            }
            v27 += 32;
            v29 += 32;
            v33 = v28-- == 0;
          }
          while ( !v33 );
          v27 = qword_8CAE40;
        }
        qfree(v27, nullptr);
        qword_8CAE40 = v13;
        *((_QWORD *)&xmmword_8CAE48 + 1) = v45;
        v12 = xmmword_8CAE48;
      }
      v3 += 16;
      v16 = v13 + 32 * v12;
      v17 = *(_QWORD *)v55;
      *(__m128i *)(v16 + 8) = _mm_loadu_si128((const __m128i *)&v55[8]);
      *(_QWORD *)v16 = v17;
      *(_QWORD *)&xmmword_8CAE48 = xmmword_8CAE48 + 1;
      *(_BYTE *)(v16 + 24) = v56;
      *(_DWORD *)(v16 + 28) = HIDWORD(v56);
    }
    while ( v3 != (char *)&unk_85D470 );
LABEL_13:
    v2 = xmmword_8CAE48;
  }
  v18 = (__int64 *)v50;
  HIDWORD(v53) = v2 - 1;
  v50[3].m128i_i64[0] = (__int64)&qword_8CAE40;
  LODWORD(v53) = 1;
  v18[14] = simpleline_place_t__clone(v51);
  v19 = simpleline_place_t__clone(&v52);
  v54[1] = 0;
  v18[15] = v19;
  v54[0] = &simpleline_place_t___vtable;
  v56 = 0xFFFFFFFFLL;
  v57 = 1;
  memset(v55, 0, sizeof(v55));
  v20 = simpleline_place_t__clone(v54);
  v21 = v18[13];
  v22 = v20;
  if ( v21 )
  {
    qfree(v21, (const char *)a2);
    v18[13] = 0;
  }
  v23 = v50;
  si128 = _mm_load_si128((const __m128i *)v55);
  v50[6].m128i_i32[0] = v57;
  v23[4] = si128;
  v23[5] = _mm_load_si128((const __m128i *)&v55[16]);
  if ( v22 )
  {
    v23[6].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    qfree(v22, (const char *)a2);
  }
  return v58 - __readfsqword(0x28u);
}
