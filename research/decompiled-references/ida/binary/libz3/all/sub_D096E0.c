__int64 __fastcall sub_D096E0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // eax
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
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  _QWORD *v61; // rdx
  char **v62; // rbp
  unsigned int v63; // [rsp+Ch] [rbp-5Ch]
  __int64 v64[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
  while ( v6 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v6 - 4) )
        goto LABEL_15;
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_D049A0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v51 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_D03640(v64, v51);
        goto LABEL_59;
      }
      v7 = 0xFFFFFFFF0LL;
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
        v7 = 16LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
      v9 = v7 + v8;
      v10 = *(_QWORD *)(a1 + 144);
      v11 = *(_QWORD *)v9;
      v12 = *(_DWORD *)(a1 + 152) + 1;
      *(_DWORD *)(a1 + 152) = v12;
      if ( v12 >= *(_DWORD *)(v10 + 20) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D03640(v64, off_1C7E168[0]);
LABEL_59:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v64);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v64);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      if ( (*(_DWORD *)(v9 + 8) & 0xFFFFFFCC) != 0 )
        break;
      if ( (*(_BYTE *)(v9 + 8) & 1) == 0 )
        break;
      v34 = sub_1680FB0(*(_QWORD *)(a1 + 32), v11, 0);
      v35 = v34;
      if ( !v34 )
        break;
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
LABEL_68:
            v62 = (char **)__cxa_allocate_exception(0x28u);
            sub_D03640(v64, "Overflow encountered when expanding vector");
            *v62 = (char *)off_1C63128;
            sub_2333C0(v62 + 1, v64);
            sub_233E40((__int64)v64);
            __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
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
        v60 = (_QWORD *)sub_186B270(0x18u);
        *v60 = 2;
        v39 = 1;
        v36 = v60 + 1;
        *(_QWORD *)(a1 + 56) = v36;
        v40 = v36;
      }
      *v40 = v35;
      v41 = *(_QWORD *)(a1 + 72);
      *((_DWORD *)v36 - 1) = v39;
      v42 = sub_1680FB0(v41, v11, 0);
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
          v57 = 8 * v56 + 8;
          if ( 8 * v45 + 8 >= (unsigned int)v57 || v45 >= v56 )
            goto LABEL_68;
          v63 = (3 * v45 + 1) >> 1;
          v58 = (unsigned int *)sub_186B300(v44 - 1, v57);
          v44 = v58 + 2;
          *v58 = v63;
          v59 = v58[1];
          *(_QWORD *)(a1 + 88) = v58 + 2;
          LODWORD(v58) = v59;
          v48 = &v44[v59];
          v47 = (_DWORD)v58 + 1;
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
        v61 = (_QWORD *)sub_186B270(0x18u);
        *v61 = 2;
        v47 = 1;
        v44 = v61 + 1;
        *(_QWORD *)(a1 + 88) = v44;
        v48 = v44;
      }
      *v48 = v43;
      *((_DWORD *)v44 - 1) = v47;
      v6 = *(_QWORD *)(a1 + 40);
      v49 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v49 - 1;
      if ( v49 != 1 && v11 != v35 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v49 - 2) + 8) |= 2u;
    }
    v13 = *(_WORD *)(v11 + 4);
    if ( v13 == 1 )
    {
      --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
      sub_D04C80((_QWORD *)a1, v11);
      v6 = *(_QWORD *)(a1 + 40);
    }
    else if ( v13 == 2 )
    {
      sub_D088E0(a1, v11, v9);
      v6 = *(_QWORD *)(a1 + 40);
    }
    else
    {
      if ( v13 )
      {
        sub_1872CE0("");
        sub_1873130(114, 793);
      }
      sub_D07140(a1, v11, v9);
      v6 = *(_QWORD *)(a1 + 40);
    }
  }
LABEL_15:
  v14 = 0x7FFFFFFF8LL;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
  v16 = *(_QWORD *)(v15 + v14);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *a2;
  if ( *a2 )
  {
    v18 = a2[1];
    v19 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v18, v17);
      v15 = *(_QWORD *)(a1 + 56);
    }
  }
  v20 = *(_DWORD *)(v15 - 4);
  *a2 = v16;
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

