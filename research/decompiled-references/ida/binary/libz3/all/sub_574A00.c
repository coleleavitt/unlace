__int64 __fastcall sub_574A00(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __m128i **a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // rax
  unsigned int *v11; // rax
  unsigned int *v12; // rbp
  _QWORD *v13; // rax
  _DWORD *v14; // rdi
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // eax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rbx
  char v21; // r10
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int64 v25; // rdi
  unsigned int *v26; // rax
  __int64 v27; // r11
  __int64 *v28; // r12
  __m128i *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  _QWORD *v34; // rax
  int *v35; // rbp
  int v36; // eax
  int v37; // r14d
  __m128i *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // r13
  _QWORD *v44; // rdi
  __int64 v45; // rbp
  unsigned int v46; // ebx
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int v49; // r14d
  unsigned int *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rsi
  _QWORD *v54; // rax
  unsigned int v55; // ebx
  size_t v56; // rsi
  unsigned int *v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // ebp
  size_t v60; // rsi
  unsigned int *v61; // rax
  __m128i *v62; // r15
  __int64 v63; // rbp
  __int64 *v64; // r14
  __int64 *v65; // rbx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // rdx
  __int64 *v69; // rax
  _QWORD *v70; // rcx
  __int64 result; // rax
  __m128i *v72; // rbp
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rdx
  __int64 *v75; // rax
  _QWORD *v76; // rcx
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  __int64 *v79; // rax
  _QWORD *v80; // rsi
  __int64 *v81; // rsi
  char **v82; // rbp
  char **exception; // rbp
  char **v84; // rbp
  char **v85; // rbp
  char **v86; // rbp
  char *v88; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v89; // [rsp+10h] [rbp-C8h]
  unsigned int v90; // [rsp+18h] [rbp-C0h]
  unsigned int v91; // [rsp+1Ch] [rbp-BCh]
  unsigned __int64 v93; // [rsp+28h] [rbp-B0h]
  unsigned int *v94; // [rsp+30h] [rbp-A8h]
  char v95; // [rsp+3Bh] [rbp-9Dh]
  unsigned int v96; // [rsp+3Ch] [rbp-9Ch]
  _QWORD *v97; // [rsp+40h] [rbp-98h]
  _QWORD *i; // [rsp+58h] [rbp-80h] BYREF
  __int64 v101; // [rsp+60h] [rbp-78h] BYREF
  __int128 v102; // [rsp+68h] [rbp-70h] BYREF
  __int64 v103[11]; // [rsp+80h] [rbp-58h] BYREF

  v10 = a1[7];
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = (unsigned int *)a1[2];
  v12 = (unsigned int *)a1[3];
  v94 = v11;
  v96 = *(_DWORD *)(a2 + 72);
  if ( v11 )
  {
    v91 = *(v11 - 1);
    if ( !a4 )
    {
      v12 = (unsigned int *)a1[2];
      v94 = (unsigned int *)a1[3];
    }
    i = nullptr;
    if ( v91 )
    {
      v13 = (_QWORD *)sub_186B270(0x18u);
      v14 = v13 + 1;
      *v13 = 2;
      for ( i = v13 + 1; ; i = v17 + 2 )
      {
        v18 = *(v14 - 2);
        if ( v18 >= v91 )
          break;
        v15 = (3 * v18 + 1) >> 1;
        v16 = 8 * v15 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v16 || v18 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v103, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v103);
          sub_233E40((__int64)v103);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v14 - 2, v16);
        v14 = v17 + 2;
        *v17 = v15;
      }
      *(v14 - 1) = v91;
      memset(v14, 0, 8LL * v91);
    }
    v19 = sub_56C1C0(a3, v91, v12);
  }
  else
  {
    i = nullptr;
    if ( !a4 )
    {
      v94 = v12;
      v12 = nullptr;
    }
    v91 = 0;
    v19 = sub_56C1C0(a3, 0, v12);
  }
  v97 = v19;
  v101 = 0;
  v20 = *(_QWORD *)(a2 + 152);
  v102 = 0;
  v93 = v20;
  if ( v20 == 0xFFFFFFFF )
    v93 = *(_QWORD *)(a2 + 80);
  if ( !v93 )
    goto LABEL_68;
  v95 = 0;
  v21 = 1;
  v89 = 0;
  if ( v91 )
    goto LABEL_18;
LABEL_23:
  (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD **))(*v97 + 24LL))(&v101, v97, &i);
  v95 = v101;
LABEL_24:
  if ( v95 )
  {
    v28 = (__int64 *)&v102;
    v88 = (char *)&v102 + 8;
  }
  else
  {
LABEL_25:
    while ( 1 )
    {
      v28 = (__int64 *)v102;
      v95 = 0;
      if ( (_QWORD)v102 != *((_QWORD *)&v102 + 1) )
        break;
      v89 += v96;
      if ( v89 >= v93 )
        goto LABEL_68;
      v21 = 0;
      if ( v91 )
        goto LABEL_18;
    }
    v88 = *((char **)&v102 + 1);
  }
  if ( !a4 )
  {
    while ( 1 )
    {
      v43 = *v28;
      if ( (unsigned __int64)*v28 > 0xFFFFFFFF )
      {
        v85 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v103, "Z3 cannot perform negation with excessively large tables");
        *v85 = (char *)off_1C63128;
        sub_2333C0(v85 + 1, v103);
        sub_233E40((__int64)v103);
        __cxa_throw(v85, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (_QWORD *)a1[7];
      v45 = (unsigned int)v43 >> 5;
      if ( !v44 )
        break;
      v90 = *((_DWORD *)v44 - 1);
      if ( (unsigned int)v45 >= v90 )
      {
        v46 = v45 + 1;
LABEL_49:
        while ( 1 )
        {
          v51 = *((_DWORD *)v44 - 2);
          if ( v51 >= v46 )
            break;
          v47 = (3 * v51 + 1) >> 1;
          v48 = 4 * v47 + 8;
          v49 = v47;
          if ( 4 * v51 + 8 >= (unsigned int)v48 || v51 >= v47 )
          {
            v86 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v103, "Overflow encountered when expanding vector");
            *v86 = (char *)off_1C63128;
            sub_2333C0(v86 + 1, v103);
            sub_233E40((__int64)v103);
            __cxa_throw(v86, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v50 = (unsigned int *)sub_186B300(v44 - 1, v48);
          v44 = v50 + 2;
          *v50 = v49;
          a1[7] = v50 + 2;
        }
        *((_DWORD *)v44 - 1) = v46;
        v52 = 4LL * v46;
        v35 = (int *)v44 + v45;
        v53 = 4LL * v90;
        v37 = 1 << v43;
        if ( v53 != v52 )
          memset((char *)v44 + v53, 0, v52 - v53);
        v36 = *v35;
LABEL_37:
        *v35 = v36 | v37;
        v38 = *a5;
        if ( *a5 )
        {
          v39 = v38[-1].m128i_u32[3];
          if ( v39 == v38[-1].m128i_i32[2] )
          {
            v55 = (3 * v39 + 1) >> 1;
            v56 = 8 * v55 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v56 || v39 >= v55 )
            {
              v84 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v103, "Overflow encountered when expanding vector");
              *v84 = (char *)off_1C63128;
              sub_2333C0(v84 + 1, v103);
              sub_233E40((__int64)v103);
              __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v57 = (unsigned int *)sub_186B300(&v38[-1].m128i_u64[1], v56);
            v38 = (__m128i *)(v57 + 2);
            *v57 = v55;
            *a5 = (__m128i *)(v57 + 2);
            LODWORD(v57) = v57[1];
            v42 = &v38->m128i_i64[(unsigned int)v57];
            v41 = (_DWORD)v57 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = &v38->m128i_i64[v40];
          }
        }
        else
        {
          v58 = (_QWORD *)sub_186B270(0x18u);
          v38 = (__m128i *)(v58 + 1);
          *v58 = 2;
          v42 = v58 + 1;
          *a5 = (__m128i *)(v58 + 1);
          v41 = 1;
        }
        *v42 = v43;
        v38[-1].m128i_i32[3] = v41;
        goto LABEL_41;
      }
      v35 = (int *)v44 + v45;
      v36 = *v35;
      v37 = 1 << v43;
      if ( ((1 << v43) & *v35) == 0 )
        goto LABEL_37;
LABEL_41:
      if ( ++v28 == (__int64 *)v88 )
      {
        v89 += v96;
        if ( v89 >= v93 )
          goto LABEL_68;
        if ( v91 )
        {
          v21 = a4;
LABEL_18:
          v22 = i;
          v23 = 0;
          v24 = *(_QWORD *)(a2 + 40);
          v25 = *(_QWORD *)(a2 + 88) + v89;
          do
          {
            v26 = (unsigned int *)(v24 + 32LL * v94[v23]);
            v27 = *((_QWORD *)v26 + 1) & (*(_QWORD *)(v25 + *v26) >> v26[1]);
            if ( v22[v23] != v27 )
            {
              v22[v23] = v27;
              v21 = 1;
            }
            ++v23;
          }
          while ( v23 != v91 );
          if ( v21 )
            goto LABEL_23;
          goto LABEL_24;
        }
        v28 = (__int64 *)&v102;
        v88 = (char *)&v102 + 8;
        if ( !v95 )
          goto LABEL_25;
      }
    }
    v46 = v45 + 1;
    v54 = (_QWORD *)sub_186B270(0x10u);
    v44 = v54 + 1;
    v90 = 0;
    a1[7] = v54 + 1;
    *v54 = 2;
    goto LABEL_49;
  }
  v29 = *a5;
  if ( *a5 )
  {
LABEL_29:
    v30 = v29[-1].m128i_u32[3];
    if ( v30 == v29[-1].m128i_i32[2] )
    {
      v59 = (3 * v30 + 1) >> 1;
      v60 = 8 * v59 + 8;
      if ( 8 * v30 + 8 >= (unsigned int)v60 || v30 >= v59 )
      {
        v82 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v103, "Overflow encountered when expanding vector");
        *v82 = (char *)off_1C63128;
        sub_2333C0(v82 + 1, v103);
        sub_233E40((__int64)v103);
        __cxa_throw(v82, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v61 = (unsigned int *)sub_186B300(&v29[-1].m128i_u64[1], v60);
      v29 = (__m128i *)(v61 + 2);
      *v61 = v59;
      *a5 = (__m128i *)(v61 + 2);
      LODWORD(v61) = v61[1];
      v33 = &v29->m128i_i64[(unsigned int)v61];
      v32 = (_DWORD)v61 + 1;
    }
    else
    {
      v31 = v30;
      v32 = v30 + 1;
      v33 = &v29->m128i_i64[v31];
    }
    goto LABEL_31;
  }
  while ( 1 )
  {
    v34 = (_QWORD *)sub_186B270(0x18u);
    v29 = (__m128i *)(v34 + 1);
    *v34 = 2;
    v33 = v34 + 1;
    *a5 = (__m128i *)(v34 + 1);
    v32 = 1;
LABEL_31:
    *v33 = v89;
    v29[-1].m128i_i32[3] = v32;
    v89 += v96;
    if ( v89 >= v93 )
      break;
    v21 = 0;
    if ( v91 )
      goto LABEL_18;
    if ( !v95 )
      goto LABEL_25;
    v29 = *a5;
    if ( *a5 )
      goto LABEL_29;
  }
LABEL_68:
  if ( !a4 )
  {
    v62 = *a5;
    if ( *a5 )
    {
      v63 = v62[-1].m128i_u32[3];
      v64 = &v62->m128i_i64[v63];
      if ( v62 != (__m128i *)&v62->m128i_i8[v63 * 8] )
      {
        v65 = &v62->m128i_i64[1];
        _BitScanReverse64(&v66, (v63 * 8) >> 3);
        sub_570700(*a5, &v62->m128i_i8[v63 * 8], 2LL * (int)v66, 0.0, a7, a8);
        if ( (unsigned __int64)v63 > 16 )
        {
          v72 = v62 + 8;
          do
          {
            while ( 1 )
            {
              v73 = *v65;
              if ( (unsigned __int64)*v65 < v62->m128i_i64[0] )
                break;
              v74 = *(v65 - 1);
              v75 = v65 - 1;
              if ( v73 >= v74 )
              {
                v76 = v65;
              }
              else
              {
                do
                {
                  v75[1] = v74;
                  v76 = v75;
                  v74 = *--v75;
                }
                while ( v73 < v74 );
              }
              ++v65;
              *v76 = v73;
              if ( v72 == (__m128i *)v65 )
                goto LABEL_94;
            }
            if ( (char *)v65 - (char *)v62 <= 8 )
            {
              if ( (char *)v65 - (char *)v62 == 8 )
                *v65 = v62->m128i_i64[0];
            }
            else
            {
              memmove(&v62->m128i_u64[1], v62, (char *)v65 - (char *)v62);
            }
            ++v65;
            v62->m128i_i64[0] = v73;
          }
          while ( v72 != (__m128i *)v65 );
          do
          {
LABEL_94:
            while ( 1 )
            {
              v77 = v72->m128i_i64[0];
              v78 = v72[-1].m128i_u64[1];
              v79 = &v72[-1].m128i_i64[1];
              if ( v72->m128i_i64[0] < v78 )
                break;
              v81 = (__int64 *)v72;
              v72 = (__m128i *)((char *)v72 + 8);
              *v81 = v77;
              if ( v64 == (__int64 *)v72 )
                goto LABEL_81;
            }
            do
            {
              v79[1] = v78;
              v80 = v79;
              v78 = *--v79;
            }
            while ( v77 < v78 );
            v72 = (__m128i *)((char *)v72 + 8);
            *v80 = v77;
          }
          while ( v64 != (__int64 *)v72 );
        }
        else if ( v63 != 1 )
        {
          do
          {
            while ( 1 )
            {
              v67 = *v65;
              if ( (unsigned __int64)*v65 < v62->m128i_i64[0] )
                break;
              v68 = *(v65 - 1);
              v69 = v65 - 1;
              if ( v67 >= v68 )
              {
                v70 = v65;
              }
              else
              {
                do
                {
                  v69[1] = v68;
                  v70 = v69;
                  v68 = *--v69;
                }
                while ( v67 < v68 );
              }
              ++v65;
              *v70 = v67;
              if ( v64 == v65 )
                goto LABEL_81;
            }
            if ( (char *)v65 - (char *)v62 <= 8 )
            {
              if ( (char *)v65 - (char *)v62 == 8 )
                *v65 = v62->m128i_i64[0];
            }
            else
            {
              memmove(&v62->m128i_u64[1], v62, (char *)v65 - (char *)v62);
            }
            ++v65;
            v62->m128i_i64[0] = v67;
          }
          while ( v64 != v65 );
        }
      }
    }
  }
LABEL_81:
  result = (__int64)i;
  if ( i )
    return sub_186B220(i - 1);
  return result;
}

