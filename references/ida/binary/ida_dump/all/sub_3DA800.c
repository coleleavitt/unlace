__int64 __fastcall sub_3DA800(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r14
  _DWORD **v12; // rcx
  _DWORD *v13; // r12
  __int64 v14; // r9
  __int64 **v16; // rdx
  __int64 *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  _QWORD **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD **v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v31; // r13
  __int64 v32; // r15
  __int64 v33; // rax
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  __int64 v36; // r13
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rbx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rax
  __m128i v47; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+10h] [rbp-D8h]
  __int64 v49; // [rsp+18h] [rbp-D0h] BYREF
  unsigned __int64 v50; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+28h] [rbp-C0h]
  __int64 v52; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v53; // [rsp+48h] [rbp-A0h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+60h] [rbp-88h] BYREF
  __int64 v55; // [rsp+68h] [rbp-80h]
  __int64 v56; // [rsp+70h] [rbp-78h]
  __int64 v57; // [rsp+78h] [rbp-70h]
  int v58; // [rsp+80h] [rbp-68h]
  __m128i v59; // [rsp+88h] [rbp-60h]
  __m128i v60; // [rsp+98h] [rbp-50h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-40h]

  v3 = *(_DWORD *)a2;
  v61 = __readfsqword(0x28u);
  if ( v3 > 0x2F )
  {
    v16 = *(__int64 ***)(a2 + 8);
    v17 = (__int64 *)(v16 + 1);
    *(_QWORD *)(a2 + 8) = v16 + 1;
    v7 = *v16;
LABEL_10:
    v18 = v17 + 1;
    *(_QWORD *)(a2 + 8) = v17 + 1;
    v9 = *v17;
LABEL_11:
    v12 = (_DWORD **)(v18 + 1);
    *(_QWORD *)(a2 + 8) = v18 + 1;
    v11 = *v18;
LABEL_12:
    *(_QWORD *)(a2 + 8) = v12 + 1;
    goto LABEL_6;
  }
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v3 + 8;
  *(_DWORD *)a2 = v6;
  v7 = *(__int64 **)(v5 + v3);
  if ( (unsigned int)v6 > 0x2F )
  {
    v17 = *(__int64 **)(a2 + 8);
    goto LABEL_10;
  }
  v8 = v3 + 16;
  *(_DWORD *)a2 = v8;
  v9 = *(_QWORD *)(v5 + v6);
  if ( (unsigned int)v8 > 0x2F )
  {
    v18 = *(_QWORD **)(a2 + 8);
    goto LABEL_11;
  }
  v10 = v3 + 24;
  *(_DWORD *)a2 = v10;
  v11 = *(_QWORD *)(v5 + v8);
  if ( (unsigned int)v10 > 0x2F )
  {
    v12 = *(_DWORD ***)(a2 + 8);
    goto LABEL_12;
  }
  v12 = (_DWORD **)(v10 + v5);
  *(_DWORD *)a2 = v3 + 32;
LABEL_6:
  if ( v11 )
  {
    v13 = *v12;
    if ( dword_4EEA08 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 112LL))(v11) )
    {
      v19 = *(_QWORD *)(v11 + 8);
      v54 = off_4E90B0;
      v20 = *(_DWORD *)(v11 + 32);
      v55 = v19;
      v21 = *(_QWORD *)(v11 + 16);
      v58 = v20;
      v22 = *(_QWORD ***)(a1 + 2088);
      v56 = v21;
      v23 = *(_QWORD *)(v11 + 24);
      v60 = _mm_loadu_si128((const __m128i *)(v11 + 56));
      v57 = v23;
      v24 = *(_QWORD *)(a1 + 2096);
      v59 = _mm_loadu_si128((const __m128i *)(v11 + 40));
      v25 = &v22[v24];
      if ( v22 != v25 )
      {
        while ( 1 )
        {
          v26 = *v22;
          if ( *v22 )
          {
            if ( *v26 == v9 )
              break;
          }
          if ( v25 == ++v22 )
            return 0;
        }
        v27 = v26[8];
        if ( v27 )
        {
          if ( (unsigned int)(*(_DWORD *)(v27 + 60) - 1) <= 1 )
          {
            v49 = 0;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, char *, __int64, __int64, __int64, __int64))callui)(
              56,
              v9,
              1,
              &v49,
              (char *)&v49 + 4,
              v14,
              v47.m128i_i64[0],
              v47.m128i_i64[1],
              v48);
            v31 = (const char *)callui(70, v9, 1, v28, v29, v30, v47.m128i_i64[0], v47.m128i_i64[1], v48, v49);
            if ( v31 )
            {
              v32 = (int)v49;
              if ( v32 <= tag_strlen() )
              {
                v50 = 0;
                v47.m128i_i64[0] = (__int64)&v52;
                v51 = 0;
                sub_81980((__int64)&v52, v31);
                v33 = v51;
                v34 = v50;
                v35 = v51 + 1;
                if ( (unsigned __int64)&v52 < v50 || v47.m128i_i64[0] >= v50 + 24LL * *((_QWORD *)&v51 + 1) )
                {
                  if ( *((_QWORD *)&v51 + 1) < v35 )
                  {
                    v50 = qvector_reserve();
                    v34 = v50;
                    v33 = v51;
                  }
                  v39 = _mm_loadu_si128(&v53);
                  v46 = v34 + 24 * v33;
                  *(_QWORD *)v46 = v52;
                  *(__m128i *)(v46 + 8) = v39;
                  *(_QWORD *)&v51 = v51 + 1;
                }
                else
                {
                  v36 = v52;
                  v37 = _mm_loadl_epi64(&v53);
                  v52 = 0;
                  v38 = _mm_loadl_epi64((const __m128i *)&v53.m128i_u64[1]);
                  v53 = 0;
                  if ( *((_QWORD *)&v51 + 1) < v35 )
                  {
                    v47.m128i_i64[1] = v38.m128i_i64[0];
                    v47.m128i_i64[0] = v37.m128i_i64[0];
                    v50 = qvector_reserve();
                    v34 = v50;
                    v38 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
                    v33 = v51;
                    v37 = _mm_loadl_epi64(&v47);
                  }
                  v39 = _mm_unpacklo_epi64(v37, v38);
                  v40 = v34 + 24 * v33;
                  *(_QWORD *)v40 = v36;
                  v41 = v52;
                  *(__m128i *)(v40 + 8) = v39;
                  *(_QWORD *)&v51 = v51 + 1;
                  if ( v41 )
                  {
                    v53.m128i_i64[0] = 0;
                    qfree();
                  }
                }
                LODWORD(v55) = 0;
                if ( (unsigned __int8)sub_3D4B90((__int64)v26, (__int64)&v54, v27, v49, &v50, *(double *)v39.m128i_i64) )
                  sub_3DA6A0((__int64)v26, v7, v13, (__int64 *)v27, (__int64)&v54, *(double *)v39.m128i_i64);
                v42 = v50;
                if ( v50 )
                {
                  v43 = v51;
                  if ( (_QWORD)v51 )
                  {
                    v44 = 0;
                    do
                    {
                      v45 = (_QWORD *)(v42 + 24 * v44);
                      if ( *v45 )
                      {
                        v45[1] = 0;
                        qfree();
                        v42 = v50;
                      }
                      ++v44;
                    }
                    while ( v43 != v44 );
                  }
                  *(_QWORD *)&v51 = 0;
                  qfree();
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
