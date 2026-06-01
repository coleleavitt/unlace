__int64 __fastcall sub_5CF110(
        __m128i *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7)
{
  __m128i *v8; // rbp
  unsigned __int64 *v11; // rax
  __m128i *v12; // r15
  unsigned __int64 v14; // rax
  __m128i *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rax
  __m128i *v19; // r12
  __int64 m128i_i64; // rdx
  unsigned __int64 v21; // r13
  __int64 *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 *v28; // r14
  int v29; // eax
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // r12
  unsigned __int64 *v36; // rax
  char v37; // al
  int v38; // r8d
  __int64 v39; // rax
  unsigned __int64 v40; // r9
  __m128i *v41; // r13
  char *v42; // rax
  int v43; // r9d
  char *v44; // r10
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r8
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  void *v50; // rax
  int v51; // [rsp+0h] [rbp-E8h]
  int v52[2]; // [rsp+8h] [rbp-E0h]
  unsigned __int64 *v53; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v54; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+18h] [rbp-D0h]
  __int64 v56; // [rsp+20h] [rbp-C8h]
  void *v57; // [rsp+28h] [rbp-C0h]
  __int64 v58; // [rsp+30h] [rbp-B8h]
  __int64 v59; // [rsp+38h] [rbp-B0h]
  __int128 v60; // [rsp+40h] [rbp-A8h]
  __int64 v61; // [rsp+50h] [rbp-98h]
  __int64 v62; // [rsp+58h] [rbp-90h]
  __int64 v63; // [rsp+60h] [rbp-88h]
  __int64 v64; // [rsp+68h] [rbp-80h]
  int v65; // [rsp+70h] [rbp-78h]
  __int64 v66; // [rsp+78h] [rbp-70h]
  int v67; // [rsp+80h] [rbp-68h]
  __int64 v68; // [rsp+88h] [rbp-60h]
  int v69; // [rsp+90h] [rbp-58h]
  __int64 v70; // [rsp+98h] [rbp-50h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-40h]

  v8 = a1;
  v71 = __readfsqword(0x28u);
  lock_func_range(a2, 1);
  if ( !a2 || *(char *)(a2 + 17) < 0 )
    goto LABEL_5;
  v11 = sub_505D70((__int64)&a1[106].m128i_i64[1], a3);
  v12 = (__m128i *)v11;
  if ( !v11 )
  {
    if ( a4 != -1 )
    {
LABEL_31:
      v53 = sub_505D70((__int64)&a1[101].m128i_i64[1], a3);
      v36 = sub_505D70((__int64)&a1[101].m128i_i64[1], a4 - 1);
      if ( v53
        && v53 == v36
        && !(unsigned __int8)is_spec_ea(a3)
        && (sub_3BE900(a1, a3, 4) & 0x600) != 0x200
        && (sub_3BE900(a1, a4, 4) & 0x600) != 0x200 )
      {
        if ( (get_merge_state(a1, a4) & 2) == 0 )
        {
          if ( sub_5CBC50((__int64)a1, (_QWORD *)a2, a3) )
          {
            LODWORD(v8) = sub_5CDC30(a1, a3 - 1, a4, a5, a6, a7);
            goto LABEL_6;
          }
          if ( sub_5C93A0(a1, a2, a4) )
          {
            if ( (unsigned __int8)sub_5CBBA0(a4, (_QWORD *)a2) )
            {
              if ( a3 == a4
                || (v53 = sub_505D70((__int64)&a1[101].m128i_i64[1], a3),
                    v53 == sub_505D70((__int64)&a1[101].m128i_i64[1], a4)) )
              {
                LOBYTE(v8) = (unsigned int)sub_5CE7F0(
                                             (int)a1,
                                             a4,
                                             a3,
                                             v51,
                                             (int)v53,
                                             v54,
                                             v55,
                                             v56,
                                             v57,
                                             v58,
                                             v59,
                                             v60,
                                             *((void **)&v60 + 1),
                                             v61,
                                             v62,
                                             v63) == 0;
                goto LABEL_6;
              }
            }
          }
        }
        v58 = 0;
        v61 = 0xFFFFFFFFLL;
        v48 = *(_QWORD *)(a2 + 16);
        v62 = 0;
        v49 = v48 & 0x40;
        LODWORD(v63) = 0;
        BYTE1(v49) |= 0x80u;
        v54 = a3;
        v56 = v49;
        v50 = *(void **)a2;
        v64 = 0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v69 = 0;
        v70 = 0;
        v55 = a4;
        v57 = v50;
        v59 = 0;
        v60 = 0;
        if ( (unsigned __int8)sub_505940((__int64)&a1[106].m128i_i64[1], &v54, 0.0, a6) )
        {
          v12 = (__m128i *)sub_505D70((__int64)&a1[106].m128i_i64[1], a3);
          goto LABEL_10;
        }
      }
LABEL_5:
      LODWORD(v8) = 0;
      goto LABEL_6;
    }
LABEL_40:
    a4 = sub_5CAEC0(a1, a3, (unsigned __int64 *)a2, 0);
    if ( a4 == -1 )
      goto LABEL_5;
    if ( v12 )
      goto LABEL_10;
    goto LABEL_31;
  }
  if ( *v11 != a3 || *((char *)v11 + 17) >= 0 )
    goto LABEL_5;
  v14 = v11[1];
  if ( a4 == -1 )
  {
    if ( v14 != -1 )
      goto LABEL_10;
    goto LABEL_40;
  }
  if ( a4 != v14 )
    goto LABEL_5;
LABEL_10:
  if ( !*(_DWORD *)(a2 + 128) )
  {
    v15 = *(__m128i **)(a2 + 136);
    v16 = 16;
    v17 = 0;
    goto LABEL_12;
  }
  v37 = sub_5C7820(a1, a2, 1);
  v15 = *(__m128i **)(a2 + 136);
  v38 = *(_DWORD *)(a2 + 128);
  if ( !v37 )
    goto LABEL_58;
  m128i_i64 = 16LL * v38;
  v19 = (__m128i *)((char *)v15 + m128i_i64);
  v39 = m128i_i64 >> 4;
  if ( m128i_i64 > 0 )
  {
    v40 = v12->m128i_i64[0];
    v41 = *(__m128i **)(a2 + 136);
    do
    {
      m128i_i64 = (__int64)v41[v39 >> 1].m128i_i64;
      if ( v40 < *(_QWORD *)m128i_i64 || *(_QWORD *)m128i_i64 == v40 && *(_QWORD *)(m128i_i64 + 8) >= v12->m128i_i64[1] )
      {
        v39 >>= 1;
      }
      else
      {
        v41 = (__m128i *)(m128i_i64 + 16);
        v39 = v39 - 1 - (v39 >> 1);
      }
    }
    while ( v39 > 0 );
    if ( v41 == v19 || (v19 = v41, v40 != v41->m128i_i64[0]) || v41->m128i_i64[1] != v12->m128i_i64[1] )
    {
      v47 = (char *)v41 - (char *)v15;
      if ( v47 != -16 )
      {
        v17 = v47 >> 4;
        goto LABEL_59;
      }
    }
    goto LABEL_14;
  }
  if ( v19 == v15 )
  {
LABEL_58:
    v17 = 0;
    goto LABEL_59;
  }
  v17 = 0;
  if ( v12->m128i_i64[0] != v15->m128i_i64[0] || (v19 = *(__m128i **)(a2 + 136), v15->m128i_i64[1] != v12->m128i_i64[1]) )
  {
LABEL_59:
    v46 = v38 + 1;
    v16 = 16 * v46;
    if ( 16 * v46 < v46 )
    {
      *(_QWORD *)(a2 + 136) = 0;
      goto LABEL_61;
    }
LABEL_12:
    v18 = qrealloc(v15);
    *(_QWORD *)(a2 + 136) = v18;
    if ( v18 )
    {
      v19 = (__m128i *)(v18 + 16 * v17);
      memmove(&v19[1], v19, 16 * (*(int *)(a2 + 128) - v17));
      *v19 = _mm_loadu_si128(v12);
      ++*(_DWORD *)(a2 + 128);
      sub_5C7BB0(v8->m128i_i64, a2, 1);
      goto LABEL_14;
    }
LABEL_61:
    sub_3BC000((int)"append_func_tail:tails", v16);
  }
LABEL_14:
  v21 = *(_QWORD *)a2;
  if ( !v12[2].m128i_i32[0] )
  {
    v22 = (__int64 *)v12[2].m128i_i64[1];
    v23 = 8;
    v24 = 0;
    goto LABEL_16;
  }
  sub_5C7D50(v8->m128i_i64, (__int64)v12, m128i_i64);
  v22 = (__int64 *)v12[2].m128i_i64[1];
  v30 = (__int64)&v22[v12[2].m128i_i32[0]];
  v42 = (char *)sub_5C4680(v22, v30, v21);
  v27 = v42 - (char *)v22;
  if ( (v44 == v42 || v21 != *(_QWORD *)v42) && v27 != -8 )
  {
    v45 = v43 + 1;
    v23 = 8 * v45;
    if ( 8 * v45 < v45 )
    {
      v12[2].m128i_i64[1] = 0;
      goto LABEL_57;
    }
    v24 = v27 >> 3;
LABEL_16:
    *(_QWORD *)v52 = v24;
    v25 = qrealloc(v22);
    v12[2].m128i_i64[1] = v25;
    v27 = *(_QWORD *)v52;
    if ( v25 )
    {
      v28 = (unsigned __int64 *)(v25 + 8LL * *(_QWORD *)v52);
      memmove(v28 + 1, v28, 8 * (v12[2].m128i_i32[0] - *(_QWORD *)v52));
      *v28 = v21;
      v29 = v12[2].m128i_i32[0] + 1;
      v12[2].m128i_i32[0] = v29;
      if ( (unsigned __int64)v29 >= v8[30].m128i_i64[1] )
      {
        v12[1].m128i_i64[0] |= 0x40uLL;
        sub_5C77B0((__int64)v8, (unsigned __int64 *)v12, 0);
      }
      v30 = (__int64)v12;
      v22 = (__int64 *)v8;
      sub_5C85A0(v8->m128i_i64, (__int64)v12, 1);
      goto LABEL_20;
    }
LABEL_57:
    sub_3BC000((int)"append_func_tail:referers", v23, v26, v27);
  }
LABEL_20:
  if ( (get_merge_state(v22, v30) & 2) == 0
    && (unsigned __int64)&v19[1] < *(_QWORD *)(a2 + 136) + 16LL * *(int *)(a2 + 128) )
  {
    v31 = v19[1].m128i_u64[0];
    v32 = v19->m128i_i64[0];
    v33 = *(_QWORD *)a2;
    if ( v31 <= *(_QWORD *)a2 )
      v33 = v19[1].m128i_i64[0];
    if ( v32 < *(_QWORD *)a2 )
      v31 = v33;
    sub_5BAF30(v8, a2, v31, v32);
  }
  v34 = v12->m128i_i64[1];
  v35 = v12->m128i_i64[0];
  auto_mark_range(v12->m128i_i64[0], v34, 38);
  auto_mark_range(v35, v34, 40);
  if ( qword_2CCB548 )
    qword_2CCB548(v12->m128i_i64[0], v12->m128i_i64[1] - v12->m128i_i64[0]);
  sub_39ADA0(0x27u, a2, v12);
  *(_QWORD *)(a2 + 16) &= ~0x80uLL;
  sub_5CD980(v8, (unsigned __int64 *)a2, 0);
  LODWORD(v8) = 1;
LABEL_6:
  lock_func_range(a2, 0);
  return (unsigned int)v8;
}
