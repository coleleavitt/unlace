__int64 __fastcall sub_A61B80(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  signed int v8; // ebp
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // al
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r12d
  __int64 v21; // rax
  signed int v22; // edx
  int *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  int *v26; // rcx
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // r15d
  _DWORD *v31; // rcx
  __int64 v32; // r8
  unsigned int *v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // r15d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rax
  int *v39; // rax
  _QWORD *v40; // rax
  unsigned int **v41; // rdi
  char **exception; // rbx
  __int64 *v43; // [rsp+8h] [rbp-60h]
  int v44[2]; // [rsp+8h] [rbp-60h]
  int v45[2]; // [rsp+8h] [rbp-60h]
  __int64 v46[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2 + 16;
  v6 = *(unsigned int *)(a2 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v6);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v6);
  if ( !v7 || (v43 = *(__int64 **)(*(_QWORD *)(a1 + 688) + 8 * v6), !sub_927C80(v7 + 16, a2 + 16)) )
  {
    if ( v9 && !sub_927C80(v9 + 16, v3) )
      return 1;
    v10 = 4 * v6;
    v11 = 4 * v6 + *(_QWORD *)(a1 + 656);
    v12 = (*(_BYTE *)(v11 + 3) >> 4) & 3;
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
      {
        if ( !v12 )
        {
          v39 = sub_9AA900(a1, v8);
          if ( sub_927C80((__int64)v39, v3) )
            sub_9D85F0((_QWORD *)a1, v8, v3);
        }
        goto LABEL_8;
      }
      sub_A13F70((_QWORD *)a1, *(_DWORD *)v11 & 0xFFFFFFF);
      v10 = 4 * v6;
    }
    v21 = *(_QWORD *)(a1 + 872);
    if ( v21 )
      v22 = *(_DWORD *)(v21 - 4);
    else
      v22 = 0;
    if ( v8 < v22 && *(_DWORD *)(v21 + 4 * v6)
      || (*(_QWORD *)v44 = v10, v23 = sub_9AA900(a1, v8), !sub_927C80((__int64)v23, v3)) )
    {
LABEL_8:
      v13 = *(_QWORD **)(a1 + 1040);
      if ( v13 )
      {
        v14 = *((unsigned int *)v13 - 1);
        if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
        {
          v35 = (unsigned int)(3 * v14 + 1) >> 1;
          v36 = 16 * v35 + 8;
          if ( 16 * (int)v14 + 8 >= (unsigned int)v36 || (unsigned int)v14 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0(v46, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v37 = (unsigned int *)sub_186B300(v13 - 1, v36);
          v13 = v37 + 2;
          *v37 = v35;
          v38 = v37[1];
          *(_QWORD *)(a1 + 1040) = v13;
          v15 = &v13[2 * v38];
        }
        else
        {
          v15 = &v13[2 * v14];
        }
      }
      else
      {
        v40 = (_QWORD *)sub_186B270(0x28u);
        v13 = v40 + 1;
        *v40 = 2;
        *(_QWORD *)(a1 + 1040) = v40 + 1;
        v15 = v40 + 1;
      }
      v15[1] = v9;
      *(_DWORD *)v15 = 2 * v8;
      v16 = *(_QWORD *)(a1 + 680);
      ++*((_DWORD *)v13 - 1);
      v17 = *(unsigned int *)(a2 + 8);
      *(_QWORD *)(v16 + 8 * v17) = a2;
      v18 = *(_QWORD *)(a1 + 400);
      v19 = v17;
      if ( !*(_BYTE *)(v18 + 16) )
        goto LABEL_16;
      if ( *(_DWORD *)(a1 + 1020) < *(_DWORD *)(v18 + 96) )
      {
        if ( sub_9B2ED0(a1, v17) )
          sub_A5FE50(a1, v19);
        v18 = *(_QWORD *)(a1 + 400);
LABEL_16:
        if ( *(_DWORD *)(a1 + 1020) < *(_DWORD *)(v18 + 96) )
        {
          if ( *(_DWORD *)(v18 + 20) )
            sub_9D7240(a1, v8);
        }
      }
      return 1;
    }
    v24 = *(_QWORD *)(a1 + 872);
    v25 = *(_QWORD *)(a1 + 864);
    v26 = (int *)(v24 + *(_QWORD *)v44);
    if ( v25 )
    {
      v27 = *(_DWORD *)(v25 - 4);
      *v26 = v27;
      v28 = *(unsigned int *)(v25 - 4);
      v29 = 4LL * (unsigned int)v27;
      v30 = v27 >> 1;
      if ( (_DWORD)v28 != *(_DWORD *)(v25 - 8) )
      {
LABEL_28:
        v31 = (_DWORD *)(v25 + v29);
        *(_DWORD *)(v25 + 4 * v28) = v8;
        ++*(_DWORD *)(v25 - 4);
        v32 = (unsigned int)*v31;
        if ( v30 )
        {
          while ( 1 )
          {
            v33 = (unsigned int *)(v25 + 4LL * (unsigned int)v30);
            v31 = (_DWORD *)(v25 + 4LL * (unsigned int)v27);
            v34 = *v33;
            if ( (int)v32 >= (int)v34 )
              break;
            *v31 = v34;
            *(_DWORD *)(v24 + 4 * v34) = v27;
            v27 = v30;
            v30 >>= 1;
            if ( !v30 )
            {
              v31 = v33;
              v27 = 1;
              break;
            }
          }
        }
        *v31 = v32;
        *(_DWORD *)(v24 + 4 * v32) = v27;
        goto LABEL_8;
      }
      v41 = (unsigned int **)(a1 + 864);
    }
    else
    {
      *v26 = 0;
      v41 = (unsigned int **)(a1 + 864);
      v30 = 0;
      v29 = 0;
      v27 = 0;
    }
    *(_QWORD *)v45 = v29;
    sub_313C10(v41);
    v25 = *(_QWORD *)(a1 + 864);
    v29 = *(_QWORD *)v45;
    v24 = *(_QWORD *)(a1 + 872);
    v28 = *(unsigned int *)(v25 - 4);
    goto LABEL_28;
  }
  sub_A1A170(a1, v43, a2, a3);
  return 0;
}

