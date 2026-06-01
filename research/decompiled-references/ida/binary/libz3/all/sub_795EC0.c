__int64 __fastcall sub_795EC0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  __int64 *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rax
  int v17; // edi
  __int64 *v18; // rcx
  unsigned int v19; // edx
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 *i; // rax
  __int64 v24; // rdx
  _QWORD *v25; // r15
  unsigned int v26; // edx
  __int64 v27; // rax
  __m128i *v28; // rbx
  int v29; // ecx
  __int64 v30; // r8
  __int64 *v31; // r14
  int v32; // edi
  __int64 v33; // rax
  __m128i *v34; // r9
  __m128i *v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdx
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 result; // rax
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ebx
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rsi
  int v53; // eax
  _QWORD *v54; // rsi
  unsigned int v55; // ebx
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rsi
  __m128i *v59; // rax
  int v60; // r10d
  __m128i *v61; // r9
  const __m128i *v62; // rax
  __m128i *v63; // r11
  __int64 v64; // rdx
  __m128i *v65; // rsi
  __m128i *v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  char **exception; // rbp
  char **v70; // rbp
  __int64 v71; // [rsp+0h] [rbp-98h]
  size_t v72; // [rsp+8h] [rbp-90h]
  int v73; // [rsp+8h] [rbp-90h]
  int v74; // [rsp+10h] [rbp-88h]
  size_t v75; // [rsp+10h] [rbp-88h]
  int v76; // [rsp+20h] [rbp-78h]
  __int64 v77[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = (unsigned int *)*a2;
  v71 = *(_QWORD *)(a1 + 8);
  v7 = *v6;
  if ( (unsigned __int8)sub_15D26C0(v71, v6) )
  {
    v8 = *a2;
    v9 = *(__int64 **)(a1 + 24);
    if ( !v8 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v49 = sub_1371CD0(a1 + 32, a3);
  v9 = *(__int64 **)(a1 + 24);
  v8 = v49;
  if ( v49 )
  {
LABEL_3:
    v10 = *(_DWORD *)(v8 + 8) + 1;
    *(_DWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 8) = v10 + 1;
  }
LABEL_4:
  v11 = 8 * v7;
  v12 = (__int64 *)(v11 + v9[1]);
  v13 = *v12;
  if ( *v12 )
  {
    v14 = *v9;
    v15 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v15 )
    {
      sub_15D7BC0(v14, v13);
      v12 = (__int64 *)(v9[1] + v11);
    }
  }
  v16 = *(unsigned int *)(a1 + 184);
  v17 = *(_DWORD *)(a3 + 12);
  *v12 = v8;
  v18 = *(__int64 **)(a1 + 176);
  v19 = v16 - 1;
  v16 *= 16;
  v20 = (__int64 *)((char *)v18 + v16);
  v21 = 16LL * (v17 & v19);
  v22 = &v18[(unsigned __int64)v21 / 8];
  if ( v21 != v16 )
  {
    for ( i = &v18[(unsigned __int64)v21 / 8]; v20 != i; i += 2 )
    {
      v24 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v24 + 12) == v17 && a3 == v24 )
          goto LABEL_25;
      }
      else if ( !v24 )
      {
        goto LABEL_14;
      }
    }
  }
  for ( ; v22 != v18; v18 += 2 )
  {
    v43 = *v18;
    if ( (unsigned __int64)*v18 > 1 )
    {
      if ( *(_DWORD *)(v43 + 12) == v17 && a3 == v43 )
      {
        i = v18;
LABEL_25:
        v25 = (_QWORD *)i[1];
        goto LABEL_26;
      }
    }
    else if ( !v43 )
    {
      break;
    }
  }
LABEL_14:
  v25 = (_QWORD *)sub_186B270(0x10u);
  v26 = *(_DWORD *)(a1 + 184);
  v27 = *(_QWORD *)(a1 + 8);
  v25[1] = 0;
  *v25 = v27;
  if ( 3 * v26 < 4 * (*(_DWORD *)(a1 + 188) + *(_DWORD *)(a1 + 192)) )
  {
    v74 = 2 * v26;
    v72 = 32LL * v26;
    v59 = (__m128i *)sub_186B270(v72);
    v30 = v72;
    v60 = v74;
    v28 = v59;
    v61 = &v59[v72 / 0x10];
    if ( v74 )
    {
      if ( (v72 & 0x10) == 0 || (*v59 = 0, ++v59, v61 != v59) )
      {
        do
        {
          *v59 = 0;
          v59 += 2;
          v59[-1] = 0;
        }
        while ( v61 != v59 );
      }
    }
    v62 = *(const __m128i **)(a1 + 176);
    v29 = v74 - 1;
    v31 = (__int64 *)v61;
    v63 = (__m128i *)&v62[*(unsigned int *)(a1 + 184)];
    if ( v62 != v63 )
    {
      do
      {
        if ( v62->m128i_i64[0] > 1uLL )
        {
          v64 = 16LL * (*(_DWORD *)(v62->m128i_i64[0] + 12) & (unsigned int)v29);
          v65 = &v28[(unsigned __int64)v64 / 0x10];
          if ( v72 == v64 )
          {
LABEL_76:
            if ( v28 == v65 )
            {
LABEL_89:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v66 = v28;
            while ( v66->m128i_i64[0] )
            {
              if ( v65 == ++v66 )
                goto LABEL_89;
            }
          }
          else
          {
            v66 = &v28[(unsigned __int64)v64 / 0x10];
            while ( v66->m128i_i64[0] )
            {
              if ( v61 == ++v66 )
                goto LABEL_76;
            }
          }
          *v66 = _mm_loadu_si128(v62);
        }
        ++v62;
      }
      while ( v63 != v62 );
      v63 = *(__m128i **)(a1 + 176);
    }
    if ( v63 )
    {
      v76 = v74;
      v75 = v72;
      v73 = v60 - 1;
      sub_186B220(v63);
      v60 = v76;
      v30 = v75;
      v29 = v73;
    }
    *(_QWORD *)(a1 + 176) = v28;
    *(_DWORD *)(a1 + 184) = v60;
    *(_DWORD *)(a1 + 192) = 0;
  }
  else
  {
    v28 = *(__m128i **)(a1 + 176);
    v29 = v26 - 1;
    v30 = 16LL * v26;
    v31 = (__int64 *)((char *)v28->m128i_i64 + v30);
  }
  v32 = *(_DWORD *)(a3 + 12);
  v33 = 16LL * (v32 & (unsigned int)v29);
  v34 = &v28[(unsigned __int64)v33 / 0x10];
  if ( v33 != v30 )
  {
    v35 = &v28[(unsigned __int64)v33 / 0x10];
    v36 = nullptr;
    while ( 1 )
    {
      v37 = v35->m128i_i64[0];
      if ( v35->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v37 + 12) == v32 && a3 == v37 )
        {
          v35->m128i_i64[0] = a3;
          v35->m128i_i64[1] = (__int64)v25;
          goto LABEL_56;
        }
      }
      else
      {
        if ( !v37 )
        {
          if ( v36 )
            goto LABEL_86;
          v36 = (__int64 *)v35;
          goto LABEL_87;
        }
        v36 = (__int64 *)v35;
      }
      if ( ++v35 == (__m128i *)v31 )
        goto LABEL_45;
    }
  }
  v36 = nullptr;
  while ( 1 )
  {
LABEL_45:
    if ( v34 == v28 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v44 = v28->m128i_i64[0];
    if ( v28->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v44 + 12) == v32 && a3 == v44 )
    {
      v28->m128i_i64[0] = a3;
      v28->m128i_i64[1] = (__int64)v25;
      goto LABEL_56;
    }
LABEL_44:
    ++v28;
  }
  if ( v44 )
  {
    v36 = (__int64 *)v28;
    goto LABEL_44;
  }
  if ( v36 )
LABEL_86:
    --*(_DWORD *)(a1 + 192);
  else
    v36 = (__int64 *)v28;
LABEL_87:
  *v36 = a3;
  v36[1] = (__int64)v25;
  ++*(_DWORD *)(a1 + 188);
LABEL_56:
  v50 = *(_QWORD **)(a1 + 168);
  if ( v50 )
  {
    v51 = *((_DWORD *)v50 - 1);
    if ( v51 == *((_DWORD *)v50 - 2) )
    {
      v55 = (3 * v51 + 1) >> 1;
      v56 = 8 * v55 + 8;
      if ( 8 * v51 + 8 >= (unsigned int)v56 || v51 >= v55 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v77, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v77);
        sub_233E40((__int64)v77);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v57 = (unsigned int *)sub_186B300(v50 - 1, v56);
      v58 = v57[1];
      v50 = v57 + 2;
      *v57 = v55;
      *(_QWORD *)(a1 + 168) = v57 + 2;
      LODWORD(v57) = v58;
      v54 = &v50[v58];
      v53 = (_DWORD)v57 + 1;
    }
    else
    {
      v52 = v51;
      v53 = v51 + 1;
      v54 = &v50[v52];
    }
  }
  else
  {
    v68 = (_QWORD *)sub_186B270(0x18u);
    *v68 = 2;
    v53 = 1;
    v50 = v68 + 1;
    *(_QWORD *)(a1 + 168) = v50;
    v54 = v50;
  }
  *v54 = v25;
  *((_DWORD *)v50 - 1) = v53;
LABEL_26:
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v38 = (_QWORD *)v25[1];
  if ( v38 )
  {
    v39 = *((_DWORD *)v38 - 1);
    if ( v39 == *((_DWORD *)v38 - 2) )
    {
      v45 = (3 * v39 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v39 + 8 >= (unsigned int)v46 || v39 >= v45 )
      {
        v70 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v77, "Overflow encountered when expanding vector");
        *v70 = (char *)off_1C63128;
        sub_2333C0(v70 + 1, v77);
        sub_233E40((__int64)v77);
        __cxa_throw(v70, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = (unsigned int *)sub_186B300(v38 - 1, v46);
      v48 = v47[1];
      v38 = v47 + 2;
      v25[1] = v47 + 2;
      *v47 = v45;
      LODWORD(v47) = v48;
      v42 = &v38[v48];
      result = (unsigned int)((_DWORD)v47 + 1);
    }
    else
    {
      v40 = v39;
      result = v39 + 1;
      v42 = &v38[v40];
    }
  }
  else
  {
    v67 = (_QWORD *)sub_186B270(0x18u);
    v38 = v67 + 1;
    *v67 = 2;
    result = 1;
    v25[1] = v38;
    v42 = v38;
  }
  *v42 = v8;
  *((_DWORD *)v38 - 1) = result;
  if ( v8 )
  {
    v15 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v15 )
      return sub_15D7BC0(v71, v8);
  }
  return result;
}

