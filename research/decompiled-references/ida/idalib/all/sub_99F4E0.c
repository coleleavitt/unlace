unsigned __int64 __fastcall sub_99F4E0(__m128i *a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  bool v12; // zf
  __int64 v13; // rcx
  __int16 *v14; // r12
  __int16 v15; // ax
  __int64 v16; // r12
  _WORD *v17; // r13
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  unsigned __int8 v25; // al
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  int v33; // r14d
  _QWORD *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  _QWORD *v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 result; // rax
  __int64 v43; // r15
  __int64 v44; // r13
  __int64 v45; // rdx
  unsigned __int16 *v46; // rax
  int v47; // edi
  _BOOL8 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  __m128i v60; // [rsp+18h] [rbp-50h]

  v60 = _mm_loadu_si128(a1 + 8);
  if ( (*(_WORD *)a2 & 0x4000) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
      sub_999430((__int64)a1, v4);
  }
  v5 = sub_EEDE70(a2);
  if ( v5 )
    sub_998FE0((__int64)a1, v5, 0, v6, v7, v8);
  sub_99A450(a1, a1[8].m128i_i64[0], a1[8].m128i_u64[1], v60.m128i_i64[0], v60.m128i_i64[1], a2);
  v11 = a1[1].m128i_i64[0];
  if ( v11 )
  {
    v12 = a1[20].m128i_i8[0] == 0;
    a1[1].m128i_i64[1] = v11;
    if ( !v12 )
    {
      result = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v11 = a1[1].m128i_i64[1];
  }
  v13 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x1000LL) != 0
    && (v14 = *(__int16 **)(a2 + 8LL * (((v13 & 0x4000) != 0) + (unsigned int)((v13 & 0x2000) != 0) + 2) + 16)) != nullptr )
  {
    v15 = *v14;
    a1[1].m128i_i64[0] = 0;
    if ( (v15 & 0x1FF) != 0xF9 )
    {
      v43 = a1[8].m128i_i64[0];
      v44 = a1[8].m128i_i64[1];
      sub_999430((__int64)a1, (__int64)v14);
      sub_99A450(a1, a1[8].m128i_i64[0], a1[8].m128i_u64[1], v43, v44, (__int64)v14);
    }
    v16 = sub_99D480((__int64)a1, (__int64)v14, 1, 0, v9, v10);
    if ( v16 )
    {
      if ( a1[1].m128i_i64[0] && a1[20].m128i_i8[0] )
        goto LABEL_50;
    }
    else
    {
      v16 = v11;
    }
    a1[1].m128i_i64[1] = v11;
    v13 = *(_QWORD *)a2;
  }
  else
  {
    v16 = v11;
  }
  v17 = *(_WORD **)(a2 + 8LL * (((v13 & 0x4000) != 0) + (unsigned int)((v13 & 0x2000) != 0) + 1) + 16);
  a1[1].m128i_i64[0] = 0;
  if ( (*v17 & 0x1FF) != 0xF9 )
  {
    v18 = a1[8].m128i_i64[1];
    v57 = a1[8].m128i_i64[0];
    sub_999430((__int64)a1, (__int64)v17);
    sub_99A450(a1, a1[8].m128i_i64[0], a1[8].m128i_u64[1], v57, v18, (__int64)v17);
  }
  v19 = (__int64)v17;
  v24 = sub_99D480((__int64)a1, (__int64)v17, 1, 0, v9, v10);
  if ( !v24 )
  {
    v54 = sub_999B20((__int64)a1, v19, v20, v21, v22, v23);
    v19 = v11;
    v24 = v54;
    sub_999860(v54, v11, 2LL * (v11 == 0), (_QWORD *)(a1->m128i_i64[1] + 32), v55, v56);
    goto LABEL_21;
  }
  if ( a1[1].m128i_i64[0] && a1[20].m128i_i8[0] )
  {
LABEL_50:
    a1[1].m128i_i64[1] = v11;
    result = 0;
    goto LABEL_28;
  }
LABEL_21:
  v25 = *(_BYTE *)(a2 + 1);
  a1[1].m128i_i64[1] = v11;
  if ( ((v25 >> 1) & 7u) - 2 > 1 && !sub_EEDE70(a2) )
  {
    v46 = (unsigned __int16 *)sub_BFB9F0(*(_QWORD *)(a2
                                                   + 8LL
                                                   * (((*(_QWORD *)a2 & 0x4000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0))
                                                   + 16));
    v47 = *v46;
    v20 = (unsigned int)(v47 + 394);
    LOWORD(v20) = (v47 + 394) & 0x1FF;
    if ( (unsigned __int16)v20 <= 1u )
    {
      v20 = ((v46[1] >> 3) & 0x3Fu) - 19;
      if ( (unsigned int)v20 <= 1 )
      {
        result = sub_99D930((__int64)a1, (__int64)v46, a2, v24, v16);
        v51 = *(_QWORD *)a2;
        goto LABEL_36;
      }
    }
  }
  v26 = sub_999B20((__int64)a1, v19, v20, v21, v22, v23);
  a1[1].m128i_i64[0] = v26;
  *(_QWORD *)(v26 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  if ( (((*(_BYTE *)(a2 + 1) >> 1) + 6) & 7u) <= 1 )
  {
    sub_999860(a1[1].m128i_i64[0], v24, 2LL * (v24 == 0), (_QWORD *)(a1->m128i_i64[1] + 32), v27, v28);
    v37 = a1[1].m128i_i64[0];
    v38 = (_QWORD *)(a1->m128i_i64[1] + 32);
  }
  else
  {
    v29 = sub_997D80(
            a1->m128i_i64,
            *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0)) + 16));
    v32 = a1[1].m128i_i64[0];
    v33 = v29;
    v34 = (_QWORD *)(a1->m128i_i64[1] + 32);
    if ( v29 )
    {
      sub_999860(v32, v24, 2LL * (v24 == 0), v34, v30, v31);
      v37 = a1[1].m128i_i64[0];
      v38 = (_QWORD *)(a1->m128i_i64[1] + 32);
      if ( v33 == 1 )
      {
        v45 = v16;
        v16 = 0;
        v39 = v45 & 0xFFFFFFFFFFFFFFF9LL | 2;
        goto LABEL_26;
      }
    }
    else
    {
      sub_999860(v32, 0, v24 & 0xFFFFFFFFFFFFFFF9LL | 2, v34, v30, v31);
      v37 = a1[1].m128i_i64[0];
      v38 = (_QWORD *)(a1->m128i_i64[1] + 32);
    }
  }
  v39 = 2LL * (v16 == 0);
LABEL_26:
  sub_999860(v37, v16, v39, v38, v35, v36);
  if ( ((*(_BYTE *)(a2 + 1) >> 1) & 7u) - 2 <= 1 )
  {
    result = a1[1].m128i_u64[0];
    goto LABEL_28;
  }
  result = sub_99D480(
             (__int64)a1,
             *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0)) + 16),
             1,
             0,
             v40,
             v41);
  v51 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x2000LL) != 0 )
  {
    v48 = (v51 & 0x4000) != 0;
    v53 = *(_QWORD *)(a2 + 8 * v48 + 16);
    if ( v53 )
    {
      if ( !a1[1].m128i_i64[0] )
      {
        v59 = *(_QWORD *)(a2 + 8 * v48 + 16);
        sub_99A2D0((__int64)a1, v53, v48, v51, v49, v50);
        v53 = v59;
      }
      result = sub_99D480((__int64)a1, v53, 1, 0, v49, v50);
      v51 = *(_QWORD *)a2;
    }
  }
LABEL_36:
  BYTE1(v51) &= 0x40u;
  if ( BYTE1(v51) )
  {
    v52 = *(_QWORD *)(a2 + 16);
    if ( v52 )
    {
      if ( !a1[1].m128i_i64[0] )
      {
        v58 = *(_QWORD *)(a2 + 16);
        sub_99A2D0((__int64)a1, v52, v48, v51, v49, v50);
        v52 = v58;
      }
      result = sub_99D480((__int64)a1, v52, 1, 0, v49, v50);
    }
  }
LABEL_28:
  a1[8].m128i_i64[0] = v60.m128i_i64[0];
  a1[8].m128i_i32[2] = v60.m128i_i32[2];
  return result;
}
