__int64 __fastcall sub_7811E0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  const void *v7; // rbp
  __int64 v8; // rdi
  __int64 (*v9)(); // rax
  void *v10; // rax
  _DWORD *v11; // r13
  __int64 *v13; // r13
  __int64 *v14; // rbp
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // r12
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r15d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  _QWORD *v26; // rax
  __int64 v27[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = sub_186B270(0x68u);
  v6 = a2[1];
  *(_QWORD *)v5 = &off_1C545D8;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_BYTE *)(v5 + 24) = 1;
  *(_QWORD *)(v5 + 32) = v6;
  *(_QWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 88) = v6;
  *(_QWORD *)(v5 + 96) = 0;
  *(_OWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 72) = 0;
  sub_120DCC0(v5 + 40, a1 + 40);
  v7 = *(const void **)(a1 + 80);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 80);
    v9 = *(__int64 (**)())(*(_QWORD *)v7 + 56LL);
    v7 = (const void *)(v9 == sub_667B10 ? sub_1333690(v8, a2) : ((__int64 (__fastcall *)(__int64, _QWORD *))v9)(v8, a2));
    if ( v7 )
    {
      v10 = __dynamic_cast(
              v7,
              (const struct __class_type_info *)&`typeinfo for'model_converter,
              (const struct __class_type_info *)&`typeinfo for'generic_model_converter,
              0);
      v7 = v10;
      if ( v10 )
        ++*((_DWORD *)v10 + 2);
    }
  }
  v11 = *(_DWORD **)(v5 + 80);
  if ( v11 )
  {
    if ( v11[2]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v11)(v11);
      sub_186B220(v11);
    }
  }
  v13 = *(__int64 **)(a1 + 96);
  *(_QWORD *)(v5 + 80) = v7;
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v14 != v13 )
    {
      while ( 1 )
      {
        v18 = *v13;
        if ( *a2 != a2[1] )
          v18 = sub_15CFF50(a2, *v13);
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v19 = *(_QWORD **)(v5 + 96);
        if ( !v19 )
          break;
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 == *((_DWORD *)v19 - 2) )
        {
          v21 = (3 * v20 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v27, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v27);
            sub_233E40((__int64)v27);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          ++v13;
          v23 = (unsigned int *)sub_186B300(v19 - 1, v22);
          v24 = v23[1];
          *v23 = v21;
          *(_QWORD *)(v5 + 96) = v23 + 2;
          *(_QWORD *)&v23[2 * v24 + 2] = v18;
          v23[1] = v24 + 1;
          if ( v14 == v13 )
            return v5;
        }
        else
        {
          v15 = v20;
          v16 = v20 + 1;
          v17 = &v19[v15];
LABEL_14:
          ++v13;
          *v17 = v18;
          *((_DWORD *)v19 - 1) = v16;
          if ( v14 == v13 )
            return v5;
        }
      }
      v26 = (_QWORD *)sub_186B270(0x18u);
      v19 = v26 + 1;
      *v26 = 2;
      v16 = 1;
      *(_QWORD *)(v5 + 96) = v19;
      v17 = v19;
      goto LABEL_14;
    }
  }
  return v5;
}

