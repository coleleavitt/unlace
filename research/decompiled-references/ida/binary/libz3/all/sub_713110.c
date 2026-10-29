__int64 __fastcall sub_713110(__int64 *a1, __int64 a2, unsigned int *a3)
{
  char **v3; // rbp
  __int64 v4; // rdx
  char **exception; // rbp
  __int64 v6; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r14d
  size_t v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 *v24; // r13
  __int64 *v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v29; // r15
  _QWORD *v30; // rax
  int v31; // eax
  _QWORD *v32; // rdx
  _QWORD *v33; // rbx
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 result; // rax
  _QWORD *v38; // rcx
  unsigned int v39; // ebp
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // edx
  _QWORD *v44; // rdx
  __int64 *v45; // [rsp+0h] [rbp-88h]
  _DWORD *v46; // [rsp+8h] [rbp-80h]
  unsigned int v47; // [rsp+10h] [rbp-78h]
  unsigned int v48; // [rsp+14h] [rbp-74h]
  __int64 v50[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *a3;
  v9 = a3[1];
  if ( *a3 == -1 )
  {
    v43 = 0;
    if ( v9 != -1 )
      v43 = v9;
    v47 = v43;
  }
  else
  {
    v10 = *a3;
    if ( v8 < v9 )
      v10 = v9;
    if ( v9 == -1 )
      v10 = v8;
    v47 = v10;
  }
  v11 = (_QWORD *)a1[1];
  if ( v11 )
    goto LABEL_11;
  v29 = *a1;
  v30 = (_QWORD *)sub_186B270(0x28u);
  v11 = v30 + 1;
  *v30 = 2;
  v31 = 1;
  a1[1] = (__int64)v11;
  v32 = v11;
  while ( 1 )
  {
    *v32 = v29;
    v32[1] = 0;
    *((_DWORD *)v11 - 1) = v31;
LABEL_11:
    v13 = *((_DWORD *)v11 - 1);
    if ( v47 < v13 )
      break;
    v29 = *a1;
    if ( v13 == *((_DWORD *)v11 - 2) )
    {
      v14 = (3 * v13 + 1) >> 1;
      v48 = v14;
      v15 = 16 * v14 + 8;
      if ( 16 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_109F38(v50, "Overflow encountered when expanding vector", v6);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = sub_186B270(v15);
      v17 = (__int64 *)a1[1];
      v46 = (_DWORD *)v16;
      v11 = (_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = *((unsigned int *)v17 - 1);
        v19 = v16 + 8;
        *(_DWORD *)(v16 + 4) = v18;
        v20 = v17;
        v21 = &v17[2 * v18];
        if ( v21 != v17 )
        {
          do
          {
            v22 = *v20;
            v20 += 2;
            v19 += 16;
            *(_QWORD *)(v19 - 16) = v22;
            v23 = *(v20 - 1);
            *(v20 - 1) = 0;
            *(_QWORD *)(v19 - 8) = v23;
          }
          while ( v20 != v21 );
        }
        v45 = &v17[2 * v18];
        if ( (_DWORD)v18 )
        {
          do
          {
            v24 = (__int64 *)v17[1];
            if ( v24 )
            {
              v25 = &v24[*((unsigned int *)v24 - 1)];
              if ( v24 >= v25 )
                goto LABEL_27;
              do
              {
                while ( 1 )
                {
                  v26 = *v24;
                  if ( *v24 )
                  {
                    v27 = *v17;
                    if ( (*(_DWORD *)(v26 + 8))-- == 1 )
                      break;
                  }
                  if ( ++v24 >= v25 )
                    goto LABEL_26;
                }
                sub_15D7BC0(v27, v26);
                ++v24;
              }
              while ( v24 < v25 );
LABEL_26:
              v24 = (__int64 *)v17[1];
              if ( v24 )
LABEL_27:
                sub_186B220(v24 - 1);
            }
            v17 += 2;
          }
          while ( v17 != v45 );
          v17 = (__int64 *)a1[1];
        }
        sub_186B220(v17 - 1);
        v32 = &v11[2 * (unsigned int)v46[1]];
        v31 = v46[1] + 1;
      }
      else
      {
        *(_DWORD *)(v16 + 4) = 0;
        v32 = (_QWORD *)(v16 + 8);
        v31 = 1;
      }
      a1[1] = (__int64)v11;
      *v46 = v48;
    }
    else
    {
      v12 = v13;
      v31 = v13 + 1;
      v32 = &v11[2 * v12];
    }
  }
  v33 = &v11[2 * v47];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v34 = (_QWORD *)v33[1];
  if ( v34 )
  {
    v35 = *((_DWORD *)v34 - 1);
    if ( v35 == *((_DWORD *)v34 - 2) )
    {
      v39 = (3 * v35 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v35 + 8 >= v40 || v35 >= v39 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_109F38(v50, "Overflow encountered when expanding vector", v4);
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v34 - 1, v40);
      v42 = v41[1];
      v34 = v41 + 2;
      v33[1] = v41 + 2;
      *v41 = v39;
      LODWORD(v41) = v42;
      v38 = &v34[v42];
      result = (unsigned int)((_DWORD)v41 + 1);
    }
    else
    {
      v36 = v35;
      result = v35 + 1;
      v38 = &v34[v36];
    }
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x18u);
    *v44 = 2;
    result = 1;
    v34 = v44 + 1;
    v33[1] = v34;
    v38 = v34;
  }
  *v38 = a2;
  *((_DWORD *)v34 - 1) = result;
  return result;
}

