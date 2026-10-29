const char *__fastcall sub_10DBAA0(__int64 a1, __int64 a2, const char **a3, __int64 a4)
{
  const char **v6; // r13
  size_t v7; // r12
  const char **v8; // r15
  size_t v9; // rbp
  char *v10; // rbx
  const char *v11; // r14
  size_t v12; // r9
  const char *v13; // rbx
  const char **v15; // r14
  size_t v16; // rbp
  size_t v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  size_t v23; // rax
  bool v24; // zf
  const char *v25; // rdx
  __int64 v26; // r12
  size_t v27; // [rsp+0h] [rbp-A8h]
  void *s2; // [rsp+8h] [rbp-A0h]
  void *v29; // [rsp+20h] [rbp-88h] BYREF
  __int64 v30; // [rsp+30h] [rbp-78h] BYREF
  void *v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  char *s; // [rsp+60h] [rbp-48h]

  if ( !(_BYTE)byte_2CD8798 && __cxa_guard_acquire(&byte_2CD8798) )
  {
    v18 = sub_1105E80();
    v19 = sub_21BB380(v18, 299);
    v21 = *(_QWORD **)(v20 + 8);
    v22 = *(unsigned int *)(*(_QWORD *)(v20 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v19 + 40) - 1) + 4);
    v23 = 0;
    v24 = *v21 + v22 == 0;
    v25 = (const char *)(*v21 + v22);
    v26 = (__int64)v25;
    if ( !v24 )
      v23 = j__strlen(v25);
    qword_2CD87A0 = v26;
    qword_2CD87A8 = v23;
    __cxa_guard_release(&byte_2CD8798);
  }
  v6 = &a3[a4];
  if ( v6 == a3 )
    goto LABEL_20;
  v7 = qword_2CD87A8;
  s2 = (void *)qword_2CD87A0;
  if ( !qword_2CD87A8 )
  {
    v15 = a3;
    do
    {
      v10 = (char *)*v15;
      v16 = 0;
      if ( *v15 )
        v16 = strlen(*v15);
      ++v15;
    }
    while ( v6 != v15 );
    if ( v16 )
      return &v10[v7];
LABEL_20:
    v17 = 0;
    sub_112C630(&v29, a1, a2);
    v10 = s;
    if ( s )
      v17 = j__strlen(s);
    if ( v31 != &v32 )
      operator delete(v31);
    if ( v29 != &v30 )
      operator delete(v29);
    v7 = qword_2CD87A8;
    s2 = (void *)qword_2CD87A0;
    if ( v17 < qword_2CD87A8 )
      goto LABEL_13;
    if ( !qword_2CD87A8 )
      return &v10[v7];
    goto LABEL_28;
  }
  v8 = a3;
  v9 = 0;
  v10 = nullptr;
  do
  {
    v11 = *v8;
    v12 = 0;
    if ( *v8 )
      v12 = strlen(*v8);
    v27 = v12;
    if ( v12 >= v7 && !memcmp(v11, s2, v7) )
    {
      v9 = v27;
      v10 = (char *)v11;
    }
    ++v8;
  }
  while ( v6 != v8 );
  if ( !v9 )
    goto LABEL_20;
  if ( v9 >= v7 )
  {
LABEL_28:
    if ( memcmp(v10, s2, v7) )
      goto LABEL_13;
    return &v10[v7];
  }
LABEL_13:
  v13 = &byte_22F0C30;
  j__strlen(&byte_22F0C30);
  return v13;
}
