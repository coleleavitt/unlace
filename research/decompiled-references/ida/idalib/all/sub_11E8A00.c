void __fastcall sub_11E8A00(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  bool (__fastcall *v8)(__int64); // rax
  int v9; // eax
  _BOOL8 v10; // rsi
  int v11; // eax
  void *v12[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  void **v14; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  __int16 v16; // [rsp+40h] [rbp-58h]

  if ( !sub_10DCD30(a2, 0x142u) )
  {
    if ( sub_10DCD30(a2, 0xA4u) )
    {
      if ( !sub_10DCD30(a2, 0xCE3u) )
      {
        v7 = *(_DWORD *)(a1 + 3932);
        if ( (unsigned int)(v7 - 1) <= 1 )
        {
          if ( *(_DWORD *)(a1 + 3936) )
            return;
          v14 = (void **)0x8000000100000003LL;
          v15 = 0x80000000LL;
          if ( !(unsigned __int8)sub_A09E20((unsigned int *)(a1 + 3940), (unsigned int *)&v14) )
            return;
        }
        else
        {
          if ( v7 )
            return;
          if ( !(unsigned __int8)sub_11E6860(a1, 10, 6, 0) )
            goto LABEL_6;
        }
        sub_10DC5D0(a3, (__int64)"-lbundle1.o");
      }
      goto LABEL_6;
    }
    if ( sub_10DCD30(a2, 0xC39u) )
    {
      v8 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 384LL);
      if ( v8 == sub_11E3F00 )
      {
        if ( (unsigned int)(*(_DWORD *)(a1 + 48) - 37) <= 1 )
        {
LABEL_27:
          if ( !*(_DWORD *)(a1 + 3932) && (unsigned __int8)sub_11E6860(a1, 10, 9, 0) )
          {
            if ( sub_10DCD30(a2, 0xCE3u) || sub_10DCD30(a2, 0xC02u) || sub_10DCD30(a2, 0xC47u) )
              sub_10DC5D0(a3, (__int64)"-lgcrt0.o");
            else
              sub_10DC5D0(a3, (__int64)"-lgcrt1.o");
            if ( !(unsigned __int8)sub_11E6860(a1, 10, 8, 0) )
              sub_10DC5D0(a3, (__int64)"-no_new_main");
          }
          else
          {
            sub_FC70B0((__int64)&v14, **(_QWORD **)(a1 + 8), 0, 336);
            v9 = *(_DWORD *)(a1 + 3932);
            v10 = 1;
            if ( v9 )
            {
              v10 = 0;
              if ( v9 == 1 )
                v10 = *(_DWORD *)(a1 + 3936) == 2;
            }
            sub_AE9DF0((unsigned __int8 **)&v14, v10, 2u);
            sub_AEA040((__int64)&v14);
          }
          goto LABEL_6;
        }
      }
      else if ( v8(a1) )
      {
        goto LABEL_27;
      }
    }
    if ( sub_10DCD30(a2, 0xCE3u) || sub_10DCD30(a2, 0xC02u) || sub_10DCD30(a2, 0xC47u) )
    {
      sub_10DC5D0(a3, (__int64)"-lcrt0.o");
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 3932);
      if ( (unsigned int)(v11 - 1) <= 1 )
      {
        if ( *(_DWORD *)(a1 + 3936) || *(_DWORD *)(a1 + 48) == 3 )
          return;
        v14 = (void **)0x8000000100000003LL;
        v15 = 0x80000000LL;
        if ( !(unsigned __int8)sub_A09E20((unsigned int *)(a1 + 3940), (unsigned int *)&v14) )
        {
          v14 = (void **)0x8000000000000006LL;
          if ( !(unsigned __int8)sub_A09E20((unsigned int *)(a1 + 3940), (unsigned int *)&v14) )
            return;
          sub_10DC5D0(a3, (__int64)"-lcrt1.3.1.o");
          goto LABEL_6;
        }
      }
      else
      {
        if ( v11 )
          return;
        if ( !(unsigned __int8)sub_11E6860(a1, 10, 5, 0) )
        {
          if ( (unsigned __int8)sub_11E6860(a1, 10, 6, 0) )
          {
            sub_10DC5D0(a3, (__int64)"-lcrt1.10.5.o");
          }
          else if ( (unsigned __int8)sub_11E6860(a1, 10, 8, 0) )
          {
            sub_10DC5D0(a3, (__int64)"-lcrt1.10.6.o");
          }
          goto LABEL_6;
        }
      }
      sub_10DC5D0(a3, (__int64)"-lcrt1.o");
    }
    goto LABEL_6;
  }
  v5 = *(_DWORD *)(a1 + 3932);
  if ( (unsigned int)(v5 - 1) <= 1 )
  {
    if ( *(_DWORD *)(a1 + 3936) )
      return;
    v14 = (void **)0x8000000100000003LL;
    v15 = 0x80000000LL;
    if ( !(unsigned __int8)sub_A09E20((unsigned int *)(a1 + 3940), (unsigned int *)&v14) )
      return;
  }
  else
  {
    if ( v5 )
      return;
    if ( !(unsigned __int8)sub_11E6860(a1, 10, 5, 0) )
    {
      if ( (unsigned __int8)sub_11E6860(a1, 10, 6, 0) )
        sub_10DC5D0(a3, (__int64)"-ldylib1.10.5.o");
      goto LABEL_6;
    }
  }
  sub_10DC5D0(a3, (__int64)"-ldylib1.o");
LABEL_6:
  if ( !*(_DWORD *)(a1 + 3932) && sub_10DCD30(a2, 0xCBEu) && (unsigned __int8)sub_11E6860(a1, 10, 5, 0) )
  {
    sub_112D4E0(v12, a1, "crt3.o");
    v14 = v12;
    v16 = 260;
    v6 = sub_10DA6C0(a2, (__int64)&v14);
    if ( v12[0] != &v13 )
      operator delete(v12[0]);
    sub_10DC5D0(a3, v6);
  }
}
