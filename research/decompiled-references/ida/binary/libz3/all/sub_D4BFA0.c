__int64 __fastcall sub_D4BFA0(__int64 a1, size_t a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r15
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 *v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r13
  _QWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rcx
  int v49; // ecx
  char **exception; // rbp
  const char *v51; // rax
  unsigned int v52; // r13d
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // ecx
  unsigned int *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rdx
  _QWORD *v60; // rdx
  char **v61; // rbp
  char **v62; // rbp
  unsigned int v63; // [rsp+Ch] [rbp-5Ch]
  __int64 v64[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (__int64 *)a2;
  v6 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 - 4) )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( !(unsigned __int8)sub_18290A0(v7) && *(_BYTE *)(a1 + 17) )
      {
        sub_D489A0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v51 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_D47290(v64, v51);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v64);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v64);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v8 = 0xFFFFFFFF0LL;
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
        v8 = 16LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      v10 = v8 + v9;
      v11 = *(_QWORD *)(a1 + 144);
      v12 = *(_QWORD *)v10;
      ++*(_DWORD *)(a1 + 152);
      if ( *(_QWORD *)(v11 + 40) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v7, a2) )
      {
        v62 = (char **)__cxa_allocate_exception(0x28u);
        sub_D47290(v64, off_1C7E178);
        *v62 = (char *)off_1C63670;
        sub_2333C0(v62 + 1, v64);
        sub_233E40((__int64)v64);
        __cxa_throw(v62, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v10 + 8) & 1) == 0
        || (v34 = sub_1680FB0(*(_QWORD *)(a1 + 32), v12, 0), (v35 = v34) == 0) )
      {
        v13 = *(_WORD *)(v12 + 4);
        if ( v13 == 1 )
        {
          a2 = v12;
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_D489F0((_QWORD *)a1, v12);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v13 == 2 )
        {
          a2 = v12;
          sub_D4AEA0(a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          a2 = v12;
          sub_D49C60((_QWORD *)a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v36 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v34 + 8);
      if ( v36 )
      {
        v37 = *((_DWORD *)v36 - 1);
        if ( v37 == *((_DWORD *)v36 - 2) )
        {
          v52 = (3 * v37 + 1) >> 1;
          v53 = 8 * v52 + 8;
          if ( 8 * v37 + 8 >= v53 || v37 >= v52 )
          {
LABEL_67:
            v61 = (char **)__cxa_allocate_exception(0x28u);
            sub_D47290(v64, "Overflow encountered when expanding vector");
            *v61 = (char *)off_1C63128;
            sub_2333C0(v61 + 1, v64);
            sub_233E40((__int64)v64);
            __cxa_throw(v61, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v54 = (unsigned int *)sub_186B300(v36 - 1, v53);
          v55 = v54[1];
          v36 = v54 + 2;
          *v54 = v52;
          *(_QWORD *)(a1 + 56) = v54 + 2;
          LODWORD(v54) = v55;
          v40 = &v36[v55];
          v39 = (_DWORD)v54 + 1;
        }
        else
        {
          v38 = v37;
          v39 = v37 + 1;
          v40 = &v36[v38];
        }
      }
      else
      {
        v59 = (_QWORD *)sub_186B270(0x18u);
        *v59 = 2;
        v39 = 1;
        v36 = v59 + 1;
        *(_QWORD *)(a1 + 56) = v36;
        v40 = v36;
      }
      *v40 = v35;
      v41 = *(_QWORD *)(a1 + 72);
      a2 = v12;
      *((_DWORD *)v36 - 1) = v39;
      v42 = sub_1680FB0(v41, v12, 0);
      v43 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v44 = *(_QWORD **)(a1 + 88);
      if ( v44 )
      {
        v45 = *((_DWORD *)v44 - 1);
        if ( v45 == *((_DWORD *)v44 - 2) )
        {
          v56 = (3 * v45 + 1) >> 1;
          a2 = 8 * v56 + 8;
          if ( 8 * v45 + 8 >= (unsigned int)a2 || v45 >= v56 )
            goto LABEL_67;
          v63 = (3 * v45 + 1) >> 1;
          v57 = (unsigned int *)sub_186B300(v44 - 1, a2);
          v44 = v57 + 2;
          *v57 = v63;
          v58 = v57[1];
          *(_QWORD *)(a1 + 88) = v57 + 2;
          LODWORD(v57) = v58;
          v48 = &v44[v58];
          v47 = (_DWORD)v57 + 1;
        }
        else
        {
          v46 = v45;
          v47 = v45 + 1;
          v48 = &v44[v46];
        }
      }
      else
      {
        v60 = (_QWORD *)sub_186B270(0x18u);
        *v60 = 2;
        v47 = 1;
        v44 = v60 + 1;
        *(_QWORD *)(a1 + 88) = v44;
        v48 = v44;
      }
      *v48 = v43;
      *((_DWORD *)v44 - 1) = v47;
      v6 = *(_QWORD *)(a1 + 40);
      v49 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v49 - 1;
      if ( v49 != 1 && v35 != v12 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v49 - 2) + 8) |= 2u;
    }
  }
  v14 = 0x7FFFFFFF8LL;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
  v16 = *(_QWORD *)(v15 + v14);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *v3;
  if ( *v3 )
  {
    v18 = v3[1];
    v19 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v18, v17);
      v15 = *(_QWORD *)(a1 + 56);
    }
  }
  v20 = *(_DWORD *)(v15 - 4);
  *v3 = v16;
  v21 = *(_QWORD *)(v15 + 8LL * (unsigned int)(v20 - 1));
  *(_DWORD *)(v15 - 4) = v20 - 1;
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 48);
    v19 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v22, v21);
  }
  v23 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    v23 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v25 = *(_QWORD *)(result + v23);
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26 = *a3;
  if ( *a3 )
  {
    v27 = a3[1];
    v19 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v27, v26);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v28 = *(_DWORD *)(result - 4);
  *a3 = v25;
  v29 = *(_QWORD *)(result + 8LL * (unsigned int)(v28 - 1));
  *(_DWORD *)(result - 4) = v28 - 1;
  if ( v29 && (v30 = *(_QWORD *)(a1 + 80), v19 = *(_DWORD *)(v29 + 8) == 1, --*(_DWORD *)(v29 + 8), v19) )
  {
    result = sub_15D7BC0(v30, v29);
    if ( *a3 )
      return result;
  }
  else if ( v25 )
  {
    return result;
  }
  result = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v31 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v32 = *a3;
  if ( *a3 )
  {
    v33 = a3[1];
    v19 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v19 )
      result = sub_15D7BC0(v33, v32);
  }
  *a3 = v31;
  return result;
}

