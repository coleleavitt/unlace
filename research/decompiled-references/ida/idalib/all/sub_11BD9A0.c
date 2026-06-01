char *__fastcall sub_11BD9A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  char *v4; // rbx
  size_t v5; // rax
  size_t v6; // rbp
  size_t v7; // rax
  signed __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 *v10; // rdx
  _DWORD *v11; // rbp
  size_t v12; // r15
  const char *v13; // rbp
  size_t v14; // rax
  signed __int64 v15; // rdx
  __int64 v17; // r12
  const char *v18; // rdi
  unsigned __int8 *v19[17]; // [rsp+0h] [rbp-88h] BYREF

  v2 = sub_10DCD30(a2, 0xAF9u);
  if ( !v2 )
    goto LABEL_14;
  v3 = (_QWORD *)v2;
  v4 = **(char ***)(v2 + 48);
  v5 = j__strlen("none");
  v6 = v5;
  if ( v4 )
  {
    v7 = j__strlen(v4);
    v8 = v7;
    if ( v7 == v6 && (!v7 || !memcmp(v4, "none", v7)) )
      return v4;
  }
  else
  {
    if ( !v5 )
      return v4;
    v8 = 0;
  }
  if ( (unsigned __int8)sub_2247970(v4, v8, 10, v19) || v19[0] != (unsigned __int8 *)LODWORD(v19[0]) )
  {
    sub_FC70B0((__int64)v19, a1, 0, 400);
    v9 = (_QWORD *)v3[1];
    v10 = (__int64 *)v9[1];
    v11 = (_DWORD *)(v9[4] + 80LL * (unsigned int)(*(_DWORD *)(*v3 + 40LL) - 1));
    if ( *v11 )
    {
      v17 = *v10;
      v12 = 0;
      v18 = (const char *)(*v10 + *(unsigned int *)(v9[2] + 4LL * (unsigned int)(*v11 + 1)));
      if ( v18 )
        v12 = (unsigned int)j__strlen(v18);
      v14 = 0;
      v13 = (const char *)(v17 + (unsigned int)v11[1]);
      if ( !v13 )
      {
LABEL_11:
        v15 = 0;
        if ( v14 < v12 )
        {
LABEL_13:
          sub_AEC220(v19, &v13[v14], v15);
          sub_AEC220(v19, v4, v8);
          sub_AEA040((__int64)v19);
LABEL_14:
          v4 = (char *)&byte_22F0C30;
          j__strlen(&byte_22F0C30);
          return v4;
        }
LABEL_12:
        v15 = v14 - v12;
        v14 = v12;
        goto LABEL_13;
      }
    }
    else
    {
      v12 = 0;
      v13 = (const char *)(*v10 + (unsigned int)v11[1]);
      if ( !v13 )
      {
        v12 = 0;
        v14 = 0;
        goto LABEL_12;
      }
    }
    v14 = strlen(v13);
    goto LABEL_11;
  }
  return v4;
}
