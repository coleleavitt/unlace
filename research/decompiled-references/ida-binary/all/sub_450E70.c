__int64 __fastcall commit_files_chooser_t__::vfunc_4(__int64 a1, const char *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(); // rdx
  unsigned int v12; // edi
  __int64 result; // rax

  v3 = sub_426230(a1, a2);
  v4 = sub_417080((__int64)v3);
  v5 = *(_DWORD *)(a1 + 180);
  v6 = a1 + 184;
  v7 = v4;
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 232LL);
  if ( v8 == vault_with_events_t__::vfunc_29 )
  {
    v9 = *(__int64 **)(v7 + 8);
    if ( v9 )
    {
      v10 = *v9;
      v11 = *(__int64 (**)())(*v9 + 480);
      if ( v11 == sub_178B60 )
      {
LABEL_4:
        v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v10 + 200))(v9, v6, v5);
        goto LABEL_5;
      }
      v6 = a1 + 184;
      if ( !(unsigned __int8)v11() )
      {
        v9 = *(__int64 **)(v7 + 8);
        v10 = *v9;
        goto LABEL_4;
      }
    }
    v12 = 52;
    goto LABEL_9;
  }
  v12 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v8)(v7, v6, v5);
LABEL_5:
  result = 1;
  if ( v12 )
  {
LABEL_9:
    sub_416980(v12, (__int64)"Failed to retrieve commit files");
    return 0;
  }
  return result;
}
