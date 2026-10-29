_QWORD *__fastcall sub_547AC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char **v4; // r12
  char **exception; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // r15
  _QWORD *v10; // r13
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // edx
  _QWORD *v16; // rbx
  __int64 v17; // rax
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  _QWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 i; // r12
  __int64 v28; // rcx
  int v29; // eax
  unsigned int *v30; // rsi
  unsigned int v31; // eax
  unsigned int v32; // r14d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // [rsp+0h] [rbp-78h]
  __int64 v39; // [rsp+0h] [rbp-78h]
  __int64 v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+0h] [rbp-78h]
  unsigned int v42; // [rsp+Ch] [rbp-6Ch]
  __int64 v43[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( a1 != *(_QWORD *)(a2 + 8) || *(_QWORD *)(a3 + 8) != a1 || a4 )
    return nullptr;
  v8 = (_QWORD *)sub_186B270(0x20u);
  v9 = *(_QWORD **)(a2 + 16);
  v10 = v8;
  *v8 = qword_1C666F0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  if ( v9 && (v11 = *((unsigned int *)v9 - 1), (_DWORD)v11) )
  {
    v38 = 8 * v11;
    v12 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v13 = v38;
    v14 = 0;
    v15 = 1;
    *(v12 - 1) = 2;
    v16 = v12;
    v10[1] = v12;
    while ( 1 )
    {
      v14 += 8;
      *v12 = *v9;
      *((_DWORD *)v16 - 1) = v15;
      if ( v14 == v13 )
        break;
      v9 = (_QWORD *)(v14 + *(_QWORD *)(a2 + 16));
      if ( v15 == *((_DWORD *)v16 - 2) )
      {
        v19 = (3 * v15 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v43, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v43);
          sub_233E40((__int64)v43);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v42 = (3 * v15 + 1) >> 1;
        v39 = v13;
        v21 = (unsigned int *)sub_186B300(v16 - 1, v20);
        v16 = v21 + 2;
        v13 = v39;
        v10[1] = v21 + 2;
        *v21 = v42;
        v22 = v21[1];
        v23 = v22;
        v12 = &v16[v22];
        v15 = v23 + 1;
      }
      else
      {
        v17 = v15++;
        v12 = &v16[v17];
      }
    }
    v24 = *(_QWORD **)(a3 + 16);
    if ( v24 )
    {
      v25 = *((unsigned int *)v24 - 1);
      if ( (_DWORD)v25 )
      {
        v26 = 8 * v25;
        for ( i = 0; ; v24 = (_QWORD *)(i + *(_QWORD *)(a3 + 16)) )
        {
          v31 = *((_DWORD *)v16 - 1);
          if ( v31 == *((_DWORD *)v16 - 2) )
          {
            v32 = (3 * v31 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v43, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v43);
              sub_233E40((__int64)v43);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = v26;
            v34 = (unsigned int *)sub_186B300(v16 - 1, v33);
            v35 = v34[1];
            v16 = v34 + 2;
            v26 = v40;
            *v34 = v32;
            v10[1] = v34 + 2;
            v30 = &v34[2 * v35 + 2];
            v29 = v35 + 1;
          }
          else
          {
            v28 = v31;
            v29 = v31 + 1;
            v30 = (unsigned int *)&v16[v28];
          }
LABEL_19:
          i += 8;
          *(_QWORD *)v30 = *v24;
          *((_DWORD *)v16 - 1) = v29;
          if ( v26 == i )
            break;
        }
      }
    }
  }
  else
  {
    v24 = *(_QWORD **)(a3 + 16);
    if ( v24 )
    {
      v36 = *((unsigned int *)v24 - 1);
      if ( (_DWORD)v36 )
      {
        v41 = 8 * v36;
        v37 = (_QWORD *)sub_186B270(0x18u);
        v16 = v37 + 1;
        *v37 = 2;
        v26 = v41;
        i = 0;
        v10[1] = v37 + 1;
        v30 = (unsigned int *)(v37 + 1);
        v29 = 1;
        goto LABEL_19;
      }
    }
  }
  *v10 = &off_1C50A20;
  return v10;
}

