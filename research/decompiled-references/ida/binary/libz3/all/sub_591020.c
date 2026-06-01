__int64 __fastcall sub_591020(__int64 a1, const void *a2, double a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned int *v7; // rax
  unsigned int v8; // r13d
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // r14
  __int64 (__fastcall *v21)(__int64, __int64 *); // rax
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // rdi
  bool v25; // zf
  __int64 *v26; // rbp
  unsigned __int64 v27; // r14
  __int64 v28; // rsi
  unsigned int v29; // r8d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  char **exception; // r13
  unsigned int v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  __int64 v38; // [rsp+18h] [rbp-90h]
  unsigned int v39; // [rsp+24h] [rbp-84h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  __int64 v41[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = v3;
  v5 = v3[1];
  v6 = *(_QWORD *)(v5 + 40);
  v40 = v5;
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 )
  {
    v8 = 1;
    v35 = *v7;
    v36 = 8LL * *v7;
    v9 = nullptr;
    while ( v8 < *(v7 - 1) )
    {
      v10 = v7[v8];
      sub_15DB5C0(v6, v10, *(_QWORD *)(v4[2] + 8 * v10));
      sub_15DB5C0(v6, v35, *(_QWORD *)(v4[2] + v36));
      v11 = sub_15E1B70(v6);
      v12 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      if ( v9 )
      {
        v13 = *((_DWORD *)v9 - 1);
        if ( v13 == *((_DWORD *)v9 - 2) )
        {
          v29 = (3 * v13 + 1) >> 1;
          v30 = 8 * v29 + 8;
          if ( 8 * v13 + 8 >= (unsigned int)v30 || v13 >= v29 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v41, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v41);
            sub_233E40((__int64)v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (3 * v13 + 1) >> 1;
          v37 = v12;
          v31 = (unsigned int *)sub_186B300(v9 - 1, v30);
          v32 = v31[1];
          v9 = v31 + 2;
          v12 = v37;
          *v31 = v39;
          LODWORD(v31) = v32;
          v16 = &v9[v32];
          v15 = (_DWORD)v31 + 1;
        }
        else
        {
          v14 = v13;
          v15 = v13 + 1;
          v16 = &v9[v14];
        }
      }
      else
      {
        v38 = v11;
        v33 = (_QWORD *)sub_186B270(0x18u);
        v9 = v33 + 1;
        *v33 = 2;
        v12 = v38;
        v15 = 1;
        v16 = v9;
      }
      *v16 = v12;
      ++v8;
      *((_DWORD *)v9 - 1) = v15;
      v7 = *(unsigned int **)(a1 + 8);
      if ( !v7 )
        goto LABEL_11;
    }
    if ( v9 )
    {
LABEL_11:
      v17 = *((unsigned int *)v9 - 1);
      goto LABEL_12;
    }
  }
  v9 = nullptr;
  v17 = 0;
LABEL_12:
  v18 = sub_15EC1C0(v6, v17);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  sub_587230(v4, a3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), v4[5]);
  sub_58C540(v40, v4[6], (_QWORD *)v4[5]);
  v20 = (_QWORD *)v4[5];
  v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v20 + 144LL);
  if ( v21 == sub_586990 )
  {
    v22 = v4[6];
    result = v20[6];
    if ( v22 != result )
    {
      if ( v22 )
      {
        v24 = v4[7];
        v25 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v25 )
        {
          sub_15D7BC0(v24, v22);
          result = v20[6];
        }
      }
      v4[6] = result;
      if ( result )
        ++*(_DWORD *)(result + 8);
    }
  }
  else
  {
    result = v21(v4[5], v4 + 6);
  }
  if ( v9 )
  {
    v26 = v9;
    v27 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 < v27 )
    {
      do
      {
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            v25 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( (unsigned __int64)++v26 >= v27 )
            goto LABEL_28;
        }
        ++v26;
        sub_15D7BC0(v6, v28);
      }
      while ( (unsigned __int64)v26 < v27 );
    }
LABEL_28:
    result = sub_186B220(v9 - 1);
  }
  if ( v19 )
  {
    v25 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v25 )
      return sub_15D7BC0(v6, v19);
  }
  return result;
}

