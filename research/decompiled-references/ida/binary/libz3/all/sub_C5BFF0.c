__int64 __fastcall sub_C5BFF0(struct _Unwind_Exception *a1, _Unwind_Exception_Class a2)
{
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // r15
  _Unwind_Exception_Class v4; // rbp
  char i; // r14
  _Unwind_Word private_1; // rsi
  __int64 *v7; // r9
  __int64 v8; // r10
  _Unwind_Word private_2; // rdi
  bool v10; // zf
  int v11; // eax
  _Unwind_Exception_Class v12; // r14
  int v13; // eax
  _Unwind_Exception_Class v14; // rsi
  _Unwind_Exception_Cleanup_Fn v15; // rdi
  _Unwind_Exception_Class exception_class; // rax
  _Unwind_Word v17; // rax
  _Unwind_Word v18; // rsi
  _Unwind_Word v19; // rdi
  _Unwind_Exception_Class v20; // rsi
  _Unwind_Exception_Cleanup_Fn v21; // rdi
  _Unwind_Exception_Cleanup_Fn v22; // rax
  int v23; // edx
  unsigned int v24; // ebx
  __int64 v26; // rax
  __int64 *v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+8h] [rbp-70h]
  _Unwind_Exception_Class v29; // [rsp+18h] [rbp-60h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  _Unwind_Exception_Class v31; // [rsp+28h] [rbp-50h] BYREF
  _Unwind_Word v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33[8]; // [rsp+38h] [rbp-40h] BYREF

  exception_cleanup = a1->exception_cleanup;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = a2;
  for ( i = 0; ; i = 1 )
  {
    private_1 = a1[15].private_1;
    v7 = (__int64 *)a1[4].private_1;
    v8 = *(_QWORD *)(v4 + 16);
    if ( private_1 )
    {
      private_2 = a1[15].private_2;
      v10 = (*(_DWORD *)(private_1 + 8))-- == 1;
      if ( v10 )
      {
        v28 = v8;
        v27 = v7;
        sub_15D7BC0(private_2, private_1);
        v7 = v27;
        v8 = v28;
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
      v13 = *(_DWORD *)(v4 + 8) + 1;
      if ( !i )
      {
        *(_DWORD *)(v4 + 8) = v13;
        v29 = v4;
        sub_C516F0(&a1[1].private_2, &v29);
        v30 = 0;
        sub_C50B00(&a1[2].private_2, &v30);
LABEL_32:
        v24 = 1;
        goto LABEL_33;
      }
      v14 = a1[15].exception_class;
      *(_DWORD *)(v4 + 8) = v13;
      if ( !v14 )
      {
        a1[15].exception_class = v4;
        exception_class = v4;
        v31 = v4;
        goto LABEL_20;
      }
      v15 = a1[15].exception_cleanup;
      v10 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v15, v14);
      a1[15].exception_class = v4;
      exception_class = v4;
LABEL_19:
      v31 = exception_class;
      if ( !exception_class )
      {
LABEL_21:
        sub_C516F0(&a1[1].private_2, &v31);
        v17 = a1[15].private_1;
        if ( v17 )
        {
          ++*(_DWORD *)(v17 + 8);
          v32 = v17;
          sub_C50B00(&a1[2].private_2, &v32);
        }
        else
        {
          v26 = sub_15DE370((int)a1->exception_cleanup);
          v33[0] = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          sub_C50B00(&a1[2].private_2, v33);
        }
        v18 = a1[15].private_1;
        if ( v18 )
        {
          v19 = a1[15].private_2;
          v10 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v19, v18);
        }
        v20 = a1[15].exception_class;
        a1[15].private_1 = 0;
        if ( v20 )
        {
          v21 = a1[15].exception_cleanup;
          v10 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v21, v20);
        }
        a1[15].exception_class = 0;
        v22 = a1[1].exception_cleanup;
        if ( v22 )
        {
          v23 = *((_DWORD *)v22 - 1);
          if ( v23 )
            *((_BYTE *)v22 + 16 * (unsigned int)(v23 - 1) + 8) |= 2u;
        }
        goto LABEL_32;
      }
LABEL_20:
      ++*(_DWORD *)(exception_class + 8);
      goto LABEL_21;
    }
    v12 = a1[15].exception_class;
    if ( *(_WORD *)(v12 + 4) || *(_DWORD *)(v12 + 24) )
      break;
    ++*(_DWORD *)(v12 + 8);
    v10 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(exception_cleanup, v4);
    v4 = v12;
  }
  v24 = 0;
LABEL_33:
  v10 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(exception_cleanup, v4);
  return v24;
}

