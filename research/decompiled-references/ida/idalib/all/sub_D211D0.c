__int64 __fastcall sub_D211D0(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  void **v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int8 **v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rax
  unsigned __int64 i; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int8 **v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-130h]
  __int64 v25; // [rsp+18h] [rbp-120h] BYREF
  void *v26; // [rsp+20h] [rbp-118h] BYREF
  signed __int64 v27; // [rsp+28h] [rbp-110h]
  __int64 v28; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v29[6]; // [rsp+40h] [rbp-F8h] BYREF
  int v30; // [rsp+58h] [rbp-E0h]
  unsigned int v31[6]; // [rsp+70h] [rbp-C8h] BYREF
  int v32; // [rsp+88h] [rbp-B0h]
  void *v33[2]; // [rsp+A0h] [rbp-98h] BYREF
  _DWORD v34[8]; // [rsp+B0h] [rbp-88h] BYREF
  _DWORD v35[26]; // [rsp+D0h] [rbp-68h] BYREF

  sub_D09010((__int64)v29, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v31, *(_QWORD *)(a1 + 176));
  v4 = sub_E24160(v29, v31);
  if ( !(_BYTE)v4 )
  {
    v6 = v4;
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0 )
    {
      v25 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v15 = (unsigned __int8 **)sub_E33BA0(a1, &v25, 2468, 0);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E29020(&v26, v29, v16);
      if ( v15 )
      {
        sub_AEC220(v15, v26, v27);
        v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(v33, v31, v17);
        sub_AEC220(v15, (_BYTE *)v33[0], (signed __int64)v33[1]);
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(v33, v31, v19);
      }
      if ( v33[0] != v34 )
        operator delete(v33[0]);
      if ( v26 != &v28 )
        operator delete(v26);
      goto LABEL_26;
    }
  }
  LOBYTE(v5) = sub_CFDEF0((__int64)v29, (__int64)v31);
  v6 = v5;
  if ( (_BYTE)v5 )
  {
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = 0;
    goto LABEL_26;
  }
  sub_E231E0(v33, v29);
  v7 = (__int64)v31;
  sub_E231E0(v35, v31);
  if ( v34[2] == 2 || (v8 = sub_CFDF60((__int64)v33)) == 0 || (v7 = *(unsigned int *)(v8 + 20), (_DWORD)v7) )
  {
    if ( v35[6] == 2 || (v9 = sub_CFDF60((__int64)v35)) == 0 || (v10 = (void **)v35, *(_DWORD *)(v9 + 20)) )
    {
      sub_E232A0(v35);
      sub_E232A0(v33);
      if ( v30 )
      {
        v11 = sub_CFE3F0((__int64)v29);
      }
      else
      {
        if ( *(_QWORD *)v29 != 0xFFFFFFFFLL )
        {
          v11 = sub_CFE630(v29);
          if ( !v32 )
          {
LABEL_12:
            if ( *(_QWORD *)v31 == 0xFFFFFFFFLL )
              v12 = (unsigned int)sub_CFE5F0((__int64)v31);
            else
              v12 = sub_CFE630(v31);
            goto LABEL_17;
          }
LABEL_16:
          v12 = sub_CFE3F0((__int64)v31);
LABEL_17:
          v13 = (_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8);
          v14 = v11;
          v6 = 1;
          *v13 = v14 - v12;
          goto LABEL_26;
        }
        v11 = (unsigned int)sub_CFE5F0((__int64)v29);
      }
      if ( !v32 )
        goto LABEL_12;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = v33;
  }
  for ( i = sub_CFE250((__int64)v10, v7); ; i = *(_QWORD *)(v21 + 32) )
  {
    v21 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v21 + 16) - 2) > 4u )
      break;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  LODWORD(v27) = 1;
  v26 = nullptr;
  v24 = sub_A70F70(v22, i, (__int64)&v26, nullptr, 0, 0);
  if ( (unsigned int)v27 > 0x40 && v26 )
    operator delete[](v26);
  v26 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v23 = (unsigned __int8 **)sub_E33BA0(a1, &v26, 2477, 0);
  if ( v23 )
    sub_AE9DF0(v23, v24, 8u);
  sub_E232A0(v35);
  sub_E232A0(v33);
LABEL_26:
  sub_E232A0(v31);
  sub_E232A0(v29);
  return v6;
}
