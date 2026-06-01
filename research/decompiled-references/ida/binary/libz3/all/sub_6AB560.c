__int64 __fastcall sub_6AB560(unsigned int a1, __int64 *a2, __int64 *a3)
{
  char **exception; // r14
  char **v4; // r13
  __int64 *v5; // r14
  __int64 v6; // r8
  __int64 v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rsi
  unsigned int v18; // edx
  _QWORD *v19; // rax
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int v22; // r15d
  unsigned int *v23; // rax
  _DWORD *v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  unsigned int v27; // edx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v35; // [rsp+0h] [rbp-80h]
  __int64 *v36; // [rsp+8h] [rbp-78h]
  __int64 v37; // [rsp+10h] [rbp-70h]
  unsigned int v38; // [rsp+10h] [rbp-70h]
  unsigned int v39; // [rsp+14h] [rbp-6Ch]
  __int64 v40; // [rsp+18h] [rbp-68h]
  _QWORD *v41; // [rsp+18h] [rbp-68h]
  int v42[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v43; // [rsp+28h] [rbp-58h]
  __int64 v44[10]; // [rsp+30h] [rbp-50h] BYREF

  v5 = a2;
  LODWORD(v37) = a1;
  v6 = *a3;
  v43 = a3[1];
  sub_1697FC0(v43, 0, a1, (int)a2, v6, (int)v42, v43, (__int64)a3, v37, v40, nullptr);
  if ( a1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 40LL);
    v8 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v9 = nullptr;
    v10 = &a2[a1];
    v11 = *a2;
    *(v8 - 1) = 2;
    v41 = v8;
    v12 = *(_QWORD *)(v11 + 16);
    v13 = 1;
LABEL_3:
    *v8 = v7;
    *((_DWORD *)v41 - 1) = v13;
    if ( v9 )
    {
LABEL_4:
      v14 = *((_DWORD *)v9 - 1);
      if ( v14 == *((_DWORD *)v9 - 2) )
      {
        v27 = (3 * v14 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v28 || v14 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_6A99E0(v44, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v44);
          sub_233E40((__int64)v44);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (3 * v14 + 1) >> 1;
        v29 = (unsigned int *)sub_186B300(v9 - 1, v28);
        v9 = v29 + 2;
        *v29 = v39;
        LODWORD(v29) = v29[1];
        v17 = &v9[(unsigned int)v29];
        v16 = (_DWORD)v29 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = &v9[v15];
      }
      goto LABEL_6;
    }
    while ( 1 )
    {
      v19 = (_QWORD *)sub_186B270(0x18u);
      v9 = v19 + 1;
      v17 = v19 + 1;
      *v19 = 2;
      v16 = 1;
LABEL_6:
      ++v5;
      *v17 = *(_QWORD *)(v12 + 16);
      *((_DWORD *)v9 - 1) = v16;
      if ( v10 == v5 )
        break;
      v12 = *(_QWORD *)(*v5 + 16);
      v7 = *(_QWORD *)(v12 + 40);
      v18 = *((_DWORD *)v41 - 1);
      if ( v18 == *((_DWORD *)v41 - 2) )
      {
        v20 = (3 * v18 + 1) >> 1;
        v21 = 8 * v20 + 8;
        v22 = v20;
        if ( 8 * v18 + 8 >= (unsigned int)v21 || v18 >= v20 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_6A99E0(v44, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v44);
          sub_233E40((__int64)v44);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v41 - 1, v21);
        v24 = v23 + 2;
        *v23 = v22;
        v25 = v23[1];
        v41 = v24;
        v12 = *(_QWORD *)(*v5 + 16);
        v26 = v25;
        v8 = &v24[2 * v25];
        v13 = v26 + 1;
        goto LABEL_3;
      }
      v41[v18] = v7;
      *((_DWORD *)v41 - 1) = v18 + 1;
      if ( v9 )
        goto LABEL_4;
    }
    v30 = sub_15DB6A0(v35, 1, v38, v41, v9, *(_QWORD *)v42, 1, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    sub_6A99C0(*(__int64 *)v42, v43);
    *(_QWORD *)v42 = v31;
    v32 = *v36;
    if ( *v36 == v31 )
    {
      sub_186B220(v9 - 1);
LABEL_24:
      sub_186B220(v41 - 1);
      return sub_6A99C0(*(__int64 *)v42, v43);
    }
  }
  else
  {
    v32 = *v36;
    if ( *v36 == *(_QWORD *)v42 )
      return sub_6A99C0(*(__int64 *)v42, v43);
    v41 = nullptr;
    v9 = nullptr;
  }
  sub_6A99C0(v32, v36[1]);
  v33 = *(_QWORD *)v42;
  *v36 = *(_QWORD *)v42;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  if ( v9 )
    sub_186B220(v9 - 1);
  if ( v41 )
    goto LABEL_24;
  return sub_6A99C0(*(__int64 *)v42, v43);
}

