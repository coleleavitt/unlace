__int64 __fastcall sub_4CD920(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // r8
  __int64 *v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  _QWORD *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned int v35; // r14d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  char **exception; // rbp
  __int64 v46; // rdx
  __int64 v47; // [rsp+0h] [rbp-58h] BYREF
  __int64 v48; // [rsp+8h] [rbp-50h]
  int v49; // [rsp+10h] [rbp-48h]
  int v50; // [rsp+18h] [rbp-40h]
  int v51; // [rsp+20h] [rbp-38h]
  int v52; // [rsp+28h] [rbp-30h]
  __int64 v53; // [rsp+30h] [rbp-28h]
  void *v54; // [rsp+38h] [rbp-20h]

  v7 = a1;
  v8 = (_QWORD *)a1[16];
  if ( v8 )
  {
    v9 = (__int64 *)a1[16];
    v10 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 >= v10 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = v7[15];
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v9 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( (unsigned __int64)v9 < v10 );
LABEL_8:
    v8 = (_QWORD *)v7[16];
    if ( v8 )
LABEL_9:
      *((_DWORD *)v8 - 1) = 0;
  }
  if ( *a2 && (v14 = *(_DWORD *)(*a2 - 4LL), v15 = v14 - 1, v16 = 8LL * (v14 - 1), v14 > 0) )
  {
    do
    {
      while ( 1 )
      {
        v24 = v7[13];
        if ( !v24 )
          break;
        if ( v15 >= *(_DWORD *)(v24 - 4) )
          break;
        v17 = *(_QWORD *)(v24 + v16);
        if ( !v17 )
          break;
        v18 = sub_1625BE0(v7[6], *(_QWORD *)(*a2 + v16), v17);
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v8 = (_QWORD *)v7[16];
        if ( v8 )
        {
          v20 = *((_DWORD *)v8 - 1);
          if ( v20 == *((_DWORD *)v8 - 2) )
          {
            v39 = (3 * v20 + 1) >> 1;
            v40 = 8 * v39 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v40 || v20 >= v39 )
            {
LABEL_42:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_DFB18(&v47, "Overflow encountered when expanding vector", v46);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v47);
              sub_233E40((__int64)&v47);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v41 = (unsigned int *)sub_186B300(v8 - 1, v40);
            v42 = v41[1];
            v8 = v41 + 2;
            *v41 = v39;
            v7[16] = v41 + 2;
            LODWORD(v41) = v42;
            v23 = &v8[v42];
            v22 = (_DWORD)v41 + 1;
          }
          else
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = &v8[v21];
          }
        }
        else
        {
          v44 = (_QWORD *)sub_186B270(0x18u);
          v8 = v44 + 1;
          *v44 = 2;
          v22 = 1;
          v7[16] = v8;
          v23 = v8;
        }
        --v15;
        *v23 = v19;
        v16 -= 8;
        *((_DWORD *)v8 - 1) = v22;
        if ( v15 == -1 )
          goto LABEL_26;
      }
      v8 = (_QWORD *)v7[16];
      if ( v8 )
      {
        v25 = *((_DWORD *)v8 - 1);
        if ( v25 == *((_DWORD *)v8 - 2) )
        {
          v35 = (3 * v25 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v36 || v25 >= v35 )
            goto LABEL_42;
          v37 = (unsigned int *)sub_186B300(v8 - 1, v36);
          v38 = v37[1];
          v8 = v37 + 2;
          *v37 = v35;
          v7[16] = v37 + 2;
          LODWORD(v37) = v38;
          v28 = &v8[v38];
          v27 = (_DWORD)v37 + 1;
        }
        else
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = &v8[v26];
        }
      }
      else
      {
        v43 = (_QWORD *)sub_186B270(0x18u);
        v8 = v43 + 1;
        *v43 = 2;
        v27 = 1;
        v7[16] = v8;
        v28 = v8;
      }
      --v15;
      *v28 = 0;
      v16 -= 8;
      *((_DWORD *)v8 - 1) = v27;
    }
    while ( v15 != -1 );
LABEL_26:
    v29 = v7[5];
    v30 = v7[8];
  }
  else
  {
    v29 = v7[5];
    v30 = v7[8];
    if ( !v8 )
    {
      v31 = 0;
      goto LABEL_28;
    }
  }
  v31 = *((_DWORD *)v8 - 1);
LABEL_28:
  sub_157BE40((int)&v47, v29, v30, v31, (int)v8, a6, v47, v48, v49, v50, v51, v52, v53, v54);
  sub_14B9B80(v7[7], &v47);
  v32 = v47;
  LOBYTE(v7) = *(_QWORD *)(v7[4] + 864LL) == v47;
  if ( v47 )
  {
    v33 = v48;
    v13 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v33, v32);
  }
  return (unsigned int)v7;
}

