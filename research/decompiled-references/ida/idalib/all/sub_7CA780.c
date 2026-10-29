__int64 __fastcall sub_7CA780(const char *a1, __int64 a2)
{
  const char *v2; // rbx
  void *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  void *v7; // r14
  const char *v8; // r12
  const char *v9; // rsi
  const char *v10; // rsi
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  char *v14; // r15
  void *v15; // r12
  int v16; // edx
  void *v17; // r8
  __int64 v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  int v26; // eax
  unsigned int v27; // ebp
  char v29; // [rsp+1h] [rbp-F1h]
  unsigned __int8 v30; // [rsp+Ah] [rbp-E8h]
  unsigned __int8 v31; // [rsp+Ah] [rbp-E8h]
  void *v32; // [rsp+Ah] [rbp-E8h]
  void *v33; // [rsp+12h] [rbp-E0h]
  void *v34; // [rsp+12h] [rbp-E0h]
  void *ptr; // [rsp+1Ah] [rbp-D8h] BYREF
  __int128 v36; // [rsp+22h] [rbp-D0h]
  void *v37; // [rsp+3Ah] [rbp-B8h] BYREF
  __int128 v38; // [rsp+42h] [rbp-B0h]
  char *s2; // [rsp+5Ah] [rbp-98h] BYREF
  __int128 v40; // [rsp+62h] [rbp-90h]
  __int64 v41; // [rsp+72h] [rbp-80h]
  void *v42; // [rsp+7Ah] [rbp-78h]
  __int128 v43; // [rsp+82h] [rbp-70h]
  void *v44; // [rsp+92h] [rbp-60h]
  __int128 v45; // [rsp+9Ah] [rbp-58h]
  unsigned __int64 v46; // [rsp+B2h] [rbp-40h]

  v2 = a1;
  v46 = __readfsqword(0x28u);
  v36 = 0;
  ptr = nullptr;
  sub_7C9A80((__int64)a1, (__int64)&ptr);
  v4 = ptr;
  LODWORD(a1) = (_DWORD)ptr;
  if ( !(_QWORD)v36 )
    a1 = haystack;
  reg_delete_tree((int)a1);
  v5 = sub_7C1590();
  v37 = nullptr;
  v6 = v5;
  v38 = 0;
  sub_7C9450((__int64)(v2 + 8), (__int64)&v37, 0);
  v7 = v37;
  v8 = (const char *)v37;
  if ( !(_QWORD)v38 )
    v8 = haystack;
  v9 = haystack;
  if ( *((_QWORD *)v2 + 6) )
    v9 = *((const char **)v2 + 5);
  v29 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, const char *, __int64))(*(_QWORD *)v6 + 32LL))(
          v6,
          v9,
          v8,
          "hexvault",
          a2);
  v10 = haystack;
  if ( *((_QWORD *)v2 + 6) )
    v10 = *((const char **)v2 + 5);
  v11 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, const char *, __int64))(*(_QWORD *)v6 + 32LL))(
          v6,
          v10,
          v8,
          "hexvault_proxy",
          a2);
  s2 = nullptr;
  v12 = v11;
  v41 = 0;
  v42 = nullptr;
  v44 = nullptr;
  v40 = 0;
  v43 = 0;
  v45 = 0;
  v13 = sub_7C90A0((__int64)&s2);
  v14 = s2;
  v15 = v42;
  v16 = v13;
  v17 = v44;
  if ( !(_BYTE)v13 )
  {
    v16 = 1;
    goto LABEL_21;
  }
  v18 = *((_QWORD *)v2 + 6);
  if ( !(_QWORD)v43 )
  {
    v19 = haystack;
    if ( !v18 )
      goto LABEL_14;
    goto LABEL_12;
  }
  v19 = (const char *)v42;
  v20 = haystack;
  if ( v18 )
LABEL_12:
    v20 = *((const char **)v2 + 5);
  v33 = v44;
  v30 = v16;
  v21 = strcmp(v20, v19);
  v16 = v30;
  v17 = v33;
  if ( v21 )
    goto LABEL_21;
LABEL_14:
  v22 = *((_QWORD *)v2 + 2);
  if ( (_QWORD)v40 )
  {
    v23 = v14;
    v24 = haystack;
    if ( !v22 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v23 = haystack;
  if ( v22 )
  {
LABEL_16:
    v24 = *((const char **)v2 + 1);
LABEL_17:
    v34 = v17;
    v31 = v16;
    v25 = strcmp(v24, v23);
    v16 = v31;
    v17 = v34;
    if ( v25 )
      goto LABEL_21;
  }
  if ( *((_WORD *)v2 + 16) == (_WORD)v41 )
  {
    v32 = v17;
    v26 = reg_delete("Default", "VaultCredentials");
    v17 = v32;
    v16 = v26;
  }
LABEL_21:
  LOBYTE(v12) = v29 & v12;
  v27 = v16 & v12;
  if ( v17 )
    qfree(v17);
  if ( v15 )
    qfree(v15);
  if ( v14 )
    qfree(v14);
  if ( v7 )
    qfree(v7);
  if ( v4 )
    qfree(v4);
  return v27;
}
