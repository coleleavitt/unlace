__int64 __fastcall sub_A62000(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rax
  signed int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r12d
  __int64 v22; // rax
  signed int v23; // edx
  int *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  int *v27; // rcx
  int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // r15d
  _DWORD *v32; // rcx
  __int64 v33; // r8
  unsigned int *v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // r15d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rax
  int *v40; // rax
  _QWORD *v41; // rax
  unsigned int **v42; // rdi
  char **exception; // rbx
  __int64 *v44; // [rsp+8h] [rbp-60h]
  int v45[2]; // [rsp+8h] [rbp-60h]
  int v46[2]; // [rsp+8h] [rbp-60h]
  __int64 v47[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2 + 16;
  v6 = *(unsigned int *)(a2 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v6);
  v8 = *(_QWORD *)(a1 + 680);
  v9 = *(_DWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v8 + 8 * v6);
  if ( !v10 || (v44 = *(__int64 **)(v8 + 8 * v6), !sub_927C80(v3, v10 + 16)) )
  {
    if ( v7 && !sub_927C80(v3, v7 + 16) )
      return 1;
    v11 = 4 * v6;
    v12 = 4 * v6 + *(_QWORD *)(a1 + 656);
    v13 = (*(_BYTE *)(v12 + 3) >> 4) & 3;
    if ( v13 != 1 )
    {
      if ( v13 != 2 )
      {
        if ( !v13 )
        {
          v40 = sub_9AA900(a1, v9);
          if ( sub_927C80(v3, (__int64)v40) )
            sub_9D85F0((_QWORD *)a1, v9, v3);
        }
        goto LABEL_8;
      }
      sub_A13F70((_QWORD *)a1, *(_DWORD *)v12 & 0xFFFFFFF);
      v11 = 4 * v6;
    }
    v22 = *(_QWORD *)(a1 + 872);
    if ( v22 )
      v23 = *(_DWORD *)(v22 - 4);
    else
      v23 = 0;
    if ( v9 < v23 && *(_DWORD *)(v22 + 4 * v6)
      || (*(_QWORD *)v45 = v11, v24 = sub_9AA900(a1, v9), !sub_927C80(v3, (__int64)v24)) )
    {
LABEL_8:
      v14 = *(_QWORD **)(a1 + 1040);
      if ( v14 )
      {
        v15 = *((unsigned int *)v14 - 1);
        if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
        {
          v36 = (unsigned int)(3 * v15 + 1) >> 1;
          v37 = 16 * v36 + 8;
          if ( 16 * (int)v15 + 8 >= (unsigned int)v37 || (unsigned int)v15 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0(v47, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v47);
            sub_233E40((__int64)v47);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v38 = (unsigned int *)sub_186B300(v14 - 1, v37);
          v14 = v38 + 2;
          *v38 = v36;
          v39 = v38[1];
          *(_QWORD *)(a1 + 1040) = v14;
          v16 = &v14[2 * v39];
        }
        else
        {
          v16 = &v14[2 * v15];
        }
      }
      else
      {
        v41 = (_QWORD *)sub_186B270(0x28u);
        v14 = v41 + 1;
        *v41 = 2;
        *(_QWORD *)(a1 + 1040) = v41 + 1;
        v16 = v41 + 1;
      }
      v16[1] = v7;
      *(_DWORD *)v16 = 2 * v9 + 1;
      v17 = *(_QWORD *)(a1 + 688);
      ++*((_DWORD *)v14 - 1);
      v18 = *(unsigned int *)(a2 + 8);
      *(_QWORD *)(v17 + 8 * v18) = a2;
      v19 = *(_QWORD *)(a1 + 400);
      v20 = v18;
      if ( !*(_BYTE *)(v19 + 16) )
        goto LABEL_16;
      if ( *(_DWORD *)(a1 + 1020) < *(_DWORD *)(v19 + 96) )
      {
        if ( sub_9B2ED0(a1, v18) )
          sub_A5FE50(a1, v20);
        v19 = *(_QWORD *)(a1 + 400);
LABEL_16:
        if ( *(_DWORD *)(a1 + 1020) < *(_DWORD *)(v19 + 96) )
        {
          if ( *(_DWORD *)(v19 + 20) )
            sub_9D7240(a1, v9);
        }
      }
      return 1;
    }
    v25 = *(_QWORD *)(a1 + 872);
    v26 = *(_QWORD *)(a1 + 864);
    v27 = (int *)(v25 + *(_QWORD *)v45);
    if ( v26 )
    {
      v28 = *(_DWORD *)(v26 - 4);
      *v27 = v28;
      v29 = *(unsigned int *)(v26 - 4);
      v30 = 4LL * (unsigned int)v28;
      v31 = v28 >> 1;
      if ( (_DWORD)v29 != *(_DWORD *)(v26 - 8) )
      {
LABEL_28:
        v32 = (_DWORD *)(v26 + v30);
        *(_DWORD *)(v26 + 4 * v29) = v9;
        ++*(_DWORD *)(v26 - 4);
        v33 = (unsigned int)*v32;
        if ( v31 )
        {
          while ( 1 )
          {
            v34 = (unsigned int *)(v26 + 4LL * (unsigned int)v31);
            v32 = (_DWORD *)(v26 + 4LL * (unsigned int)v28);
            v35 = *v34;
            if ( (int)v33 >= (int)v35 )
              break;
            *v32 = v35;
            *(_DWORD *)(v25 + 4 * v35) = v28;
            v28 = v31;
            v31 >>= 1;
            if ( !v31 )
            {
              v32 = v34;
              v28 = 1;
              break;
            }
          }
        }
        *v32 = v33;
        *(_DWORD *)(v25 + 4 * v33) = v28;
        goto LABEL_8;
      }
      v42 = (unsigned int **)(a1 + 864);
    }
    else
    {
      *v27 = 0;
      v42 = (unsigned int **)(a1 + 864);
      v31 = 0;
      v30 = 0;
      v28 = 0;
    }
    *(_QWORD *)v46 = v30;
    sub_313C10(v42);
    v26 = *(_QWORD *)(a1 + 864);
    v30 = *(_QWORD *)v46;
    v25 = *(_QWORD *)(a1 + 872);
    v29 = *(unsigned int *)(v26 - 4);
    goto LABEL_28;
  }
  sub_A1A170(a1, v44, a2, a3);
  return 0;
}

