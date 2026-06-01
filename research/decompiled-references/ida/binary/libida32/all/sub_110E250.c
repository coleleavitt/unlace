__int64 __fastcall sub_110E250(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  const char *v5; // r12
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r15
  int v9; // eax
  __int64 (*v10)(); // rdx
  void *v11[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v13[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( *(_BYTE *)(a1 + 1836) )
    return *(unsigned int *)(a1 + 1832);
  v3 = sub_10B8FF0(a2, 0xD20u);
  v4 = v3;
  if ( v3 )
  {
    v5 = **(const char ***)(v3 + 48);
    v6 = j__strlen("none");
    v7 = v6;
    if ( !v5 )
    {
      if ( !v6 )
        goto LABEL_30;
      if ( j__strlen("platform") && j__strlen(&byte_22CD811) )
      {
        if ( j__strlen("libunwind") )
        {
          if ( j__strlen("libgcc") )
          {
LABEL_10:
            sub_FA3370((__int64)v13, **(_QWORD **)(a1 + 8), 0, 399);
            sub_21922B0(v11, v4, a2);
            sub_AC84E0(v13, (_BYTE *)v11[0], (signed __int64)v11[1]);
            if ( v11[0] != &v12 )
              operator delete(v11[0]);
            sub_AC6300((__int64)v13);
            goto LABEL_41;
          }
LABEL_48:
          *(_DWORD *)(a1 + 1832) = 2;
          *(_BYTE *)(a1 + 1836) = 1;
          return 2;
        }
        goto LABEL_22;
      }
LABEL_27:
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 600LL))(a1, a2);
      if ( v9 )
      {
        if ( v9 != 1 )
          return *(unsigned int *)(a1 + 1832);
        goto LABEL_48;
      }
      if ( *(_DWORD *)(a1 + 64) == 17 || *(_DWORD *)(a1 + 60) == 20 )
      {
LABEL_24:
        *(_DWORD *)(a1 + 1832) = 1;
        *(_BYTE *)(a1 + 1836) = 1;
        return 1;
      }
LABEL_30:
      *(_DWORD *)(a1 + 1832) = 0;
      *(_BYTE *)(a1 + 1836) = 1;
      return 0;
    }
  }
  else
  {
    v5 = &byte_22CD811;
    v7 = j__strlen("none");
  }
  v8 = j__strlen(v5);
  if ( v8 == v7 )
  {
    if ( !v7 || !memcmp(v5, "none", v7) )
      goto LABEL_30;
    if ( j__strlen("platform") == v7 )
      goto LABEL_18;
    if ( v7 != j__strlen(&byte_22CD811) )
      goto LABEL_20;
LABEL_35:
    if ( !memcmp(v5, &byte_22CD811, v8) )
      goto LABEL_27;
    if ( v8 == j__strlen("libunwind") )
      goto LABEL_37;
LABEL_46:
    if ( v8 != j__strlen("libgcc") )
      goto LABEL_40;
    if ( !v8 )
      goto LABEL_48;
    goto LABEL_39;
  }
  if ( v8 != j__strlen("platform") )
  {
    if ( v8 != j__strlen(&byte_22CD811) )
      goto LABEL_20;
    if ( !v8 )
      goto LABEL_27;
    goto LABEL_35;
  }
  if ( !v8 )
    goto LABEL_27;
LABEL_18:
  if ( !memcmp(v5, "platform", v8) )
    goto LABEL_27;
  if ( v8 == j__strlen(&byte_22CD811) )
    goto LABEL_35;
LABEL_20:
  if ( v8 != j__strlen("libunwind") )
    goto LABEL_46;
  if ( !v8 )
    goto LABEL_22;
LABEL_37:
  if ( !memcmp(v5, "libunwind", v8) )
  {
LABEL_22:
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 600LL))(a1, a2) == 1 )
    {
      sub_FA3370((__int64)v13, **(_QWORD **)(a1 + 8), 0, 368);
      sub_AC6300((__int64)v13);
    }
    goto LABEL_24;
  }
  if ( j__strlen("libgcc") == v8 )
  {
LABEL_39:
    if ( !memcmp(v5, "libgcc", v8) )
      goto LABEL_48;
  }
LABEL_40:
  if ( v4 )
    goto LABEL_10;
LABEL_41:
  v10 = *(__int64 (**)())(*(_QWORD *)a1 + 288LL);
  result = 0;
  if ( v10 != sub_10B44A0 )
    result = ((__int64 (__fastcall *)(__int64))v10)(a1);
  *(_DWORD *)(a1 + 1832) = result;
  *(_BYTE *)(a1 + 1836) = 1;
  return result;
}

