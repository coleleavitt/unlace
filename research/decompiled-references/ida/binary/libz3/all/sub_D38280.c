__int64 __fastcall sub_D38280(__int64 a1, size_t a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // r15
  __int16 v14; // ax
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
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 *v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r13
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 *v49; // rcx
  int v50; // ecx
  char **exception; // rbp
  const char *v52; // rax
  unsigned int v53; // r13d
  unsigned int v54; // ecx
  unsigned int *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  _QWORD *v61; // rdx
  char **v62; // rbp
  char **v63; // rbp
  unsigned int v64; // [rsp+Ch] [rbp-6Ch]
  __int64 v65[11]; // [rsp+20h] [rbp-58h] BYREF

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
        sub_D30DE0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v52 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_24ABB0(v65, v52);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v65);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v65);
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
      v13 = *(_QWORD **)(v11 + 8);
      if ( v13[2] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v7, a2) )
      {
        v63 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, off_1C7E178);
        *v63 = (char *)off_1C63670;
        sub_2333C0(v63 + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(v63, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      sub_EE4F40(*v13);
      if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v10 + 8) & 1) == 0
        || (v35 = sub_1680FB0(*(_QWORD *)(a1 + 32), v12, 0), (v36 = v35) == 0) )
      {
        v14 = *(_WORD *)(v12 + 4);
        if ( v14 == 1 )
        {
          a2 = v12;
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_D325A0((_QWORD *)a1, v12);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v14 == 2 )
        {
          a2 = v12;
          sub_D37400(a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v14 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          a2 = v12;
          sub_D35BA0((_QWORD *)a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v37 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v35 + 8);
      if ( v37 )
      {
        v38 = *((_DWORD *)v37 - 1);
        if ( v38 == *((_DWORD *)v37 - 2) )
        {
          v53 = (3 * v38 + 1) >> 1;
          v54 = 8 * v53 + 8;
          if ( 8 * v38 + 8 >= v54 || v38 >= v53 )
          {
LABEL_67:
            v62 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v65, "Overflow encountered when expanding vector");
            *v62 = (char *)off_1C63128;
            sub_2333C0(v62 + 1, v65);
            sub_233E40((__int64)v65);
            __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v55 = (unsigned int *)sub_186B300(v37 - 1, v54);
          v56 = v55[1];
          v37 = v55 + 2;
          *v55 = v53;
          *(_QWORD *)(a1 + 56) = v55 + 2;
          LODWORD(v55) = v56;
          v41 = &v37[v56];
          v40 = (_DWORD)v55 + 1;
        }
        else
        {
          v39 = v38;
          v40 = v38 + 1;
          v41 = &v37[v39];
        }
      }
      else
      {
        v60 = (_QWORD *)sub_186B270(0x18u);
        *v60 = 2;
        v40 = 1;
        v37 = v60 + 1;
        *(_QWORD *)(a1 + 56) = v37;
        v41 = v37;
      }
      *v41 = v36;
      v42 = *(_QWORD *)(a1 + 72);
      a2 = v12;
      *((_DWORD *)v37 - 1) = v40;
      v43 = sub_1680FB0(v42, v12, 0);
      v44 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      v45 = *(_QWORD **)(a1 + 88);
      if ( v45 )
      {
        v46 = *((_DWORD *)v45 - 1);
        if ( v46 == *((_DWORD *)v45 - 2) )
        {
          v57 = (3 * v46 + 1) >> 1;
          a2 = 8 * v57 + 8;
          if ( 8 * v46 + 8 >= (unsigned int)a2 || v46 >= v57 )
            goto LABEL_67;
          v64 = (3 * v46 + 1) >> 1;
          v58 = (unsigned int *)sub_186B300(v45 - 1, a2);
          v45 = v58 + 2;
          *v58 = v64;
          v59 = v58[1];
          *(_QWORD *)(a1 + 88) = v58 + 2;
          LODWORD(v58) = v59;
          v49 = &v45[v59];
          v48 = (_DWORD)v58 + 1;
        }
        else
        {
          v47 = v46;
          v48 = v46 + 1;
          v49 = &v45[v47];
        }
      }
      else
      {
        v61 = (_QWORD *)sub_186B270(0x18u);
        *v61 = 2;
        v48 = 1;
        v45 = v61 + 1;
        *(_QWORD *)(a1 + 88) = v45;
        v49 = v45;
      }
      *v49 = v44;
      *((_DWORD *)v45 - 1) = v48;
      v6 = *(_QWORD *)(a1 + 40);
      v50 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v50 - 1;
      if ( v50 != 1 && v36 != v12 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v50 - 2) + 8) |= 2u;
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
  v32 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v33 = *a3;
  if ( *a3 )
  {
    v34 = a3[1];
    v20 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v20 )
      result = sub_15D7BC0(v34, v33);
  }
  *a3 = v32;
  return result;
}

