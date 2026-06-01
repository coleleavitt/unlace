__m128i *__fastcall sub_82C4A0(__m128i *a1, __int64 a2, __int64 *a3, unsigned __int64 *a4, int a5, int a6)
{
  char **v6; // r12
  char **exception; // r12
  char **v8; // r12
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r12
  unsigned __int64 *v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // rdi
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 *v30; // r12
  unsigned __int64 *i; // rbp
  unsigned __int64 v32; // rsi
  unsigned int v35; // ecx
  size_t v36; // rsi
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  unsigned __int64 *v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rbp
  unsigned int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rdx
  unsigned int v49; // r12d
  unsigned int v50; // eax
  unsigned int *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  unsigned int v54; // edx
  unsigned int v55; // ecx
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rbx
  __m128i v59; // [rsp+8h] [rbp-A0h] BYREF
  __m128i *v60; // [rsp+18h] [rbp-90h]
  _DWORD *v61; // [rsp+20h] [rbp-88h]
  int v62; // [rsp+2Ch] [rbp-7Ch]
  __int64 v63; // [rsp+40h] [rbp-68h]
  __int64 v64[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = (unsigned __int8)a5;
  v11 = *(_QWORD *)(a2 + 72);
  v12 = *a3;
  v60 = a1;
  v59.m128i_i64[1] = v11;
  v63 = v11;
  v13 = *((unsigned int *)a3 + 2);
  v61 = a4;
  v62 = a5;
  v14 = v12 + 48 * v13;
  if ( v12 != v14 )
  {
    while ( *(_DWORD *)(v12 + 4) != 2 )
    {
      v12 += 48;
      if ( v14 == v12 )
        goto LABEL_48;
    }
    if ( v14 == v12 )
    {
LABEL_48:
      v15 = nullptr;
      if ( *v61 )
        goto LABEL_50;
      goto LABEL_49;
    }
    v15 = nullptr;
    do
    {
      v16 = *(_DWORD *)(v12 + 16);
      if ( v16 )
      {
        a4 = (unsigned __int64 *)*(unsigned int *)(v12 + 8);
        v17 = **(_QWORD **)(*(_QWORD *)(a2 + 88) + 8LL * (_QWORD)a4);
        if ( (*(_BYTE *)(v12 + 20) & 1) != 0
          || v16 != 1
          || (*(_BYTE *)(v12 + 36) & 1) != 0
          || *(_DWORD *)(v12 + 32) != 1 )
        {
          v18 = *(_QWORD *)(a2 + 840);
          v19 = v12 + 16;
          if ( !v18 )
          {
            v59.m128i_i64[0] = v12 + 16;
            sub_16669E0(a2 + 832);
            v18 = *(_QWORD *)(a2 + 840);
            v19 = v12 + 16;
          }
          sub_166A700(v18, v19, v10, (_DWORD)a4, a5, a6);
          v20 = sub_15E1B70(*(_QWORD *)(a2 + 832));
          v21 = v20;
          if ( v20 )
            ++*(_DWORD *)(v20 + 8);
          if ( v15 )
          {
            v22 = *((_DWORD *)v15 - 1);
            if ( v22 == *((_DWORD *)v15 - 2) )
            {
              v35 = (3 * v22 + 1) >> 1;
              v36 = 8 * v35 + 8;
              if ( 8 * v22 + 8 >= (unsigned int)v36 || v22 >= v35 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v64, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v64);
                sub_233E40((__int64)v64);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v59.m128i_i32[0] = (3 * v22 + 1) >> 1;
              v37 = sub_186B300(v15 - 1, v36);
              v15 = (unsigned __int64 *)(v37 + 8);
              *(_DWORD *)v37 = v59.m128i_i32[0];
              LODWORD(v37) = *(_DWORD *)(v37 + 4);
              a4 = &v15[(unsigned int)v37];
              v24 = v37 + 1;
            }
            else
            {
              v23 = v22;
              v24 = v22 + 1;
              a4 = &v15[v23];
            }
          }
          else
          {
            v53 = (_QWORD *)sub_186B270(0x18u);
            v15 = v53 + 1;
            *v53 = 2;
            v24 = 1;
            a4 = v15;
          }
          *a4 = v21;
          *((_DWORD *)v15 - 1) = v24;
        }
        else
        {
          if ( v17 )
            ++*(_DWORD *)(v17 + 8);
          if ( v15 )
          {
            v38 = *((_DWORD *)v15 - 1);
            if ( v38 == *((_DWORD *)v15 - 2) )
            {
              v54 = (3 * v38 + 1) >> 1;
              v55 = 8 * v54 + 8;
              if ( 8 * v38 + 8 >= v55 || v38 >= v54 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v64, "Overflow encountered when expanding vector");
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v64);
                sub_233E40((__int64)v64);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v59.m128i_i32[0] = (3 * v38 + 1) >> 1;
              v56 = sub_186B300(v15 - 1, v55);
              v15 = (unsigned __int64 *)(v56 + 8);
              *(_DWORD *)v56 = v59.m128i_i32[0];
              LODWORD(v56) = *(_DWORD *)(v56 + 4);
              v41 = &v15[(unsigned int)v56];
              v40 = v56 + 1;
            }
            else
            {
              v39 = v38;
              v40 = v38 + 1;
              v41 = &v15[v39];
            }
          }
          else
          {
            v58 = (_QWORD *)sub_186B270(0x18u);
            *v58 = 2;
            v40 = 1;
            v15 = v58 + 1;
            v41 = v15;
          }
          *v41 = v17;
          *((_DWORD *)v15 - 1) = v40;
        }
      }
      v25 = v12 + 48;
      if ( v14 == v12 + 48 )
        break;
      while ( 1 )
      {
        v12 = v25;
        if ( *(_DWORD *)(v25 + 4) == 2 )
          break;
        v25 += 48;
        if ( v14 == v25 )
          goto LABEL_23;
      }
    }
    while ( v14 != v25 );
LABEL_23:
    if ( *v61 )
      goto LABEL_50;
    if ( !v15 )
      goto LABEL_49;
    LODWORD(a4) = *((_DWORD *)v15 - 1);
    if ( !(_DWORD)a4 )
      goto LABEL_50;
LABEL_26:
    v26 = _mm_loadl_epi64((const __m128i *)(a2 + 72));
    if ( (_DWORD)a4 == 1 )
      goto LABEL_57;
    goto LABEL_27;
  }
LABEL_49:
  v15 = nullptr;
LABEL_50:
  v42 = *(_QWORD *)(a2 + 840);
  if ( !v42 )
  {
    sub_16669E0(a2 + 832);
    v42 = *(_QWORD *)(a2 + 840);
  }
  v43 = sub_166A700(v42, (_DWORD)v61, (unsigned __int8)v62, (_DWORD)a4, a5, a6);
  v44 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  if ( !v15 )
  {
    v57 = (_QWORD *)sub_186B270(0x18u);
    v57[1] = v44;
    v15 = v57 + 1;
    v26 = _mm_loadl_epi64((const __m128i *)(a2 + 72));
    *v57 = 0x100000002LL;
LABEL_57:
    v48 = *v15;
    *v60 = _mm_unpacklo_epi64((__m128i)*v15, v26);
    v29 = 1;
    if ( v48 )
    {
      ++*(_DWORD *)(v48 + 8);
      v29 = *((unsigned int *)v15 - 1);
    }
    goto LABEL_30;
  }
  v45 = *((_DWORD *)v15 - 1);
  if ( v45 == *((_DWORD *)v15 - 2) )
  {
    v49 = (3 * v45 + 1) >> 1;
    v50 = 8 * v49 + 8;
    if ( 8 * v45 + 8 >= v50 || v45 >= v49 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v64, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v64);
      sub_233E40((__int64)v64);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v51 = (unsigned int *)sub_186B300(v15 - 1, v50);
    v52 = v51[1];
    v15 = (unsigned __int64 *)(v51 + 2);
    *v51 = v49;
    *(_QWORD *)&v51[2 * v52 + 2] = v44;
    LODWORD(a4) = v52 + 1;
    v51[1] = v52 + 1;
    goto LABEL_26;
  }
  v46 = v45;
  v47 = v45 + 1;
  v26 = _mm_loadl_epi64((const __m128i *)(a2 + 72));
  v15[v46] = v44;
  *((_DWORD *)v15 - 1) = v47;
  if ( v47 == 1 )
    goto LABEL_57;
LABEL_27:
  v27 = *(_QWORD *)(a2 + 832);
  v59.m128i_i64[0] = v26.m128i_i64[0];
  v28 = sub_15E1AF0(v27);
  *v60 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, _mm_loadl_epi64(&v59));
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v29 = *((unsigned int *)v15 - 1);
LABEL_30:
  v30 = &v15[v29];
  for ( i = v15; i < v30; ++i )
  {
    while ( 1 )
    {
      v32 = *i;
      if ( *i )
      {
        if ( (*(_DWORD *)(v32 + 8))-- == 1 )
          break;
      }
      if ( ++i >= v30 )
        goto LABEL_36;
    }
    sub_15D7BC0(v59.m128i_i64[1], v32);
  }
LABEL_36:
  sub_186B220(v15 - 1);
  return v60;
}

