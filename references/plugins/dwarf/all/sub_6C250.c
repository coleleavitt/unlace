_QWORD *__fastcall sub_6C250(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // rax
  _QWORD *v6; // r12
  __int64 v8; // rdi
  char *v9; // r13
  __int64 v10; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // xmm2_8
  __int64 v13; // r14
  __int64 v14; // rax
  __m128i v15; // xmm2
  __m128i v16; // xmm1
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  __m128i v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm4
  __int64 v30; // r15
  size_t v31; // rax
  size_t v32; // r8
  void *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128i v36; // [rsp+0h] [rbp-98h] BYREF
  __m128i v37; // [rsp+10h] [rbp-88h] BYREF
  __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  __int64 v40; // [rsp+38h] [rbp-60h] BYREF
  char *s; // [rsp+40h] [rbp-58h] BYREF
  __int128 v42; // [rsp+48h] [rbp-50h]
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v3 = a2[3];
  v43 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v3 + 256);
  s = nullptr;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char **))(v4 + 360))(a2[4], &v40, &s) )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(char *))(v4 + 464))(s);
    sub_1D740((__int64)"ERROR: %s\n", v5);
  }
  v6 = nullptr;
  if ( v40 )
  {
    v8 = a2[3];
    s = nullptr;
    v42 = 0;
    sub_963A0(v8, (unsigned int)(v40 - 1), &s);
    if ( (unsigned __int64)v42 > 1 )
    {
      v10 = operator new(0x30u);
      v9 = s;
      v6 = (_QWORD *)v10;
      if ( (_QWORD)v42 )
      {
        v11 = a2[3];
        v12 = a2[2];
        *(_DWORD *)(v10 + 8) = 1;
        *(_QWORD *)(v10 + 16) = 0;
        v13 = v40;
        *(_DWORD *)(v10 + 40) = 0;
        *(_OWORD *)(v10 + 24) = 0;
        *(_QWORD *)v10 = &off_C8728;
        v36.m128i_i64[1] = v11;
        v36.m128i_i64[0] = v12;
        if ( !v9 )
          goto LABEL_4;
        if ( !*v9 )
          goto LABEL_8;
        v39 = v10 + 16;
        v14 = qvector_reserve(v10 + 16, 0, 1, 48);
        v15 = _mm_loadl_epi64(&v36);
        v16 = _mm_loadl_epi64((const __m128i *)&v36.m128i_u64[1]);
        v17 = v14;
        v18 = v6[2];
        v19 = v6[4];
        v21.m128i_i64[1] = v17;
        v6[4] = 0;
        v20 = v6[3];
        v38 = v19;
        v21.m128i_i64[0] = v18;
        v37 = _mm_unpacklo_epi64(v15, v16);
        v22 = v20 - 1;
        if ( v22 >= 0 )
        {
          do
          {
            *(__m128i *)v21.m128i_i64[1] = _mm_loadu_si128((const __m128i *)v21.m128i_i64[0]);
            v23 = *(_QWORD *)(v21.m128i_i64[0] + 16);
            v24 = _mm_loadu_si128((const __m128i *)(v21.m128i_i64[0] + 24));
            *(_QWORD *)(v21.m128i_i64[0] + 16) = 0;
            *(_QWORD *)(v21.m128i_i64[1] + 16) = v23;
            *(__m128i *)(v21.m128i_i64[1] + 24) = v24;
            v25 = *(_QWORD *)(v21.m128i_i64[0] + 40);
            *(_QWORD *)(v21.m128i_i64[0] + 32) = 0;
            *(_QWORD *)(v21.m128i_i64[1] + 40) = v25;
            v26 = *(_QWORD *)(v21.m128i_i64[0] + 16);
            if ( v26 )
            {
              *(_QWORD *)(v21.m128i_i64[0] + 24) = 0;
              v36 = v21;
              qfree(v26);
              v21 = v36;
            }
            v21.m128i_i64[0] += 48;
            v21.m128i_i64[1] += 48;
          }
          while ( v22-- != 0 );
          v18 = v6[2];
        }
        qfree(v18);
        v28 = v38;
        v6[2] = v17;
        v29 = _mm_load_si128(&v37);
        v6[4] = v28;
        v30 = v17 + 48LL * v6[3];
        *(_OWORD *)v30 = 0;
        *(_QWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 40) = -1;
        *(_OWORD *)(v30 + 24) = 0;
        ++v6[3];
        *(__m128i *)v30 = v29;
        v31 = strlen(v9);
        v32 = v31;
        if ( v31 )
        {
          v33 = *(void **)(v30 + 16);
          v34 = v31 + 1;
          if ( *(_QWORD *)(v30 + 32) < v31 + 1 )
          {
            v36.m128i_i64[1] = v31;
            v36.m128i_i64[0] = v31 + 1;
            v35 = qvector_reserve(v30 + 16, v33, v34, 1);
            v32 = v36.m128i_u64[1];
            v34 = v36.m128i_i64[0];
            *(_QWORD *)(v30 + 16) = v35;
            v33 = (void *)v35;
          }
          *(_QWORD *)(v30 + 24) = v34;
          v36.m128i_i64[0] = v32;
          memmove(v33, v9, v32);
          *(_BYTE *)(*(_QWORD *)(v30 + 16) + v36.m128i_i64[0]) = 0;
        }
        else
        {
          *(_QWORD *)(v30 + 24) = 0;
        }
        *(_QWORD *)(v30 + 40) = v13;
        v9 = s;
      }
      else
      {
        *(_DWORD *)(v10 + 8) = 1;
        *(_QWORD *)(v10 + 16) = 0;
        *(_DWORD *)(v10 + 40) = 0;
        *(_OWORD *)(v10 + 24) = 0;
        *(_QWORD *)v10 = &off_C8728;
      }
    }
    else
    {
      v9 = s;
      v6 = nullptr;
    }
    if ( !v9 )
      goto LABEL_4;
LABEL_8:
    *(_QWORD *)&v42 = 0;
    qfree(v9);
  }
LABEL_4:
  *a1 = v6;
  return a1;
}
