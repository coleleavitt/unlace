void __fastcall sub_A30ED0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebp
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 *v32; // rax
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // r14d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  char **v43; // rbp
  char **v44; // rbp
  char **exception; // rbp
  __int64 v46[11]; // [rsp-58h] [rbp-58h] BYREF

  if ( a2 )
  {
    v6 = *(__int64 **)(a1 + 16);
    *(_BYTE *)(a2 + 3) |= 0x40u;
    if ( v6 )
    {
      v7 = *((unsigned int *)v6 - 1);
      if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
      {
        v17 = (unsigned int)(3 * v7 + 1) >> 1;
        v18 = 8 * v17 + 8;
        if ( 8 * (int)v7 + 8 >= (unsigned int)v18 || (unsigned int)v7 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v46, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v46);
          sub_233E40((__int64)v46);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v6 - 1, v18);
        v20 = v19[1];
        v6 = (__int64 *)(v19 + 2);
        *v19 = v17;
        *(_QWORD *)(a1 + 16) = v19 + 2;
        v8 = v20 + 1;
        *(_QWORD *)&v19[2 * v20 + 2] = a2;
        v19[1] = v20 + 1;
      }
      else
      {
        v8 = v7 + 1;
        v6[v7] = a2;
        *((_DWORD *)v6 - 1) = v7 + 1;
      }
    }
    else
    {
      v42 = (_QWORD *)sub_186B270(0x18u);
      v8 = 1;
      v42[1] = a2;
      v6 = v42 + 1;
      *(_QWORD *)(a1 + 16) = v42 + 1;
      *v42 = 0x100000002LL;
    }
    v9 = 0;
    while ( v9 < v8 )
    {
      v10 = v9++;
      v11 = v6[v10];
      if ( *(char *)(v11 + 3) < 0 )
      {
        v21 = *a3;
        if ( *a3 )
        {
          v22 = *(unsigned int *)(v21 - 4);
          if ( (_DWORD)v22 == *(_DWORD *)(v21 - 8) )
          {
            v24 = (unsigned int)(3 * v22 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * (int)v22 + 8 >= (unsigned int)v25 || (unsigned int)v22 >= v24 )
            {
              v44 = (char **)__cxa_allocate_exception(0x28u);
              sub_98B3B0(v46, "Overflow encountered when expanding vector");
              *v44 = (char *)off_1C63128;
              sub_2333C0(v44 + 1, v46);
              sub_233E40((__int64)v46);
              __cxa_throw(v44, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = (unsigned int *)sub_186B300((void *)(v21 - 8), v25);
            v27 = v26 + 2;
            *v26 = v24;
            v28 = v26[1];
            *a3 = (__int64)v27;
            v23 = &v27[2 * v28];
          }
          else
          {
            v23 = (_QWORD *)(v21 + 8 * v22);
          }
        }
        else
        {
          v41 = (_QWORD *)sub_186B270(0x18u);
          *v41 = 2;
          v23 = v41 + 1;
          *a3 = (__int64)v23;
        }
        *v23 = *(_QWORD *)(v11 + 8);
        v6 = *(__int64 **)(a1 + 16);
        ++*(_DWORD *)(*a3 - 4);
        if ( !v6 )
          return;
      }
      else
      {
        v12 = *(_QWORD *)(v11 + 8);
        if ( (*(_BYTE *)(v12 + 3) & 0x40) != 0 )
        {
          v13 = *(_QWORD *)(v11 + 16);
          if ( (*(_BYTE *)(v13 + 3) & 0x40) != 0 )
            goto LABEL_9;
LABEL_27:
          if ( *((_DWORD *)v6 - 2) == v8 )
          {
            v36 = (3 * v8 + 1) >> 1;
            v37 = 8 * v36 + 8;
            if ( 8 * v8 + 8 >= (unsigned int)v37 || v8 >= v36 )
              goto LABEL_39;
            v38 = (unsigned int *)sub_186B300(v6 - 1, v37);
            v6 = (__int64 *)(v38 + 2);
            *v38 = v36;
            v39 = v38[1];
            *(_QWORD *)(a1 + 16) = v6;
            v40 = v39;
            v32 = &v6[v39];
            v31 = v40 + 1;
          }
          else
          {
            v30 = v8;
            v31 = v8 + 1;
            v32 = &v6[v30];
          }
          *v32 = v13;
          *((_DWORD *)v6 - 1) = v31;
          *(_BYTE *)(v13 + 3) |= 0x40u;
          goto LABEL_9;
        }
        if ( v8 == *((_DWORD *)v6 - 2) )
        {
          v33 = (3 * v8 + 1) >> 1;
          v34 = 8 * v33 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v34 || v8 >= v33 )
          {
LABEL_39:
            v43 = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0(v46, "Overflow encountered when expanding vector");
            *v43 = (char *)off_1C63128;
            sub_2333C0(v43 + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v35 = (unsigned int *)sub_186B300(v6 - 1, v34);
          v6 = (__int64 *)(v35 + 2);
          *v35 = v33;
          v8 = v35[1];
          *(_QWORD *)(a1 + 16) = v35 + 2;
        }
        v29 = v8++;
        v6[v29] = v12;
        v13 = *(_QWORD *)(v11 + 16);
        *((_DWORD *)v6 - 1) = v8;
        *(_BYTE *)(v12 + 3) |= 0x40u;
        if ( (*(_BYTE *)(v13 + 3) & 0x40) == 0 )
          goto LABEL_27;
      }
LABEL_9:
      v8 = *((_DWORD *)v6 - 1);
    }
    v14 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 != v14 )
    {
      v15 = v6;
      do
      {
        v16 = *v15++;
        *(_BYTE *)(v16 + 3) &= ~0x40u;
      }
      while ( v15 != v14 );
    }
    *((_DWORD *)v6 - 1) = 0;
  }
}

