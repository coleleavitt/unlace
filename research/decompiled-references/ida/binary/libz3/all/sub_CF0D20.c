__int64 __fastcall sub_CF0D20(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r14
  __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // ecx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r15
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r13
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  int v47; // ecx
  char **exception; // rbp
  const char *v49; // rax
  unsigned int v50; // r13d
  unsigned int v51; // ecx
  unsigned int *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // ecx
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  char **v60; // rbp
  unsigned int v61; // [rsp+Ch] [rbp-5Ch]
  __int64 v62[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_CED990(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v49 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_CECA40(v62, v49);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v62);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v62);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v7 = 0xFFFFFFFF0LL;
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
        v7 = 16LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
      v9 = v7 + v8;
      v10 = *(_QWORD *)v9;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v9 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v9 + 8) & 1) == 0
        || (v32 = sub_1680FB0(*(_QWORD *)(a1 + 32), v10, 0), (v33 = v32) == 0) )
      {
        v11 = *(_WORD *)(v10 + 4);
        if ( v11 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_CED9E0((_QWORD *)a1, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v11 == 2 )
        {
          sub_CEFC20(a1, v10, v9);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v11 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_CEE8A0((_QWORD *)a1, v10, v9);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v34 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v32 + 8);
      if ( v34 )
      {
        v35 = *((_DWORD *)v34 - 1);
        if ( v35 == *((_DWORD *)v34 - 2) )
        {
          v50 = (3 * v35 + 1) >> 1;
          v51 = 8 * v50 + 8;
          if ( 8 * v35 + 8 >= v51 || v35 >= v50 )
          {
LABEL_66:
            v60 = (char **)__cxa_allocate_exception(0x28u);
            sub_CECA40(v62, "Overflow encountered when expanding vector");
            *v60 = (char *)off_1C63128;
            sub_2333C0(v60 + 1, v62);
            sub_233E40((__int64)v62);
            __cxa_throw(v60, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (unsigned int *)sub_186B300(v34 - 1, v51);
          v53 = v52[1];
          v34 = v52 + 2;
          *v52 = v50;
          *(_QWORD *)(a1 + 56) = v52 + 2;
          LODWORD(v52) = v53;
          v38 = &v34[v53];
          v37 = (_DWORD)v52 + 1;
        }
        else
        {
          v36 = v35;
          v37 = v35 + 1;
          v38 = &v34[v36];
        }
      }
      else
      {
        v58 = (_QWORD *)sub_186B270(0x18u);
        *v58 = 2;
        v37 = 1;
        v34 = v58 + 1;
        *(_QWORD *)(a1 + 56) = v34;
        v38 = v34;
      }
      *v38 = v33;
      v39 = *(_QWORD *)(a1 + 72);
      *((_DWORD *)v34 - 1) = v37;
      v40 = sub_1680FB0(v39, v10, 0);
      v41 = v40;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      v42 = *(_QWORD **)(a1 + 88);
      if ( v42 )
      {
        v43 = *((_DWORD *)v42 - 1);
        if ( v43 == *((_DWORD *)v42 - 2) )
        {
          v54 = (3 * v43 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v43 + 8 >= (unsigned int)v55 || v43 >= v54 )
            goto LABEL_66;
          v61 = (3 * v43 + 1) >> 1;
          v56 = (unsigned int *)sub_186B300(v42 - 1, v55);
          v42 = v56 + 2;
          *v56 = v61;
          v57 = v56[1];
          *(_QWORD *)(a1 + 88) = v56 + 2;
          LODWORD(v56) = v57;
          v46 = &v42[v57];
          v45 = (_DWORD)v56 + 1;
        }
        else
        {
          v44 = v43;
          v45 = v43 + 1;
          v46 = &v42[v44];
        }
      }
      else
      {
        v59 = (_QWORD *)sub_186B270(0x18u);
        *v59 = 2;
        v45 = 1;
        v42 = v59 + 1;
        *(_QWORD *)(a1 + 88) = v42;
        v46 = v42;
      }
      *v46 = v41;
      *((_DWORD *)v42 - 1) = v45;
      v6 = *(_QWORD *)(a1 + 40);
      v47 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v47 - 1;
      if ( v47 != 1 && v10 != v33 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v47 - 2) + 8) |= 2u;
    }
  }
  v12 = 0x7FFFFFFF8LL;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
    v12 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v14 = *(_QWORD *)(v13 + v12);
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v15 = *a2;
  if ( *a2 )
  {
    v16 = a2[1];
    v17 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v17 )
    {
      sub_15D7BC0(v16, v15);
      v13 = *(_QWORD *)(a1 + 56);
    }
  }
  v18 = *(_DWORD *)(v13 - 4);
  *a2 = v14;
  v19 = *(_QWORD *)(v13 + 8LL * (unsigned int)(v18 - 1));
  *(_DWORD *)(v13 - 4) = v18 - 1;
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 48);
    v17 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v20, v19);
  }
  v21 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    v21 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v23 = *(_QWORD *)(result + v21);
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  v24 = *a3;
  if ( *a3 )
  {
    v25 = a3[1];
    v17 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v17 )
    {
      sub_15D7BC0(v25, v24);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v26 = *(_DWORD *)(result - 4);
  *a3 = v23;
  v27 = *(_QWORD *)(result + 8LL * (unsigned int)(v26 - 1));
  *(_DWORD *)(result - 4) = v26 - 1;
  if ( v27 && (v28 = *(_QWORD *)(a1 + 80), v17 = *(_DWORD *)(v27 + 8) == 1, --*(_DWORD *)(v27 + 8), v17) )
  {
    result = sub_15D7BC0(v28, v27);
    if ( *a3 )
      return result;
  }
  else if ( v23 )
  {
    return result;
  }
  result = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v29 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v30 = *a3;
  if ( *a3 )
  {
    v31 = a3[1];
    v17 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v17 )
      result = sub_15D7BC0(v31, v30);
  }
  *a3 = v29;
  return result;
}

