__int64 __fastcall sub_1131D00(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // r13
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r15
  __int64 (*v9)(); // rdx
  void *v10[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v12[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( *(_BYTE *)(a1 + 1828) )
    return *(unsigned int *)(a1 + 1824);
  v3 = sub_10DCD30(a2, 0xCA1u);
  v4 = v3;
  if ( !v3 )
  {
    v5 = &byte_22F0C30;
    v7 = j__strlen("compiler-rt");
LABEL_12:
    v8 = j__strlen(v5);
    if ( v8 == v7 )
    {
      if ( !v7 || !memcmp(v5, "compiler-rt", v7) )
        goto LABEL_18;
      if ( v7 == j__strlen("libgcc") )
      {
LABEL_16:
        if ( !memcmp(v5, "libgcc", v8) )
          goto LABEL_17;
        if ( j__strlen("platform") == v8 )
          goto LABEL_24;
LABEL_25:
        if ( v4 )
          goto LABEL_8;
        goto LABEL_26;
      }
      if ( v7 != j__strlen("platform") )
        goto LABEL_25;
    }
    else
    {
      if ( v8 == j__strlen("libgcc") )
      {
        if ( !v8 )
          goto LABEL_17;
        goto LABEL_16;
      }
      if ( v8 != j__strlen("platform") )
        goto LABEL_25;
      if ( !v8 )
        goto LABEL_26;
    }
LABEL_24:
    if ( !memcmp(v5, "platform", v8) )
      goto LABEL_26;
    goto LABEL_25;
  }
  v5 = **(const char ***)(v3 + 48);
  v6 = j__strlen("compiler-rt");
  v7 = v6;
  if ( v5 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_18:
    *(_DWORD *)(a1 + 1824) = 0;
    *(_BYTE *)(a1 + 1828) = 1;
    return 0;
  }
  if ( !j__strlen("libgcc") )
  {
LABEL_17:
    *(_DWORD *)(a1 + 1824) = 1;
    *(_BYTE *)(a1 + 1828) = 1;
    return 1;
  }
  if ( j__strlen("platform") )
  {
LABEL_8:
    sub_FC70B0((__int64)v12, **(_QWORD **)(a1 + 8), 0, 396);
    sub_21B5FF0(v10, v4, a2);
    sub_AEC220(v12, (_BYTE *)v10[0], (signed __int64)v10[1]);
    if ( v10[0] != &v11 )
      operator delete(v10[0]);
    sub_AEA040((__int64)v12);
  }
LABEL_26:
  v9 = *(__int64 (**)())(*(_QWORD *)a1 + 272LL);
  result = 1;
  if ( v9 != sub_10D81C0 )
    result = ((__int64 (__fastcall *)(__int64))v9)(a1);
  *(_DWORD *)(a1 + 1824) = result;
  *(_BYTE *)(a1 + 1828) = 1;
  return result;
}
