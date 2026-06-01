char __fastcall Z3_solver_import_model_converter(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(); // rax
  _DWORD *v7; // rbx
  __int64 v8; // r15
  int v9; // eax
  void (__fastcall ***v10)(void *); // r14
  bool v11; // zf
  void (__fastcall ***v12)(_QWORD); // rbx
  void *ptr; // [rsp+8h] [rbp-40h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29D660(a1, a2, a3);
  v5 = *(_QWORD **)(a2 + 32);
  v6 = *(__int64 (__fastcall **)())(*v5 + 336LL);
  if ( v6 != sub_2B1E10 )
  {
    LOBYTE(v6) = ((__int64 (__fastcall *)(void **))v6)(&ptr);
    v7 = ptr;
    v8 = *(_QWORD *)(a3 + 32);
    if ( !ptr )
      goto LABEL_7;
    v9 = *((_DWORD *)ptr + 2);
    goto LABEL_6;
  }
  v7 = (_DWORD *)v5[7];
  v8 = *(_QWORD *)(a3 + 32);
  ptr = v7;
  if ( v7 )
  {
    v9 = v7[2] + 1;
    v7[2] = v9;
LABEL_6:
    LODWORD(v6) = v9 + 1;
    v7[2] = (_DWORD)v6;
  }
LABEL_7:
  v10 = *(void (__fastcall ****)(void *))(v8 + 56);
  if ( v10 )
  {
    v11 = (*((_DWORD *)v10 + 2))-- == 1;
    if ( v11 )
    {
      (**v10)(v10);
      LOBYTE(v6) = sub_186B220(v10);
    }
  }
  *(_QWORD *)(v8 + 56) = v7;
  v12 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr && (v11 = *((_DWORD *)ptr + 2) == 1, --*((_DWORD *)ptr + 2), v11) )
  {
    (**v12)(v12);
    LOBYTE(v6) = sub_186B220(v12);
    if ( !v4 )
      return (char)v6;
  }
  else if ( !v4 )
  {
    return (char)v6;
  }
  LOBYTE(v6) = byte_1C7EBA0;
  byte_1C7EBA0 = 1;
  return (char)v6;
}

