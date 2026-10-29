_QWORD *__fastcall sub_58A6E0(__int64 a1, const void *a2, const void *a3, unsigned int a4, int *a5, int *a6)
{
  char **exception; // rbp
  char **v7; // rbp
  __int64 v8; // r12
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, _QWORD, int *, int *); // r15
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // r14
  _DWORD *v17; // rax
  int *v18; // r12
  _DWORD *v19; // r13
  int v20; // ecx
  int v21; // edi
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // ebx
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  _DWORD *v29; // rax
  int *v30; // rbx
  _DWORD *v31; // rdx
  int v32; // ecx
  int v33; // edi
  __int64 v34; // rax
  unsigned int v35; // ecx
  unsigned int v36; // ebp
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rax
  __int64 v41; // [rsp+8h] [rbp-70h]
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = a4;
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int *, int *))(*(_QWORD *)v10 + 184LL);
  v12 = __dynamic_cast(
          a3,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
          0);
  if ( !v12
    || (v13 = v12[5],
        (v14 = __dynamic_cast(
                 a2,
                 (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                 (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                 0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v15 = v11(v10, v14[5], v13, (unsigned int)v8, a5, a6);
  if ( v15 )
  {
    v16 = (_QWORD *)sub_186B270(0x20u);
    *v16 = &off_1C51A38;
    v16[1] = v15;
    v16[2] = 0;
    if ( (_DWORD)v8 )
    {
      v17 = (_DWORD *)(sub_186B270(0x10u) + 8);
      v41 = v8;
      v18 = &a5[v8];
      *((_QWORD *)v17 - 1) = 2;
      v19 = v17;
      v16[2] = v17;
      while ( 1 )
      {
        v20 = *a5++;
        *v17 = v20;
        v21 = *(v19 - 1);
        v22 = (unsigned int)(v21 + 1);
        *(v19 - 1) = v22;
        if ( a5 == v18 )
          break;
        v23 = *(v19 - 2);
        if ( v23 == (_DWORD)v22 )
        {
          v24 = (3 * v23 + 1) >> 1;
          v25 = 4 * v24 + 8;
          if ( 4 * v21 + 12 >= (unsigned int)v25 || v23 >= v24 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v42, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v42);
            sub_233E40((__int64)v42);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = (unsigned int *)sub_186B300(v19 - 2, v25);
          v19 = v26 + 2;
          *v26 = v24;
          v27 = v26[1];
          v16[2] = v19;
          v17 = &v19[v27];
        }
        else
        {
          v17 = &v19[v22];
        }
      }
      v16[3] = 0;
      v29 = (_DWORD *)(sub_186B270(0x10u) + 8);
      v30 = a6;
      *((_QWORD *)v29 - 1) = 2;
      v31 = v29;
      v16[3] = v29;
      while ( 1 )
      {
        v32 = *v30++;
        *v29 = v32;
        v33 = *(v31 - 1);
        v34 = (unsigned int)(v33 + 1);
        *(v31 - 1) = v34;
        if ( v30 == &a6[v41] )
          break;
        v35 = *(v31 - 2);
        if ( v35 == (_DWORD)v34 )
        {
          v36 = (3 * v35 + 1) >> 1;
          v37 = 4 * v36 + 8;
          if ( 4 * v33 + 12 >= (unsigned int)v37 || v35 >= v36 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v42, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v42);
            sub_233E40((__int64)v42);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v38 = (unsigned int *)sub_186B300(v31 - 2, v37);
          v31 = v38 + 2;
          *v38 = v36;
          v39 = v38[1];
          v16[3] = v31;
          v29 = &v31[v39];
        }
        else
        {
          v29 = &v31[v34];
        }
      }
    }
    else
    {
      v16[3] = 0;
    }
    return v16;
  }
  return (_QWORD *)v15;
}

