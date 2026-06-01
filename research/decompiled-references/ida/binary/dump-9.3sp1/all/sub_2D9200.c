__m128i *__fastcall sub_2D9200(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 i; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i *v13; // rax
  __m128i *v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // r15
  __int64 v17; // r13
  char *v18; // r10
  size_t v19; // r11
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  char *v23; // r10
  size_t v24; // r11
  const void *v25; // r8
  void *v26; // rax
  char *v27; // rcx
  char *v28; // r13
  __int64 v29; // rax
  char *v30; // rdx
  __int64 *v31; // r14
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rbp
  char *v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  const void *v39; // r8
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 *v45; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+10h] [rbp-98h]
  char *v47; // [rsp+18h] [rbp-90h]
  size_t v48; // [rsp+20h] [rbp-88h]
  const void *v49; // [rsp+28h] [rbp-80h]
  _BYTE *v50; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v51[24]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v52; // [rsp+58h] [rbp-50h]
  int v53; // [rsp+60h] [rbp-48h]
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]

  v45 = a4;
  v54 = __readfsqword(0x28u);
  v7 = a1 + 32;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = 3 * i;
        sub_2B9980((_QWORD *)(32 * v11 + v8));
        v8 = *(_QWORD *)(a1 + 32);
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  sub_83C10((unsigned __int64 **)(a1 + 56));
  *(_QWORD *)(a1 + 24) = v7;
  v12 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  *(__m128 *)v51 = _mm_loadh_ps((const double *)&v45);
  sub_2D7370(a2, v7, (__m128i *)v51, v12, nullptr, *(__m128i *)v51);
  *a3 = *(_QWORD *)v51;
  v13 = (__m128i *)qalloc();
  v14 = v13;
  if ( !v13 )
    sub_4F618(16);
  v13->m128i_i64[0] = 0;
  v13->m128i_i64[1] = 0;
  v15 = *(_QWORD **)(a1 + 24);
  v16 = (_QWORD *)*v15;
  v17 = 12LL * v15[1];
  v45 = (__int64 *)&v50;
  v46 = (unsigned __int64)&v16[v17];
  if ( &v16[v17] != v16 )
  {
    do
    {
      *(_DWORD *)v51 = 0;
      copy_argloc();
      v21 = v16[2];
      v52 = a2;
      *(_QWORD *)&v51[16] = v21;
      v53 = 2;
      v50 = v51;
      v22 = sub_2D9070(v14, (__int64)v51, v45) + 24;
      copy_argloc();
      *(_QWORD *)(v22 + 56) = v16[2];
      if ( (_QWORD *)(v22 + 64) != v16 + 3 )
      {
        v23 = (char *)v16[4];
        if ( !v23 || (v24 = (size_t)(v23 - 1), v23 == &byte_1) )
        {
          *(_QWORD *)(v22 + 72) = 0;
        }
        else
        {
          v25 = (const void *)v16[3];
          v26 = *(void **)(v22 + 64);
          if ( *(_QWORD *)(v22 + 80) < (unsigned __int64)v23 )
          {
            v41 = v16[4];
            v42 = *(_QWORD *)(v22 + 64);
            v49 = (const void *)v16[3];
            v48 = (size_t)(v23 - 1);
            v47 = v23;
            v26 = (void *)qvector_reserve(v22 + 64, v42, v41, 1);
            v25 = v49;
            v24 = v48;
            *(_QWORD *)(v22 + 64) = v26;
            v23 = v47;
          }
          *(_QWORD *)(v22 + 72) = v23;
          v47 = v23;
          memmove(v26, v25, v24);
          v47[*(_QWORD *)(v22 + 64) - 1] = 0;
        }
      }
      copy_tinfo_t();
      if ( (_QWORD *)(v22 + 96) != v16 + 7 )
      {
        v18 = (char *)v16[8];
        if ( v18 && (v19 = (size_t)(v18 - 1), v18 != &byte_1) )
        {
          v39 = (const void *)v16[7];
          v40 = *(void **)(v22 + 96);
          if ( *(_QWORD *)(v22 + 112) < (unsigned __int64)v18 )
          {
            v43 = v16[8];
            v44 = *(_QWORD *)(v22 + 96);
            v49 = (const void *)v16[7];
            v48 = (size_t)(v18 - 1);
            v47 = v18;
            v40 = (void *)qvector_reserve(v22 + 96, v44, v43, 1);
            v39 = v49;
            v19 = v48;
            *(_QWORD *)(v22 + 96) = v40;
            v18 = v47;
          }
          *(_QWORD *)(v22 + 104) = v18;
          v47 = v18;
          memmove(v40, v39, v19);
          v47[*(_QWORD *)(v22 + 96) - 1] = 0;
        }
        else
        {
          *(_QWORD *)(v22 + 104) = 0;
        }
      }
      v20 = v16[10];
      v16 += 12;
      *(_QWORD *)(v22 + 120) = v20;
      *(_DWORD *)(v22 + 128) = *((_DWORD *)v16 - 2);
      cleanup_argloc();
    }
    while ( (_QWORD *)v46 != v16 );
    v15 = *(_QWORD **)(a1 + 24);
  }
  v27 = (char *)v15[3];
  v47 = v27;
  if ( v27 )
  {
    if ( v15[4] )
    {
      v28 = *((char **)v27 + 1);
      if ( v27 != v28 )
      {
        while ( 1 )
        {
LABEL_25:
          while ( 1 )
          {
            *(_DWORD *)v51 = 0;
            copy_argloc();
            v29 = *((_QWORD *)v28 + 5);
            v52 = a2;
            *(_QWORD *)&v51[16] = v29;
            v53 = 1;
            v50 = v51;
            v46 = sub_2D9070(v14, (__int64)v51, v45) + 24;
            copy_argloc();
            *(_QWORD *)(v46 + 56) = *((_QWORD *)v28 + 8);
            cleanup_argloc();
            if ( (*(_QWORD *)v28 & 2) == 0 )
              break;
LABEL_29:
            if ( v28 == v47 )
              goto LABEL_30;
          }
          v30 = *((char **)v28 + 2);
          if ( (*v30 & 2) == 0 )
          {
            while ( (**((_BYTE **)v30 + 1) & 2) == 0 )
              v30 = *((char **)v30 + 1);
            v28 = v30;
            goto LABEL_29;
          }
          v36 = (char *)(*(_QWORD *)v28 & 0xFFFFFFFFFFFFFFFCLL);
          v37 = *(_QWORD *)v36;
          if ( (*(_QWORD *)v36 & 2) == 0 )
          {
            while ( *((char **)v36 + 2) == v28 )
            {
              v28 = v36;
              v38 = v37 & 0xFFFFFFFFFFFFFFFCLL;
              v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v37 & 2) != 0 )
              {
                v28 = (char *)v38;
                if ( (char *)v38 != v47 )
                  goto LABEL_25;
                goto LABEL_30;
              }
              v36 = (char *)v38;
            }
          }
          v28 = v36;
          if ( v36 == v47 )
          {
LABEL_30:
            v15 = *(_QWORD **)(a1 + 24);
            break;
          }
        }
      }
    }
  }
  v31 = v45;
  v32 = v15[5];
  v50 = v51;
  v53 = 3;
  *(_QWORD *)v51 = 0;
  v52 = 0;
  *(__m128i *)&v51[8] = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)(sub_2D9070(v14, (__int64)v51, v45) + 144) = v32;
  cleanup_argloc();
  v33 = *(_QWORD *)(a1 + 24);
  v50 = v51;
  v34 = *(int *)(v33 + 48);
  v53 = 4;
  *(_QWORD *)v51 = 0;
  v52 = 0;
  *(__m128i *)&v51[8] = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)(sub_2D9070(v14, (__int64)v51, v31) + 144) = v34;
  cleanup_argloc();
  return v14;
}
