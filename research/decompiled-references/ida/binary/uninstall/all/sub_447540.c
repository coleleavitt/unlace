__int64 __fastcall sub_447540(char *s, char *src)
{
  int v3; // eax
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rax
  int v7; // ebx
  int v8; // eax
  char *v9; // rbp
  const char *v10; // rbx
  int v11; // eax
  char *v12; // rbp
  bool v13; // zf
  __int64 result; // rax
  const char *v15; // rdi
  __int64 v16; // rcx
  char *v17; // rsi
  int v18; // edx
  void *v19; // rbx
  char *v20; // [rsp+10h] [rbp-128h]
  int v21; // [rsp+1Ch] [rbp-11Ch] BYREF
  _DWORD v22[58]; // [rsp+20h] [rbp-118h] BYREF

  sub_4AE1A0(qword_65A7C0);
  v3 = sub_4ADC90(s, &v21);
  v4 = v3;
  if ( v3 == -1 )
  {
    if ( (char **)qword_65A7F0 == environ )
    {
      v18 = v21;
      if ( v21 + 2 <= dword_65A7F8 )
      {
LABEL_19:
        v5 = v18;
        v20 = nullptr;
        v4 = v18;
        environ[v18 + 1] = nullptr;
        v7 = strlen(s);
        goto LABEL_4;
      }
    }
    else
    {
      v18 = v21;
    }
    v19 = (void *)sub_40FB00(8 * (v18 + 5));
    memcpy(v19, environ, 8LL * v21);
    if ( dword_65A7F8 && qword_65A7F0 )
      Tcl_Free(qword_65A7F0);
    v18 = v21;
    qword_65A7F0 = (__int64)v19;
    environ = (char **)v19;
    dword_65A7F8 = v21 + 5;
    goto LABEL_19;
  }
  v5 = v3;
  v6 = sub_4445F0(0, (__int64)environ[v3], -1, v22);
  if ( !strcmp(src, (const char *)(v21 + v6 + 1)) )
  {
    sub_49F100(v22);
    return sub_4AE230(qword_65A7C0);
  }
  sub_49F100(v22);
  v7 = v21;
  v20 = environ[v4];
LABEL_4:
  v8 = strlen(src);
  v9 = (char *)sub_40FB00(v7 + v8 + 2);
  strcpy(v9, s);
  v9[v7] = 61;
  strcpy(&v9[v7 + 1], src);
  v10 = (const char *)sub_444880(0, v9, -1, v22);
  v11 = strlen(v10);
  v12 = (char *)sub_40FC10(v9, v11 + 1);
  strcpy(v12, v10);
  sub_49F100(v22);
  environ[v5] = v12;
  if ( v4 != -1 )
    sub_4473E0((__int64)v20, (__int64)v12);
  result = sub_4AE230(qword_65A7C0);
  v15 = "HOME";
  v16 = 5;
  v17 = s;
  do
  {
    if ( !v16 )
      break;
    v13 = *v17++ == *v15++;
    --v16;
  }
  while ( v13 );
  if ( v13 )
    return sub_46B360(0, v17);
  return result;
}

