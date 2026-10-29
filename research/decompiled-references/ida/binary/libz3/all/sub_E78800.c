void __fastcall sub_E78800(__int64 a1, unsigned int **a2)
{
  __int64 v2; // rax
  __int64 v5; // r10
  __int64 v6; // r12
  __m128i *v7; // rbx
  __int32 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r13d
  size_t v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int *v18; // rcx
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rax
  char *v24; // r13
  __int64 v25; // r12
  char *v26; // r15
  char *v27; // r14
  __int64 v28; // rdx
  __int64 i; // rcx
  unsigned __int64 v30; // r15
  __m128i *v31; // rax
  __m128i *v32; // r12
  __int64 *v33; // rsi
  __int64 *v34; // rax
  __int64 v35; // rdi
  __m128i *v36; // r13
  unsigned int *v37; // rax
  __m128i *v38; // r12
  unsigned int v39; // ecx
  __int64 v40; // rdx
  char *v41; // r15
  char **exception; // r12
  int v43; // [rsp+0h] [rbp-B0h]
  int v44; // [rsp+0h] [rbp-B0h]
  __m128i *v45; // [rsp+0h] [rbp-B0h]
  __int64 v46; // [rsp+8h] [rbp-A8h]
  unsigned int *v47; // [rsp+8h] [rbp-A8h]
  __int64 v48; // [rsp+8h] [rbp-A8h]
  char *v49; // [rsp+8h] [rbp-A8h]
  __m128i *v50; // [rsp+10h] [rbp-A0h]
  __int64 v51; // [rsp+10h] [rbp-A0h]
  char *v52; // [rsp+10h] [rbp-A0h]
  char *v53; // [rsp+10h] [rbp-A0h]
  __int64 v54; // [rsp+18h] [rbp-98h]
  __int64 v55; // [rsp+18h] [rbp-98h]
  __int64 v56; // [rsp+20h] [rbp-90h]
  char *v57; // [rsp+28h] [rbp-88h] BYREF
  char *v58; // [rsp+30h] [rbp-80h] BYREF
  char *v59; // [rsp+38h] [rbp-78h] BYREF
  char *v60; // [rsp+40h] [rbp-70h] BYREF
  char *v61; // [rsp+48h] [rbp-68h] BYREF
  char *v62; // [rsp+50h] [rbp-60h] BYREF
  char *v63[11]; // [rsp+58h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 608);
  if ( !v2 )
    return;
  v5 = *(unsigned int *)(v2 - 4);
  if ( !(_DWORD)v5 )
  {
    v57 = nullptr;
    sub_C7B020(&v57, (char **)(a1 + 608));
    v24 = v57;
    goto LABEL_60;
  }
  v6 = 0;
  v7 = nullptr;
  do
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 616) + v6) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 672) + 8 * v6);
      if ( v9 && (v10 = *(unsigned int *)(v9 - 4), (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v6)) != 0) )
      {
        v12 = v10 * *(unsigned int *)(v11 - 4);
        if ( v12 > 0xFFFFFFFF )
          LODWORD(v12) = -1;
        if ( v7 )
          goto LABEL_13;
      }
      else
      {
        LODWORD(v12) = 0;
        if ( v7 )
        {
LABEL_13:
          v13 = v7[-1].m128i_u32[3];
          if ( (_DWORD)v13 == v7[-1].m128i_i32[2] )
          {
            v14 = (unsigned int)(3 * v13 + 1) >> 1;
            v15 = 8 * v14 + 8;
            if ( 8 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_E65BE0((__int64 *)v63, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v63);
              sub_233E40((__int64)v63);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v46 = v5;
            v43 = v12;
            v16 = sub_186B270(v15);
            v17 = v7[-1].m128i_u32[3];
            v18 = (unsigned int *)v16;
            v19 = v16 + 8;
            *(_DWORD *)(v16 + 4) = v17;
            v20 = 0;
            v21 = 8 * v17;
            if ( v21 )
            {
              do
              {
                *(_QWORD *)&v18[v20 / 4 + 2] = v7->m128i_i64[v20 / 8];
                v20 += 8LL;
              }
              while ( v21 != v20 );
            }
            v54 = v46;
            v50 = (__m128i *)v19;
            v47 = v18;
            sub_186B220(&v7[-1].m128i_u64[1]);
            LODWORD(v12) = v43;
            v5 = v54;
            v22 = v47[1];
            *v47 = v14;
            v7 = v50;
            v8 = &v50->m128i_i32[2 * v22];
          }
          else
          {
            v8 = &v7->m128i_i32[2 * v13];
          }
          goto LABEL_5;
        }
      }
      v48 = v5;
      v44 = v12;
      v23 = (_QWORD *)sub_186B270(0x18u);
      LODWORD(v12) = v44;
      v5 = v48;
      v7 = (__m128i *)(v23 + 1);
      *v23 = 2;
      v8 = (__int32 *)(v23 + 1);
LABEL_5:
      *v8 = v6;
      v8[1] = v12;
      ++v7[-1].m128i_i32[3];
    }
    ++v6;
  }
  while ( v5 != v6 );
  v24 = *(char **)(a1 + 608);
  if ( !v24 )
  {
    if ( !v7 )
      return;
    v49 = nullptr;
    v27 = nullptr;
    v25 = 8LL * v7[-1].m128i_u32[3];
    v45 = (__m128i *)((char *)v7 + v25);
    if ( v7 == (__m128i *)&v7->m128i_i8[v25] )
      goto LABEL_41;
LABEL_27:
    v28 = ((v25 >> 3) + 1) >> 1;
    for ( i = v28; ; i = (v51 + 1) >> 1 )
    {
      v30 = 8 * i;
      v55 = v28;
      v51 = i;
      v31 = (__m128i *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
      v28 = v55;
      v32 = v31;
      if ( v31 )
        break;
      if ( v51 == 1 )
      {
        if ( v27 )
        {
          v59 = v27;
          v62 = nullptr;
          sub_C7B020(&v62, &v59);
          v41 = v62;
          sub_E74900((unsigned int *)v7, (unsigned int *)v45, &v62);
          if ( v41 )
            sub_186B220(v41 - 8);
          operator delete(nullptr, 0);
          goto LABEL_37;
        }
        v62 = nullptr;
        sub_E74900((unsigned int *)v7, (unsigned int *)v45, &v62);
        operator delete(nullptr, 0);
LABEL_38:
        if ( !v49 )
        {
LABEL_39:
          if ( !v24 )
            goto LABEL_40;
          goto LABEL_51;
        }
LABEL_54:
        sub_186B220(v49 - 8);
        goto LABEL_39;
      }
    }
    v33 = &v31->m128i_i64[v30 / 8];
    v31->m128i_i64[0] = v7->m128i_i64[0];
    v34 = &v31->m128i_i64[1];
    if ( v30 == 8 )
    {
      v7->m128i_i64[0] = v32->m128i_i64[0];
      if ( v51 == v55 )
        goto LABEL_32;
    }
    else
    {
      do
      {
        v35 = *(v34++ - 1);
        *(v34 - 1) = v35;
      }
      while ( v33 != v34 );
      v7->m128i_i64[0] = *(v33 - 1);
      if ( v51 == v55 )
      {
LABEL_32:
        if ( v27 )
        {
          v59 = v27;
          v63[0] = nullptr;
          sub_C7B020(v63, &v59);
          v52 = v63[0];
        }
        else
        {
          v52 = nullptr;
        }
        v63[0] = v52;
        sub_E783A0(v7, (__m128i *)((char *)v7 + v30), v45, v32, v63);
        if ( v52 )
          sub_186B220(v52 - 8);
        operator delete(v32, v30);
        if ( !v27 )
          goto LABEL_38;
LABEL_37:
        sub_186B220(v27 - 8);
        goto LABEL_38;
      }
    }
    if ( !v27 )
    {
      v61 = nullptr;
      sub_E78570(v7, v45, v32, v51, &v61);
      operator delete(v32, v30);
      goto LABEL_38;
    }
    v56 = v51;
    v59 = v27;
    v61 = nullptr;
    sub_C7B020(&v61, &v59);
    v53 = v61;
    sub_E78570(v7, v45, v32, v56, &v61);
    if ( v53 )
      sub_186B220(v53 - 8);
    operator delete(v32, v30);
    goto LABEL_37;
  }
  v57 = nullptr;
  sub_C7B020(&v57, (char **)(a1 + 608));
  v24 = v57;
  if ( !v7 )
  {
LABEL_60:
    if ( !v24 )
      return;
    v58 = nullptr;
    sub_C7B020(&v58, &v57);
    v49 = v58;
    if ( !v58 )
    {
      v7 = nullptr;
      goto LABEL_39;
    }
    v45 = nullptr;
    v25 = 0;
    v7 = nullptr;
LABEL_25:
    v60 = nullptr;
    sub_C7B020(&v60, &v58);
    v26 = v60;
    if ( v60 )
    {
      v59 = nullptr;
      sub_C7B020(&v59, &v60);
      v27 = v59;
      sub_186B220(v26 - 8);
      if ( v7 != v45 )
        goto LABEL_27;
      if ( v27 )
      {
        sub_186B220(v27 - 8);
        goto LABEL_54;
      }
    }
    else
    {
      v27 = nullptr;
      if ( v7 != v45 )
        goto LABEL_27;
    }
    sub_186B220(v49 - 8);
    goto LABEL_51;
  }
  v25 = 8LL * v7[-1].m128i_u32[3];
  v45 = (__m128i *)((char *)v7 + v25);
  if ( !v57 )
  {
    v49 = nullptr;
    v27 = nullptr;
    if ( v7 != (__m128i *)&v7->m128i_i8[v25] )
      goto LABEL_27;
    goto LABEL_41;
  }
  v58 = nullptr;
  sub_C7B020(&v58, &v57);
  v49 = v58;
  if ( v58 )
    goto LABEL_25;
  if ( v7 != v45 )
  {
    v27 = nullptr;
    goto LABEL_27;
  }
LABEL_51:
  sub_186B220(v24 - 8);
LABEL_40:
  if ( v7 )
  {
LABEL_41:
    v36 = (__m128i *)((char *)v7 + 8 * v7[-1].m128i_u32[3]);
    if ( v7 != v36 )
    {
      v37 = *a2;
      v38 = v7;
      if ( *a2 )
        goto LABEL_45;
LABEL_46:
      sub_2FD3F0(a2);
      v37 = *a2;
      v40 = *(*a2 - 1);
      while ( 1 )
      {
        v39 = v38->m128i_i32[0];
        v38 = (__m128i *)((char *)v38 + 8);
        v37[v40] = v39;
        ++*(v37 - 1);
        if ( v36 == v38 )
          break;
LABEL_45:
        v40 = *(v37 - 1);
        if ( (_DWORD)v40 == *(v37 - 2) )
          goto LABEL_46;
      }
    }
    sub_186B220(&v7[-1].m128i_u64[1]);
  }
}

