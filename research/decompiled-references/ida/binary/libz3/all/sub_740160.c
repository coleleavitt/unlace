__int64 __fastcall sub_740160(__int64 a1, size_t a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  char **v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  int v29; // ecx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int16 v32; // ax
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r15
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r13
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 *v50; // rcx
  int v51; // ecx
  char **exception; // r12
  const char *v53; // rax
  unsigned int v54; // r13d
  unsigned int v55; // ecx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rdx
  _QWORD *v62; // rdx
  char **v63; // rbx
  char **v64; // rbx
  unsigned int v65; // [rsp+Ch] [rbp-5Ch]
  __int64 v66[11]; // [rsp+10h] [rbp-58h] BYREF

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
        sub_738C10(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v53 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_737700(v66, v53);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v66);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v8 = 0xFFFFFFFF0LL;
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
        v8 = 16LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      v10 = v8 + v9;
      v11 = *(_QWORD *)(a1 + 144);
      v12 = *(_QWORD *)v10;
      v13 = (unsigned int)(*(_DWORD *)(a1 + 152) + 1);
      *(_DWORD *)(a1 + 152) = v13;
      if ( *(_QWORD *)(v11 + 232) < v13 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        sub_737700(v66, off_1C7E168[0]);
        *v14 = (char *)off_1C63128;
        sub_2333C0(v14 + 1, v66);
        *v14 = (char *)off_1C650D8;
        sub_233E40((__int64)v66);
        __cxa_throw(v14, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      if ( *(_QWORD *)(v11 + 240) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v7, a2) )
      {
        v64 = (char **)__cxa_allocate_exception(0x28u);
        sub_737700(v66, off_1C7E178);
        *v64 = (char *)off_1C63670;
        sub_2333C0(v64 + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(v64, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v10 + 8) & 1) == 0
        || (v36 = sub_1680FB0(*(_QWORD *)(a1 + 32), v12, 0), (v37 = v36) == 0) )
      {
        v32 = *(_WORD *)(v12 + 4);
        if ( v32 == 1 )
        {
          a2 = v12;
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_739A30((_QWORD *)a1, v12);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v32 == 2 )
        {
          a2 = v12;
          sub_73F360(a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v32 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          a2 = v12;
          sub_73D400((_QWORD *)a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v38 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v36 + 8);
      if ( v38 )
      {
        v39 = *((_DWORD *)v38 - 1);
        if ( v39 == *((_DWORD *)v38 - 2) )
        {
          v54 = (3 * v39 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v39 + 8 >= v55 || v39 >= v54 )
          {
LABEL_69:
            v63 = (char **)__cxa_allocate_exception(0x28u);
            sub_737700(v66, "Overflow encountered when expanding vector");
            *v63 = (char *)off_1C63128;
            sub_2333C0(v63 + 1, v66);
            sub_233E40((__int64)v66);
            __cxa_throw(v63, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v56 = (unsigned int *)sub_186B300(v38 - 1, v55);
          v57 = v56[1];
          v38 = v56 + 2;
          *v56 = v54;
          *(_QWORD *)(a1 + 56) = v56 + 2;
          LODWORD(v56) = v57;
          v42 = &v38[v57];
          v41 = (_DWORD)v56 + 1;
        }
        else
        {
          v40 = v39;
          v41 = v39 + 1;
          v42 = &v38[v40];
        }
      }
      else
      {
        v61 = (_QWORD *)sub_186B270(0x18u);
        *v61 = 2;
        v41 = 1;
        v38 = v61 + 1;
        *(_QWORD *)(a1 + 56) = v38;
        v42 = v38;
      }
      *v42 = v37;
      v43 = *(_QWORD *)(a1 + 72);
      a2 = v12;
      *((_DWORD *)v38 - 1) = v41;
      v44 = sub_1680FB0(v43, v12, 0);
      v45 = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      v46 = *(_QWORD **)(a1 + 88);
      if ( v46 )
      {
        v47 = *((_DWORD *)v46 - 1);
        if ( v47 == *((_DWORD *)v46 - 2) )
        {
          v58 = (3 * v47 + 1) >> 1;
          a2 = 8 * v58 + 8;
          if ( 8 * v47 + 8 >= (unsigned int)a2 || v47 >= v58 )
            goto LABEL_69;
          v65 = (3 * v47 + 1) >> 1;
          v59 = (unsigned int *)sub_186B300(v46 - 1, a2);
          v46 = v59 + 2;
          *v59 = v65;
          v60 = v59[1];
          *(_QWORD *)(a1 + 88) = v59 + 2;
          LODWORD(v59) = v60;
          v50 = &v46[v60];
          v49 = (_DWORD)v59 + 1;
        }
        else
        {
          v48 = v47;
          v49 = v47 + 1;
          v50 = &v46[v48];
        }
      }
      else
      {
        v62 = (_QWORD *)sub_186B270(0x18u);
        *v62 = 2;
        v49 = 1;
        v46 = v62 + 1;
        *(_QWORD *)(a1 + 88) = v46;
        v50 = v46;
      }
      *v50 = v45;
      *((_DWORD *)v46 - 1) = v49;
      v6 = *(_QWORD *)(a1 + 40);
      v51 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v51 - 1;
      if ( v51 != 1 && v12 != v37 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v51 - 2) + 8) |= 2u;
    }
  }
  v15 = 0x7FFFFFFF8LL;
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
    v15 = 8LL * (unsigned int)(*(_DWORD *)(v16 - 4) - 1);
  v17 = *(_QWORD *)(v16 + v15);
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v18 = *v3;
  if ( *v3 )
  {
    v19 = v3[1];
    v20 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v20 )
    {
      sub_15D7BC0(v19, v18);
      v16 = *(_QWORD *)(a1 + 56);
    }
  }
  v21 = *(_DWORD *)(v16 - 4);
  *v3 = v17;
  v22 = *(_QWORD *)(v16 + 8LL * (unsigned int)(v21 - 1));
  *(_DWORD *)(v16 - 4) = v21 - 1;
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 48);
    v20 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v20 )
      sub_15D7BC0(v23, v22);
  }
  v24 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    v24 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v26 = *(_QWORD *)(result + v24);
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v27 = *a3;
  if ( *a3 )
  {
    v28 = a3[1];
    v20 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v20 )
    {
      sub_15D7BC0(v28, v27);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v29 = *(_DWORD *)(result - 4);
  *a3 = v26;
  v30 = *(_QWORD *)(result + 8LL * (unsigned int)(v29 - 1));
  *(_DWORD *)(result - 4) = v29 - 1;
  if ( v30 && (v31 = *(_QWORD *)(a1 + 80), v20 = *(_DWORD *)(v30 + 8) == 1, --*(_DWORD *)(v30 + 8), v20) )
  {
    result = sub_15D7BC0(v31, v30);
    if ( *a3 )
      return result;
  }
  else if ( v26 )
  {
    return result;
  }
  result = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v33 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v34 = *a3;
  if ( *a3 )
  {
    v35 = a3[1];
    v20 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v20 )
      result = sub_15D7BC0(v35, v34);
  }
  *a3 = v33;
  return result;
}

