__int64 __fastcall sub_5480C0(__int64 a1, __int64 a2)
{
  char **v2; // r14
  char **v3; // r14
  char **exception; // r14
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r13
  int v8; // edi
  unsigned int v9; // ecx
  __m128i *v10; // rbp
  unsigned int v11; // r15d
  size_t v12; // r13
  __m128i *v13; // r12
  int v14; // ecx
  __int64 v15; // rax
  __m128i *v16; // rsi
  __m128i *v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128i *v21; // rax
  unsigned int v22; // ecx
  __m128i *v23; // r14
  const __m128i *v24; // rbx
  __m128i *v25; // r8
  __int64 v26; // rax
  __m128i *v27; // rdx
  __m128i *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // r9
  _QWORD *v33; // rdx
  unsigned int v34; // r13d
  __int64 v35; // r10
  __int64 v36; // r14
  __int64 v37; // r15
  _QWORD *v38; // rbp
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rdx
  int v45; // ecx
  _QWORD *v46; // rdx
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // r15
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 *v56; // rcx
  bool v57; // zf
  __int64 v58; // rdx
  unsigned int v60; // r13d
  unsigned int v61; // edx
  unsigned int *v62; // rax
  __int64 v63; // rdx
  unsigned int v64; // r14d
  unsigned int v65; // ecx
  unsigned int *v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  unsigned int v70; // [rsp+0h] [rbp-88h]
  __int64 v71; // [rsp+0h] [rbp-88h]
  __int64 v72; // [rsp+0h] [rbp-88h]
  __int64 v73; // [rsp+0h] [rbp-88h]
  __int64 v74; // [rsp+0h] [rbp-88h]
  __int64 v75; // [rsp+0h] [rbp-88h]
  __int64 v76; // [rsp+0h] [rbp-88h]
  __int64 v77; // [rsp+8h] [rbp-80h]
  __int64 v78; // [rsp+8h] [rbp-80h]
  __int64 v79; // [rsp+8h] [rbp-80h]
  __int64 v80; // [rsp+8h] [rbp-80h]
  __int64 v81; // [rsp+8h] [rbp-80h]
  __int64 v82; // [rsp+8h] [rbp-80h]
  __int64 v83; // [rsp+8h] [rbp-80h]
  unsigned int v84; // [rsp+10h] [rbp-78h]
  __int64 v85[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a1;
  v6 = a2;
  v7 = *(unsigned int *)(a1 + 104);
  v8 = *(_DWORD *)(a1 + 112);
  v9 = 2 * v7;
  if ( 3 * (int)v7 < (unsigned int)(4 * (v8 + *(_DWORD *)(v5 + 108))) )
  {
    v77 = v5;
    v12 = 16LL * v9;
    v70 = v9;
    v21 = (__m128i *)sub_186B270(v12);
    v22 = v70;
    v5 = v77;
    v6 = a2;
    v10 = v21;
    v23 = &v21[v12 / 0x10];
    if ( v70 )
    {
      if ( (v12 & 0x10) == 0 || (*v21 = 0, ++v21, v21 != v23) )
      {
        do
        {
          *v21 = 0;
          v21 += 2;
          v21[-1] = 0;
        }
        while ( v21 != v23 );
      }
    }
    v24 = *(const __m128i **)(v77 + 96);
    v11 = v70 - 1;
    v13 = v23;
    v25 = (__m128i *)&v24[*(unsigned int *)(v77 + 104)];
    if ( v24 != v25 )
    {
      do
      {
        while ( v24->m128i_i64[0] <= 1uLL )
        {
          if ( v25 == ++v24 )
            goto LABEL_31;
        }
        v26 = 16LL * (*(_DWORD *)(v24->m128i_i64[0] + 12) & v11);
        v27 = &v10[(unsigned __int64)v26 / 0x10];
        if ( v12 == v26 )
        {
LABEL_35:
          if ( v10 == v27 )
          {
LABEL_65:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v28 = v10;
          while ( v28->m128i_i64[0] )
          {
            if ( v27 == ++v28 )
              goto LABEL_65;
          }
        }
        else
        {
          v28 = &v10[(unsigned __int64)v26 / 0x10];
          while ( v28->m128i_i64[0] )
          {
            if ( v23 == ++v28 )
              goto LABEL_35;
          }
        }
        v29 = _mm_loadu_si128(v24++);
        *v28 = v29;
      }
      while ( v25 != v24 );
LABEL_31:
      v25 = *(__m128i **)(v77 + 96);
    }
    if ( v25 )
    {
      sub_186B220(v25);
      v22 = v70;
      v6 = a2;
      v5 = v77;
    }
    *(_QWORD *)(v5 + 96) = v10;
    v8 = 0;
    *(_DWORD *)(v5 + 104) = v22;
    *(_DWORD *)(v5 + 112) = 0;
  }
  else
  {
    v10 = *(__m128i **)(v5 + 96);
    v11 = v7 - 1;
    v12 = 16 * v7;
    v13 = &v10[v12 / 0x10];
  }
  v14 = *(_DWORD *)(v6 + 12);
  v15 = 16LL * (v14 & v11);
  v16 = &v10[(unsigned __int64)v15 / 0x10];
  if ( v15 != v12 )
  {
    v17 = &v10[(unsigned __int64)v15 / 0x10];
    v18 = nullptr;
    while ( 1 )
    {
      v19 = v17->m128i_i64[0];
      if ( v17->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v19 + 12) == v14 && v6 == v19 )
        {
          v58 = v17->m128i_i64[1];
          goto LABEL_72;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_41;
          v18 = (__int64 *)v17;
          goto LABEL_42;
        }
        v18 = (__int64 *)v17;
      }
      if ( ++v17 == v13 )
        goto LABEL_14;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v16 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v20 = v10->m128i_i64[0];
    if ( v10->m128i_i64[0] > 1uLL )
      break;
    if ( !v20 )
    {
      if ( v18 )
LABEL_41:
        *(_DWORD *)(v5 + 112) = v8 - 1;
      else
        v18 = (__int64 *)v10;
LABEL_42:
      *v18 = v6;
      v18[1] = 0;
      ++*(_DWORD *)(v5 + 108);
      goto LABEL_43;
    }
    v18 = (__int64 *)v10;
LABEL_13:
    ++v10;
  }
  if ( *(_DWORD *)(v20 + 12) != v14 || v6 != v20 )
    goto LABEL_13;
  v58 = v10->m128i_i64[1];
  v17 = v10;
LABEL_72:
  if ( !v58 )
  {
    v18 = (__int64 *)v17;
LABEL_43:
    v30 = *(unsigned int *)(v6 + 32);
    v78 = v6;
    v71 = v5;
    if ( (_DWORD)v30 )
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v32 = v78;
      v33 = v31 + 1;
      v34 = 2;
      v35 = v71;
      v36 = v78 + 8 * v30;
      v37 = v78;
      v38 = v31 + 1;
      *v31 = 2;
      v39 = 1;
      while ( 1 )
      {
        v40 = *(_QWORD *)(v37 + 48);
        v37 += 8;
        *v33 = v40;
        *((_DWORD *)v38 - 1) = v39;
        if ( v37 == v36 )
          break;
        v34 = *((_DWORD *)v38 - 2);
        if ( v34 == v39 )
        {
          v34 = (3 * v34 + 1) >> 1;
          v42 = 8 * v34 + 8;
          if ( 8 * v39 + 8 >= (unsigned int)v42 || v39 >= v34 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v85, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v85);
            sub_233E40((__int64)v85);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v79 = v32;
          v72 = v35;
          v43 = (unsigned int *)sub_186B300(v38 - 1, v42);
          v44 = v43[1];
          v38 = v43 + 2;
          v35 = v72;
          *v43 = v34;
          v32 = v79;
          LODWORD(v43) = v44;
          v33 = &v38[v44];
          v39 = (_DWORD)v43 + 1;
        }
        else
        {
          v41 = v39++;
          v33 = &v38[v41];
        }
      }
      if ( v39 == v34 )
      {
        v60 = (3 * v39 + 1) >> 1;
        v61 = 8 * v60 + 8;
        if ( 8 * v39 + 8 >= v61 || v39 >= v60 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v81 = v32;
        v74 = v35;
        v62 = (unsigned int *)sub_186B300(v38 - 1, v61);
        v63 = v62[1];
        v38 = v62 + 2;
        v35 = v74;
        *v62 = v60;
        v32 = v81;
        LODWORD(v62) = v63;
        v46 = &v38[v63];
        v45 = (_DWORD)v62 + 1;
      }
      else
      {
        v45 = v39 + 1;
        v46 = &v38[v39];
      }
    }
    else
    {
      v68 = (_QWORD *)sub_186B270(0x18u);
      v35 = v71;
      v45 = 1;
      v38 = v68 + 1;
      v32 = v78;
      *v68 = 2;
      v46 = v68 + 1;
    }
    v73 = v32;
    v84 = v45;
    v47 = *(_QWORD *)(v35 + 32);
    *v46 = *(_QWORD *)(v35 + 80);
    *((_DWORD *)v38 - 1) = v45;
    v80 = v35;
    sub_180C5A0(v85, "expl");
    v48 = sub_651680(v47, v73 + 16, v85, v84, v38, v73);
    v49 = v73;
    v50 = v80;
    v51 = v48;
    if ( v48 )
      ++*(_DWORD *)(v48 + 8);
    v52 = *(_QWORD **)(v80 + 64);
    if ( v52 )
    {
      v53 = *((_DWORD *)v52 - 1);
      if ( v53 == *((_DWORD *)v52 - 2) )
      {
        v64 = (3 * v53 + 1) >> 1;
        v65 = 8 * v64 + 8;
        if ( 8 * v53 + 8 >= v65 || v53 >= v64 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v82 = v73;
        v75 = v50;
        v66 = (unsigned int *)sub_186B300(v52 - 1, v65);
        v67 = v66[1];
        v50 = v75;
        v52 = v66 + 2;
        *v66 = v64;
        v49 = v82;
        LODWORD(v66) = v67;
        *(_QWORD *)(v75 + 64) = v52;
        v56 = &v52[v67];
        v55 = (_DWORD)v66 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = &v52[v54];
      }
    }
    else
    {
      v83 = v73;
      v76 = v50;
      v69 = (_QWORD *)sub_186B270(0x18u);
      v50 = v76;
      v52 = v69 + 1;
      v49 = v83;
      *v69 = 2;
      v56 = v52;
      v55 = 1;
      *(_QWORD *)(v76 + 64) = v52;
    }
    v57 = *(_BYTE *)(v50 + 48) == 0;
    *v56 = v51;
    *((_DWORD *)v52 - 1) = v55;
    v18[1] = v51;
    if ( !v57 )
      sub_547D40(v50, v51, v49);
    sub_186B220(v38 - 1);
    return v18[1];
  }
  return v58;
}

