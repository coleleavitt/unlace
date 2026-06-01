unsigned __int64 __fastcall sub_643260(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v7; // r12
  int v8; // ebx
  __int64 v9; // r8
  const char *v10; // rcx
  __int64 v11; // rdi
  char *v12; // rax
  char *v13; // rdx
  char v14; // cl
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // al
  int v20; // r8d
  int v21; // r9d
  _BYTE *v22; // rcx
  int v23; // eax
  char *v24; // rax
  char *v25; // rdx
  char v26; // cl
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // r8d
  int v32; // r9d
  char *v33; // rbx
  char *v34; // rax
  char v35; // dl
  _BYTE *v37; // [rsp+0h] [rbp-878h]
  char *v38; // [rsp+8h] [rbp-870h]
  void *ptr; // [rsp+10h] [rbp-868h] BYREF
  __int128 v40; // [rsp+18h] [rbp-860h]
  char v41[1023]; // [rsp+30h] [rbp-848h] BYREF
  char v42; // [rsp+42Fh] [rbp-449h] BYREF
  _BYTE v43[1032]; // [rsp+430h] [rbp-448h] BYREF
  unsigned __int64 v44; // [rsp+838h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v7 = (void *)sub_631AD0(*a1, 19, a3, a4, a5, a6);
  v8 = sub_63D710(a1, (__int64)v7, 1000) - 1;
  if ( v8 > 999 )
  {
    do
    {
      v40 = 0;
      ptr = nullptr;
      if ( sub_63D550(a1, (__int64)&ptr, (__int64)v7, v8) >= 0 )
      {
        v10 = haystack;
        if ( (_QWORD)v40 )
          v10 = (const char *)ptr;
        sub_63D1D0(a1, v7, v8 + 2, v10);
      }
      if ( ptr )
      {
        *(_QWORD *)&v40 = 0;
        qfree(ptr);
      }
      --v8;
    }
    while ( v8 != 999 );
  }
  v11 = *a1;
  v12 = v41;
  v13 = *(char **)(*a1 + 1120);
  while ( 1 )
  {
    v14 = *v13++;
    *v12 = v14;
    if ( !v14 )
      break;
    if ( ++v12 == &v42 )
      goto LABEL_28;
  }
  if ( v12 >= v43 )
  {
    if ( !under_debugger )
      interr(518);
LABEL_35:
    BUG();
  }
  v15 = v12 + 1;
  *v12 = 32;
  if ( v12 + 1 >= v43 )
  {
LABEL_28:
    v42 = 0;
    v15 = &v42;
    LODWORD(v37) = 1;
  }
  else
  {
    v37 = (_BYTE *)(v43 - v15);
  }
  sub_630CA0(v11, 97, v43, 0x400u, v9);
  v19 = sub_631C90(*a1, 45, 16, v16, v17, v18);
  v22 = v43;
  if ( v19 )
    LODWORD(v22) = qbasename(v43);
  v23 = qsnprintf((_DWORD)v15, (_DWORD)v37, (unsigned int)"File Name   : %s", (_DWORD)v22, v20, v21);
  if ( &v15[v23] >= v43 )
    goto LABEL_31;
  v38 = &v15[v23];
  v24 = sub_39CE40(a1);
  v25 = v38;
  if ( v38 == &v42 )
  {
LABEL_29:
    v42 = 0;
  }
  else
  {
    while ( 1 )
    {
      v26 = *v24++;
      *v25 = v26;
      if ( !v26 )
        break;
      if ( ++v25 == &v42 )
        goto LABEL_29;
    }
  }
  sub_63D1D0(a1, v7, 1000, v41);
  get_file_type_name((__int64)v43, 1024, v27, v28, v29, v30);
  v33 = &v15[(int)qsnprintf((_DWORD)v15, (_DWORD)v37, (unsigned int)"Format      : %s", (unsigned int)v43, v31, v32)];
  if ( v33 >= v43 )
  {
LABEL_31:
    if ( !under_debugger )
      interr(520);
    goto LABEL_35;
  }
  v34 = sub_39CE40(a1);
  if ( v33 == &v42 )
  {
LABEL_30:
    v42 = 0;
  }
  else
  {
    while ( 1 )
    {
      v35 = *v34++;
      *v33 = v35;
      if ( !v35 )
        break;
      if ( ++v33 == &v42 )
        goto LABEL_30;
    }
  }
  sub_63D1D0(a1, v7, 1001, v41);
  return v44 - __readfsqword(0x28u);
}
