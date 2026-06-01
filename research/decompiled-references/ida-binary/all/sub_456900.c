__int64 __fastcall users_chooser_t__::vfunc_11(__int64 a1, const char *a2)
{
  double v2; // xmm0_8
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // r12
  __int64 v7; // rax
  const char *v8; // rdx
  const char *v9; // rdx
  const char *v10; // rsi
  unsigned int v11; // r12d
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rax
  unsigned __int8 (*v16)(void); // rdx
  const char *v17; // rsi
  unsigned int v18; // eax
  __int64 *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r15
  const char *v26; // r12
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64); // rax
  __int64 *v29; // rdi
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 *v31; // rdi
  __int64 v32; // rax
  unsigned __int8 (*v33)(void); // rdx
  const char *v34; // [rsp+0h] [rbp-58h] BYREF
  __int128 v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  v2 = 0.0;
  v3 = 0;
  v5 = *((_QWORD *)a2 + 1);
  v36 = __readfsqword(0x28u);
  v34 = nullptr;
  v35 = 0;
  if ( !v5 )
    goto LABEL_13;
  do
  {
    v7 = *(_QWORD *)(a1 + 336) + 136LL * *(_QWORD *)(*(_QWORD *)a2 + 8 * v3);
    v8 = &s1;
    if ( *(_QWORD *)(v7 + 8) )
      v8 = *(const char **)v7;
    sub_16FAA0((__int64 *)&v34, (__int64)"%s\n", v8);
    ++v3;
  }
  while ( v3 < v5 && v3 != 30 );
  if ( v5 > 0x1E )
    sub_16FAA0((__int64 *)&v34, (__int64)"... + %zu more\n", v5 - 30);
  v9 = v34;
  if ( !(_QWORD)v35 )
LABEL_13:
    v9 = &s1;
  v10 = "HIDECANCEL\nDo you really want to delete these users?\n%s";
  v11 = 0;
  if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to delete these users?\n%s", v9) != 1 )
    goto LABEL_10;
  v13 = sub_426230(1, "HIDECANCEL\nDo you really want to delete these users?\n%s");
  v14 = (_QWORD *)sub_417080((__int64)v13);
  do
  {
    v25 = 136LL * *(_QWORD *)(*(_QWORD *)a2 + 8LL * *((_QWORD *)a2 + 1) - 8);
    v26 = &s1;
    v27 = v25 + *(_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(v27 + 8) )
      v26 = *(const char **)v27;
    v28 = *(__int64 (__fastcall **)(__int64))(*v14 + 56LL);
    if ( v28 == vault_with_events_t__::vfunc_7 )
    {
      v29 = (__int64 *)v14[1];
      if ( !v29 )
        goto LABEL_35;
      v15 = *v29;
      v16 = *(unsigned __int8 (**)(void))(*v29 + 480);
      if ( (char *)v16 != (char *)sub_178B60 )
      {
        if ( v16() )
          goto LABEL_35;
        v29 = (__int64 *)v14[1];
        v15 = *v29;
      }
      v17 = v26;
      v18 = (*(__int64 (__fastcall **)(__int64 *, const char *, _QWORD))(v15 + 24))(v29, v26, 0);
    }
    else
    {
      v17 = v26;
      v18 = ((__int64 (__fastcall *)(_QWORD *, const char *, _QWORD))v28)(v14, v26, 0);
    }
    if ( v18 == 16 )
    {
      if ( (unsigned int)sub_1698A0(
                           1,
                           (int)"HIDECANCEL\nUser '%s' has non-empty worklists.\nDo you still want to delete him/her?",
                           v26) != 1 )
        continue;
      v30 = *(__int64 (__fastcall **)(__int64))(*v14 + 56LL);
      if ( v30 == vault_with_events_t__::vfunc_7 )
      {
        v31 = (__int64 *)v14[1];
        if ( !v31 )
          goto LABEL_35;
        v32 = *v31;
        v33 = *(unsigned __int8 (**)(void))(*v31 + 480);
        if ( (char *)v33 != (char *)sub_178B60 )
        {
          if ( v33() )
          {
LABEL_35:
            v18 = 52;
LABEL_36:
            v10 = "Failed to delete user";
            sub_4168C0(v18, (__int64)"Failed to delete user");
            goto LABEL_37;
          }
          v31 = (__int64 *)v14[1];
          v32 = *v31;
        }
        v17 = v26;
        v18 = (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(v32 + 24))(v31, v26, 1);
      }
      else
      {
        v17 = v26;
        v18 = ((__int64 (__fastcall *)(_QWORD *, const char *, __int64))v30)(v14, v26, 1);
      }
    }
    if ( v18 )
      goto LABEL_36;
    v19 = (__int64 *)(*(_QWORD *)(a1 + 336) + v25);
    v20 = v19[12];
    if ( v20 )
    {
      v19[13] = 0;
      v2 = qfree(v20, v17);
    }
    v21 = v19[9];
    if ( v21 )
    {
      v19[10] = 0;
      v2 = qfree(v21, v17, v2);
    }
    v22 = v19[6];
    if ( v22 )
    {
      v19[7] = 0;
      v2 = qfree(v22, v17, v2);
    }
    v23 = v19[3];
    if ( v23 )
    {
      v19[4] = 0;
      v2 = qfree(v23, v17, v2);
    }
    v24 = *v19;
    if ( *v19 )
    {
      v19[1] = 0;
      v2 = qfree(v24, v17, v2);
    }
    memmove(v19, v19 + 17, *(_QWORD *)(a1 + 336) + 136LL * *(_QWORD *)(a1 + 344) - (_QWORD)v19 - 136);
    --*(_QWORD *)(a1 + 344);
  }
  while ( (unsigned __int8)sub_49F220(a2) );
  v10 = a2;
  sub_49F270(a1, a2, **(_QWORD **)a2);
LABEL_37:
  v11 = 1;
LABEL_10:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v10);
  }
  return v11;
}
