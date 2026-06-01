__int64 __fastcall sub_11BFC40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // rax
  size_t v10; // r12
  char *v11; // rax
  signed __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int8 *v14[17]; // [rsp+0h] [rbp-88h] BYREF

  sub_10DE660(a2, 0x1FCu, 0x41Fu);
  v4 = sub_10DCD30(a2, 0x258u);
  if ( !v4 )
    goto LABEL_10;
  v5 = v4;
  v6 = **(char ***)(v4 + 48);
  v7 = j__strlen("always");
  v8 = v7;
  if ( !v6 )
  {
    if ( !v7 || !j__strlen("never") || !j__strlen("auto") )
      goto LABEL_10;
    v10 = 0;
    goto LABEL_9;
  }
  v9 = j__strlen(v6);
  v10 = v9;
  if ( v9 == v8 )
  {
    if ( !v9 || !memcmp(v6, "always", v9) )
      goto LABEL_10;
    if ( v10 != j__strlen("never") )
    {
LABEL_7:
      if ( v10 == j__strlen("auto") )
        goto LABEL_8;
LABEL_9:
      sub_FC70B0((__int64)v14, *a1, 0, 372);
      sub_AEC220(v14, v6, v10);
      v11 = (char *)sub_11BA9E0(*(_QWORD *)v5, *(_QWORD **)(v5 + 8));
      sub_AEC220(v14, v11, v12);
      sub_AEA040((__int64)v14);
      goto LABEL_10;
    }
  }
  else
  {
    if ( v9 != j__strlen("never") )
    {
      if ( v10 != j__strlen("auto") )
        goto LABEL_9;
      if ( v10 )
      {
LABEL_8:
        if ( !memcmp(v6, "auto", v10) )
          goto LABEL_10;
        goto LABEL_9;
      }
      goto LABEL_10;
    }
    if ( !v10 )
      goto LABEL_10;
  }
  if ( memcmp(v6, "never", v10) )
    goto LABEL_7;
LABEL_10:
  result = *(_QWORD *)(*a1 + 40);
  if ( (*(_BYTE *)(result + 2) & 4) != 0 )
    return sub_10DC5D0(a3, (__int64)"-fcolor-diagnostics");
  return result;
}
