__int64 __fastcall sub_7F7900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __m128i *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int128 si128; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rsi
  const __m128i *v20; // rbp
  int v21; // eax
  _BOOL8 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm0
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  _BYTE *v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128i v34; // xmm0
  __int64 v35; // rbx
  __int64 v36; // r12
  __int128 v37; // rax
  __int64 v38; // rdx
  __m128i v42; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v43; // [rsp+60h] [rbp-D8h] BYREF
  int v44; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v45; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+90h] [rbp-A8h]
  __int128 v47; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-88h]
  __int64 v49; // [rsp+C0h] [rbp-78h]
  _BYTE v50[24]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-50h]
  __int64 v52; // [rsp+F0h] [rbp-48h]

  v3 = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)v3 )
  {
    v4 = a2 + 8 * v3;
    v5 = a2;
    while ( 1 )
    {
      v10 = *(_QWORD *)a1;
      v42 = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)*(_QWORD *)(v5 + 24)),
              (__m128i)(unsigned __int64)(*(_QWORD *)(v5 + 24) + 8LL));
      v11 = sub_7214D0(v42.m128i_i64);
      v15 = _mm_load_si128(&v42);
      v44 = v11;
      v45 = v15;
      v16 = v15.m128i_i64[0];
      si128 = (__int128)_mm_load_si128((const __m128i *)&v44);
      v43 = v15;
      v18 = (__int128)_mm_load_si128((const __m128i *)&v45.m128i_u64[1]);
      v49 = v46;
      v47 = si128;
      v48 = v18;
      if ( v16 )
      {
        v19 = v10 + 24;
        v20 = (const __m128i *)v50;
        sub_7DE380(a1, v19, v16, v12, v13, v14, si128, v18, v46);
        v21 = sub_7214D0(v43.m128i_i64);
        v24 = _mm_load_si128(&v43);
        v25 = *(unsigned int *)(a1 + 20);
        *(_DWORD *)v50 = v21;
        v26 = *(unsigned int *)(a1 + 16);
        v27 = *(_QWORD *)(a1 + 8);
        *(__m128i *)&v50[8] = v24;
        v28 = v26 + 1;
        if ( v25 < v26 + 1 )
        {
          if ( (unsigned __int64)v50 < v27 || (unsigned __int64)v50 >= v27 + 40 * v26 )
          {
            sub_25D6060(a1 + 8, a1 + 24, v28, 40);
            v27 = *(_QWORD *)(a1 + 8);
            v26 = *(unsigned int *)(a1 + 16);
          }
          else
          {
            v29 = &v50[-v27];
            sub_25D6060(a1 + 8, a1 + 24, v28, 40);
            v27 = *(_QWORD *)(a1 + 8);
            v26 = *(unsigned int *)(a1 + 16);
            v20 = (const __m128i *)&v29[v27];
          }
        }
        v6 = (__m128i *)(v27 + 40 * v26);
        *v6 = _mm_loadu_si128(v20);
        v7 = v42.m128i_i64[0];
        v6[1] = _mm_loadu_si128(v20 + 1);
        v6[2].m128i_i64[0] = v20[2].m128i_i64[0];
        v8 = v42.m128i_i64[1];
        ++*(_DWORD *)(a1 + 16);
        v9 = sub_7EE840((__int64 *)a1, v7, v8, v25, v22, v23);
        --*(_DWORD *)(a1 + 16);
        if ( !v9 )
          break;
      }
      v5 += 8;
      if ( v4 == v5 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v30 = a2;
    sub_AC4830(v50);
    v34 = _mm_load_si128((const __m128i *)v50);
    v35 = v51;
    v36 = v52;
    *(_QWORD *)&v48 = *(_QWORD *)&v50[16];
    v37 = (__int128)v34;
    v47 = (__int128)v34;
LABEL_11:
    if ( v35 == (_QWORD)v37 )
    {
LABEL_17:
      if ( v36 == *((_QWORD *)&v37 + 1) )
        return 1;
    }
    v38 = BYTE8(v37) & 3;
    if ( (_DWORD)v38 )
      *(_QWORD *)&v37 = sub_ACE280(&v47, v30, v38, v31, v32, v33);
    while ( 1 )
    {
      v30 = *(_QWORD *)v37;
      if ( !(unsigned __int8)sub_7E3C00((__int64 *)a1, *(_QWORD *)v37, a3) )
        break;
      *((_QWORD *)&v37 + 1) = *((_QWORD *)&v47 + 1);
      if ( (BYTE8(v47) & 3) != 0 )
      {
        if ( *((_QWORD *)&v47 + 1) <= 3u )
        {
          v30 = 1;
          sub_ACE0F0(&v47, 1);
        }
        else
        {
          sub_ACE150(&v47);
        }
        v37 = v47;
        goto LABEL_11;
      }
      *(_QWORD *)&v37 = v47 + 8;
      *(_QWORD *)&v47 = v37;
      if ( v35 == (_QWORD)v37 )
        goto LABEL_17;
    }
  }
  return 0;
}

