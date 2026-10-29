__int64 __fastcall sub_2F2620(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 (*v4)(void); // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int i; // ebx
  __int64 result; // rax
  _DWORD *v11; // r15
  void *v12; // r15
  void *v13; // rbp
  __int64 (__fastcall *v14)(__int64); // rax
  void *v15; // [rsp+10h] [rbp-A8h]
  __int64 v16[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+70h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 160) )
  {
    if ( !*(_BYTE *)(a1 + 749) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_2EB560(v16, "Set opt.incremental = true to allow adding constraints during search");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v16);
      sub_233E40((__int64)v16);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 240LL);
    if ( (char *)v4 == (char *)sub_2EAF00 )
      v5 = *(_QWORD *)(a1 + 232);
    else
      v5 = v4();
    sub_E5EBF0(v5, a2);
    v6 = *(_QWORD *)(a1 + 416);
    v7 = v6 + 24LL * *(unsigned int *)(a1 + 424);
    if ( v6 != v7 )
    {
      while ( *(_DWORD *)(v6 + 4) != 2 )
      {
        v6 += 24;
        if ( v7 == v6 )
          goto LABEL_13;
      }
      while ( v7 != v6 )
      {
        sub_2FFBA0(*(_QWORD *)(v6 + 16));
        v8 = v6 + 24;
        if ( v7 == v6 + 24 )
          break;
        while ( 1 )
        {
          v6 = v8;
          if ( *(_DWORD *)(v8 + 4) == 2 )
            break;
          v8 += 24;
          if ( v7 == v8 )
            goto LABEL_13;
        }
      }
    }
LABEL_13:
    for ( i = 0; ; ++i )
    {
      v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL);
      if ( v14 == sub_2A5F50 )
      {
        result = *(_QWORD *)(a1 + 592);
        if ( !result )
          return result;
        result = *(unsigned int *)(result - 4);
        if ( i >= (unsigned int)result )
          return result;
      }
      else
      {
        result = v14(a1);
        if ( i >= (unsigned int)result )
          return result;
      }
      v11 = (_DWORD *)(*(_QWORD *)(a1 + 592) + 104LL * i);
      if ( *v11 != 2 )
      {
        v16[0] = 0;
        v16[1] = 0;
        v17[0] = 1;
        v17[1] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v16, &qword_1C7F280);
        v18[0] = 0;
        v18[1] = 0;
        v19[0] = 1;
        v19[1] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v18, (int *)&qword_1C7F200);
        v20[0] = 0;
        v20[1] = 0;
        v21[0] = 1;
        v21[1] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v20, (int *)&qword_1C7F220);
        sub_32F8F0(a1 + 296, (unsigned int)v11[24], v16);
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20);
        sub_182CBA0(v15, v21);
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v18);
        sub_182CBA0(v12, v19);
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        sub_182CBA0(v13, v17);
      }
    }
  }
  v16[0] = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_2F13A0((_QWORD *)(a1 + 568), v16);
  return sub_2EC9E0(a1);
}

