__int64 __fastcall sites_chooser_t__::vfunc_4(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 (*v14)(); // rax
  __int64 v15; // rbp
  char v16; // al
  const char *v17; // rdx
  _QWORD *v18; // rsi
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 (*v22)(); // rcx
  unsigned int v23; // eax
  __int64 v25; // rax
  char v26; // al
  const char *v27; // [rsp+8h] [rbp-30h]

  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = a1[43];
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)(v3 + v2[42]);
      v7 = v6[9];
      if ( v7 )
      {
        v6[10] = 0;
        qfree(v7, a2);
      }
      v8 = v6[6];
      if ( v8 )
      {
        v6[7] = 0;
        qfree(v8, a2);
      }
      v9 = v6[3];
      if ( v9 )
      {
        v6[4] = 0;
        qfree(v9, a2);
      }
      a1 = (_QWORD *)*v6;
      if ( *v6 )
      {
        v6[1] = 0;
        qfree(a1, a2);
      }
      ++v4;
      v3 += 104;
    }
    while ( v5 != v4 );
  }
  v2[43] = 0;
  v10 = sub_426230(a1, a2);
  v11 = sub_417080(v10);
  v12 = *(_QWORD *)(v11 + 8);
  v13 = (_QWORD *)v11;
  if ( !v12 || (v14 = *(__int64 (**)())(*(_QWORD *)v12 + 480LL), v14 != sub_178B60) && (unsigned __int8)v14() )
  {
    v2[45] = -1;
    return 1;
  }
  v15 = sub_426230(v12, a2);
  v16 = sub_4170D0(v15);
  v17 = nullptr;
  if ( !v16 )
  {
    v25 = sub_4170C0(v15);
    v17 = &s1;
    if ( *(_QWORD *)(v25 + 8) )
      v17 = *(const char **)v25;
  }
  v18 = v2 + 42;
  v19 = *(__int64 (__fastcall **)(__int64))(*v13 + 176LL);
  if ( v19 == vault_with_events_t__::vfunc_22 )
  {
    v20 = (__int64 *)v13[1];
    if ( v20 )
    {
      v21 = *v20;
      v22 = *(__int64 (**)())(*v20 + 480);
      if ( v22 == sub_178B60 )
      {
LABEL_17:
        v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, const char *))(v21 + 144))(v20, v18, v17);
        goto LABEL_18;
      }
      v27 = v17;
      v26 = v22();
      v18 = v2 + 42;
      v17 = v27;
      if ( !v26 )
      {
        v20 = (__int64 *)v13[1];
        v21 = *v20;
        goto LABEL_17;
      }
    }
    v23 = 52;
    goto LABEL_26;
  }
  v23 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, const char *))v19)(v13, v18, v17);
LABEL_18:
  if ( !v23 )
    return 1;
LABEL_26:
  sub_416980(v23, (__int64)"Failed to retrieve sites");
  return 0;
}
