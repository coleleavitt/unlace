__int64 __fastcall sub_52F380(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // r12
  __int64 v11; // rax
  const char *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  void *v15; // r13
  void *v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // ebx
  __int64 v20; // [rsp-8h] [rbp-A8h]
  void *v22; // [rsp+8h] [rbp-98h] BYREF
  int v23[4]; // [rsp+10h] [rbp-90h]
  int v24; // [rsp+20h] [rbp-80h]
  void *ptr; // [rsp+28h] [rbp-78h] BYREF
  __int128 v26; // [rsp+30h] [rbp-70h]
  int v27; // [rsp+40h] [rbp-60h]
  void *v28[11]; // [rsp+48h] [rbp-58h] BYREF

  v6 = *a2;
  v7 = *a2;
  v28[3] = (void *)__readfsqword(0x28u);
  v8 = *a1;
  *(_OWORD *)v23 = 0;
  v22 = nullptr;
  v9 = *(_QWORD **)(**(_QWORD **)(v8 + 1872) + 1808LL);
  v10 = *(_QWORD **)(*v9 + 1672LL);
  if ( (unsigned __int8)sub_6B9E00(v10, &v22, v7) )
  {
    if ( !*(_QWORD *)v23 )
    {
LABEL_17:
      sub_84F5B0(
        "cannot find struct name (id=0x%a)\n",
        v20,
        a4,
        (int)v22,
        v23[0],
        v23[2],
        v24,
        (int)ptr,
        v26,
        SDWORD2(v26),
        v27,
        (__int64)v28[0]);
      v18 = 0;
      goto LABEL_14;
    }
    v11 = *(_QWORD *)v23 - 1LL;
  }
  else
  {
    v28[0] = (void *)sub_3BDD60(v10, v6);
    v11 = sub_7BF130(v28, *v9, &v22);
  }
  if ( v11 <= 0 )
    goto LABEL_17;
  sub_6BCB20(&v22, a4);
  v12 = haystack;
  if ( *(_QWORD *)v23 )
    v12 = (const char *)v22;
  v13 = *a1;
  ptr = nullptr;
  v14 = *(_QWORD *)(v13 + 1672);
  v26 = 0;
  if ( (unsigned __int8)sub_6B9E00(v14, &ptr, a3) )
  {
    sub_6B9740(v28, v12);
    v15 = v28[0];
    v12 = haystack;
    if ( v28[1] )
      v12 = (const char *)v28[0];
  }
  else
  {
    v15 = nullptr;
  }
  v16 = (void *)sub_3BDD60(*(_QWORD **)(*a1 + 1672), a3);
  v17 = *a1;
  v28[0] = v16;
  v18 = sub_7BF170(v28, v17, v12, 0);
  if ( v15 )
    qfree(v15);
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
LABEL_14:
  if ( v22 )
  {
    *(_QWORD *)v23 = 0;
    qfree(v22);
  }
  return v18;
}
