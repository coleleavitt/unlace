unsigned __int64 __fastcall sub_625FA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  signed int v8; // ebx
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
  int v27; // r8d
  int v28; // r9d
  char *v29; // rbx
  char *v30; // rax
  char v31; // dl
  _BYTE *v33; // [rsp+0h] [rbp-878h]
  int v34; // [rsp+0h] [rbp-878h]
  char *v35; // [rsp+8h] [rbp-870h]
  void *ptr; // [rsp+10h] [rbp-868h] BYREF
  __int128 v37; // [rsp+18h] [rbp-860h]
  char v38[1023]; // [rsp+30h] [rbp-848h] BYREF
  char v39; // [rsp+42Fh] [rbp-449h] BYREF
  _BYTE v40[1032]; // [rsp+430h] [rbp-448h] BYREF
  unsigned __int64 v41; // [rsp+838h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v7 = sub_614FB0(*a1, 19, a3, a4, a5, a6);
  v8 = sub_620580(a1, v7, 1000) - 1;
  if ( v8 > 999 )
  {
    do
    {
      v37 = 0;
      ptr = nullptr;
      if ( sub_6203E0(a1, (__int64)&ptr, v7, v8) >= 0 )
      {
        v10 = haystack;
        if ( (_QWORD)v37 )
          v10 = (const char *)ptr;
        sub_620070(a1, v7, v8 + 2, v10);
      }
      if ( ptr )
      {
        *(_QWORD *)&v37 = 0;
        qfree(ptr);
      }
      --v8;
    }
    while ( v8 != 999 );
  }
  v11 = *a1;
  v12 = v38;
  v13 = *(char **)(*a1 + 952);
  while ( 1 )
  {
    v14 = *v13++;
    *v12 = v14;
    if ( !v14 )
      break;
    if ( ++v12 == &v39 )
      goto LABEL_28;
  }
  if ( v12 >= v40 )
  {
    if ( !under_debugger )
      interr(518);
LABEL_35:
    BUG();
  }
  v15 = v12 + 1;
  *v12 = 32;
  if ( v12 + 1 >= v40 )
  {
LABEL_28:
    v39 = 0;
    v15 = &v39;
    LODWORD(v33) = 1;
  }
  else
  {
    v33 = (_BYTE *)(v40 - v15);
  }
  sub_6141A0(v11, 97, v40, 0x400u, v9);
  v19 = sub_615160(*a1, 45, 16, v16, v17, v18);
  v22 = v40;
  if ( v19 )
    LODWORD(v22) = qbasename(v40);
  v23 = qsnprintf((int)v15, (int)v33, (int)"File Name   : %s", (int)v22, v20, v21, (char)v33);
  if ( &v15[v23] >= v40 )
    goto LABEL_31;
  v35 = &v15[v23];
  v24 = sub_398100(a1);
  v25 = v35;
  if ( v35 == &v39 )
  {
LABEL_29:
    v39 = 0;
  }
  else
  {
    while ( 1 )
    {
      v26 = *v24++;
      *v25 = v26;
      if ( !v26 )
        break;
      if ( ++v25 == &v39 )
        goto LABEL_29;
    }
  }
  sub_620070(a1, v7, 1000, v38);
  get_file_type_name(v40, 1024);
  v29 = &v15[(int)qsnprintf((int)v15, v34, (int)"Format      : %s", (int)v40, v27, v28, v34)];
  if ( v29 >= v40 )
  {
LABEL_31:
    if ( !under_debugger )
      interr(520);
    goto LABEL_35;
  }
  v30 = sub_398100(a1);
  if ( v29 == &v39 )
  {
LABEL_30:
    v39 = 0;
  }
  else
  {
    while ( 1 )
    {
      v31 = *v30++;
      *v29 = v31;
      if ( !v31 )
        break;
      if ( ++v29 == &v39 )
        goto LABEL_30;
    }
  }
  sub_620070(a1, v7, 1001, v38);
  return v41 - __readfsqword(0x28u);
}

