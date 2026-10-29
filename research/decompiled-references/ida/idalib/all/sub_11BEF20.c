void __fastcall sub_11BEF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // eax
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // r15
  const char **v12; // rax
  const char *v13; // r14
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // rax
  unsigned __int8 *v17[17]; // [rsp+0h] [rbp-88h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 600LL))(a1, a4);
  if ( !v6 )
  {
    v8 = j__strlen("builtins");
    v9 = sub_112D2D0(a1, a4, (__int64)"builtins", v8, 1u, 0);
    sub_10DC5D0(a3, v9);
    sub_11BC370((_DWORD *)a1, a2, a3, a4);
    if ( *(_DWORD *)(a1 + 64) != 17 )
      return;
    goto LABEL_13;
  }
  if ( v6 != 1 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 15 || *(_DWORD *)(a1 + 64) != 27 )
  {
    if ( sub_10DCD30(a4, 0xCDDu) || sub_10DCD30(a4, 0xCE3u) || sub_10DCD30(a4, 0xCE2u) || *(_DWORD *)(a1 + 64) == 17 )
    {
      sub_10DC5D0(a3, (__int64)"-lgcc");
      sub_11BC370((_DWORD *)a1, a2, a3, a4);
      v7 = *(_DWORD *)(a2 + 16);
    }
    else
    {
      if ( sub_10DCD30(a4, 0xCBEu) )
      {
        sub_11BC370((_DWORD *)a1, a2, a3, a4);
      }
      else
      {
        if ( *(_DWORD *)(a2 + 16) != 1 )
          sub_10DC5D0(a3, (__int64)"-lgcc");
        sub_11BC370((_DWORD *)a1, a2, a3, a4);
        v7 = *(_DWORD *)(a2 + 16);
        if ( v7 != 1 )
          goto LABEL_7;
      }
      sub_10DC5D0(a3, (__int64)"-lgcc");
      v7 = *(_DWORD *)(a2 + 16);
    }
LABEL_7:
    if ( v7 == 4 && *(_DWORD *)(a1 + 48) == 3 )
    {
      sub_10DC5D0(a3, (__int64)"--as-needed");
      v15 = j__strlen("builtins");
      v16 = sub_112D2D0(a1, a4, (__int64)"builtins", v15, 1u, 0);
      sub_10DC5D0(a3, v16);
      sub_10DC5D0(a3, (__int64)"--no-as-needed");
    }
    goto LABEL_10;
  }
  v10 = sub_10DCD30(a4, 0xCA1u);
  if ( !v10 )
    goto LABEL_10;
  v11 = j__strlen("platform");
  v12 = *(const char ***)(v10 + 48);
  v13 = *v12;
  if ( *v12 )
  {
    v14 = j__strlen(*v12);
    if ( v14 != v11 || v14 && memcmp(v13, "platform", v14) )
      goto LABEL_22;
  }
  else if ( v11 )
  {
LABEL_22:
    sub_FC70B0((__int64)v17, **(_QWORD **)(a1 + 8), 0, 499);
    sub_AE9DF0(v17, **(_QWORD **)(v10 + 48), 1u);
    sub_AE9DF0(v17, (__int64)"MSVC", 1u);
    sub_AEA040((__int64)v17);
  }
LABEL_10:
  if ( *(_DWORD *)(a1 + 64) != 17 )
    return;
LABEL_13:
  if ( !sub_10DCD30(a4, 0xCE3u) && !sub_10DCD30(a4, 0xCE2u) )
    sub_10DC5D0(a3, (__int64)"-ldl");
}
