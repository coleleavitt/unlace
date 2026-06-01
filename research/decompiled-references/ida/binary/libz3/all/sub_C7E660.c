void __fastcall sub_C7E660(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r10d
  __int64 v5; // rbp
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
  __m128i *v36; // r14
  __m128i *v37; // r12
  _QWORD *v38; // rdx
  __int32 v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // r13d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int32 *v46; // rax
  char *v47; // r15
  char **exception; // r12
  __int64 v49; // rdx
  char **v50; // r12
  __int64 v51; // rdx
  int v53; // [rsp+8h] [rbp-C0h]
  int v54; // [rsp+8h] [rbp-C0h]
  __m128i *v55; // [rsp+8h] [rbp-C0h]
  unsigned int *v56; // [rsp+10h] [rbp-B8h]
  char *v57; // [rsp+10h] [rbp-B8h]
  __m128i *v58; // [rsp+18h] [rbp-B0h]
  __int64 v59; // [rsp+18h] [rbp-B0h]
  char *v60; // [rsp+18h] [rbp-B0h]
  char *v61; // [rsp+18h] [rbp-B0h]
  __int64 v62; // [rsp+20h] [rbp-A8h]
  __int64 v63; // [rsp+28h] [rbp-A0h]
  char *v64; // [rsp+38h] [rbp-90h] BYREF
  char *v65; // [rsp+40h] [rbp-88h] BYREF
  char *v66; // [rsp+48h] [rbp-80h] BYREF
  char *v67; // [rsp+50h] [rbp-78h] BYREF
  char *v68; // [rsp+58h] [rbp-70h] BYREF
  char *v69; // [rsp+60h] [rbp-68h] BYREF
  char *v70; // [rsp+68h] [rbp-60h] BYREF
  __int64 v71[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 600);
  if ( !v2 )
    return;
  v3 = *(_DWORD *)(v2 - 4);
  if ( !v3 )
  {
    v64 = nullptr;
    sub_C7B020(&v64, (char **)(a1 + 600));
    v24 = v64;
    goto LABEL_63;
  }
  v5 = v3;
  v6 = 0;
  v7 = nullptr;
  do
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 608) + v6) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 664) + 8 * v6);
      if ( v9 && (v10 = *(unsigned int *)(v9 - 4), (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 672) + 8 * v6)) != 0) )
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
              sub_161886(v71, "Overflow encountered when expanding vector", v49);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v71);
              sub_233E40((__int64)v71);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v53 = v12;
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
            v58 = (__m128i *)v19;
            v56 = v18;
            sub_186B220(&v7[-1].m128i_u64[1]);
            LODWORD(v12) = v53;
            v22 = v56[1];
            *v56 = v14;
            v7 = v58;
            v8 = &v58->m128i_i32[2 * v22];
          }
          else
          {
            v8 = &v7->m128i_i32[2 * v13];
          }
          goto LABEL_5;
        }
      }
      v54 = v12;
      v23 = (_QWORD *)sub_186B270(0x18u);
      LODWORD(v12) = v54;
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
  v24 = *(char **)(a1 + 600);
  if ( !v24 )
  {
    if ( !v7 )
      return;
    v57 = nullptr;
    v27 = nullptr;
    v25 = 8LL * v7[-1].m128i_u32[3];
    v55 = (__m128i *)((char *)v7 + v25);
    if ( v7 == (__m128i *)&v7->m128i_i8[v25] )
      goto LABEL_43;
LABEL_29:
    v28 = ((v25 >> 3) + 1) >> 1;
    for ( i = v28; ; i = (v59 + 1) >> 1 )
    {
      v30 = 8 * i;
      v62 = v28;
      v59 = i;
      v31 = (__m128i *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
      v28 = v62;
      v32 = v31;
      if ( v31 )
        break;
      if ( v59 == 1 )
      {
        if ( v27 )
        {
          v66 = v27;
          v69 = nullptr;
          sub_C7B020(&v69, &v66);
          v47 = v69;
          sub_C7C480((unsigned int *)v7, (unsigned int *)v55, &v69);
          if ( v47 )
            sub_186B220(v47 - 8);
          operator delete(nullptr, 0);
          goto LABEL_39;
        }
        v69 = nullptr;
        sub_C7C480((unsigned int *)v7, (unsigned int *)v55, &v69);
        operator delete(nullptr, 0);
LABEL_40:
        if ( !v57 )
        {
LABEL_41:
          if ( !v24 )
            goto LABEL_42;
          goto LABEL_54;
        }
LABEL_57:
        sub_186B220(v57 - 8);
        goto LABEL_41;
      }
    }
    v33 = &v31->m128i_i64[v30 / 8];
    v31->m128i_i64[0] = v7->m128i_i64[0];
    v34 = &v31->m128i_i64[1];
    if ( v30 == 8 )
    {
      v7->m128i_i64[0] = v32->m128i_i64[0];
      if ( v59 == v62 )
        goto LABEL_34;
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
      if ( v59 == v62 )
      {
LABEL_34:
        if ( v27 )
        {
          v66 = v27;
          v70 = nullptr;
          sub_C7B020(&v70, &v66);
          v60 = v70;
        }
        else
        {
          v60 = nullptr;
        }
        v70 = v60;
        sub_C7E1F0(v7, (__m128i *)((char *)v7 + v30), v55, v32, &v70);
        if ( v60 )
          sub_186B220(v60 - 8);
        operator delete(v32, v30);
        if ( !v27 )
          goto LABEL_40;
LABEL_39:
        sub_186B220(v27 - 8);
        goto LABEL_40;
      }
    }
    if ( !v27 )
    {
      v68 = nullptr;
      sub_C7E3C0(v7, v55, v32, v59, &v68);
      operator delete(v32, v30);
      goto LABEL_40;
    }
    v63 = v59;
    v66 = v27;
    v68 = nullptr;
    sub_C7B020(&v68, &v66);
    v61 = v68;
    sub_C7E3C0(v7, v55, v32, v63, &v68);
    if ( v61 )
      sub_186B220(v61 - 8);
    operator delete(v32, v30);
    goto LABEL_39;
  }
  v64 = nullptr;
  sub_C7B020(&v64, (char **)(a1 + 600));
  v24 = v64;
  if ( !v7 )
  {
LABEL_63:
    if ( !v24 )
      return;
    v65 = nullptr;
    sub_C7B020(&v65, &v64);
    v7 = nullptr;
    v57 = v65;
    if ( !v65 )
      goto LABEL_41;
    v55 = nullptr;
    v25 = 0;
LABEL_27:
    v67 = nullptr;
    sub_C7B020(&v67, &v65);
    v26 = v67;
    if ( v67 )
    {
      v66 = nullptr;
      sub_C7B020(&v66, &v67);
      v27 = v66;
      sub_186B220(v26 - 8);
      if ( v7 != v55 )
        goto LABEL_29;
      if ( v27 )
      {
        sub_186B220(v27 - 8);
        goto LABEL_57;
      }
    }
    else
    {
      v27 = nullptr;
      if ( v7 != v55 )
        goto LABEL_29;
    }
    sub_186B220(v57 - 8);
    goto LABEL_54;
  }
  v25 = 8LL * v7[-1].m128i_u32[3];
  v55 = (__m128i *)((char *)v7 + v25);
  if ( !v64 )
  {
    v57 = nullptr;
    v27 = nullptr;
    if ( v7 != (__m128i *)&v7->m128i_i8[v25] )
      goto LABEL_29;
    goto LABEL_43;
  }
  v65 = nullptr;
  sub_C7B020(&v65, &v64);
  v57 = v65;
  if ( v65 )
    goto LABEL_27;
  if ( v7 != v55 )
  {
    v27 = nullptr;
    goto LABEL_29;
  }
LABEL_54:
  sub_186B220(v24 - 8);
LABEL_42:
  if ( v7 )
  {
LABEL_43:
    v36 = (__m128i *)((char *)v7 + 8 * v7[-1].m128i_u32[3]);
    if ( v7 != v36 )
    {
      v37 = v7;
      v38 = (_QWORD *)*a2;
      if ( *a2 )
        goto LABEL_48;
      v45 = (_QWORD *)sub_186B270(0x10u);
      v38 = v45 + 1;
      *v45 = 2;
      *a2 = v45 + 1;
      v46 = (__int32 *)(v45 + 1);
      while ( 1 )
      {
        v39 = v37->m128i_i32[0];
        v37 = (__m128i *)((char *)v37 + 8);
        *v46 = v39;
        ++*((_DWORD *)v38 - 1);
        if ( v36 == v37 )
          break;
LABEL_48:
        v40 = *((unsigned int *)v38 - 1);
        if ( (_DWORD)v40 == *((_DWORD *)v38 - 2) )
        {
          v41 = (unsigned int)(3 * v40 + 1) >> 1;
          v42 = 4 * v41 + 8;
          if ( 4 * (int)v40 + 8 >= (unsigned int)v42 || (unsigned int)v40 >= v41 )
          {
            v50 = (char **)__cxa_allocate_exception(0x28u);
            sub_161886(v71, "Overflow encountered when expanding vector", v51);
            *v50 = (char *)off_1C63128;
            sub_2333C0(v50 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v50, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = (unsigned int *)sub_186B300(v38 - 1, v42);
          v38 = v43 + 2;
          *v43 = v41;
          v44 = v43[1];
          *a2 = v38;
          v46 = (__int32 *)v38 + v44;
        }
        else
        {
          v46 = (__int32 *)v38 + v40;
        }
      }
    }
    sub_186B220(&v7[-1].m128i_u64[1]);
  }
}

