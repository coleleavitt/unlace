__int64 __fastcall users_chooser_t__::vfunc_4(__int64 a1, const char *a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD **v14; // rbx
  __int64 v15; // r13
  unsigned __int8 (*v16)(void); // rax
  __int64 (__fastcall *v17)(__int64); // rax
  unsigned int v18; // eax
  _QWORD *v20; // rdi
  __int64 (*v21)(); // rax

  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 344);
  if ( v5 )
  {
    do
    {
      v6 = (__int64 *)(v3 + *(_QWORD *)(v2 + 336));
      v7 = v6[12];
      if ( v7 )
      {
        v6[13] = 0;
        qfree(v7, a2);
      }
      v8 = v6[9];
      if ( v8 )
      {
        v6[10] = 0;
        qfree(v8, a2);
      }
      v9 = v6[6];
      if ( v9 )
      {
        v6[7] = 0;
        qfree(v9, a2);
      }
      v10 = v6[3];
      if ( v10 )
      {
        v6[4] = 0;
        qfree(v10, a2);
      }
      a1 = *v6;
      if ( *v6 )
      {
        v6[1] = 0;
        qfree(a1, a2);
      }
      ++v4;
      v3 += 136;
    }
    while ( v5 != v4 );
  }
  *(_QWORD *)(v2 + 344) = 0;
  v11 = sub_426230(a1, a2);
  v12 = sub_417080((__int64)v11);
  v13 = *(_QWORD *)(v12 + 8);
  v14 = (_QWORD **)v12;
  if ( !v13 )
    return 1;
  v15 = v2 + 336;
  v16 = *(unsigned __int8 (**)(void))(*(_QWORD *)v13 + 480LL);
  if ( (char *)v16 == (char *)sub_178B60 )
  {
    v17 = (__int64 (__fastcall *)(__int64))(*v14)[16];
    if ( v17 == vault_with_events_t__::vfunc_16 )
    {
LABEL_16:
      v18 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v14[1] + 96LL))(v14[1], v15);
      goto LABEL_17;
    }
  }
  else
  {
    if ( v16() )
      return 1;
    v17 = (__int64 (__fastcall *)(__int64))(*v14)[16];
    if ( v17 == vault_with_events_t__::vfunc_16 )
    {
      v20 = v14[1];
      if ( !v20 || (v21 = *(__int64 (**)())(*v20 + 480LL), v21 != sub_178B60) && (unsigned __int8)v21() )
      {
        v18 = 52;
        goto LABEL_24;
      }
      goto LABEL_16;
    }
  }
  v18 = ((__int64 (__fastcall *)(_QWORD **, __int64))v17)(v14, v15);
LABEL_17:
  if ( !v18 )
    return 1;
LABEL_24:
  sub_416980(v18, (__int64)"Failed to retrieve users");
  return 0;
}
