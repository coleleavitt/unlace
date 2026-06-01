__int64 __fastcall sub_3CEF20(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r13
  _DWORD **v12; // rcx
  _DWORD *v13; // r14
  __int64 **v15; // rdx
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const char *v28; // rbp
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  __int64 v33; // rbp
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rbx
  _QWORD *v41; // rax
  __m128i v42; // xmm0
  unsigned __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+10h] [rbp-D8h]
  __int64 v46; // [rsp+18h] [rbp-D0h] BYREF
  unsigned __int64 v47; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v48; // [rsp+28h] [rbp-C0h]
  __int64 v49; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+48h] [rbp-A0h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+60h] [rbp-88h] BYREF
  __int64 v52; // [rsp+68h] [rbp-80h]
  __int64 v53; // [rsp+70h] [rbp-78h]
  __int64 v54; // [rsp+78h] [rbp-70h]
  int v55; // [rsp+80h] [rbp-68h]
  __m128i v56; // [rsp+88h] [rbp-60h]
  __m128i v57; // [rsp+98h] [rbp-50h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-40h]

  v3 = *(_DWORD *)a2;
  v58 = __readfsqword(0x28u);
  if ( v3 > 0x2F )
  {
    v15 = *(__int64 ***)(a2 + 8);
    v16 = (__int64 *)(v15 + 1);
    *(_QWORD *)(a2 + 8) = v15 + 1;
    v7 = *v15;
LABEL_10:
    v17 = v16 + 1;
    *(_QWORD *)(a2 + 8) = v16 + 1;
    v9 = *v16;
LABEL_11:
    v12 = (_DWORD **)(v17 + 1);
    *(_QWORD *)(a2 + 8) = v17 + 1;
    v11 = *v17;
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
    v16 = *(__int64 **)(a2 + 8);
    goto LABEL_10;
  }
  v8 = v3 + 16;
  *(_DWORD *)a2 = v8;
  v9 = *(_QWORD *)(v5 + v6);
  if ( (unsigned int)v8 > 0x2F )
  {
    v17 = *(_QWORD **)(a2 + 8);
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
    if ( dword_4ED710 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 112LL))(v11) )
    {
      v52 = *(_QWORD *)(v11 + 8);
      v18 = *(_QWORD *)(v11 + 16);
      v51 = off_4E8410;
      v19 = *(_DWORD *)(v11 + 32);
      v53 = v18;
      v20 = *(_QWORD *)(v11 + 24);
      v55 = v19;
      v54 = v20;
      v56 = _mm_loadu_si128((const __m128i *)(v11 + 40));
      v57 = _mm_loadu_si128((const __m128i *)(v11 + 56));
      v21 = sub_3C9300(a1, v9);
      v23 = (__int64)v21;
      if ( v21 )
      {
        v24 = v21[8];
        if ( v24 )
        {
          if ( (unsigned int)(*(_DWORD *)(v24 + 60) - 1) <= 1 )
          {
            v46 = 0;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, char *, __int64, __int64, __int64, __int64))callui)(
              56,
              v9,
              1,
              &v46,
              (char *)&v46 + 4,
              v22,
              v44.m128i_i64[0],
              v44.m128i_i64[1],
              v45);
            v28 = (const char *)callui(70, v9, 1, v25, v26, v27, v44.m128i_i64[0], v44.m128i_i64[1], v45, v46);
            if ( v28 )
            {
              v29 = (int)v46;
              if ( v29 <= tag_strlen() )
              {
                v47 = 0;
                v44.m128i_i64[0] = (__int64)&v49;
                v48 = 0;
                sub_80DE0((__int64)&v49, v28);
                v30 = v48;
                v31 = v47;
                v32 = v48 + 1;
                if ( (unsigned __int64)&v49 < v47 || v44.m128i_i64[0] >= v47 + 24LL * *((_QWORD *)&v48 + 1) )
                {
                  if ( *((_QWORD *)&v48 + 1) < v32 )
                  {
                    v47 = qvector_reserve();
                    v31 = v47;
                    v30 = v48;
                  }
                  v42 = _mm_loadu_si128(&v50);
                  v43 = v31 + 24 * v30;
                  *(_QWORD *)v43 = v49;
                  *(__m128i *)(v43 + 8) = v42;
                  *(_QWORD *)&v48 = v48 + 1;
                }
                else
                {
                  v33 = v49;
                  v34 = _mm_loadl_epi64(&v50);
                  v49 = 0;
                  v35 = _mm_loadl_epi64((const __m128i *)&v50.m128i_u64[1]);
                  v50 = 0;
                  if ( *((_QWORD *)&v48 + 1) < v32 )
                  {
                    v44.m128i_i64[1] = v35.m128i_i64[0];
                    v44.m128i_i64[0] = v34.m128i_i64[0];
                    v47 = qvector_reserve();
                    v31 = v47;
                    v35 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
                    v30 = v48;
                    v34 = _mm_loadl_epi64(&v44);
                  }
                  v36 = v31 + 24 * v30;
                  *(_QWORD *)v36 = v33;
                  v37 = v49;
                  *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64(v34, v35);
                  *(_QWORD *)&v48 = v48 + 1;
                  if ( v37 )
                  {
                    v50.m128i_i64[0] = 0;
                    qfree();
                  }
                }
                LODWORD(v52) = 0;
                if ( (unsigned __int8)sub_3CA840(v23, (__int64)&v51, v24, v46, &v47) )
                  sub_3CEE30(v23, v7, v13, v24, (__int64)&v51);
                v38 = v47;
                if ( v47 )
                {
                  v39 = v48;
                  if ( (_QWORD)v48 )
                  {
                    v40 = 0;
                    do
                    {
                      v41 = (_QWORD *)(v38 + 24 * v40);
                      if ( *v41 )
                      {
                        v41[1] = 0;
                        qfree();
                        v38 = v47;
                      }
                      ++v40;
                    }
                    while ( v39 != v40 );
                  }
                  *(_QWORD *)&v48 = 0;
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
