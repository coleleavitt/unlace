__int64 __fastcall sub_4BA250(__int64 a1)
{
  const char *v1; // rbp
  int v2; // eax
  void (__fastcall *v3)(__int64, char *, __int64); // r13
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // rbp
  bool v7; // zf
  const char *v8; // rcx
  const char *v9; // rdx
  const char *v10; // rdx
  const char *v11; // rcx
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // r13
  void *v16; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+8h] [rbp-A0h]
  void *v18; // [rsp+20h] [rbp-88h] BYREF
  __int128 v19; // [rsp+28h] [rbp-80h]
  char s[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-40h]

  v1 = off_8C2FA8;
  v21 = __readfsqword(0x28u);
  v2 = strcmp(off_8C2FA8, "ida-pro-classroom");
  v3 = (void (__fastcall *)(__int64, char *, __int64))callui;
  if ( v2 )
  {
    if ( strncmp(v1, "ida-", 4u) )
    {
      v3(52, s, 32);
      v16 = nullptr;
      v17 = 0;
      if ( !v1 )
        goto LABEL_4;
      goto LABEL_15;
    }
    v1 += 4;
  }
  else
  {
    v1 = "classroom";
  }
  v3(52, s, 32);
  v16 = nullptr;
  v17 = 0;
LABEL_15:
  v13 = strlen(v1);
  v14 = v13 + 1;
  v15 = v13;
  v16 = (void *)qvector_reserve(&v16, 0, v13 + 1, 1);
  *(_QWORD *)&v17 = v14;
  memmove(v16, v1, v15);
  *((_BYTE *)v16 + v15) = 0;
LABEL_4:
  sub_4B5C70((__int64)&v16, "-", "_");
  v18 = nullptr;
  v19 = 0;
  v4 = strlen(s);
  v5 = v4 + 1;
  v6 = v4;
  v18 = (void *)qvector_reserve(&v18, 0, v4 + 1, 1);
  *(_QWORD *)&v19 = v5;
  memmove(v18, s, v6);
  *((_BYTE *)v18 + v6) = 0;
  sub_4B5C70((__int64)&v18, ".", "_");
  v7 = (_QWORD)v19 == 0;
  *(_QWORD *)a1 = 0;
  v8 = &s1;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !v7 )
    v8 = (const char *)v18;
  v9 = &s1;
  if ( (_QWORD)v17 )
    v9 = (const char *)v16;
  sub_169A50((__int64 *)a1, (__int64)"com.hex_rays.IDA.%s._%s", v9, v8);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, "com.hex_rays.IDA.%s._%s", v10, v11);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, "com.hex_rays.IDA.%s._%s");
  }
  return a1;
}
