__int64 __fastcall sub_765950(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rcx
  unsigned int v13; // r14d
  unsigned __int64 estimated_alloc_size_0; // rax
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  int v23; // ecx
  unsigned int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 result; // rax
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  int v32; // ecx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r14
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rsi
  int v43; // eax
  __int64 *v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r13
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rsi
  int v52; // eax
  __int64 *v53; // rsi
  char **exception; // rbp
  const char *v55; // rax
  unsigned int v56; // r13d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rsi
  unsigned int v60; // r15d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rsi
  _QWORD *v64; // rax
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  char **v68; // rbp
  char **v69; // rbp
  __int64 v70; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+8h] [rbp-60h]
  __int64 v72[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (__int64 *)a2;
  v6 = *(_QWORD *)(a1 + 40);
  while ( v6 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v6 - 4) )
        goto LABEL_16;
      v7 = *(_QWORD *)(a1 + 8);
      if ( !(unsigned __int8)sub_18290A0(v7) && *(_BYTE *)(a1 + 17) )
      {
        sub_762C40(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v55 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_75C2B0(v72, v55);
        goto LABEL_61;
      }
      v8 = 0xFFFFFFFF0LL;
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
        v8 = 16LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      v10 = v8 + v9;
      v11 = *(_QWORD *)(a1 + 144);
      v12 = *(_QWORD *)v10;
      v13 = *(_DWORD *)(a1 + 152) + 1;
      *(_DWORD *)(a1 + 152) = v13;
      v70 = v12;
      estimated_alloc_size_0 = Z3_get_estimated_alloc_size_0(v7, a2);
      v15 = v70;
      if ( *(_QWORD *)(v11 + 112) < estimated_alloc_size_0 )
      {
        v69 = (char **)__cxa_allocate_exception(0x28u);
        sub_75C2B0(v72, off_1C7E178);
        *v69 = (char *)off_1C63670;
        sub_2333C0(v69 + 1, v72);
        sub_233E40((__int64)v72);
        __cxa_throw(v69, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( *(_DWORD *)(v11 + 120) < v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_75C2B0(v72, off_1C7E168[0]);
LABEL_61:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v72);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v72);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFCC) != 0 )
        break;
      if ( (*(_BYTE *)(v10 + 8) & 1) == 0 )
        break;
      v38 = sub_1680FB0(*(_QWORD *)(a1 + 32), v70, 0);
      v15 = v70;
      v39 = v38;
      if ( !v38 )
        break;
      v40 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v38 + 8);
      if ( v40 )
      {
        v41 = *((_DWORD *)v40 - 1);
        if ( v41 == *((_DWORD *)v40 - 2) )
        {
          v56 = (3 * v41 + 1) >> 1;
          v57 = 8 * v56 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v57 || v41 >= v56 )
          {
LABEL_70:
            v68 = (char **)__cxa_allocate_exception(0x28u);
            sub_75C2B0(v72, "Overflow encountered when expanding vector");
            *v68 = (char *)off_1C63128;
            sub_2333C0(v68 + 1, v72);
            sub_233E40((__int64)v72);
            __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (unsigned int *)sub_186B300(v40 - 1, v57);
          v15 = v70;
          v59 = v58[1];
          v40 = v58 + 2;
          *v58 = v56;
          *(_QWORD *)(a1 + 56) = v58 + 2;
          LODWORD(v58) = v59;
          v44 = &v40[v59];
          v43 = (_DWORD)v58 + 1;
        }
        else
        {
          v42 = v41;
          v43 = v41 + 1;
          v44 = &v40[v42];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x18u);
        v15 = v70;
        v65 = v64;
        *v64 = 2;
        v43 = 1;
        v40 = v65 + 1;
        *(_QWORD *)(a1 + 56) = v40;
        v44 = v40;
      }
      *v44 = v39;
      v45 = *(_QWORD *)(a1 + 72);
      *((_DWORD *)v40 - 1) = v43;
      v71 = v15;
      v46 = sub_1680FB0(v45, v15, 0);
      v47 = v71;
      v48 = v46;
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      v49 = *(_QWORD **)(a1 + 88);
      if ( v49 )
      {
        v50 = *((_DWORD *)v49 - 1);
        if ( v50 == *((_DWORD *)v49 - 2) )
        {
          v60 = (3 * v50 + 1) >> 1;
          v61 = 8 * v60 + 8;
          if ( 8 * v50 + 8 >= (unsigned int)v61 || v50 >= v60 )
            goto LABEL_70;
          v62 = (unsigned int *)sub_186B300(v49 - 1, v61);
          v47 = v71;
          v63 = v62[1];
          v49 = v62 + 2;
          *v62 = v60;
          *(_QWORD *)(a1 + 88) = v62 + 2;
          LODWORD(v62) = v63;
          v53 = &v49[v63];
          v52 = (_DWORD)v62 + 1;
        }
        else
        {
          v51 = v50;
          v52 = v50 + 1;
          v53 = &v49[v51];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        v47 = v71;
        v67 = v66;
        *v66 = 2;
        v52 = 1;
        v49 = v67 + 1;
        *(_QWORD *)(a1 + 88) = v49;
        v53 = v49;
      }
      *v53 = v48;
      *((_DWORD *)v49 - 1) = v52;
      v6 = *(_QWORD *)(a1 + 40);
      a2 = *(unsigned int *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = a2 - 1;
      if ( (_DWORD)a2 != 1 && v47 != v39 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(a2 - 2) + 8) |= 2u;
    }
    v16 = *(_WORD *)(v15 + 4);
    if ( v16 == 1 )
    {
      a2 = v15;
      --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
      sub_762C90((_QWORD *)a1, v15);
      v6 = *(_QWORD *)(a1 + 40);
    }
    else
    {
      if ( v16 == 2 )
        sub_764B20(a1, v15, v10);
      if ( v16 )
      {
        sub_1872CE0("");
        sub_1873130(114, 793);
      }
      a2 = v15;
      sub_763B00((_QWORD *)a1, v15, v10);
      v6 = *(_QWORD *)(a1 + 40);
    }
  }
LABEL_16:
  v17 = 0x7FFFFFFF8LL;
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
    v17 = 8LL * (unsigned int)(*(_DWORD *)(v18 - 4) - 1);
  v19 = *(_QWORD *)(v18 + v17);
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v20 = *v3;
  if ( *v3 && (v21 = v3[1], v22 = *(_DWORD *)(v20 + 8) == 1, --*(_DWORD *)(v20 + 8), v22) )
  {
    sub_15D7BC0(v21, v20);
    v18 = *(_QWORD *)(a1 + 56);
    *v3 = v19;
    v24 = *(_DWORD *)(v18 - 4) - 1;
  }
  else
  {
    v23 = *(_DWORD *)(v18 - 4);
    *v3 = v19;
    v24 = v23 - 1;
  }
  v25 = *(_QWORD *)(v18 + 8LL * v24);
  *(_DWORD *)(v18 - 4) = v24;
  if ( v25 )
  {
    v26 = *(_QWORD *)(a1 + 48);
    v22 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v26, v25);
  }
  v27 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    v27 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v29 = *(_QWORD *)(result + v27);
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v30 = *a3;
  if ( *a3 )
  {
    v31 = a3[1];
    v22 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v31, v30);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v32 = *(_DWORD *)(result - 4);
  *a3 = v29;
  v33 = *(_QWORD *)(result + 8LL * (unsigned int)(v32 - 1));
  *(_DWORD *)(result - 4) = v32 - 1;
  if ( v33 && (v34 = *(_QWORD *)(a1 + 80), v22 = *(_DWORD *)(v33 + 8) == 1, --*(_DWORD *)(v33 + 8), v22) )
  {
    result = sub_15D7BC0(v34, v33);
    if ( *a3 )
      return result;
  }
  else if ( v29 )
  {
    return result;
  }
  result = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v35 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v36 = *a3;
  if ( *a3 )
  {
    v37 = a3[1];
    v22 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v22 )
      result = sub_15D7BC0(v37, v36);
  }
  *a3 = v35;
  return result;
}

