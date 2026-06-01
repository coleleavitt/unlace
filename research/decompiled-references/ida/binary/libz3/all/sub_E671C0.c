__int64 __fastcall sub_E671C0(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 *a6, __int64 *a7)
{
  char **exception; // r14
  bool v10; // zf
  int v11; // r8d
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  unsigned int v14; // r12d
  __int64 v15; // r13
  unsigned int v16; // ebx
  unsigned int v17; // edx
  size_t v18; // rsi
  unsigned int v19; // r15d
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 result; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD *v44; // [rsp+20h] [rbp-70h]
  unsigned int v45; // [rsp+28h] [rbp-68h]
  __int64 v46; // [rsp+28h] [rbp-68h]
  _QWORD *v47; // [rsp+38h] [rbp-58h] BYREF
  __int64 v48[10]; // [rsp+40h] [rbp-50h] BYREF

  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_E65BC0(*a6, a6[1]);
  v10 = *(_WORD *)(a2 + 4) == 2;
  *a6 = a3;
  if ( v10 && !*(_DWORD *)(a2 + 16) )
  {
    v38 = sub_15E1A70(a1[1]);
    v39 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    sub_E65BC0(*a6, a6[1]);
    *a6 = v39;
  }
  v11 = *(_DWORD *)(a2 + 20);
  v47 = nullptr;
  if ( v11 )
  {
    v12 = (_QWORD *)sub_186B270(0x10u);
    v13 = v12 + 1;
    v14 = 0;
    v15 = 0;
    v16 = 1;
    *v12 = 2;
    v47 = v12 + 1;
    v45 = 0;
LABEL_9:
    while ( 1 )
    {
      v21 = *((_DWORD *)v13 - 2);
      if ( v21 >= v16 )
        break;
      v17 = (3 * v21 + 1) >> 1;
      v18 = 4 * v17 + 8;
      v19 = v17;
      if ( 4 * v21 + 8 >= (unsigned int)v18 || v21 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0(v48, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v48);
        sub_233E40((__int64)v48);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v13 - 1, v18);
      v13 = v20 + 2;
      *v20 = v19;
      v47 = v20 + 2;
    }
    v22 = 4 * v15;
    *((_DWORD *)v13 - 1) = v16;
    v23 = 4LL * v16;
    if ( v22 != v23 )
    {
      v44 = v13;
      memset((char *)v13 + v22, 0, v23 - v22);
      v13 = v44;
    }
    while ( 1 )
    {
      v24 = v14++;
      *((_DWORD *)v13 + v45) |= 1 << v24;
      if ( v14 >= *(_DWORD *)(a2 + 20) )
        break;
      v15 = *((unsigned int *)v13 - 1);
      v45 = v14 >> 5;
      if ( v14 >> 5 >= (unsigned int)v15 )
      {
        v16 = (v14 >> 5) + 1;
        goto LABEL_9;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 16) != 2 )
  {
    sub_E7DE00(*a1, &v47, 1);
    if ( *(_WORD *)(a2 + 4) == 2 && !*(_DWORD *)(a2 + 16) )
    {
      sub_15ECFD0((unsigned int)v48, (_DWORD)a6, 8, v33, v34, v35);
      v36 = *a6;
      v37 = v48[1];
      *a6 = v48[0];
      v48[0] = v36;
      sub_E65BC0(v36, v37);
    }
  }
  v25 = a1[1];
  v26 = sub_15DBA30(v25, a2, *(_DWORD *)(a2 + 72), a4, *(_DWORD *)(a2 + 76), a5, *a6);
  v46 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_14BB8A0(*a1 + 2344LL, v26, a6, a7);
  v27 = a1[1];
  if ( *(_DWORD *)(v27 + 712) )
  {
    v28 = *a7;
    v29 = sub_15DE370(a1[1]);
    v30 = sub_15E2470(v27, v29, v28);
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    sub_E65BA0(*a7, a7[1]);
    *a7 = v31;
  }
  result = sub_E65BC0(v46, v25);
  if ( v47 )
    return sub_186B220(v47 - 1);
  return result;
}

