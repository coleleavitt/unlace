unsigned __int64 __fastcall sub_386220(__int64 a1, __int64 a2, const char *a3, double a4)
{
  __int64 v4; // rax
  int v7; // edx
  _QWORD *v8; // rbx
  size_t v10; // rax
  size_t v11; // r13
  const char *v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rdi
  void *v21; // rdi
  size_t v22; // r14
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-40h] BYREF
  __int64 v25; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v4 = 0;
  if ( !a1 || !(_QWORD)xmmword_8CF2A8 )
    return v26 - __readfsqword(0x28u);
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD **)(qword_8CF2A0 + 8 * v4);
    if ( v8 )
    {
      if ( a1 == v8[3] )
        break;
    }
    v4 = ++v7;
    if ( v7 >= (unsigned __int64)xmmword_8CF2A8 )
      return v26 - __readfsqword(0x28u);
  }
  if ( !a3 || (v10 = strlen(a3), (v11 = v10) == 0) )
  {
    v8[8] = 0;
LABEL_11:
    v12 = &s1;
    goto LABEL_12;
  }
  v21 = (void *)v8[7];
  v22 = v10 + 1;
  if ( v8[9] < v10 + 1 )
  {
    v23 = qvector_reserve(v8 + 7, v8[7], v22, 1);
    v8[7] = v23;
    v21 = (void *)v23;
  }
  v8[8] = v22;
  memmove(v21, a3, v11);
  *(_BYTE *)(v8[7] + v11) = 0;
  if ( !v8[8] )
    goto LABEL_11;
  v12 = (const char *)v8[7];
LABEL_12:
  sub_23A400((__int64)&qword_8CC000, v12);
  v13 = v8[5];
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*(_QWORD *)v13 + 64LL))(&v24, v13, v8[7]);
  if ( !v24 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24) )
  {
    if ( !under_debugger )
      interr(40256, v13, v14, v15, a4);
    BUG();
  }
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL);
  if ( v16 == sub_226CE0 )
    (*(void (__fastcall **)(__int64 *))(*(_QWORD *)v24 + 24LL))(&v25);
  else
    ((void (__fastcall *)(__int64 *))v16)(&v25);
  v17 = v8[6];
  if ( v17 )
  {
    v18 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v18 )
      (**(void (__fastcall ***)(_QWORD))v8[6])(v8[6]);
  }
  v19 = v25;
  v8[6] = v25;
  if ( v19 && !*(_DWORD *)(v19 + 8) )
    (**(void (__fastcall ***)(__int64))v19)(v19);
  v20 = v24;
  v8[10] = a2;
  if ( v20 )
  {
    v18 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v18 )
      (**(void (__fastcall ***)(__int64))v20)(v20);
  }
  return v26 - __readfsqword(0x28u);
}
