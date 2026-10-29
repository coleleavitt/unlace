_QWORD *__fastcall sub_21CDCD0(_QWORD *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int16 *v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r15
  size_t *v13; // rbx
  size_t v14; // rbp
  __int64 v15; // rbx
  const void *v17; // rbx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r10
  bool v24; // zf
  unsigned int v25; // eax
  __int64 v26; // r14
  __int64 v27; // [rsp+18h] [rbp-110h]
  size_t *v28; // [rsp+20h] [rbp-108h]
  __int64 v29; // [rsp+20h] [rbp-108h]
  unsigned int v30; // [rsp+2Ch] [rbp-FCh]
  __int64 *v31; // [rsp+30h] [rbp-F8h]
  __int64 v32; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v33; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-C8h]
  __int16 v35; // [rsp+70h] [rbp-B8h]

  v6 = a3;
  v7 = a2->m128i_i64[1];
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(unsigned __int16 **)(v7 + 72);
  v27 = v8;
  if ( !v8 )
    goto LABEL_17;
  v10 = 0;
  v11 = 10;
  v12 = a3;
  while ( 1 )
  {
    v13 = (size_t *)((char *)v9 + v11);
    v14 = *v13;
    if ( !*v13 )
    {
      v33.m128i_i64[0] = (__int64)"symbol name is empty";
      v35 = 259;
      v15 = operator new(0x30u);
      *(_DWORD *)(v15 + 8) = 9;
      *(_QWORD *)v15 = &off_2C74C70;
      sub_2253560(v15 + 16, &v33);
      *a1 = v15;
      return a1;
    }
    v17 = v13 + 2;
    v18 = sub_2244B30(v17, v14);
    v19 = sub_2244CB0(v12 + 24, v17, v14, v18);
    v23 = (__int64 *)(*(_QWORD *)(v12 + 24) + 8LL * v19);
    if ( *v23 )
    {
      if ( *v23 != -8 )
      {
        a2 = (const __m128i *)(*(_QWORD *)(v12 + 24) + 8LL * v19);
        sub_A45C10((__int64 **)&v33, v23, 0);
        goto LABEL_8;
      }
      --*(_DWORD *)(v12 + 40);
    }
    v31 = v23;
    v30 = v19;
    v28 = (size_t *)sub_22300B0(v14 + 9, 8, v19, v20, v21, v22);
    memcpy(v28 + 1, v17, v14);
    *((_BYTE *)v28 + v14 + 8) = 0;
    *v28 = v14;
    *v31 = (__int64)v28;
    ++*(_DWORD *)(v12 + 36);
    v25 = sub_22450D0(v12 + 24, v30);
    sub_A45C10((__int64 **)&v33, (__int64 *)(*(_QWORD *)(v12 + 24) + 8LL * v25), 0);
    v26 = *(_QWORD *)v33.m128i_i64[0] + 8LL;
    v29 = **(_QWORD **)v33.m128i_i64[0];
    sub_2231D80(&v33);
    sub_2231FA0(&v33, v17, v14);
    sub_22321A0(&v33, &v32);
    a3 = v32;
    v33.m128i_i64[1] = v26;
    a2 = *(const __m128i **)(v12 + 80);
    v33.m128i_i64[0] = v32;
    v34 = v29;
    if ( a2 == *(const __m128i **)(v12 + 88) )
    {
      sub_21C7810(v12 + 72, a2, &v33);
    }
    else
    {
      a2 = (const __m128i *)((char *)a2 + 24);
      *(const __m128i *)((char *)&a2[-2] + 8) = _mm_load_si128(&v33);
      a2[-1].m128i_i64[1] = v34;
      *(_QWORD *)(v12 + 80) = a2;
    }
    *(_BYTE *)(v12 + 384) = 0;
LABEL_8:
    if ( !v10 )
      v10 = *v9++;
    --v10;
    v24 = v27-- == 1;
    v9 = (unsigned __int16 *)((char *)v9 + *((_QWORD *)v9 + 1) + *((_QWORD *)v9 + 2) + 24);
    if ( v24 )
      break;
    v11 = v10 == 0 ? 10LL : 8LL;
  }
  v6 = v12;
LABEL_17:
  sub_21C84F0(v6, (__int64)a2, a3, v8, a5, a6);
  *a1 = 0;
  return a1;
}
