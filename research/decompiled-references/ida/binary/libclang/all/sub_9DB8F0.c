__int64 __fastcall sub_9DB8F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  unsigned __int8 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  unsigned int v12; // r12d
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _DWORD v22[6]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-90h]
  unsigned int v24; // [rsp+20h] [rbp-88h]
  int v25; // [rsp+30h] [rbp-78h]
  _BYTE v26[104]; // [rsp+40h] [rbp-68h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(unsigned __int8 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
      goto LABEL_15;
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (unsigned __int8 (*)(void))(*v10)[3];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
        goto LABEL_6;
      }
LABEL_15:
      if ( v8() )
        return 0;
      goto LABEL_7;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  if ( v11 )
    return 0;
LABEL_7:
  v12 = sub_9D9870((__int64)a1, a2, a1[25] + 40LL);
  if ( !(_BYTE)v12 )
    return 0;
  sub_A1BFE0(v22, a1[25] + 40LL);
  while ( !v25 )
  {
    if ( !v23 )
      break;
    if ( *(_DWORD *)(*(_QWORD *)(v23 + 32) + 16LL) == v24 )
      break;
    if ( !v24 )
      break;
    v13 = **(_QWORD **)(v23 + v24 + 32);
    if ( (v13 & 2) != 0 || v13 <= 3 || (*(_BYTE *)(v23 + v24 + 28) & 4) == 0 )
      break;
    if ( v24 == -1 )
    {
      v20 = 0;
      v19 = 0xFFFFFFFFLL;
    }
    else
    {
      v19 = v24 - *(_DWORD *)(v23 + v24 + 24);
      v20 = (unsigned int)v19;
    }
    sub_A1C030(v26, v23, v19, v20);
    sub_A1C200(v22, v26, v21);
    sub_A1C0C0(v26);
  }
  v14 = sub_8E5480((__int64)v22);
  v15 = sub_A2C8B0(*(_QWORD *)(v14 + 24), a3);
  v16 = a1[23];
  sub_A1C030(v26, v23, (unsigned int)(v22[0] + *(_DWORD *)(v15 + 8)), (unsigned int)(v22[0] + *(_DWORD *)(v15 + 8)));
  v17 = sub_A1A4E0(v16, 56);
  sub_A1C070(v17, v26);
  sub_A1C0C0(v26);
  sub_A1C0C0(v22);
  return v12;
}

