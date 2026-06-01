void __fastcall sub_7A1BF0(__int64 a1, int a2, _DWORD *a3, __int64 *a4)
{
  char **exception; // r12
  _QWORD *v5; // rbx
  _QWORD *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+4h] [rbp-8Ch]
  _DWORD *v31; // [rsp+8h] [rbp-88h]
  int v32; // [rsp+10h] [rbp-80h] BYREF
  int v33; // [rsp+14h] [rbp-7Ch] BYREF
  __int64 v34; // [rsp+18h] [rbp-78h] BYREF
  __int64 v35; // [rsp+20h] [rbp-70h] BYREF
  __int64 v36; // [rsp+28h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v38[10]; // [rsp+40h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    v5 = *(_QWORD **)(a1 + 8312);
    if ( v5 )
    {
      v9 = &v5[*((unsigned int *)v5 - 1)];
      if ( v5 >= v9 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v10 = *v5;
          if ( *v5 )
          {
            v11 = *(_QWORD *)(a1 + 8304);
            v12 = (*(_DWORD *)(v10 + 8))-- == 1;
            if ( v12 )
              break;
          }
          if ( ++v5 >= v9 )
            goto LABEL_9;
        }
        sub_15D7BC0(v11, v10);
        ++v5;
      }
      while ( v5 < v9 );
LABEL_9:
      v5 = *(_QWORD **)(a1 + 8312);
      if ( v5 )
LABEL_10:
        *((_DWORD *)v5 - 1) = 0;
    }
    if ( a2 )
    {
      v31 = &a3[a2];
      while ( 1 )
      {
        v16 = *(_QWORD *)(a1 + 2328);
        v17 = *a3 >> 1;
        if ( !v16 )
          goto LABEL_20;
        if ( (unsigned int)v17 < *(_DWORD *)(v16 - 4) )
          break;
        v18 = *(_QWORD **)(a1 + 8312);
        v16 = 0;
        if ( v18 )
        {
LABEL_21:
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 == *((_DWORD *)v18 - 2) )
          {
            v20 = (3 * v19 + 1) >> 1;
            v21 = 8 * v20 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v38, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v38);
              sub_233E40((__int64)v38);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v29 = (3 * v19 + 1) >> 1;
            v22 = (unsigned int *)sub_186B300(v18 - 1, v21);
            v18 = v22 + 2;
            *(_QWORD *)(a1 + 8312) = v22 + 2;
            *v22 = v29;
            LODWORD(v22) = v22[1];
            v15 = &v18[(unsigned int)v22];
            v14 = (_DWORD)v22 + 1;
          }
          else
          {
            v13 = v19;
            v14 = v19 + 1;
            v15 = &v18[v13];
          }
          goto LABEL_14;
        }
LABEL_32:
        v28 = (_QWORD *)sub_186B270(0x18u);
        v18 = v28 + 1;
        *v28 = 2;
        v14 = 1;
        *(_QWORD *)(a1 + 8312) = v18;
        v15 = v18;
LABEL_14:
        *v15 = v16;
        ++a3;
        *((_DWORD *)v18 - 1) = v14;
        if ( a3 == v31 )
          goto LABEL_25;
      }
      v16 = *(_QWORD *)(v16 + 8 * v17);
      if ( v16 )
      {
        if ( (*a3 & 1) == 0 || (v16 = sub_15EC2C0(*(_QWORD *)(a1 + 144), v16)) != 0 )
          ++*(_DWORD *)(v16 + 8);
      }
LABEL_20:
      v18 = *(_QWORD **)(a1 + 8312);
      if ( v18 )
        goto LABEL_21;
      goto LABEL_32;
    }
LABEL_25:
    v38[0] = *a4;
    v38[1] = a4[1];
    sub_7A0B20(v37, a1, v38);
    v23 = *(_QWORD *)(a1 + 8312);
    v24 = v37[1];
    if ( v23 )
      v25 = *(_DWORD *)(v23 - 4);
    else
      v25 = 0;
    v26 = v37[0];
    v27 = *(_QWORD *)(a1 + 2256);
    v32 = 0;
    v12 = *(_QWORD *)(a1 + 128) == 0;
    v36 = 0;
    v34 = v27;
    v35 = v37[0];
    v33 = v25;
    v38[0] = v23;
    if ( v12 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *, int *, __int64 *, int *, __int64 *))(a1 + 136))(
      a1 + 112,
      &v34,
      &v35,
      &v32,
      &v36,
      &v33,
      v38);
    if ( v26 )
    {
      v12 = (*(_DWORD *)(v26 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v24, v26);
    }
  }
}

