__int64 __fastcall sub_5A9E90(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rbp
  unsigned int v7; // eax
  bool v8; // zf
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // rdx
  unsigned int v16; // ebp
  __int64 v17; // r15
  int v18; // ebp
  __int64 *v19; // rax
  _QWORD *v20; // rax
  int v21; // ecx
  _QWORD *v22; // rsi
  unsigned int v23; // edx
  __int64 v24; // rdi
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  int v30; // ebp
  void (***v31)(void); // rdi
  __int64 v32; // r14
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rax
  void (***v36)(void); // rdi
  char **exception; // rbx
  __int64 v38; // [rsp+0h] [rbp-78h]
  __int64 v39; // [rsp+8h] [rbp-70h]
  __int64 v40[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 8LL * *a2);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 112LL) + 8LL * a2[2]);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
  v7 = sub_5A1A80(*(_QWORD *)(a1 + 16));
  v8 = *(_QWORD *)(a1 + 32) == 0;
  v9 = v7;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 8LL * v7) = v6;
  if ( v8 )
  {
    v32 = *(_QWORD *)(a1 + 8);
    v33 = *(_QWORD *)(v32 + 32);
    if ( !v33 )
    {
      if ( *(_BYTE *)(v32 + 8) )
        v33 = v6;
      v35 = sub_4C4940(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL), v6, v6, v33);
      v36 = *(void (****)(void))(v32 + 32);
      v33 = v35;
      if ( (void (***)(void))v35 != v36 )
      {
        sub_54D7B0(v36);
        *(_QWORD *)(v32 + 32) = v33;
      }
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v33 + 16LL))(v33, v6, v5, 0);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 8) + 40LL))(*(_QWORD *)(v6 + 8), v6 + 16);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = v10;
    v13 = *(_QWORD *)(v11 + 32);
    if ( !v13 )
    {
      v38 = *(_QWORD *)(a1 + 8);
      if ( *(_BYTE *)(v11 + 8) )
        v13 = v6;
      v13 = sub_4C4940(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL), v6, v6, v13);
      v31 = *(void (****)(void))(v38 + 32);
      if ( (void (***)(void))v13 != v31 )
      {
        v39 = v13;
        sub_54D7B0(v31);
        v13 = v39;
        *(_QWORD *)(v38 + 32) = v39;
      }
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v13 + 16LL))(v13, v6, v5, v12);
    v14 = *(_QWORD **)(a1 + 40);
    v15 = (_QWORD *)*v14;
    if ( *v14 )
    {
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
      {
        v26 = (3 * v16 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v27 || v16 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v40, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = (unsigned int *)sub_186B300(v15 - 1, v27);
        v15 = v28 + 2;
        *v14 = v28 + 2;
        v17 = v16;
        *v28 = (3 * v16 + 1) >> 1;
        v29 = v28[1];
        v30 = v29;
        v19 = &v15[v29];
        v18 = v30 + 1;
      }
      else
      {
        v17 = v16;
        v18 = v16 + 1;
        v19 = &v15[v17];
      }
    }
    else
    {
      v18 = 1;
      v34 = (_QWORD *)sub_186B270(0x18u);
      v15 = v34 + 1;
      *v34 = 2;
      *v14 = v34 + 1;
      v19 = v34 + 1;
      v17 = 0;
    }
    *v19 = v12;
    v20 = *(_QWORD **)(a1 + 48);
    *((_DWORD *)v15 - 1) = v18;
    if ( v20 && (v21 = *((_DWORD *)v20 - 2), *((_DWORD *)v20 - 1) = 0, v21) )
    {
      v22 = v20;
      v23 = 1;
    }
    else
    {
      sub_5A7FF0((unsigned int **)(a1 + 48));
      v20 = *(_QWORD **)(a1 + 48);
      v21 = *((_DWORD *)v20 - 2);
      v22 = &v20[*((unsigned int *)v20 - 1)];
      v23 = *((_DWORD *)v20 - 1) + 1;
    }
    *v22 = v9;
    *((_DWORD *)v20 - 1) = v23;
    if ( v21 == v23 )
    {
      sub_5A7FF0((unsigned int **)(a1 + 48));
      v20 = *(_QWORD **)(a1 + 48);
      v23 = *((_DWORD *)v20 - 1);
    }
    v24 = *(_QWORD *)(a1 + 32);
    v20[v23] = v17;
    *((_DWORD *)v20 - 1) = v23 + 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 40LL))(v24, a1 + 48);
  }
  *(_QWORD *)a2 = v9;
  return 1;
}

