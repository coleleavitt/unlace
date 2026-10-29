unsigned __int64 __fastcall sub_7AC0(__int64 *a1)
{
  const char *v2; // rdi
  FILE *v3; // rax
  FILE *v4; // r14
  char *v6; // r12
  char v7; // al
  int v8; // r15d
  void *v9; // r12
  __int64 v10; // r14
  void *v11; // r13
  const char *v12; // rax
  __int64 v13; // r8
  int v14; // r12d
  int v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // r13
  char *v18; // rax
  int v19; // ecx
  int v20; // eax
  void *v21; // [rsp+18h] [rbp-518h]
  void *v22; // [rsp+20h] [rbp-510h]
  char *s; // [rsp+28h] [rbp-508h]
  int v24; // [rsp+44h] [rbp-4ECh]
  int v25; // [rsp+48h] [rbp-4E8h]
  __int64 v26; // [rsp+48h] [rbp-4E8h]
  void *v27; // [rsp+50h] [rbp-4E0h] BYREF
  __int128 v28; // [rsp+58h] [rbp-4D8h]
  void *v29; // [rsp+70h] [rbp-4C0h] BYREF
  __int128 v30; // [rsp+78h] [rbp-4B8h]
  void *ptr; // [rsp+90h] [rbp-4A0h] BYREF
  __int128 v32; // [rsp+98h] [rbp-498h]
  __int64 v33; // [rsp+B0h] [rbp-480h] BYREF
  int v34; // [rsp+B8h] [rbp-478h]
  void *v35; // [rsp+C0h] [rbp-470h]
  __int64 v36; // [rsp+C8h] [rbp-468h]
  __int64 v37; // [rsp+D0h] [rbp-460h]
  void *v38; // [rsp+D8h] [rbp-458h]
  __int64 v39; // [rsp+E0h] [rbp-450h]
  __int64 v40; // [rsp+E8h] [rbp-448h]
  char haystack[1032]; // [rsp+F0h] [rbp-440h] BYREF
  unsigned __int64 v42; // [rsp+4F8h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  if ( HIBYTE(dword_1C340) )
    return v42 - __readfsqword(0x28u);
  v27 = nullptr;
  v28 = 0;
  sub_7320((char **)&v27);
  v29 = nullptr;
  v2 = s1;
  ptr = nullptr;
  v30 = 0;
  v32 = 0;
  if ( (_QWORD)v28 )
    v2 = (const char *)v27;
  v3 = popen(v2, "r");
  if ( !v3
    || (v4 = v3, sub_11130(v3, haystack), pclose(v4))
    || (v37 = 0, v40 = 0, (v6 = strstr(haystack, "-lpython")) == nullptr) )
  {
    sub_7320((char **)&v29);
    goto LABEL_7;
  }
  v33 = 0;
  v34 = 0;
  v35 = nullptr;
  v36 = 0;
  v38 = nullptr;
  v39 = 0;
  v7 = sub_5AD0((__int64)&v33, v6, "-lpython", " ");
  v8 = HIDWORD(v33);
  v9 = v35;
  v10 = v36;
  v25 = v33;
  v11 = v38;
  v24 = v34;
  if ( !v7 )
  {
    sub_7320((char **)&v29);
    goto LABEL_20;
  }
  v12 = s1;
  if ( v36 )
    v12 = (const char *)v35;
  s = (char *)v12;
  sub_7320((char **)&ptr);
  sub_5F00();
  v13 = *a1 + 96 * a1[1];
  if ( *a1 == v13 )
  {
LABEL_41:
    sub_7320((char **)&ptr);
    sub_7320((char **)&v29);
    goto LABEL_20;
  }
  v22 = v9;
  v14 = v8;
  v15 = v25;
  v16 = *a1;
  v21 = v11;
  v17 = v13;
  while ( 1 )
  {
    if ( v15 != *(_DWORD *)v16 || v14 != *(_DWORD *)(v16 + 4) || v24 != *(_DWORD *)(v16 + 8) )
      goto LABEL_39;
    v26 = *(_QWORD *)(v16 + 24);
    v18 = strchr(s, 100);
    if ( !v26 )
      break;
    if ( (strchr(*(const char **)(v16 + 16), 100) != nullptr) != (v18 != nullptr) )
      goto LABEL_39;
    v19 = v26 - 1;
    v20 = 0;
    if ( v10 )
      goto LABEL_35;
LABEL_36:
    if ( v20 == v19 )
      goto LABEL_37;
LABEL_39:
    v16 += 96;
    if ( v17 == v16 )
    {
      v11 = v21;
      v9 = v22;
      goto LABEL_41;
    }
  }
  if ( v18 )
    goto LABEL_39;
  if ( v10 )
  {
    v19 = 0;
LABEL_35:
    v20 = v10 - 1;
    goto LABEL_36;
  }
LABEL_37:
  v11 = v21;
  v9 = v22;
  if ( !v16 )
    goto LABEL_41;
  *(_BYTE *)(v16 + 88) = 1;
LABEL_20:
  if ( v11 )
    j__free(v11);
  if ( v9 )
    j__free(v9);
LABEL_7:
  if ( (unsigned __int64)v30 > 1 )
    sub_5F00();
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    j__free(ptr);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    j__free(v29);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    j__free(v27);
  }
  return v42 - __readfsqword(0x28u);
}

