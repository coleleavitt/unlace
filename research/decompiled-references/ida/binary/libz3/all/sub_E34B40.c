void __fastcall sub_E34B40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 *v10; // rcx
  __int64 *v11; // rbp
  unsigned int v12; // r12d
  __int64 v13; // rbp
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  _QWORD *v18; // rsi
  unsigned int v19; // r13d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rdx
  unsigned int v28; // r13d
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r14
  unsigned int v33; // ebp
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  char **exception; // rbp
  __int64 v40; // rdx
  __int64 v41[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( a2 == *(_QWORD *)(v2 + 856) )
    return;
  if ( *(_BYTE *)(a1 + 209) )
  {
    v27 = *(_QWORD *)(a1 + 176);
    if ( v27 )
    {
      v28 = *(_DWORD *)(v27 - 4);
      if ( *(_DWORD *)(a1 + 184) < v28 )
      {
        while ( 1 )
        {
          v30 = sub_15E1B70(v2);
          v31 = *(_QWORD *)(a1 + 160);
          v32 = v30;
          if ( v30 )
          {
            ++*(_DWORD *)(v30 + 8);
            sub_E5EBF0(v31, v30);
            v26 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v26 )
              sub_15D7BC0(v2, v32);
          }
          else
          {
            sub_E5EBF0(v31, 0);
          }
          v29 = *(_DWORD *)(a1 + 184) + 1;
          *(_DWORD *)(a1 + 184) = v29;
          if ( v29 >= v28 )
            break;
          v2 = *(_QWORD *)(a1 + 8);
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 192LL))(*(_QWORD *)(a1 + 160));
    *(_WORD *)(a1 + 208) = 1;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a1 + 208) )
  {
LABEL_32:
    sub_E5EBF0(*(_QWORD *)(a1 + 160), a2);
    return;
  }
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v5 = *(_QWORD **)(a1 + 200);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v33 = (3 * v6 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v34 || v6 >= v33 )
      {
LABEL_47:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_180DB2(v41, "Overflow encountered when expanding vector", v40);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (unsigned int *)sub_186B300(v5 - 1, v34);
      v36 = v35[1];
      v5 = v35 + 2;
      *v35 = v33;
      *(_QWORD *)(a1 + 200) = v35 + 2;
      LODWORD(v35) = v36;
      v9 = &v5[v36];
      v8 = (_DWORD)v35 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v5[v7];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v5 = v38 + 1;
    *v38 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 200) = v5;
    v9 = v5;
  }
  *v9 = a2;
  *((_DWORD *)v5 - 1) = v8;
  sub_15EE300(a1 + 192);
  v10 = *(__int64 **)(a1 + 200);
  v11 = v10;
  if ( v10 )
  {
    v12 = 0;
    while ( v12 < *((_DWORD *)v10 - 1) )
    {
      v13 = v10[v12];
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v14 = *(_QWORD **)(a1 + 176);
      if ( v14 )
      {
        v15 = *((_DWORD *)v14 - 1);
        if ( v15 == *((_DWORD *)v14 - 2) )
        {
          v19 = (3 * v15 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
            goto LABEL_47;
          v21 = (unsigned int *)sub_186B300(v14 - 1, v20);
          v22 = v21[1];
          v14 = v21 + 2;
          *v21 = v19;
          *(_QWORD *)(a1 + 176) = v21 + 2;
          LODWORD(v21) = v22;
          v18 = &v14[v22];
          v10 = *(__int64 **)(a1 + 200);
          v17 = (_DWORD)v21 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = &v14[v16];
        }
      }
      else
      {
        v37 = (_QWORD *)sub_186B270(0x18u);
        v10 = *(__int64 **)(a1 + 200);
        v14 = v37 + 1;
        *v37 = 2;
        v17 = 1;
        *(_QWORD *)(a1 + 176) = v14;
        v18 = v14;
      }
      *v18 = v13;
      ++v12;
      v11 = v10;
      *((_DWORD *)v14 - 1) = v17;
      if ( !v10 )
        return;
    }
    v23 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v23 )
    {
      do
      {
        while ( 1 )
        {
          v24 = *v11;
          if ( *v11 )
          {
            v25 = *(_QWORD *)(a1 + 192);
            v26 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( (unsigned __int64)++v11 >= v23 )
            goto LABEL_28;
        }
        sub_15D7BC0(v25, v24);
        ++v11;
      }
      while ( (unsigned __int64)v11 < v23 );
LABEL_28:
      v10 = *(__int64 **)(a1 + 200);
    }
    if ( v10 )
      *((_DWORD *)v10 - 1) = 0;
  }
}

