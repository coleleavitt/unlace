__int8 *__fastcall sub_6D1920(_DWORD *a1, const __m128i *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11
  unsigned int v9; // ebx
  unsigned __int32 v10; // r10d
  __int64 v11; // r9
  int v12; // edx
  unsigned __int32 v13; // ebp
  __int64 v14; // rdi
  int v15; // esi
  int v16; // ebp
  unsigned int v17; // esi
  unsigned int v18; // edx
  int v19; // ebp
  unsigned int v20; // esi
  unsigned int v21; // edx
  int v22; // ebp
  unsigned int v23; // r13d
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rbp
  int v28; // edx
  __int8 *result; // rax
  int v30; // edx
  __int32 v31; // edx
  __int32 v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int8 v35; // si
  char v36; // si
  __int64 v37; // rdx
  __int64 v38; // rax
  __int8 v39; // si
  char v40; // si
  __int64 v41; // rax
  size_t v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  const __m128i *v45; // r14
  __m128i *v46; // rbp
  const __m128i *v47; // rdx
  __int32 v48; // edi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdx
  __m128i *v52; // r14
  __int64 v53; // rdi
  __int8 *v54; // rsi
  __int64 v55; // [rsp+8h] [rbp-60h]
  __int64 v56; // [rsp+8h] [rbp-60h]
  __m128i *v57; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+10h] [rbp-58h]
  void *v60; // [rsp+10h] [rbp-58h]
  __int64 v61; // [rsp+10h] [rbp-58h]
  size_t v62; // [rsp+18h] [rbp-50h]
  __int64 v63; // [rsp+18h] [rbp-50h]
  __int64 v64; // [rsp+20h] [rbp-48h]
  size_t v65; // [rsp+28h] [rbp-40h]

  v4 = a1[2];
  v5 = 2 * v4;
  if ( 3 * v4 < 4 * (a1[3] + a1[4]) )
  {
    v65 = 88LL * v5;
    v7 = sub_186B270(v65);
    v42 = v65;
    v43 = v7;
    if ( v5 )
    {
      do
      {
        *(_BYTE *)(v43 + 44) &= 0xFCu;
        *(_BYTE *)(v43 + 60) &= 0xFCu;
        v43 += 88;
        *(_QWORD *)(v43 - 88) = 0;
        *(_OWORD *)(v43 - 80) = 0;
        *(_DWORD *)(v43 - 64) = 0;
        *(_QWORD *)(v43 - 56) = 0;
        *(_DWORD *)(v43 - 48) = 0;
        *(_QWORD *)(v43 - 40) = 0;
        *(_DWORD *)(v43 - 32) = 1;
        *(_OWORD *)(v43 - 24) = 0;
        *(_QWORD *)(v43 - 8) = 0;
      }
      while ( v43 != v7 + v65 );
    }
    v9 = v5 - 1;
    v44 = (unsigned int)a1[2];
    v45 = (const __m128i *)(*(_QWORD *)a1 + 8LL);
    v11 = v7 + v65;
    v46 = (__m128i *)(*(_QWORD *)a1 + 88 * v44);
    if ( *(__m128i **)a1 != v46 )
    {
      while ( 1 )
      {
        if ( v45[-1].m128i_i32[3] == 2 )
        {
          v48 = v45[-1].m128i_i32[2];
          v49 = 88LL * (v48 & v9);
          v50 = v7 + v49;
          if ( v42 == v49 )
          {
LABEL_57:
            if ( v7 == v50 )
            {
LABEL_66:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = v7;
            while ( *(_DWORD *)(v51 + 4) )
            {
              v51 += 88;
              if ( v50 == v51 )
                goto LABEL_66;
            }
          }
          else
          {
            v51 = v7 + v49;
            while ( *(_DWORD *)(v51 + 4) )
            {
              v51 += 88;
              if ( v11 == v51 )
                goto LABEL_57;
            }
          }
          v62 = v42;
          v59 = v11;
          v56 = v7;
          *(_DWORD *)v51 = v48;
          *(_DWORD *)(v51 + 4) = 2;
          sub_6C0AA0((__m128i *)(v51 + 8), v45);
          v47 = (const __m128i *)((char *)v45 + 88);
          v7 = v56;
          v11 = v59;
          v42 = v62;
          if ( v46 == &v45[5] )
          {
LABEL_47:
            v44 = (unsigned int)a1[2];
            v46 = *(__m128i **)a1;
            break;
          }
        }
        else
        {
          v47 = (const __m128i *)((char *)v45 + 88);
          if ( v46 == &v45[5] )
            goto LABEL_47;
        }
        v45 = v47;
      }
    }
    if ( v46 )
    {
      if ( (_DWORD)v44 )
      {
        v52 = v46;
        v57 = (__m128i *)((char *)v46 + 88 * v44);
        do
        {
          v53 = v52[5].m128i_i64[0];
          v64 = v11;
          v63 = v7;
          if ( v53 )
            sub_186B220((void *)(v53 - 8));
          v60 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v52[2].m128i_u64[1]);
          v54 = &v52[3].m128i_i8[8];
          v52 = (__m128i *)((char *)v52 + 88);
          sub_182CBA0(v60, v54);
          v11 = v64;
          v7 = v63;
        }
        while ( v52 != v57 );
      }
      v61 = v11;
      v58 = v7;
      sub_186B220(v46);
      v7 = v58;
      v11 = v61;
    }
    v8 = a2->m128i_i64[1];
    *(_QWORD *)a1 = v7;
    a1[2] = v5;
    v10 = a2[1].m128i_u32[0];
    a1[4] = 0;
    if ( v8 )
      goto LABEL_3;
LABEL_56:
    v13 = v10;
    v12 = 0;
    goto LABEL_4;
  }
  v6 = v4;
  v7 = *(_QWORD *)a1;
  v8 = a2->m128i_i64[1];
  v9 = v4 - 1;
  v10 = a2[1].m128i_u32[0];
  v65 = 88 * v6;
  v11 = *(_QWORD *)a1 + 88 * v6;
  if ( !v8 )
    goto LABEL_56;
LABEL_3:
  v12 = *(_DWORD *)(v8 + 12);
  v13 = v10 + v12;
LABEL_4:
  v14 = a2->m128i_i64[0];
  v15 = 0;
  if ( a2->m128i_i64[0] )
    v15 = *(_DWORD *)(v14 + 12);
  v16 = (v15 - v13) ^ (v10 >> 13);
  v17 = (v12 - v10 - v16) ^ (v16 << 8);
  v18 = (v10 - v16 - v17) ^ (v17 >> 13);
  v19 = (v16 - v17 - v18) ^ (v18 >> 12);
  v20 = (v17 - v18 - v19) ^ (v19 << 16);
  v21 = (v18 - v19 - v20) ^ (v20 >> 5);
  v22 = (v21 >> 3) ^ (v19 - v20 - v21);
  v23 = (v21 - v22 - ((v20 - v21 - v22) ^ (v22 << 10))) ^ (((v20 - v21 - v22) ^ (v22 << 10)) >> 15);
  v24 = v23 & v9;
  v25 = v7 + 88 * v24;
  if ( 88 * v24 == v65 )
  {
    v27 = 0;
    while ( 1 )
    {
LABEL_20:
      if ( v25 == v7 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v30 = *(_DWORD *)(v7 + 4);
      if ( v30 == 2 )
      {
        if ( *(_DWORD *)v7 == v23
          && *(_QWORD *)(v7 + 8) == v14
          && *(_QWORD *)(v7 + 16) == v8
          && *(_DWORD *)(v7 + 24) == v10 )
        {
          v55 = v7;
          sub_6C0AA0((__m128i *)(v7 + 8), a2);
          *(_DWORD *)(v55 + 4) = 2;
          return (__int8 *)v55;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v27 )
            --a1[4];
          else
            v27 = v7;
          result = sub_6C0AA0((__m128i *)(v27 + 8), a2);
          goto LABEL_33;
        }
        v27 = v7;
      }
      v7 += 88;
    }
  }
  v26 = v7 + 88 * v24;
  v27 = 0;
  while ( 1 )
  {
    v28 = *(_DWORD *)(v26 + 4);
    if ( v28 != 2 )
      break;
    if ( *(_DWORD *)v26 == v23
      && *(_QWORD *)(v26 + 8) == v14
      && *(_QWORD *)(v26 + 16) == v8
      && *(_DWORD *)(v26 + 24) == v10 )
    {
      result = sub_6C0AA0((__m128i *)(v26 + 8), a2);
      *(_DWORD *)(v26 + 4) = 2;
      return result;
    }
LABEL_10:
    v26 += 88;
    if ( v26 == v11 )
      goto LABEL_20;
  }
  if ( v28 )
  {
    v27 = v26;
    goto LABEL_10;
  }
  if ( v27 )
    --a1[4];
  else
    v27 = v26;
  *(_DWORD *)(v27 + 24) = v10;
  *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v8);
  v31 = a2[2].m128i_i32[0];
  *(_QWORD *)(v27 + 32) = a2[1].m128i_i64[1];
  v32 = *(_DWORD *)(v27 + 40);
  *(_DWORD *)(v27 + 40) = v31;
  v33 = a2[2].m128i_i64[1];
  a2[2].m128i_i32[0] = v32;
  v34 = *(_QWORD *)(v27 + 48);
  *(_QWORD *)(v27 + 48) = v33;
  v35 = a2[2].m128i_i8[4];
  a2[2].m128i_i64[1] = v34;
  LOBYTE(v33) = *(_BYTE *)(v27 + 44);
  *(_BYTE *)(v27 + 44) = v35 & 2 | v33 & 0xFD;
  LOBYTE(v34) = v33 & 2 | a2[2].m128i_i8[4] & 0xFD;
  a2[2].m128i_i8[4] = v34;
  v36 = *(_BYTE *)(v27 + 44);
  *(_BYTE *)(v27 + 44) = v34 & 1 | v36 & 0xFE;
  LODWORD(v33) = a2[3].m128i_i32[0];
  a2[2].m128i_i8[4] = v36 & 1 | a2[2].m128i_i8[4] & 0xFE;
  LODWORD(v34) = *(_DWORD *)(v27 + 56);
  *(_DWORD *)(v27 + 56) = v33;
  v37 = a2[3].m128i_i64[1];
  a2[3].m128i_i32[0] = v34;
  v38 = *(_QWORD *)(v27 + 64);
  *(_QWORD *)(v27 + 64) = v37;
  v39 = a2[3].m128i_i8[4];
  a2[3].m128i_i64[1] = v38;
  LOBYTE(v37) = *(_BYTE *)(v27 + 60);
  *(_BYTE *)(v27 + 60) = v39 & 2 | v37 & 0xFD;
  LOBYTE(v38) = v37 & 2 | a2[3].m128i_i8[4] & 0xFD;
  a2[3].m128i_i8[4] = v38;
  v40 = *(_BYTE *)(v27 + 60) & 1;
  *(_BYTE *)(v27 + 60) = v38 & 1 | *(_BYTE *)(v27 + 60) & 0xFE;
  a2[3].m128i_i8[4] = v40 | a2[3].m128i_i8[4] & 0xFE;
  *(_QWORD *)(v27 + 72) = a2[4].m128i_i64[0];
  result = &a2[4].m128i_i8[8];
  if ( (unsigned __int64 *)(v27 + 80) != &a2[4].m128i_u64[1] )
  {
    v41 = *(_QWORD *)(v27 + 80);
    if ( v41 )
      sub_186B220((void *)(v41 - 8));
    *(_QWORD *)(v27 + 80) = 0;
    result = (__int8 *)a2[4].m128i_i64[1];
    *(_QWORD *)(v27 + 80) = result;
    a2[4].m128i_i64[1] = 0;
  }
LABEL_33:
  *(_DWORD *)(v27 + 4) = 2;
  *(_DWORD *)v27 = v23;
  ++a1[3];
  return result;
}

