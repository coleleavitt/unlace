__int64 __fastcall sub_1534E60(const __m128i *a1)
{
  __int64 v2; // rdi
  __int32 v3; // eax
  unsigned __int64 v4; // r13
  unsigned int v5; // eax
  _WORD *v6; // rdx
  unsigned int v7; // r12d
  __int64 v8; // rcx
  char *v9; // rsi
  signed __int64 v10; // rcx
  char *v11; // rcx
  char *v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // rdi
  char *v16; // rax
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rdi
  char *v23; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // rdi
  char *v28; // rax
  __m128i v29; // xmm6
  __m128i v30; // xmm7
  __int32 v31; // eax
  __m128i v32; // xmm6
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  char *v35; // rdi
  char *v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm6
  __m128i v39; // xmm7
  __int16 v40; // [rsp+Eh] [rbp-12Ah]
  const __m128i *v41; // [rsp+10h] [rbp-128h]
  __int16 v42; // [rsp+18h] [rbp-120h]
  __int16 v43; // [rsp+1Ah] [rbp-11Eh]
  __int16 v44; // [rsp+1Ch] [rbp-11Ch]
  unsigned __int8 v45; // [rsp+1Fh] [rbp-119h]
  _WORD v46[5]; // [rsp+2Eh] [rbp-10Ah] BYREF
  __m128i v47; // [rsp+38h] [rbp-100h] BYREF
  __m128i v48; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-E0h]
  __m128i v50; // [rsp+60h] [rbp-D8h] BYREF
  __int32 v51; // [rsp+70h] [rbp-C8h]
  void *ptr; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+98h] [rbp-A0h]
  _BYTE v54[152]; // [rsp+A0h] [rbp-98h] BYREF

  v2 = a1->m128i_i64[1];
  if ( !*(_QWORD *)(v2 + 760) )
  {
    v7 = 1;
    sub_1567F60(a1);
    return v7;
  }
  v49 = a1[5].m128i_i64[0];
  v3 = a1[2].m128i_i32[0];
  v47 = _mm_loadu_si128(a1 + 3);
  v4 = a1[169].m128i_u32[2];
  v51 = v3;
  LOWORD(v3) = a1[5].m128i_i16[4];
  v48 = _mm_loadu_si128(a1 + 4);
  v40 = v3;
  LOWORD(v3) = a1[5].m128i_i16[5];
  v50 = _mm_loadu_si128(a1 + 1);
  v42 = v3;
  v43 = a1[5].m128i_i16[6];
  sub_1418D30(v2, 0);
  v44 = a1[2].m128i_i16[0];
  ptr = v54;
  v53 = 0x400000000LL;
  v5 = sub_146F400((__int64)a1, (__int64)&ptr);
  v6 = ptr;
  v7 = v5;
  v8 = 24LL * (unsigned int)v53;
  v9 = (char *)ptr + v8;
  v10 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
  v41 = a1 + 169;
  if ( v10 >> 2 )
  {
    if ( *((_WORD *)ptr + 8) == 3 )
    {
      v12 = (char *)ptr;
    }
    else if ( *((_WORD *)ptr + 20) == 3 )
    {
      v12 = (char *)ptr + 24;
    }
    else if ( *((_WORD *)ptr + 32) == 3 )
    {
      v12 = (char *)ptr + 48;
    }
    else
    {
      if ( *((_WORD *)ptr + 44) != 3 )
      {
        v11 = (char *)ptr + 96 * (v10 >> 2);
        while ( 1 )
        {
          v12 = (char *)(v6 + 48);
          if ( v11 == (char *)(v6 + 48) )
          {
            v10 = 0xAAAAAAAAAAAAAAABLL * ((v9 - v12) >> 3);
            goto LABEL_15;
          }
          if ( v6[56] == 3 )
            goto LABEL_35;
          if ( v6[68] == 3 )
          {
            if ( v9 == (char *)(v6 + 60) )
              goto LABEL_19;
            goto LABEL_36;
          }
          if ( v6[80] == 3 )
          {
            if ( v9 == (char *)(v6 + 72) )
              goto LABEL_19;
            goto LABEL_36;
          }
          if ( v6[92] == 3 )
            break;
          v6 += 48;
        }
        if ( v9 == (char *)(v6 + 84) )
          goto LABEL_19;
        goto LABEL_36;
      }
      v12 = (char *)ptr + 72;
    }
    goto LABEL_35;
  }
  v12 = (char *)ptr;
LABEL_15:
  if ( v10 == 2 )
  {
LABEL_73:
    if ( *((_WORD *)v12 + 8) != 3 )
    {
      v12 += 24;
LABEL_18:
      if ( *((_WORD *)v12 + 8) != 3 )
        goto LABEL_19;
      goto LABEL_35;
    }
    goto LABEL_35;
  }
  if ( v10 != 3 )
  {
    if ( v10 != 1 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( *((_WORD *)v12 + 8) != 3 )
  {
    v12 += 24;
    goto LABEL_73;
  }
LABEL_35:
  if ( v9 != v12 )
  {
LABEL_36:
    sub_1417BC0(a1->m128i_i64[1]);
    v17 = _mm_loadu_si128(&v47);
    v18 = _mm_loadu_si128(&v48);
    v19 = _mm_load_si128(&v50);
    a1[5].m128i_i64[0] = v49;
    a1[3] = v17;
    a1[4] = v18;
    a1[1] = v19;
    goto LABEL_37;
  }
LABEL_19:
  if ( (_BYTE)v7 )
  {
    v25 = a1[169].m128i_u32[2];
    if ( v4 != v25 )
    {
      if ( v4 >= v25 )
      {
        if ( v4 > a1[169].m128i_u32[3] )
        {
          sub_2237220(v41, &a1[170], v4, 8);
          v25 = a1[169].m128i_u32[2];
        }
        v26 = a1[169].m128i_i64[0];
        v27 = (char *)(v26 + 8 * v25);
        v28 = (char *)(v26 + 8 * v4);
        if ( v27 != v28 )
          memset(v27, 0, 8 * ((unsigned __int64)(v28 - 8 - v27) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v4;
    }
    sub_1417B70(a1->m128i_i64[1]);
    sub_147DEE0((__int64)a1);
    goto LABEL_45;
  }
  v46[0] = 25;
  v45 = sub_15680D0(a1, v46, 1, 4);
  if ( v45 )
  {
    if ( v44 == 150 )
    {
      while ( a1[2].m128i_i16[0] == 128 )
      {
        v46[0] = 24;
        if ( (unsigned __int8)sub_15680D0(a1, v46, 1, 4) )
        {
          v46[0] = 25;
          if ( (unsigned __int8)sub_15680D0(a1, v46, 1, 4) )
            continue;
        }
        sub_1417BC0(a1->m128i_i64[1]);
        v29 = _mm_loadu_si128(&v47);
        v30 = _mm_loadu_si128(&v48);
        a1[5].m128i_i64[0] = v49;
        v31 = v51;
        a1[3] = v29;
        v32 = _mm_load_si128(&v50);
        a1[2].m128i_i32[0] = v31;
        v33 = a1[169].m128i_u32[2];
        a1[4] = v30;
        a1[1] = v32;
        if ( v4 != v33 )
        {
          if ( v4 >= v33 )
          {
            if ( v4 > a1[169].m128i_u32[3] )
            {
              sub_2237220(v41, &a1[170], v4, 8);
              v33 = a1[169].m128i_u32[2];
            }
            v34 = a1[169].m128i_i64[0];
            v35 = (char *)(v34 + 8 * v33);
            v36 = (char *)(v34 + 8 * v4);
            if ( v35 != v36 )
              memset(v35, 0, 8 * ((unsigned __int64)(v36 - 8 - v35) >> 3) + 8);
          }
          a1[169].m128i_i32[2] = v4;
        }
        a1[5].m128i_i16[4] = v40;
        a1[5].m128i_i16[5] = v42;
        a1[5].m128i_i16[6] = v43;
        goto LABEL_45;
      }
    }
    v13 = a1[169].m128i_u32[2];
    if ( v4 != v13 )
    {
      if ( v4 >= v13 )
      {
        if ( v4 > a1[169].m128i_u32[3] )
        {
          sub_2237220(v41, &a1[170], v4, 8);
          v13 = a1[169].m128i_u32[2];
        }
        v14 = a1[169].m128i_i64[0];
        v15 = (char *)(v14 + 8 * v13);
        v16 = (char *)(v14 + 8 * v4);
        if ( v15 != v16 )
          memset(v15, 0, 8 * ((unsigned __int64)(v16 - 8 - v15) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v4;
    }
    sub_1417B70(a1->m128i_i64[1]);
    v7 = v45;
    goto LABEL_45;
  }
  sub_1417BC0(a1->m128i_i64[1]);
  v37 = v49;
  v38 = _mm_load_si128(&v50);
  a1[3] = _mm_loadu_si128(&v47);
  v39 = _mm_loadu_si128(&v48);
  a1[5].m128i_i64[0] = v37;
  a1[4] = v39;
  a1[1] = v38;
LABEL_37:
  a1[2].m128i_i32[0] = v51;
  v20 = a1[169].m128i_u32[2];
  if ( v4 != v20 )
  {
    if ( v4 >= v20 )
    {
      if ( v4 > a1[169].m128i_u32[3] )
      {
        sub_2237220(v41, &a1[170], v4, 8);
        v20 = a1[169].m128i_u32[2];
      }
      v21 = a1[169].m128i_i64[0];
      v22 = (char *)(v21 + 8 * v20);
      v23 = (char *)(v21 + 8 * v4);
      if ( v22 != v23 )
        memset(v22, 0, 8 * ((unsigned __int64)(v23 - 8 - v22) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v4;
  }
  v7 = 0;
  a1[5].m128i_i16[4] = v40;
  a1[5].m128i_i16[5] = v42;
  a1[5].m128i_i16[6] = v43;
LABEL_45:
  if ( ptr != v54 )
    free(ptr);
  return v7;
}
