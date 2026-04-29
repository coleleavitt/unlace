__int64 __fastcall sub_FEC0(__int64 a1, __m128i *a2, __int64 a3, int a4, __int64 a5, _BYTE *a6)
{
  bool v7; // zf
  __int64 v9; // r14
  const __m128i *v10; // r12
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // r12
  __m128i v14; // xmm0
  __int64 v15; // r14
  __int64 v16; // r12
  char *v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // r13
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r13
  __m128i v36; // xmm0
  unsigned __int64 v37; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-C8h]
  __m128i *v41; // [rsp+8h] [rbp-C0h]
  int v43; // [rsp+1Ch] [rbp-ACh]
  unsigned __int64 v45; // [rsp+28h] [rbp-A0h]
  _OWORD v46[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v47; // [rsp+50h] [rbp-78h] BYREF
  int v48; // [rsp+60h] [rbp-68h]
  int v49; // [rsp+64h] [rbp-64h]
  int v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+70h] [rbp-58h] BYREF
  __m128i v52; // [rsp+78h] [rbp-50h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v7 = *(_BYTE *)(a3 + 440) == 0;
  v41 = a2;
  v43 = a5;
  v53 = __readfsqword(0x28u);
  if ( !v7 )
  {
    v37 = *(_QWORD *)(a3 + 256);
    if ( v37 )
      goto LABEL_3;
    goto LABEL_13;
  }
  sub_FC60(a3);
  v37 = *(_QWORD *)(a3 + 256);
  if ( !v37 )
  {
LABEL_11:
    if ( !*(_BYTE *)(a3 + 440) )
      sub_FC60(a3);
LABEL_13:
    v15 = *(_QWORD *)(a3 + 232);
    v16 = 0;
    if ( !v15 )
      return 1;
    while ( 1 )
    {
      if ( *a6 && (unsigned __int8)callui(27, a2, &callui) )
        return 0;
      v21 = *(_QWORD *)(a3 + 224) + 72 * v16;
      v20 = *(_QWORD *)(v21 + 32);
      if ( *(_DWORD *)(v21 + 64) )
      {
        if ( v20 )
        {
          if ( !*(_QWORD *)(v21 + 40) )
          {
            v39 = *(_QWORD *)(v21 + 32);
            v22 = strcmp((const char *)(v21 + 8), "__TEXT");
            v20 = v39;
            if ( !v22 )
            {
              v24 = *(_QWORD *)(a3 + 256);
              if ( v24 )
              {
                v25 = *(_QWORD *)(a3 + 248);
                v26 = -1;
                v27 = (unsigned __int64 *)(v25 + 32);
                v28 = v25 + 80 * v24 + 32;
                do
                {
                  if ( v27[1] )
                  {
                    v29 = *v27;
                    v30 = *(_QWORD *)(v21 + 24);
                    if ( v30 < *v27 )
                    {
                      v31 = v39 + v30;
                      v23 = *v27;
                      if ( v26 <= v29 )
                        v23 = v26;
                      if ( v29 < v31 )
                        v26 = v23;
                    }
                  }
                  v27 += 10;
                }
                while ( (unsigned __int64 *)v28 != v27 );
                if ( v26 != -1 )
                {
                  v51 = 0;
                  v52 = 0;
                  v32 = *(_QWORD *)(v21 + 24);
                  v49 = 0;
                  v48 = a4;
                  v47 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)(v26 - v32));
                  v50 = v43;
                  v33 = qvector_reserve(&v51, 0, 7, 1, v39, v23);
                  v51 = v33;
                  v52.m128i_i64[0] = 7;
                  *(_DWORD *)v33 = 1145128264;
                  *(_WORD *)(v33 + 4) = 21061;
                  *(_BYTE *)(v51 + 6) = 0;
                  v34 = v47.m128i_i64[1];
                  if ( v47.m128i_i64[1] )
                  {
                    sub_6130(a1, (__int64)&v47);
                    v34 = v47.m128i_i64[1];
                  }
                  v46[0] = _mm_unpacklo_epi64(
                             (__m128i)v47.m128i_u64[0],
                             (__m128i)(unsigned __int64)(v47.m128i_i64[0] + v34));
                  rangeset_t_sub(v41, v46);
                  if ( v51 )
                  {
                    v52.m128i_i64[0] = 0;
                    qfree(v51);
                  }
                  v20 = *(_QWORD *)(v21 + 32);
                }
              }
            }
          }
        }
      }
      else if ( v20 )
      {
        v38 = *(_QWORD *)(v21 + 32);
        v18 = strstr((const char *)(v21 + 8), "__LINKEDIT");
        v20 = v38;
        if ( !v18 )
        {
          v45 = v38;
          v40 = *(_QWORD *)(v21 + 24);
          v49 = 0;
          v48 = a4;
          memset(v46, 0, 24);
          v50 = v43;
          v52 = 0;
          v47 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v20);
          *(_QWORD *)&v46[0] = qvector_reserve(v46, 0, 17, 1, v20, v19);
          *((_QWORD *)&v46[0] + 1) = 17;
          **(__m128i **)&v46[0] = _mm_loadu_si128((const __m128i *)(v21 + 8));
          v35 = *(_QWORD *)&v46[0];
          *(_BYTE *)(*(_QWORD *)&v46[0] + 16LL) = 0;
          v36 = _mm_loadu_si128((const __m128i *)((char *)v46 + 8));
          v51 = v35;
          v52 = v36;
          sub_6130(a1, (__int64)&v47);
          a2 = (__m128i *)v46;
          v46[0] = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(v40 + v45));
          rangeset_t_sub(v41, v46);
          if ( v35 )
            qfree(v35);
          goto LABEL_19;
        }
      }
      a2 = &v47;
      v47 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)(v21 + 24), (__m128i)(*(_QWORD *)(v21 + 24) + v20));
      rangeset_t_sub(v41, &v47);
LABEL_19:
      if ( ++v16 == v15 )
        return 1;
    }
  }
LABEL_3:
  v9 = 0;
  while ( !*a6 || !(unsigned __int8)callui(27, a2, &callui) )
  {
    v10 = (const __m128i *)(*(_QWORD *)(a3 + 248) + 80 * v9);
    v11 = v10[2].m128i_i64[0];
    if ( v11 )
    {
      v12 = v10[2].m128i_i64[1];
      if ( v12 )
      {
        v48 = a4;
        v49 = 0;
        v50 = v43;
        memset(v46, 0, 24);
        v52 = 0;
        v47 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v12);
        *(_QWORD *)&v46[0] = qvector_reserve(v46, 0, 17, 1, a5, a6);
        *((_QWORD *)&v46[0] + 1) = 17;
        **(__m128i **)&v46[0] = _mm_loadu_si128(v10);
        v13 = *(_QWORD *)&v46[0];
        *(_BYTE *)(*(_QWORD *)&v46[0] + 16LL) = 0;
        v14 = _mm_loadu_si128((const __m128i *)((char *)v46 + 8));
        v51 = v13;
        v52 = v14;
        sub_6130(a1, (__int64)&v47);
        a2 = (__m128i *)v46;
        v46[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)(v11 + v12));
        rangeset_t_sub(v41, v46);
        if ( v13 )
          qfree(v13);
      }
    }
    if ( ++v9 >= v37 )
      goto LABEL_11;
  }
  return 0;
}
