__int64 __fastcall sub_D20630(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  void **v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  void *v13; // r12
  unsigned __int8 **v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  unsigned __int64 i; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 **v22; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-130h]
  __int64 v24; // [rsp+18h] [rbp-120h] BYREF
  void *v25; // [rsp+20h] [rbp-118h] BYREF
  signed __int64 v26; // [rsp+28h] [rbp-110h]
  __int64 v27; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v28[6]; // [rsp+40h] [rbp-F8h] BYREF
  int v29; // [rsp+58h] [rbp-E0h]
  unsigned int v30[6]; // [rsp+70h] [rbp-C8h] BYREF
  int v31; // [rsp+88h] [rbp-B0h]
  void *v32[2]; // [rsp+A0h] [rbp-98h] BYREF
  _DWORD v33[8]; // [rsp+B0h] [rbp-88h] BYREF
  _DWORD v34[26]; // [rsp+D0h] [rbp-68h] BYREF

  sub_D09010((__int64)v28, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v30, *(_QWORD *)(a1 + 176));
  v4 = sub_E24160(v28, v30);
  if ( !(_BYTE)v4 )
  {
    v6 = v4;
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0 )
    {
      v24 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v14 = (unsigned __int8 **)sub_E33BA0(a1, &v24, 2468, 0);
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E29020(&v25, v28, v15);
      if ( v14 )
      {
        sub_AEC220(v14, v25, v26);
        v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(v32, v30, v16);
        sub_AEC220(v14, (_BYTE *)v32[0], (signed __int64)v32[1]);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(v32, v30, v18);
      }
      if ( v32[0] != v33 )
        operator delete(v32[0]);
      if ( v25 != &v27 )
        operator delete(v25);
      goto LABEL_27;
    }
  }
  LOBYTE(v5) = sub_CFDEF0((__int64)v28, (__int64)v30);
  v6 = v5;
  if ( (_BYTE)v5 )
  {
    *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = 0;
    goto LABEL_27;
  }
  sub_E231E0(v32, v28);
  v7 = (__int64)v30;
  sub_E231E0(v34, v30);
  if ( v33[2] == 2 || (v8 = sub_CFDF60((__int64)v32)) == 0 || (v7 = *(unsigned int *)(v8 + 20), (_DWORD)v7) )
  {
    if ( v34[6] == 2 || (v9 = sub_CFDF60((__int64)v34)) == 0 || (v10 = (void **)v34, *(_DWORD *)(v9 + 20)) )
    {
      sub_E232A0(v34);
      sub_E232A0(v32);
      if ( v29 )
      {
        v11 = sub_CFE3F0((__int64)v28);
      }
      else
      {
        if ( *(_QWORD *)v28 != 0xFFFFFFFFLL )
        {
          v11 = sub_CFE630(v28);
          if ( !v31 )
          {
LABEL_12:
            if ( *(_QWORD *)v30 == 0xFFFFFFFFLL )
              v12 = (unsigned int)sub_CFE5F0((__int64)v30);
            else
              v12 = sub_CFE630(v30);
            goto LABEL_17;
          }
LABEL_16:
          v12 = sub_CFE3F0((__int64)v30);
LABEL_17:
          v13 = (void *)(v11 - v12);
          v32[0] = v13;
          if ( v13 == (void *)(int)v13 )
          {
            *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = (_DWORD)v13;
            v6 = 1;
          }
          else
          {
            v6 = sub_CF89B0(a1, a2, (__int64 *)v32);
          }
          goto LABEL_27;
        }
        v11 = (unsigned int)sub_CFE5F0((__int64)v28);
      }
      if ( !v31 )
        goto LABEL_12;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = v32;
  }
  for ( i = sub_CFE250((__int64)v10, v7); ; i = *(_QWORD *)(v20 + 32) )
  {
    v20 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v20 + 16) - 2) > 4u )
      break;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  LODWORD(v26) = 1;
  v25 = nullptr;
  v23 = sub_A70F70(v21, i, (__int64)&v25, nullptr, 0, 0);
  if ( (unsigned int)v26 > 0x40 && v25 )
    operator delete[](v25);
  v25 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v22 = (unsigned __int8 **)sub_E33BA0(a1, &v25, 2477, 0);
  if ( v22 )
    sub_AE9DF0(v22, v23, 8u);
  sub_E232A0(v34);
  sub_E232A0(v32);
LABEL_27:
  sub_E232A0(v30);
  sub_E232A0(v28);
  return v6;
}
