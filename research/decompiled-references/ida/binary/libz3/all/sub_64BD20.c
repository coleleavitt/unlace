_QWORD *__fastcall sub_64BD20(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __m128i v5; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // r9
  __int64 v9; // rdi
  unsigned __int64 i; // rdx
  __int64 v11; // rbx
  int v12; // edi
  unsigned int v13; // eax
  unsigned __int64 *v14; // rbp
  size_t v15; // rbx
  unsigned __int64 *v16; // r9
  int v17; // edx
  __int64 v18; // r13
  unsigned __int64 *v19; // rsi
  unsigned __int64 *v20; // rbx
  unsigned __int64 *v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // r14d
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // r11
  char *v27; // rsi
  __int64 v28; // rdx
  char *v29; // r13
  unsigned __int64 *v30; // rax
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 *v34; // rsi
  unsigned __int64 *v35; // r14
  unsigned __int64 v36; // rdx
  char *v37; // rax
  char *v38; // r14
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned int v44; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v45; // [rsp+8h] [rbp-60h]
  char *v46; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v47; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v48; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v49; // [rsp+10h] [rbp-58h]
  _QWORD *v50; // [rsp+18h] [rbp-50h]
  int v51; // [rsp+24h] [rbp-44h]
  unsigned __int64 *v52; // [rsp+28h] [rbp-40h]

  v50 = (_QWORD *)*a3;
  if ( *a3 )
  {
    v5 = _mm_loadl_epi64((const __m128i *)(*a3 - 8LL));
    v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v5) + 8);
    v8 = (_QWORD *)*a3;
    *v7 = v5.m128i_i64[0];
    if ( v8 )
    {
      v9 = 8LL * *((unsigned int *)v8 - 1);
      if ( v9 )
      {
        for ( i = 0; i != v9; i += 8LL )
          v7[i / 8 + 1] = v8[i / 8];
      }
    }
    v50 = v7 + 1;
  }
  v11 = *(unsigned int *)(a1 + 2344);
  v12 = *(_DWORD *)(a1 + 2352);
  v51 = 2 * v11;
  if ( 3 * (int)v11 < (unsigned int)(4 * (v12 + *(_DWORD *)(a1 + 2348))) )
  {
    v24 = 2 * v11;
    v15 = 16LL * (unsigned int)(2 * v11);
    v25 = (unsigned __int64 *)sub_186B270(v15);
    v14 = v25;
    v26 = &v25[v15 / 8];
    if ( v24 )
    {
      if ( (v15 & 0x10) == 0 || (*(_OWORD *)v25 = 0, v25 += 2, v26 != v25) )
      {
        do
        {
          *(_OWORD *)v25 = 0;
          v25 += 4;
          *((_OWORD *)v25 - 1) = 0;
        }
        while ( v26 != v25 );
      }
    }
    v27 = *(char **)(a1 + 2336);
    v16 = v26;
    v28 = *(unsigned int *)(a1 + 2344);
    v29 = &v27[16 * v28];
    v44 = v51 - 1;
    v30 = (unsigned __int64 *)(v27 + 8);
    if ( v27 == v29 )
    {
LABEL_43:
      if ( v29 )
      {
        if ( (_DWORD)v28 )
        {
          v38 = v29;
          v46 = &v29[16 * v28];
          do
          {
            while ( 1 )
            {
              v39 = *((_QWORD *)v38 + 1);
              if ( !v39 )
                break;
              v49 = v16;
              v38 += 16;
              sub_186B220((void *)(v39 - 8));
              v16 = v49;
              if ( v46 == v38 )
                goto LABEL_48;
            }
            v38 += 16;
          }
          while ( v38 != v46 );
        }
LABEL_48:
        v47 = v16;
        sub_186B220(v29);
        v16 = v47;
      }
      *(_QWORD *)(a1 + 2336) = v14;
      v12 = 0;
      *(_DWORD *)(a1 + 2352) = 0;
      *(_DWORD *)(a1 + 2344) = v51;
      goto LABEL_9;
    }
    while ( 1 )
    {
      v32 = *(v30 - 1);
      if ( v32 <= 1 )
      {
LABEL_31:
        v31 = v30 + 2;
        if ( v29 == (char *)(v30 + 1) )
          goto LABEL_42;
        goto LABEL_32;
      }
      v33 = 16LL * (*(_DWORD *)(v32 + 12) & v44);
      v34 = &v14[(unsigned __int64)v33 / 8];
      if ( v15 == v33 )
      {
LABEL_50:
        if ( v14 == v34 )
        {
LABEL_64:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v35 = v14;
        while ( *v35 )
        {
          v35 += 2;
          if ( v34 == v35 )
            goto LABEL_64;
        }
        *v35 = v32;
        if ( v30 == v35 + 1 )
          goto LABEL_31;
        v36 = v35[1];
        if ( v36 )
          goto LABEL_40;
      }
      else
      {
        v35 = &v14[(unsigned __int64)v33 / 8];
        while ( *v35 )
        {
          v35 += 2;
          if ( v26 == v35 )
            goto LABEL_50;
        }
        *v35 = v32;
        if ( v30 == v35 + 1 )
          goto LABEL_31;
        v36 = v35[1];
        if ( v36 )
        {
LABEL_40:
          v52 = v26;
          v48 = v16;
          v45 = v30;
          sub_186B220((void *)(v36 - 8));
          v26 = v52;
          v16 = v48;
          v30 = v45;
        }
      }
      v35[1] = 0;
      v35[1] = *v30;
      v31 = v30 + 2;
      v37 = (char *)(v30 + 1);
      *((_QWORD *)v37 - 1) = 0;
      if ( v29 == v37 )
      {
LABEL_42:
        v28 = *(unsigned int *)(a1 + 2344);
        v29 = *(char **)(a1 + 2336);
        goto LABEL_43;
      }
LABEL_32:
      v30 = v31;
    }
  }
  v13 = v11 - 1;
  v14 = *(unsigned __int64 **)(a1 + 2336);
  v15 = 16 * v11;
  v44 = v13;
  v16 = &v14[v15 / 8];
LABEL_9:
  v17 = *(_DWORD *)(a2 + 12);
  v18 = 16LL * (v17 & v44);
  v19 = &v14[(unsigned __int64)v18 / 8];
  if ( v18 == v15 )
  {
    v21 = nullptr;
    while ( 1 )
    {
LABEL_20:
      if ( v19 == v14 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v23 = *v14;
      if ( *v14 > 1 )
      {
        if ( *(_DWORD *)(v23 + 12) == v17 && a2 == v23 )
        {
          v43 = v14[1];
          *v14 = a2;
          if ( v43 )
            sub_186B220((void *)(v43 - 8));
          v14[1] = (unsigned __int64)v50;
          return v50;
        }
      }
      else
      {
        if ( !v23 )
        {
          if ( v21 )
            *(_DWORD *)(a1 + 2352) = v12 - 1;
          else
            v21 = v14;
          v40 = v21[1];
          *v21 = a2;
          if ( v40 )
            goto LABEL_62;
          goto LABEL_63;
        }
        v21 = v14;
      }
      v14 += 2;
    }
  }
  v20 = &v14[(unsigned __int64)v18 / 8];
  v21 = nullptr;
  while ( 1 )
  {
    v22 = *v20;
    if ( *v20 <= 1 )
      break;
    if ( *(_DWORD *)(v22 + 12) == v17 && a2 == v22 )
    {
      v42 = v20[1];
      *v20 = a2;
      if ( v42 )
        sub_186B220((void *)(v42 - 8));
      v20[1] = (unsigned __int64)v50;
      return v50;
    }
LABEL_13:
    v20 += 2;
    if ( v20 == v16 )
      goto LABEL_20;
  }
  if ( v22 )
  {
    v21 = v20;
    goto LABEL_13;
  }
  if ( v21 )
    *(_DWORD *)(a1 + 2352) = v12 - 1;
  else
    v21 = v20;
  v40 = v21[1];
  *v21 = a2;
  if ( !v40 )
    goto LABEL_63;
LABEL_62:
  sub_186B220((void *)(v40 - 8));
LABEL_63:
  v21[1] = (unsigned __int64)v50;
  ++*(_DWORD *)(a1 + 2348);
  return v50;
}

