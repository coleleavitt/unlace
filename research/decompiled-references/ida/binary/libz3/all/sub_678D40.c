__int64 __fastcall sub_678D40(const __m128i *a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 i; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128d *v21; // rax
  __m128d v22; // xmm0
  __m128d *v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  __m128d **v29; // rsi
  int v30; // esi
  int v31; // eax
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // r9d
  __int64 v36; // rdx
  __m128i *v37; // r13
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r13d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int32 v51; // r10d
  int v52; // ecx
  _DWORD *v53; // rax
  __int64 v54; // rax
  const __m128i *v55; // r8
  __m128i *v56; // r11
  __int64 v57; // rdx
  __m128i *v58; // rsi
  __m128i *v59; // rdx
  _QWORD *v60; // rdx
  char **exception; // rbx
  __int64 v62; // rdx
  size_t v63; // [rsp+0h] [rbp-88h]
  int v64; // [rsp+0h] [rbp-88h]
  __int64 v65; // [rsp+8h] [rbp-80h]
  unsigned __int32 v66; // [rsp+10h] [rbp-78h]
  unsigned int v67; // [rsp+18h] [rbp-70h]
  __int64 v68[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(_DWORD *)(a2 + 12);
  v7 = (*(_DWORD *)(a3 + 12) - v6) ^ (v6 << 8);
  v8 = (v6 - v7) << 10;
  v9 = v7 ^ ((v6 - v7) << 16);
  v10 = v7 - v6;
  v11 = a1[7].m128i_i64[1];
  v12 = (v9 + v10) ^ v8;
  v13 = a1[8].m128i_u32[0];
  v14 = v13 - 1;
  v13 *= 24;
  v15 = v11 + v13;
  v16 = 24LL * (v12 & v14);
  v17 = v11 + v16;
  if ( v16 != v13 )
  {
    for ( i = v11 + v16; v15 != i; i += 24 )
    {
      v19 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(i + 20) == v12 && a2 == v19 && a3 == *(_QWORD *)(i + 8) )
          goto LABEL_24;
      }
      else if ( !v19 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v17 != v11; v11 += 24 )
  {
    v44 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 > 1u )
    {
      if ( *(_DWORD *)(v11 + 20) == v12 && a2 == v44 && a3 == *(_QWORD *)(v11 + 8) )
      {
        i = v11;
LABEL_24:
        v67 = *(_DWORD *)(i + 16);
        return *(_QWORD *)(a1[7].m128i_i64[0] + 8LL * v67);
      }
    }
    else if ( !v44 )
    {
      break;
    }
  }
LABEL_8:
  v20 = a1[7].m128i_i64[0];
  if ( v20 )
    v67 = *(_DWORD *)(v20 - 4);
  else
    v67 = 0;
  v21 = (__m128d *)sub_186B270(0x28u);
  v22 = (__m128d)_mm_loadu_si128(a1 + 6);
  v23 = v21;
  *v21 = _mm_shuffle_pd(v22, v22, 1);
  v24 = (_QWORD *)sub_186B270(0x140u);
  v25 = (_QWORD *)a1[7].m128i_i64[0];
  *(_QWORD *)&v23[1].m128d_f64[1] = 8;
  *v24 = 0;
  v24[5] = 0;
  v24[10] = 0;
  v24[15] = 0;
  v24[20] = 0;
  v24[25] = 0;
  v24[30] = 0;
  v24[35] = 0;
  *(_QWORD *)&v23[1].m128d_f64[0] = v24;
  LODWORD(v23[2].m128d_f64[0]) = 0;
  if ( v25 )
  {
    v26 = *((_DWORD *)v25 - 1);
    if ( v26 == *((_DWORD *)v25 - 2) )
    {
      v46 = (3 * v26 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v26 + 8 >= (unsigned int)v47 || v26 >= v46 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_107EF6(v68, "Overflow encountered when expanding vector", v62);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v68);
        sub_233E40((__int64)v68);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v25 - 1, v47);
      v49 = v48[1];
      v25 = v48 + 2;
      *v48 = v46;
      a1[7].m128i_i64[0] = (__int64)(v48 + 2);
      LODWORD(v48) = v49;
      v29 = (__m128d **)&v25[v49];
      v28 = (_DWORD)v48 + 1;
    }
    else
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = (__m128d **)&v25[v27];
    }
  }
  else
  {
    v60 = (_QWORD *)sub_186B270(0x18u);
    *v60 = 2;
    v28 = 1;
    v25 = v60 + 1;
    a1[7].m128i_i64[0] = (__int64)v25;
    v29 = (__m128d **)v25;
  }
  *v29 = v23;
  *((_DWORD *)v25 - 1) = v28;
  v30 = *(_DWORD *)(a2 + 12);
  v31 = (*(_DWORD *)(a3 + 12) - v30) ^ (v30 << 8);
  v32 = ((v31 ^ ((v30 - v31) << 16)) + v31 - v30) ^ ((v30 - v31) << 10);
  v33 = a1[8].m128i_u32[0];
  if ( 3 * (int)v33 < (unsigned int)(4 * (a1[8].m128i_i32[1] + a1[8].m128i_i32[2])) )
  {
    v66 = 2 * v33;
    v63 = 24LL * (unsigned int)(2 * v33);
    v50 = sub_186B270(v63);
    v51 = v66;
    v36 = v63;
    v34 = v50;
    if ( v66 )
    {
      v52 = v66 - 1;
      if ( v66 - 1 <= 2 )
      {
        *(_DWORD *)(v50 + 20) = 0;
        *(_DWORD *)(v50 + 44) = 0;
        *(_OWORD *)v50 = 0;
        *(_OWORD *)(v50 + 24) = 0;
      }
      else
      {
        v53 = (_DWORD *)(v50 + 20);
        do
        {
          *v53 = 0;
          v53 += 24;
          *(_OWORD *)(v53 - 29) = 0;
          *(_OWORD *)(v53 - 23) = 0;
          *(_OWORD *)(v53 - 17) = 0;
          *(_OWORD *)(v53 - 11) = 0;
          *(v53 - 18) = 0;
          *(v53 - 12) = 0;
          *(v53 - 6) = 0;
        }
        while ( v53 != (_DWORD *)(v34 + 96LL * (v66 >> 2) + 20) );
        v54 = v34 + 24LL * (v66 & 0xFFFFFFFC);
        if ( (v66 & 2) != 0 )
        {
          *(_DWORD *)(v54 + 20) = 0;
          *(_DWORD *)(v54 + 44) = 0;
          *(_OWORD *)v54 = 0;
          *(_OWORD *)(v54 + 24) = 0;
          if ( (v66 & 2) != 2 )
          {
            *(_QWORD *)(v54 + 64) = 0;
            *(_OWORD *)(v54 + 48) = 0;
          }
        }
      }
    }
    else
    {
      v52 = -1;
    }
    v55 = (const __m128i *)a1[7].m128i_i64[1];
    v35 = v52;
    v56 = (__m128i *)((char *)v55 + 24 * a1[8].m128i_u32[0]);
    v37 = (__m128i *)(v34 + v63);
    if ( v55 != v56 )
    {
      do
      {
        if ( v55->m128i_i64[0] > 1uLL )
        {
          v57 = 24LL * (v55[1].m128i_i32[1] & (unsigned int)v52);
          v58 = (__m128i *)(v34 + v57);
          if ( v57 == v63 )
          {
LABEL_67:
            if ( v58 == (__m128i *)v34 )
            {
LABEL_80:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v59 = (__m128i *)v34;
            while ( v59->m128i_i64[0] )
            {
              v59 = (__m128i *)((char *)v59 + 24);
              if ( v58 == v59 )
                goto LABEL_80;
            }
          }
          else
          {
            v59 = (__m128i *)(v34 + v57);
            while ( v59->m128i_i64[0] )
            {
              v59 = (__m128i *)((char *)v59 + 24);
              if ( v37 == v59 )
                goto LABEL_67;
            }
          }
          *v59 = _mm_loadu_si128(v55);
          v59[1].m128i_i64[0] = v55[1].m128i_i64[0];
        }
        v55 = (const __m128i *)((char *)v55 + 24);
      }
      while ( v56 != v55 );
      v56 = (__m128i *)a1[7].m128i_i64[1];
      v36 = v63;
    }
    if ( v56 )
    {
      v65 = v36;
      v64 = v52;
      sub_186B220(v56);
      v51 = v66;
      v36 = v65;
      v35 = v64;
    }
    a1[7].m128i_i64[1] = v34;
    a1[8].m128i_i32[0] = v51;
    a1[8].m128i_i32[2] = 0;
  }
  else
  {
    v34 = a1[7].m128i_i64[1];
    v35 = v33 - 1;
    v36 = 24 * v33;
    v37 = (__m128i *)(v34 + 24 * v33);
  }
  v38 = v32 & (unsigned int)v35;
  v39 = v34 + 24 * v38;
  if ( 24 * v38 != v36 )
  {
    v40 = v34 + 24 * v38;
    v41 = 0;
    while ( 1 )
    {
      v42 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 > 1u )
      {
        if ( *(_DWORD *)(v40 + 20) == v32 && a2 == v42 && a3 == *(_QWORD *)(v40 + 8) )
        {
          *(_QWORD *)v40 = a2;
          *(_QWORD *)(v40 + 8) = a3;
          *(_DWORD *)(v40 + 16) = v67;
          *(_DWORD *)(v40 + 20) = v32;
          goto LABEL_48;
        }
      }
      else
      {
        if ( !v42 )
        {
          if ( v41 )
            goto LABEL_78;
          v41 = v40;
          goto LABEL_79;
        }
        v41 = v40;
      }
      v40 += 24;
      if ( (__m128i *)v40 == v37 )
        goto LABEL_39;
    }
  }
  v41 = 0;
  while ( 1 )
  {
LABEL_39:
    if ( v39 == v34 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v45 = *(_QWORD *)v34;
    if ( *(_QWORD *)v34 <= 1u )
      break;
    if ( *(_DWORD *)(v34 + 20) == v32 && a2 == v45 && a3 == *(_QWORD *)(v34 + 8) )
    {
      *(_QWORD *)v34 = a2;
      *(_QWORD *)(v34 + 8) = a3;
      *(_DWORD *)(v34 + 16) = v67;
      *(_DWORD *)(v34 + 20) = v32;
      goto LABEL_48;
    }
LABEL_38:
    v34 += 24;
  }
  if ( v45 )
  {
    v41 = v34;
    goto LABEL_38;
  }
  if ( v41 )
LABEL_78:
    --a1[8].m128i_i32[2];
  else
    v41 = v34;
LABEL_79:
  *(_QWORD *)v41 = a2;
  *(_QWORD *)(v41 + 8) = a3;
  *(_DWORD *)(v41 + 16) = v67;
  *(_DWORD *)(v41 + 20) = v32;
  ++a1[8].m128i_i32[1];
LABEL_48:
  ++*(_DWORD *)(a2 + 8);
  v68[0] = a2;
  sub_675F80(&a1[3].m128i_i64[1], v68);
  return *(_QWORD *)(a1[7].m128i_i64[0] + 8LL * v67);
}

