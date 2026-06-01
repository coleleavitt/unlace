_QWORD *__fastcall sub_7779A0(__int64 a1, __int64 a2, __int64 **a3)
{
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // r14
  _QWORD *v10; // rbp
  __int64 *v11; // r15
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // r13
  int v16; // eax
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  _QWORD *v22; // rsi
  __int64 *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // rbx
  __int64 *v27; // r13
  __int64 v28; // r12
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // edx
  size_t v44; // rsi
  unsigned int *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+Ch] [rbp-6Ch]
  unsigned int v48; // [rsp+Ch] [rbp-6Ch]
  __int64 v49[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !*(_DWORD *)(a2 + 12) )
    return nullptr;
  v7 = sub_186B270(0x50u);
  v8 = *(unsigned int *)(a2 + 8);
  v9 = *(__int64 **)a2;
  *(_DWORD *)(v7 + 8) = 0;
  v10 = (_QWORD *)v7;
  *(_QWORD *)(v7 + 16) = 0;
  *(_BYTE *)(v7 + 24) = 1;
  v11 = &v9[2 * v8];
  *(_QWORD *)v7 = &off_1C6A3B8;
  *(_QWORD *)(v7 + 32) = a1;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = a1;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = a1;
  *(_QWORD *)(v7 + 72) = 0;
  if ( v9 != v11 )
  {
    while ( (unsigned __int64)*v9 <= 1 )
    {
      v9 += 2;
      if ( v11 == v9 )
        goto LABEL_22;
    }
    if ( v11 != v9 )
    {
      v12 = *v9;
      if ( *v9 )
        ++*(_DWORD *)(v12 + 8);
      v13 = (_QWORD *)sub_186B270(0x18u);
      v14 = v13 + 1;
      v10[5] = v13 + 1;
      v15 = v13 + 1;
      *v13 = 2;
      v16 = 1;
      while ( 1 )
      {
        *v14 = v12;
        v17 = v9[1];
        *((_DWORD *)v15 - 1) = v16;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v18 = (_QWORD *)v10[7];
        if ( v18 )
        {
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 == *((_DWORD *)v18 - 2) )
          {
            v35 = (3 * v19 + 1) >> 1;
            v36 = 8 * v35 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v36 || v19 >= v35 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v49, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v49);
              sub_233E40((__int64)v49);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v47 = (3 * v19 + 1) >> 1;
            v37 = (unsigned int *)sub_186B300(v18 - 1, v36);
            v38 = v37[1];
            v18 = v37 + 2;
            v10[7] = v37 + 2;
            *v37 = v47;
            LODWORD(v37) = v38;
            v22 = &v18[v38];
            v21 = (_DWORD)v37 + 1;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v18[v20];
          }
        }
        else
        {
          v46 = (_QWORD *)sub_186B270(0x18u);
          v18 = v46 + 1;
          v10[7] = v46 + 1;
          v22 = v46 + 1;
          *v46 = 2;
          v21 = 1;
        }
        *v22 = v17;
        *((_DWORD *)v18 - 1) = v21;
        v23 = v9 + 2;
        if ( v11 == v9 + 2 )
          break;
        while ( 1 )
        {
          v12 = *v23;
          v9 = v23;
          if ( (unsigned __int64)*v23 > 1 )
            break;
          v23 += 2;
          if ( v11 == v23 )
            goto LABEL_22;
        }
        if ( v11 == v23 )
          break;
        ++*(_DWORD *)(v12 + 8);
        v24 = *((_DWORD *)v15 - 1);
        if ( v24 == *((_DWORD *)v15 - 2) )
        {
          v43 = (3 * v24 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v24 + 8 >= (unsigned int)v44 || v24 >= v43 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v49, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v49);
            sub_233E40((__int64)v49);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v48 = (3 * v24 + 1) >> 1;
          v45 = (unsigned int *)sub_186B300(v15 - 1, v44);
          v15 = v45 + 2;
          v10[5] = v45 + 2;
          *v45 = v48;
          LODWORD(v45) = v45[1];
          v14 = &v15[(unsigned int)v45];
          v16 = (_DWORD)v45 + 1;
        }
        else
        {
          v25 = v24;
          v16 = v24 + 1;
          v14 = &v15[v25];
        }
      }
    }
  }
LABEL_22:
  v26 = *a3;
  if ( *a3 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 != v27 )
    {
      v28 = *v26;
      if ( *v26 )
        ++*(_DWORD *)(v28 + 8);
      v29 = (_QWORD *)sub_186B270(0x18u);
      v30 = v29 + 1;
      *v29 = 2;
      v31 = 1;
      v10[9] = v30;
      v32 = v30;
      while ( 1 )
      {
        ++v26;
        *v30 = v28;
        *(v32 - 1) = v31;
        if ( v27 == v26 )
          break;
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
            ++*(_DWORD *)(v28 + 8);
          v33 = *(v32 - 1);
          if ( v33 == *(v32 - 2) )
            break;
          ++v26;
          *(_QWORD *)&v32[2 * v33] = v28;
          *(v32 - 1) = v33 + 1;
          if ( v27 == v26 )
            return v10;
        }
        v39 = (3 * v33 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * v33 + 8 >= (unsigned int)v40 || v33 >= v39 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v49, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v32 - 2, v40);
        v42 = v41[1];
        v32 = v41 + 2;
        *v41 = v39;
        v10[9] = v41 + 2;
        LODWORD(v41) = v42;
        v30 = &v32[2 * v42];
        v31 = (_DWORD)v41 + 1;
      }
    }
  }
  return v10;
}

