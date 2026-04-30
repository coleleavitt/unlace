__int64 __fastcall sites_chooser_t__::vfunc_11(_QWORD *a1, const char *a2)
{
  double v2; // xmm0_8
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // r12
  __int64 v7; // rax
  const char *v8; // rdx
  const char *v9; // rdx
  const char *v10; // rsi
  const char *v11; // rdx
  unsigned int v12; // r12d
  __int64 v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rax
  unsigned __int8 (*v17)(void); // rdx
  const char *v18; // rsi
  unsigned int v19; // eax
  __int64 *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r12
  const char *v26; // r13
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64, __int64, unsigned __int8); // rax
  __int64 *v29; // rdi
  __int64 (__fastcall *v30)(__int64, __int64, unsigned __int8); // rax
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
    v7 = a1[42] + 104LL * *(_QWORD *)(*(_QWORD *)a2 + 8 * v3);
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
  v10 = "HIDECANCEL\nDo you really want to delete these sites?\n%s";
  v12 = 0;
  if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to delete these sites?\n%s", v9) != 1 )
    goto LABEL_10;
  v14 = sub_426230(1, "HIDECANCEL\nDo you really want to delete these sites?\n%s", v11);
  v15 = (_QWORD *)sub_417080(v14);
  do
  {
    v25 = *(_QWORD *)(*(_QWORD *)a2 + 8LL * *((_QWORD *)a2 + 1) - 8);
    v26 = &s1;
    v27 = 104 * v25 + a1[42];
    if ( *(_QWORD *)(v27 + 8) )
      v26 = *(const char **)v27;
    v28 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8))(*v15 + 168LL);
    if ( v28 == vault_with_events_t__::vfunc_21 )
    {
      v29 = (__int64 *)v15[1];
      if ( !v29 )
        goto LABEL_34;
      v16 = *v29;
      v17 = *(unsigned __int8 (**)(void))(*v29 + 480);
      if ( (char *)v17 != (char *)sub_178B60 )
      {
        if ( v17() )
          goto LABEL_34;
        v29 = (__int64 *)v15[1];
        v16 = *v29;
      }
      v18 = v26;
      v19 = (*(__int64 (__fastcall **)(__int64 *, const char *, _QWORD))(v16 + 136))(v29, v26, 0);
    }
    else
    {
      v18 = v26;
      v19 = v28((__int64)v15, (__int64)v26, 0);
    }
    if ( v19 == 6 )
    {
      if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nSite '%s' is not empty.\nDo you still want to delete it?", v26) != 1 )
        continue;
      v30 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8))(*v15 + 168LL);
      if ( v30 == vault_with_events_t__::vfunc_21 )
      {
        v31 = (__int64 *)v15[1];
        if ( !v31 )
          goto LABEL_34;
        v32 = *v31;
        v33 = *(unsigned __int8 (**)(void))(*v31 + 480);
        if ( (char *)v33 != (char *)sub_178B60 )
        {
          if ( v33() )
          {
LABEL_34:
            v19 = 52;
LABEL_35:
            v10 = "Failed to delete site";
            sub_4168C0(v19, (__int64)"Failed to delete site");
            goto LABEL_36;
          }
          v31 = (__int64 *)v15[1];
          v32 = *v31;
        }
        v18 = v26;
        v19 = (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(v32 + 136))(v31, v26, 1);
      }
      else
      {
        v18 = v26;
        v19 = v30((__int64)v15, (__int64)v26, 1u);
      }
    }
    if ( v19 )
      goto LABEL_35;
    v20 = (__int64 *)(a1[42] + 104 * v25);
    v21 = v20[9];
    if ( v21 )
    {
      v20[10] = 0;
      v2 = qfree(v21, v18);
    }
    v22 = v20[6];
    if ( v22 )
    {
      v20[7] = 0;
      v2 = qfree(v22, v18, v2);
    }
    v23 = v20[3];
    if ( v23 )
    {
      v20[4] = 0;
      v2 = qfree(v23, v18, v2);
    }
    v24 = *v20;
    if ( *v20 )
    {
      v20[1] = 0;
      v2 = qfree(v24, v18, v2);
    }
    memmove(v20, v20 + 13, a1[42] + 104LL * a1[43]-- - (_QWORD)v20 - 104);
    if ( a1[45] == v25 )
      a1[45] = -1;
  }
  while ( (unsigned __int8)sub_49F220(a2) );
  v10 = a2;
  sub_49F270(a1, a2, **(_QWORD **)a2);
LABEL_36:
  v12 = 1;
LABEL_10:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v10);
  }
  return v12;
}
