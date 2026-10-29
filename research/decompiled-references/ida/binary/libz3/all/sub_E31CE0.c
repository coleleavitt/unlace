__int64 __fastcall sub_E31CE0(__int64 *a1, void (***a2)(void))
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(); // rax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  __int64 v9; // r12
  _QWORD *v10; // rbp
  __int64 v11; // rax
  void (__fastcall __noreturn *v12)(); // r13
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rdx
  __int64 result; // rax
  _DWORD *v16; // r12
  const void **v17; // r13
  const void **v18; // rbx
  void (***v19)(void); // rdi
  __int64 v20; // rbp
  bool v21; // zf

  v3 = (_QWORD *)*a1;
  v4 = *(__int64 (__fastcall **)())(*v3 + 72LL);
  if ( v4 == sub_E339D0 )
  {
    v5 = (_QWORD *)v3[20];
    v6 = *(__int64 (**)(void))(*v5 + 72LL);
    if ( v6 != v4 )
    {
LABEL_25:
      v9 = v6();
      goto LABEL_6;
    }
    v7 = (_QWORD *)v5[20];
    v4 = *(__int64 (__fastcall **)())(*v7 + 72LL);
    if ( v4 == v6 )
    {
      v8 = (_QWORD **)v7[20];
      v6 = (__int64 (*)(void))(*v8)[9];
      if ( v6 == v4 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[20] + 72LL))(v8[20]);
        goto LABEL_6;
      }
      goto LABEL_25;
    }
  }
  v9 = v4();
LABEL_6:
  v10 = (_QWORD *)*a1;
  v11 = *(_QWORD *)*a1;
  v12 = *(void (__fastcall __noreturn **)())(v11 + 80);
  v13 = *(__int64 (__fastcall **)(__int64))(v11 + 104);
  if ( v13 == sub_2B1DE0 )
    v14 = (__int64)(v10 + 10);
  else
    v14 = v13(*a1);
  if ( v12 == sub_E33240 )
  {
    sub_1872CE0("");
    sub_1873130(114, 76);
  }
  result = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v12)(v10, v9, v14);
  v16 = (_DWORD *)result;
  if ( result )
  {
    v18 = (const void **)a1[2];
    ++*(_DWORD *)(result + 48);
    if ( v18 )
    {
      result = *((unsigned int *)v18 - 1);
      v17 = &v18[result];
      if ( v18 != v17 )
        goto LABEL_13;
    }
LABEL_22:
    v21 = v16[12]-- == 1;
    if ( v21 )
    {
      (**(void (__fastcall ***)(_DWORD *))v16)(v16);
      return sub_186B220(v16);
    }
    return result;
  }
  v18 = (const void **)a1[2];
  if ( v18 )
  {
    result = *((unsigned int *)v18 - 1);
    v16 = nullptr;
    v17 = &v18[result];
    if ( v18 != v17 )
    {
      do
      {
        while ( 1 )
        {
LABEL_13:
          if ( !*v18 )
            BUG();
          result = (__int64)__dynamic_cast(
                              *v18,
                              (const struct __class_type_info *)&`typeinfo for'solver,
                              (const struct __class_type_info *)&`typeinfo for'pool_solver,
                              0);
          v19 = *(void (****)(void))(result + 160);
          v20 = result;
          if ( a2 == v19 )
            break;
          if ( v17 == ++v18 )
            goto LABEL_21;
        }
        *(_DWORD *)(result + 184) = 0;
        if ( v16 )
          ++v16[12];
        if ( v19 )
        {
          v21 = (*((_DWORD *)v19 + 12))-- == 1;
          if ( v21 )
          {
            (**v19)();
            result = sub_186B220(v19);
          }
        }
        ++v18;
        *(_QWORD *)(v20 + 160) = v16;
      }
      while ( v17 != v18 );
LABEL_21:
      if ( v16 )
        goto LABEL_22;
    }
  }
  return result;
}

