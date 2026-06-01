__int64 __fastcall sub_E38680(std::chrono::_V2::steady_clock *a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  std::ios_base *v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // rax
  __int64 *v24; // r12
  _QWORD *v25; // rsi
  int v26; // eax
  __int64 *v27; // rbp
  _QWORD *v28; // r14
  unsigned int v29; // eax
  __int64 *v30; // rbp
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  char **exception; // rbp
  __int64 v40; // rdx
  __int64 v41; // [rsp+0h] [rbp-88h]
  unsigned int v43; // [rsp+8h] [rbp-80h]
  double v44; // [rsp+10h] [rbp-78h]
  __int64 v45; // [rsp+18h] [rbp-70h]
  _QWORD v46[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v47[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a2;
  v4 = (__int64)a1;
  v5 = *((_QWORD *)a1 + 18);
  if ( v5 )
  {
    a1 = *((std::chrono::_V2::steady_clock **)a1 + 19);
    v6 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(a1, v5);
  }
  *(_QWORD *)(v4 + 144) = 0;
  v7 = *(_QWORD *)(v4 + 120);
  v41 = v7;
  if ( !*(_BYTE *)(v7 + 56) )
  {
    *(_QWORD *)(v7 + 40) = std::chrono::_V2::steady_clock::now(a1);
    v7 = *(_QWORD *)(v4 + 120);
    *(_BYTE *)(v41 + 56) = 1;
  }
  ++*(_DWORD *)(v7 + 24);
  v8 = std::chrono::_V2::steady_clock::now(a1);
  v9 = *(_QWORD *)(v4 + 176);
  v10 = v8;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 - 4);
    if ( *(_DWORD *)(v4 + 184) < v11 )
    {
      do
      {
        v13 = *(_QWORD *)(v4 + 8);
        v14 = sub_15E1B70(v13);
        v15 = *(_QWORD *)(v4 + 160);
        v16 = v14;
        if ( v14 )
        {
          ++*(_DWORD *)(v14 + 8);
          sub_E5EBF0(v15, v14);
          v6 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v13, v16);
        }
        else
        {
          sub_E5EBF0(v15, 0);
        }
        v12 = *(_DWORD *)(v4 + 184) + 1;
        *(_DWORD *)(v4 + 184) = v12;
      }
      while ( v12 < v11 );
    }
  }
  v17 = *(std::ios_base **)(v4 + 160);
  v18 = sub_E60CB0(v17, v3, (int)a3);
  v19 = std::chrono::_V2::steady_clock::now(v17) - v10;
  if ( v18 )
  {
    if ( v18 == 1 )
    {
      v21 = *(_QWORD *)(v4 + 120);
      *(_QWORD *)(v21 + 72) += v19;
      ++*(_DWORD *)(v21 + 28);
      v6 = *(_BYTE *)(v4 + 210) == 0;
      *(_DWORD *)(v4 + 52) = 1;
      if ( v6 )
        goto LABEL_17;
      goto LABEL_21;
    }
  }
  else
  {
    v33 = *(_QWORD *)(v4 + 120);
    *(_QWORD *)(v33 + 96) += v19;
    ++*(_DWORD *)(v33 + 32);
  }
  v6 = *(_BYTE *)(v4 + 210) == 0;
  *(_DWORD *)(v4 + 52) = v18;
  if ( v6 )
    goto LABEL_17;
LABEL_21:
  v44 = (double)(int)(v19 / 1000000) / 1000.0;
  if ( v44 >= *(double *)(v4 + 216) )
  {
    v45 = *(_QWORD *)(v4 + 8);
    v46[0] = v45;
    if ( (_DWORD)v3 )
    {
      v22 = *a3;
      if ( *a3 )
        ++*(_DWORD *)(v22 + 8);
      v23 = (_QWORD *)sub_186B270(0x18u);
      v24 = a3;
      v25 = v23 + 1;
      *v23 = 2;
      v26 = 1;
      v27 = &a3[v3];
      v28 = v25;
      while ( 1 )
      {
        ++v24;
        *v25 = v22;
        *((_DWORD *)v28 - 1) = v26;
        if ( v27 == v24 )
          break;
        while ( 1 )
        {
          v22 = *v24;
          if ( *v24 )
            ++*(_DWORD *)(v22 + 8);
          v29 = *((_DWORD *)v28 - 1);
          if ( v29 == *((_DWORD *)v28 - 2) )
            break;
          ++v24;
          v28[v29] = v22;
          *((_DWORD *)v28 - 1) = v29 + 1;
          if ( v27 == v24 )
            goto LABEL_31;
        }
        v35 = (3 * v29 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v29 + 8 >= (unsigned int)v36 || v29 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_180DB2(v47, "Overflow encountered when expanding vector", v40);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v43 = (3 * v29 + 1) >> 1;
        v37 = (unsigned int *)sub_186B300(v28 - 1, v36);
        v38 = v37[1];
        v28 = v37 + 2;
        *v37 = v43;
        LODWORD(v37) = v38;
        v25 = &v28[v38];
        v26 = (_DWORD)v37 + 1;
      }
    }
    else
    {
      v28 = nullptr;
    }
LABEL_31:
    v17 = (std::ios_base *)v4;
    v46[1] = v28;
    v47[0] = 0;
    sub_E373D0(v4, (__int64)v46, (__int64)v47, v18, v44);
    if ( v28 )
    {
      v30 = v28;
      v31 = (unsigned __int64)&v28[*((unsigned int *)v28 - 1)];
      if ( (unsigned __int64)v28 < v31 )
      {
        do
        {
          v32 = *v30;
          if ( *v30 )
          {
            v6 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v6 )
              sub_15D7BC0(v45, v32);
          }
          ++v30;
        }
        while ( (unsigned __int64)v30 < v31 );
      }
      v17 = (std::ios_base *)(v28 - 1);
      sub_186B220(v28 - 1);
    }
  }
LABEL_17:
  if ( *(_BYTE *)(v41 + 56) )
  {
    v34 = std::chrono::_V2::steady_clock::now(v17) - *(_QWORD *)(v41 + 40);
    *(_BYTE *)(v41 + 56) = 0;
    *(_QWORD *)(v41 + 48) += v34;
  }
  return v18;
}

