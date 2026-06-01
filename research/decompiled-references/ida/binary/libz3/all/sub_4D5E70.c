__int64 __fastcall sub_4D5E70(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rax
  void *v4; // r13
  __int64 (__fastcall *v5)(__int64, __int64); // rdx
  char v6; // al
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  void (__fastcall ***v13)(_QWORD); // rbx
  bool v14; // zf
  void (__fastcall ***v15)(void *); // rbx
  unsigned int v16; // ebx
  void *v18; // rbx
  void *v19; // rbx
  _QWORD *v20; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  void *v22; // [rsp+18h] [rbp-30h] BYREF

  v3 = *a1;
  v20 = nullptr;
  (*(void (__fastcall **)(void **, __int64 *))(v3 + 200))(&ptr, a1);
  (*(void (__fastcall **)(void **, __int64 *))(*a1 + 208))(&v22, a1);
  while ( 1 )
  {
    v4 = v22;
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v5 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_6;
      v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else
    {
      v6 = v5((__int64)ptr, (__int64)v22);
    }
    if ( v6 )
    {
      v13 = (void (__fastcall ***)(_QWORD))v22;
      if ( v22 && (v14 = *((_DWORD *)v22 + 2) == 1, --*((_DWORD *)v22 + 2), v14) )
      {
        (**v13)(v13);
        sub_186B220(v13);
        v15 = (void (__fastcall ***)(void *))ptr;
        if ( ptr )
        {
LABEL_17:
          v14 = (*((_DWORD *)v15 + 2))-- == 1;
          if ( v14 )
          {
            (**v15)(v15);
            sub_186B220(v15);
          }
        }
      }
      else
      {
        v15 = (void (__fastcall ***)(void *))ptr;
        if ( ptr )
          goto LABEL_17;
      }
      v16 = 0;
      goto LABEL_20;
    }
LABEL_6:
    v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    v8 = &v20;
    (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v7 + 24LL))(v7, &v20);
    v9 = v20;
    v10 = (_QWORD *)*a2;
    if ( !v20 )
      break;
    v11 = *((unsigned int *)v20 - 1);
    if ( v10 )
    {
      if ( (_DWORD)v11 == *((_DWORD *)v10 - 1) )
      {
        v12 = &v20[v11];
        if ( v20 == v12 )
          goto LABEL_26;
        while ( 1 )
        {
          v8 = (_QWORD *)*v10;
          if ( *v9 != *v10 )
            break;
          ++v9;
          ++v10;
          if ( v12 == v9 )
            goto LABEL_26;
        }
      }
    }
    else if ( !(_DWORD)v11 )
    {
      goto LABEL_26;
    }
LABEL_34:
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
  }
  if ( v10 && *((_DWORD *)v10 - 1) )
    goto LABEL_34;
LABEL_26:
  v18 = v22;
  if ( v22 )
  {
    v14 = (*((_DWORD *)v22 + 2))-- == 1;
    if ( v14 )
    {
      (**(void (__fastcall ***)(void *, _QWORD *, _QWORD *))v18)(v18, v8, v10);
      sub_186B220(v18);
    }
  }
  v19 = ptr;
  if ( ptr )
  {
    v14 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v14 )
    {
      (**(void (__fastcall ***)(void *, _QWORD *, _QWORD *))v19)(v19, v8, v10);
      sub_186B220(v19);
    }
  }
  v16 = 1;
LABEL_20:
  if ( v20 )
    sub_186B220(v20 - 1);
  return v16;
}

