__int64 __fastcall sub_759F0(_QWORD *a1, const __m128i *a2)
{
  _QWORD *v2; // r14
  __int64 *v3; // r15
  __int16 v6; // ax
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  char v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rdi
  bool v29; // cf
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  const __m128i *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rax
  const __m128i *v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 *i; // [rsp+0h] [rbp-1A8h]
  __int64 *v40; // [rsp+0h] [rbp-1A8h]
  __int64 v41; // [rsp+0h] [rbp-1A8h]
  __int64 v42; // [rsp+0h] [rbp-1A8h]
  _QWORD *v43; // [rsp+8h] [rbp-1A0h]
  __int64 v44; // [rsp+10h] [rbp-198h]
  __int64 v45; // [rsp+10h] [rbp-198h]
  __int64 v46; // [rsp+18h] [rbp-190h]
  int v47; // [rsp+2Ch] [rbp-17Ch] BYREF
  const __m128i *v48; // [rsp+30h] [rbp-178h] BYREF
  __int64 v49; // [rsp+38h] [rbp-170h] BYREF
  __int64 v50; // [rsp+40h] [rbp-168h] BYREF
  __int128 v51; // [rsp+48h] [rbp-160h]
  _BYTE v52[224]; // [rsp+60h] [rbp-148h] BYREF
  _QWORD v53[13]; // [rsp+140h] [rbp-68h] BYREF

  v53[5] = __readfsqword(0x28u);
  v6 = sub_97BF0(a2);
  if ( v6 != 5 )
  {
    if ( v6 != 16648 )
      return 0;
LABEL_19:
    sub_A1190(a2, a1, 0);
    return 0;
  }
  v48 = a2;
  v51 = 0;
  v50 = 0;
  sub_84A60(v52);
  if ( (a2[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a2[14].m128i_i64[0] == -1 )
  {
    if ( under_debugger )
LABEL_57:
      BUG();
    interr(30478);
    goto LABEL_19;
  }
  if ( (unsigned __int8)sub_9B440(&v48, v52, &a2[14], &v50) )
  {
    v13 = a2->m128i_i64[0];
    v49 = 0;
    v47 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 *))(a2[16].m128i_i64[0] + 112))(
           *(_QWORD *)(v13 + 24),
           2,
           &v47,
           &v49)
      || !v47 )
    {
      goto LABEL_34;
    }
    goto LABEL_22;
  }
  while ( 1 )
  {
    v3 = (__int64 *)a1[3];
    v8 = v3[1];
    v9 = v3[2];
    if ( v9 < v8 + 1 )
    {
      v18 = qvector_reserve(a1[3], 0, v8 + 1, 80);
      v19 = v3[2];
      v44 = v18;
      v3[2] = v9;
      v20 = *v3;
      v46 = v19;
      v21 = v3[1] - 1;
      if ( v21 >= 0 )
      {
        v22 = v18;
        v23 = 0;
        do
        {
          *(__m128i *)v22 = _mm_loadu_si128((const __m128i *)v20);
          *(__m128i *)(v22 + 16) = _mm_loadu_si128((const __m128i *)(v20 + 16));
          v24 = *(_QWORD *)(v20 + 32);
          v25 = _mm_loadu_si128((const __m128i *)(v20 + 40));
          *(_QWORD *)(v20 + 32) = 0;
          *(_QWORD *)(v22 + 32) = v24;
          *(__m128i *)(v22 + 40) = v25;
          v26 = *(_QWORD *)(v20 + 56);
          v27 = _mm_loadu_si128((const __m128i *)(v20 + 64));
          *(_OWORD *)(v20 + 40) = v23;
          *(_QWORD *)(v22 + 56) = v26;
          *(__m128i *)(v22 + 64) = v27;
          v28 = *(_QWORD *)(v20 + 32);
          *(_QWORD *)(v20 + 56) = 0;
          *(_QWORD *)(v20 + 72) = 0;
          if ( v28 )
          {
            *(_QWORD *)(v20 + 40) = 0;
            v43 = (_QWORD *)v22;
            v41 = v21;
            qfree(v28);
            v22 = (__int64)v43;
            v21 = v41;
            v23 = 0;
          }
          v20 += 80;
          v22 += 80;
          v29 = v21-- == 0;
        }
        while ( !v29 );
        v20 = *v3;
      }
      qfree(v20);
      *v3 = v44;
      v3[2] = v46;
      v8 = v3[1];
    }
    else
    {
      v44 = *v3;
    }
    v2 = (_QWORD *)(80 * v8 + v44);
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[7] = 0;
    *(_OWORD *)(v2 + 3) = 0;
    *(_OWORD *)(v2 + 5) = 0;
    *((_OWORD *)v2 + 4) = 0;
    ++v3[1];
    v10 = a2->m128i_i64[0];
    v49 = 0;
    v47 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 *))(a2[16].m128i_i64[0] + 112))(
           *(_QWORD *)(v10 + 24),
           75,
           &v47,
           &v49)
      || !v47 )
    {
      v11 = 0;
    }
    else
    {
      v11 = sub_97630(a2, 75);
    }
    sub_750B0((__int64)(v2 + 4), v2 + 7, a1[4], (__int64)&v48, v11);
    if ( (a2[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && a2[14].m128i_i64[0] != -1 )
      break;
    if ( under_debugger )
      goto LABEL_57;
    interr(30478);
LABEL_34:
    if ( (v53[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v53[0] == -1 )
      goto LABEL_51;
    v3 = (__int64 *)a1[5];
    v2 = v53;
    v40 = &v3[2 * a1[6]];
    if ( v3 == v40 )
    {
      v43 = a1 + 5;
LABEL_28:
      v14 = a1[6];
      v15 = (__int64 *)(a1[5] + 16 * v14);
      if ( v3 == v15 )
      {
        v3 = (__int64 *)a1[7];
        v16 = v14 + 1;
        v17 = v53[0];
        v2 = (_QWORD *)v53[1];
        if ( (unsigned __int64)v3 >= v14 + 1 )
          goto LABEL_30;
        goto LABEL_53;
      }
    }
    else
    {
      do
      {
        if ( !(unsigned int)sub_849A0(v53, v3) )
          break;
        v3 += 2;
      }
      while ( v40 != v3 );
      if ( v3 != (__int64 *)(a1[5] + 16LL * a1[6]) )
        goto LABEL_15;
LABEL_22:
      if ( (v53[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v53[0] != -1 )
      {
        v3 = (__int64 *)a1[5];
        v43 = a1 + 5;
        for ( i = &v3[2 * a1[6]]; i != v3; v3 += 2 )
        {
          if ( !(unsigned int)sub_849A0(v53, v3) )
            break;
        }
        goto LABEL_28;
      }
      if ( under_debugger )
        goto LABEL_57;
      interr(30478);
LABEL_51:
      if ( under_debugger )
        goto LABEL_57;
      interr(30478);
LABEL_53:
      v42 = v17;
      v30 = qvector_reserve(v43, 0, v16, 16);
      v31 = v30;
      v32 = a1[6];
      v33 = (const __m128i *)a1[5];
      v34 = a1[7];
      a1[7] = v3;
      v35 = v32 - 1;
      v36 = v33;
      if ( v35 >= 0 )
      {
        do
        {
          v37 = _mm_loadu_si128(v36);
          v31 += 16;
          ++v36;
          *(__m128i *)(v31 - 16) = v37;
          v29 = v35-- == 0;
        }
        while ( !v29 );
        v33 = (const __m128i *)a1[5];
      }
      v45 = v34;
      v43 = (_QWORD *)v30;
      qfree(v33);
      v17 = v42;
      v38 = 16LL * a1[6];
      a1[5] = v30;
      a1[7] = v45;
      v15 = (__int64 *)(v30 + v38);
LABEL_30:
      *v15 = v17;
      v15[1] = (__int64)v2;
      ++a1[6];
    }
  }
  *(__m128i *)v2 = _mm_loadu_si128(a2 + 14);
  v2[2] = sub_9AFA0(&v48);
  v2[3] = v12;
LABEL_15:
  sub_1B750((__int64)v52);
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  return 0;
}
