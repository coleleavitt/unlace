__int64 __fastcall sub_9F3980(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v6; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r9
  unsigned __int64 v18; // r14
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r13
  unsigned int v22; // ebp
  __int64 v23; // rbp
  const __m128i *v24; // rax
  unsigned __int64 v25; // rdi
  __int8 v26; // si
  const __m128i *v27; // rsi
  _BYTE *v28; // rbp
  _QWORD *v29; // r14
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rdx
  _BYTE *v33; // rdi
  _BYTE *v34; // rax
  size_t v35; // rdx
  const __m128i *v36; // rax
  unsigned __int64 v37; // rcx
  __int8 v38; // dl
  const __m128i *v39; // rdx
  __int64 v41; // r13
  __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  __int64 v44; // rsi
  _BYTE *v45; // rbx
  __int64 v46; // r13
  __int64 v47; // r15
  _BYTE *v48; // rbp
  __int64 v49; // rax
  _BYTE *v50; // rax
  _BYTE *v51; // rdi
  _BYTE *v52; // r13
  size_t v53; // rdx
  __int64 v54; // rax
  _BYTE *v55; // r12
  _QWORD *v56; // rbx
  __int64 v57; // rbp
  __int64 v58; // rdx
  _BYTE *v59; // rdi
  _BYTE *v60; // rax
  size_t v61; // rdx
  __int64 v62; // [rsp+0h] [rbp-58h]
  __int64 v63; // [rsp+0h] [rbp-58h]
  __int64 v64; // [rsp+8h] [rbp-50h]
  __int64 v65; // [rsp+8h] [rbp-50h]
  __int64 v66; // [rsp+8h] [rbp-50h]
  __int64 v67; // [rsp+10h] [rbp-48h]
  __int64 v68; // [rsp+18h] [rbp-40h]
  __int64 v69; // [rsp+18h] [rbp-40h]
  __int64 v70; // [rsp+18h] [rbp-40h]

  v4 = a3;
  v6 = a2;
  v8 = a4 - a3;
  v9 = (a4 - a3) >> 6;
  v10 = *(_QWORD *)a1;
  v11 = *(unsigned int *)(a1 + 8);
  v64 = v8;
  v12 = *(unsigned int *)(a1 + 12);
  v13 = v11 + v9;
  v62 = a2 - v10;
  v14 = v11 << 6;
  v15 = v10 + (v11 << 6);
  if ( a2 == v15 )
  {
    if ( v13 > v12 )
    {
      v66 = a4;
      sub_9EE9B0(a1, v13);
      v10 = *(_QWORD *)a1;
      v11 = *(unsigned int *)(a1 + 8);
      a4 = v66;
    }
    sub_9F07C0(a3, a4, (v11 << 6) + v10);
    *(_DWORD *)(a1 + 8) += v9;
    return *(_QWORD *)a1 + v62;
  }
  v16 = v10;
  v17 = v11;
  v18 = v9;
  if ( v13 > v12 )
  {
    v69 = a4;
    sub_9EE9B0(a1, v11 + v9);
    v17 = *(unsigned int *)(a1 + 8);
    v16 = *(_QWORD *)a1;
    v4 = a3;
    v14 = v17 << 6;
    v6 = *(_QWORD *)a1 + v62;
    a4 = v69;
    v15 = *(_QWORD *)a1 + (v17 << 6);
  }
  v19 = v14 - v62;
  v20 = (v14 - v62) >> 6;
  v21 = v20;
  if ( v20 >= v9 )
  {
    v41 = v14 - v64;
    v42 = v15;
    v67 = v16 + v14 - v64;
    v43 = (v64 >> 6) + v17;
    if ( v43 > *(unsigned int *)(a1 + 12) )
    {
      v70 = v6;
      sub_9EE9B0(a1, v43);
      v6 = v70;
      v42 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
    }
    v44 = v15;
    v68 = v6;
    v45 = (_BYTE *)(v15 - 24);
    sub_9F07C0(v67, v44, v42);
    *(_DWORD *)(a1 + 8) += v64 >> 6;
    v46 = v41 - v62;
    v6 = v68;
    v47 = v46 >> 6;
    v48 = (_BYTE *)(v67 - 24);
    if ( v46 <= 0 )
      goto LABEL_52;
    while ( 1 )
    {
      v51 = *((_BYTE **)v45 - 2);
      *((_QWORD *)v45 - 5) = *((_QWORD *)v48 - 5);
      *(v45 - 32) = *(v48 - 32);
      *(_QWORD *)(v45 - 28) = *(_QWORD *)(v48 - 28);
      *(v45 - 20) = *(v48 - 20);
      v52 = *((_BYTE **)v48 - 2);
      if ( v48 == v52 )
      {
        v53 = *((_QWORD *)v48 - 1);
        if ( v53 )
        {
          if ( v53 == 1 )
            *v51 = *v48;
          else
            memcpy(v51, v48, v53);
          v51 = *((_BYTE **)v45 - 2);
        }
        v54 = *((_QWORD *)v52 - 1);
        *((_QWORD *)v45 - 1) = v54;
        v51[v54] = 0;
        goto LABEL_42;
      }
      if ( v51 == v45 )
        break;
      *((_QWORD *)v45 - 2) = v52;
      v49 = *(_QWORD *)v45;
      *((_QWORD *)v45 - 1) = *((_QWORD *)v48 - 1);
      *(_QWORD *)v45 = *(_QWORD *)v48;
      if ( !v51 )
        goto LABEL_50;
      *((_QWORD *)v48 - 2) = v51;
      *(_QWORD *)v48 = v49;
LABEL_42:
      v50 = *((_BYTE **)v48 - 2);
      *((_QWORD *)v48 - 1) = 0;
      v45 -= 64;
      v48 -= 64;
      *v50 = 0;
      v45[80] = v48[80];
      if ( !--v47 )
      {
        v6 = v68;
LABEL_52:
        v55 = (_BYTE *)(a3 + 40);
        v56 = (_QWORD *)(v6 + 40);
        v57 = v6;
        if ( v64 <= 0 )
          return v6;
        while ( 2 )
        {
          v59 = (_BYTE *)*(v56 - 2);
          *(v56 - 5) = *((_QWORD *)v55 - 5);
          *((_BYTE *)v56 - 32) = *(v55 - 32);
          *(_QWORD *)((char *)v56 - 28) = *(_QWORD *)(v55 - 28);
          *((_BYTE *)v56 - 20) = *(v55 - 20);
          v60 = *((_BYTE **)v55 - 2);
          if ( v60 == v55 )
          {
            v61 = *((_QWORD *)v55 - 1);
            if ( v61 )
            {
              if ( v61 == 1 )
                *v59 = *v55;
              else
                memcpy(v59, v55, v61);
              v61 = *((_QWORD *)v55 - 1);
              v59 = (_BYTE *)*(v56 - 2);
            }
            *(v56 - 1) = v61;
            v59[v61] = 0;
            v59 = *((_BYTE **)v55 - 2);
          }
          else
          {
            if ( v56 == (_QWORD *)v59 )
            {
              *(v56 - 2) = v60;
              *(v56 - 1) = *((_QWORD *)v55 - 1);
              *v56 = *(_QWORD *)v55;
            }
            else
            {
              *(v56 - 2) = v60;
              v58 = *v56;
              *(v56 - 1) = *((_QWORD *)v55 - 1);
              *v56 = *(_QWORD *)v55;
              if ( v59 )
              {
                *((_QWORD *)v55 - 2) = v59;
                *(_QWORD *)v55 = v58;
                goto LABEL_57;
              }
            }
            *((_QWORD *)v55 - 2) = v55;
            v59 = v55;
          }
LABEL_57:
          *((_QWORD *)v55 - 1) = 0;
          v56 += 8;
          v55 += 64;
          *v59 = 0;
          *((_BYTE *)v56 - 48) = *(v55 - 48);
          if ( !--v18 )
            return v57;
          continue;
        }
      }
    }
    *((_QWORD *)v45 - 2) = v52;
    *((_QWORD *)v45 - 1) = *((_QWORD *)v48 - 1);
    *(_QWORD *)v45 = *(_QWORD *)v48;
LABEL_50:
    *((_QWORD *)v48 - 2) = v48;
    goto LABEL_42;
  }
  v22 = v17 + v9;
  *(_DWORD *)(a1 + 8) = v22;
  v23 = v16 + ((unsigned __int64)v22 << 6) - v19;
  if ( v6 != v15 )
  {
    v24 = (const __m128i *)(v6 + 40);
    v25 = v23 + ((v15 - 64 - v6) & 0xFFFFFFFFFFFFFFC0LL) + 64;
    do
    {
      *(_QWORD *)v23 = v24[-3].m128i_i64[1];
      *(_DWORD *)(v23 + 8) = v24[-2].m128i_i32[0];
      *(_QWORD *)(v23 + 12) = *(__int64 *)((char *)v24[-2].m128i_i64 + 4);
      *(_DWORD *)(v23 + 20) = v24[-2].m128i_i32[3];
      *(_QWORD *)(v23 + 24) = v23 + 40;
      v27 = (const __m128i *)v24[-1].m128i_i64[0];
      if ( v27 == v24 )
      {
        *(__m128i *)(v23 + 40) = _mm_loadu_si128(v24);
      }
      else
      {
        *(_QWORD *)(v23 + 24) = v27;
        *(_QWORD *)(v23 + 40) = v24->m128i_i64[0];
      }
      v23 += 64;
      *(_QWORD *)(v23 - 32) = v24[-1].m128i_i64[1];
      v26 = v24[1].m128i_i8[0];
      v24[-1].m128i_i64[0] = (__int64)v24;
      v24 += 4;
      v24[-5].m128i_i64[1] = 0;
      v24[-4].m128i_i8[0] = 0;
      *(_BYTE *)(v23 - 8) = v26;
    }
    while ( v23 != v25 );
  }
  if ( v20 )
  {
    v28 = (_BYTE *)(a3 + 40);
    v63 = a3;
    v29 = (_QWORD *)(v6 + 40);
    v30 = v19;
    v31 = v6;
    while ( 1 )
    {
      v33 = (_BYTE *)*(v29 - 2);
      *(v29 - 5) = *((_QWORD *)v28 - 5);
      *((_BYTE *)v29 - 32) = *(v28 - 32);
      *(_QWORD *)((char *)v29 - 28) = *(_QWORD *)(v28 - 28);
      *((_BYTE *)v29 - 20) = *(v28 - 20);
      v34 = *((_BYTE **)v28 - 2);
      if ( v34 == v28 )
      {
        v35 = *((_QWORD *)v28 - 1);
        if ( v35 )
        {
          if ( v35 == 1 )
          {
            *v33 = *v28;
            v35 = *((_QWORD *)v28 - 1);
            v33 = (_BYTE *)*(v29 - 2);
          }
          else
          {
            v65 = a4;
            memcpy(v33, v28, v35);
            v35 = *((_QWORD *)v28 - 1);
            v33 = (_BYTE *)*(v29 - 2);
            a4 = v65;
          }
        }
        *(v29 - 1) = v35;
        v33[v35] = 0;
        v33 = *((_BYTE **)v28 - 2);
        goto LABEL_16;
      }
      if ( v33 == (_BYTE *)v29 )
        break;
      *(v29 - 2) = v34;
      v32 = *v29;
      *(v29 - 1) = *((_QWORD *)v28 - 1);
      *v29 = *(_QWORD *)v28;
      if ( !v33 )
        goto LABEL_34;
      *((_QWORD *)v28 - 2) = v33;
      *(_QWORD *)v28 = v32;
LABEL_16:
      *((_QWORD *)v28 - 1) = 0;
      v29 += 8;
      v28 += 64;
      *v33 = 0;
      *((_BYTE *)v29 - 48) = *(v28 - 48);
      if ( !--v21 )
      {
        v6 = v31;
        v4 = v63 + v30;
        goto LABEL_23;
      }
    }
    *(v29 - 2) = v34;
    *(v29 - 1) = *((_QWORD *)v28 - 1);
    *v29 = *(_QWORD *)v28;
LABEL_34:
    *((_QWORD *)v28 - 2) = v28;
    v33 = v28;
    goto LABEL_16;
  }
LABEL_23:
  if ( v4 != a4 )
  {
    v36 = (const __m128i *)(v4 + 40);
    v37 = v15 + ((a4 - 64 - v4) & 0xFFFFFFFFFFFFFFC0LL) + 64;
    do
    {
      *(_QWORD *)v15 = v36[-3].m128i_i64[1];
      *(_DWORD *)(v15 + 8) = v36[-2].m128i_i32[0];
      *(_QWORD *)(v15 + 12) = *(__int64 *)((char *)v36[-2].m128i_i64 + 4);
      *(_DWORD *)(v15 + 20) = v36[-2].m128i_i32[3];
      *(_QWORD *)(v15 + 24) = v15 + 40;
      v39 = (const __m128i *)v36[-1].m128i_i64[0];
      if ( v39 == v36 )
      {
        *(__m128i *)(v15 + 40) = _mm_loadu_si128(v36);
      }
      else
      {
        *(_QWORD *)(v15 + 24) = v39;
        *(_QWORD *)(v15 + 40) = v36->m128i_i64[0];
      }
      v15 += 64;
      *(_QWORD *)(v15 - 32) = v36[-1].m128i_i64[1];
      v38 = v36[1].m128i_i8[0];
      v36[-1].m128i_i64[0] = (__int64)v36;
      v36 += 4;
      v36[-5].m128i_i64[1] = 0;
      v36[-4].m128i_i8[0] = 0;
      *(_BYTE *)(v15 - 8) = v38;
    }
    while ( v15 != v37 );
  }
  return v6;
}
