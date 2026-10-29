__int64 __fastcall srcdbg_suspended_process(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  int v4; // ebp
  __int64 (__fastcall *v5)(__int64, __int64); // rdx
  unsigned int v6; // r14d
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  void (__fastcall ***v9)(_QWORD); // rdi
  unsigned int v10; // ebx
  bool v11; // zf
  void (__fastcall ***v12)(_QWORD); // rdi
  void (__fastcall ***v13)(_QWORD); // rdi
  _DWORD *v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *a3;
  v17[1] = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 8);
  (*(void (__fastcall **)(_DWORD **, __int64))(*(_QWORD *)v3 + 8LL))(&v15, v3);
  if ( v15 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15) )
    {
      v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL);
      if ( v5 == sub_226CE0 )
        (*(void (__fastcall **)(__int64 *))(*(_QWORD *)v15 + 24LL))(&v16);
      else
        ((void (__fastcall *)(__int64 *))v5)(&v16);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      v7 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      v17[0] = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v8 = sub_385A80(v17, v6, v7, v4 | 0x10000u);
      v9 = (void (__fastcall ***)(_QWORD))v17[0];
      v10 = v8;
      if ( v17[0] )
      {
        v11 = (*(_DWORD *)(v17[0] + 8LL))-- == 1;
        if ( v11 )
          (**v9)(v9);
      }
      v12 = (void (__fastcall ***)(_QWORD))v16;
      if ( v16 )
      {
        v11 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v11 )
          (**v12)(v12);
      }
    }
    else
    {
      v10 = 0;
    }
    v13 = (void (__fastcall ***)(_QWORD))v15;
    if ( v15 )
    {
      v11 = v15[2]-- == 1;
      if ( v11 )
        (**v13)(v13);
    }
  }
  else
  {
    return 0;
  }
  return v10;
}
