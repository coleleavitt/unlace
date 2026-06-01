_QWORD *__fastcall sub_4E8580(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // r12
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // r12
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  bool v28; // zf
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v36; // rax
  __int64 v37; // [rsp+8h] [rbp-B0h]
  __int64 v38; // [rsp+10h] [rbp-A8h]
  __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+50h] [rbp-68h] BYREF
  __int64 v42; // [rsp+58h] [rbp-60h]
  __int64 v43[11]; // [rsp+60h] [rbp-58h] BYREF

  if ( a1 != a2[1] )
    return nullptr;
  v8 = (_QWORD *)sub_186B270(0x20u);
  v9 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v9 )
    __cxa_bad_cast();
  v10 = sub_15D1F10(v9[4]);
  v8[1] = a1;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = v10;
  *v8 = &off_1C4FBF8;
  v13 = sub_4D6490(v11);
  v8[3] = 0;
  v14 = *(_QWORD *)(a1 + 24);
  v8[2] = v13;
  v38 = sub_4D6490(v14);
  if ( a3 > 1 )
  {
    v15 = *a4;
    v16 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL) + 16 * v15;
    if ( *(_BYTE *)(v16 + 8) != 1 )
      sub_DBF6E(0);
    sub_15DB5C0(v38, v15, *(_QWORD *)v16);
    v17 = a3 - 2;
    v18 = a4 + 1;
    v19 = 0;
    v37 = v38;
    v20 = 0;
    v40 = (__int64)&a4[v17 + 2];
    while ( 1 )
    {
      v24 = *v18;
      v25 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL) + 16 * v24;
      if ( *(_BYTE *)(v25 + 8) != 1 )
        sub_DBF6E(0);
      sub_15DB5C0(v38, v24, *(_QWORD *)v25);
      v26 = sub_15E1B70(v38);
      v27 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      if ( v20 )
      {
        v28 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v38, v20);
      }
      v41 = v19;
      v42 = v37;
      sub_4E8120(a1, v12, v27, &v41);
      v19 = v41;
      v37 = v42;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      v29 = (_QWORD *)v8[3];
      if ( v29 )
      {
        v30 = *((_DWORD *)v29 - 1);
        if ( v30 == *((_DWORD *)v29 - 2) )
        {
          v31 = (3 * v30 + 1) >> 1;
          v32 = 8 * v31 + 8;
          if ( 8 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v43, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v43);
            sub_233E40((__int64)v43);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (unsigned int *)sub_186B300(v29 - 1, v32);
          v34 = v33[1];
          v29 = v33 + 2;
          *v33 = v31;
          v8[3] = v33 + 2;
          LODWORD(v33) = v34;
          v23 = &v29[v34];
          v22 = (_DWORD)v33 + 1;
        }
        else
        {
          v21 = v30;
          v22 = v30 + 1;
          v23 = &v29[v21];
        }
      }
      else
      {
        v36 = (_QWORD *)sub_186B270(0x18u);
        v29 = v36 + 1;
        *v36 = 2;
        v22 = 1;
        v8[3] = v29;
        v23 = v29;
      }
      *v23 = v19;
      ++v18;
      *((_DWORD *)v29 - 1) = v22;
      if ( (unsigned int *)v40 == v18 )
        break;
      v20 = v27;
    }
    if ( v27 )
    {
      v28 = (*(_DWORD *)(v27 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v38, v27);
    }
    if ( v19 )
    {
      v28 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v37, v19);
    }
  }
  return v8;
}

