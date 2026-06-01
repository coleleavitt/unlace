__int64 __fastcall sub_4D5B00(_QWORD **a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64); // rdx
  void *v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64); // rdx
  char v8; // al
  void (__fastcall ***v9)(_QWORD); // rbp
  bool v10; // zf
  void (__fastcall ***v11)(_QWORD); // rbp
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  void *v15; // [rsp+18h] [rbp-30h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(*a1[1] + 40LL))(a1[1], a1 + 2);
  v13 = 0;
  v3 = v2;
  ((void (__fastcall *)(void **, _QWORD **))(*a1)[25])(&ptr, a1);
  ((void (__fastcall *)(void **, _QWORD **))(*a1)[26])(&v15, a1);
  while ( 1 )
  {
    v6 = v15;
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v7 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_2;
      v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      v8 = v7((__int64)ptr, (__int64)v15);
    }
    if ( v8 )
      break;
LABEL_2:
    v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v13);
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL);
    if ( v5 == sub_4C9AC0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 40LL))(v3, &v13);
    else
      ((void (__fastcall *)(__int64, __int64 *))v5)(v3, &v13);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
  }
  v9 = (void (__fastcall ***)(_QWORD))v15;
  if ( v15 )
  {
    v10 = (*((_DWORD *)v15 + 2))-- == 1;
    if ( v10 )
    {
      (**v9)(v9);
      sub_186B220(v9);
    }
  }
  v11 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v10 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v10 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  return v3;
}

