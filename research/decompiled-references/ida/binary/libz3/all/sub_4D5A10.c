__int64 __fastcall sub_4D5A10(__int64 a1)
{
  void *v1; // rbp
  __int64 (__fastcall *v2)(__int64, __int64); // rdx
  unsigned int v3; // ebx
  void (__fastcall ***v4)(_QWORD); // rbp
  bool v5; // zf
  void (__fastcall ***v6)(_QWORD); // rbp
  void *v8; // [rsp+0h] [rbp-28h] BYREF
  void *ptr; // [rsp+8h] [rbp-20h] BYREF

  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 208LL))(&ptr, a1);
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 200LL))(&v8, a1);
  v1 = ptr;
  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 40LL);
  if ( v2 == sub_4C9890 )
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)v8 + 16LL))();
    if ( (_BYTE)v3 )
      v3 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  else
  {
    v3 = v2((__int64)v8, (__int64)ptr);
  }
  v4 = (void (__fastcall ***)(_QWORD))v8;
  if ( v8 )
  {
    v5 = (*((_DWORD *)v8 + 2))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = (void (__fastcall ***)(_QWORD))ptr;
  if ( !ptr )
    return v3;
  v5 = (*((_DWORD *)ptr + 2))-- == 1;
  if ( !v5 )
    return v3;
  (**v6)(v6);
  sub_186B220(v6);
  return v3;
}

