__int64 __fastcall sub_C5B5A0(struct _Unwind_Exception *a1, _Unwind_Exception_Class a2)
{
  _Unwind_Exception_Class v2; // rbp
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // r14
  char i; // r13
  _Unwind_Word private_1; // rsi
  __int64 *v7; // r15
  __int64 v8; // r9
  _Unwind_Word private_2; // rdi
  bool v10; // zf
  int v11; // eax
  _Unwind_Exception_Class v12; // r13
  int v13; // eax
  _Unwind_Exception_Class v14; // rsi
  _Unwind_Exception_Cleanup_Fn v15; // rdi
  _Unwind_Exception_Class exception_class; // rax
  _Unwind_Exception_Class v17; // rsi
  _Unwind_Exception_Cleanup_Fn v18; // rdi
  _Unwind_Exception_Cleanup_Fn v19; // rax
  int v20; // edx
  unsigned int v21; // ebx
  __int64 v23; // [rsp+8h] [rbp-50h]
  _Unwind_Exception_Class v24; // [rsp+10h] [rbp-48h] BYREF
  _Unwind_Exception_Class v25[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a2;
  exception_cleanup = a1->exception_cleanup;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  for ( i = 0; ; i = 1 )
  {
    private_1 = a1[15].private_1;
    v7 = (__int64 *)a1[4].private_1;
    v8 = *(_QWORD *)(v2 + 16);
    if ( private_1 )
    {
      private_2 = a1[15].private_2;
      v10 = (*(_DWORD *)(private_1 + 8))-- == 1;
      if ( v10 )
      {
        v23 = v8;
        sub_15D7BC0(private_2, private_1);
        v8 = v23;
      }
    }
    a1[15].private_1 = 0;
    v11 = sub_C58570(v7, v8, 0, nullptr, a1 + 15);
    if ( v11 == 4 )
    {
      exception_class = a1[15].exception_class;
      goto LABEL_19;
    }
    if ( v11 == 5 )
    {
      v13 = *(_DWORD *)(v2 + 8) + 1;
      if ( !i )
      {
        *(_DWORD *)(v2 + 8) = v13;
        v24 = v2;
        sub_C516F0(&a1[1].private_2, &v24);
LABEL_27:
        v21 = 1;
        goto LABEL_28;
      }
      v14 = a1[15].exception_class;
      *(_DWORD *)(v2 + 8) = v13;
      if ( !v14 )
      {
        a1[15].exception_class = v2;
        exception_class = v2;
        v25[0] = v2;
LABEL_20:
        ++*(_DWORD *)(exception_class + 8);
LABEL_21:
        sub_C516F0(&a1[1].private_2, v25);
        v17 = a1[15].exception_class;
        if ( v17 )
        {
          v18 = a1[15].exception_cleanup;
          v10 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v18, v17);
        }
        a1[15].exception_class = 0;
        v19 = a1[1].exception_cleanup;
        if ( v19 )
        {
          v20 = *((_DWORD *)v19 - 1);
          if ( v20 )
            *((_BYTE *)v19 + 16 * (unsigned int)(v20 - 1) + 8) |= 2u;
        }
        goto LABEL_27;
      }
      v15 = a1[15].exception_cleanup;
      v10 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v15, v14);
      a1[15].exception_class = v2;
      exception_class = v2;
LABEL_19:
      v25[0] = exception_class;
      if ( !exception_class )
        goto LABEL_21;
      goto LABEL_20;
    }
    v12 = a1[15].exception_class;
    if ( *(_WORD *)(v12 + 4) || *(_DWORD *)(v12 + 24) )
      break;
    ++*(_DWORD *)(v12 + 8);
    v10 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(exception_cleanup, v2);
    v2 = v12;
  }
  v21 = 0;
LABEL_28:
  v10 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(exception_cleanup, v2);
  return v21;
}

