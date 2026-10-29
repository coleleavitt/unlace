__int64 __fastcall sub_90C4B0(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  unsigned __int8 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rbx
  _QWORD v21[4]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+30h] [rbp-88h]
  _BYTE v24[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+78h] [rbp-40h]
  int v26; // [rsp+80h] [rbp-38h]

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(unsigned __int8 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
      goto LABEL_12;
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
LABEL_12:
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
  v12 = a1[25];
  v13 = sub_9D9870(a1, a2, v12 + 40);
  if ( !(_BYTE)v13 )
    return 0;
  sub_A1C030(
    v21,
    *(_QWORD *)(v12 + 64),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)));
  v14 = a1[23];
  v15 = sub_A1A5A0(v14, 72);
  sub_A1C070(v24, v15);
  v25 = *(_QWORD *)(v15 + 56);
  v26 = *(_DWORD *)(v15 + 64);
  sub_A1A5E0(v14, 72);
  v17 = v21[3];
  v18 = v21[0];
  if ( !v23 && *(_BYTE *)(sub_8E5480((__int64)v21) + 51) && v22 == v18 )
    v19 = v17 + v22 + 72;
  else
    v19 = v17 + v18 + 40;
  sub_A1C200(v19, v24, v16);
  *(_QWORD *)(v19 + 56) = v25;
  *(_DWORD *)(v19 + 64) = v26;
  sub_A1C0C0(v24);
  sub_A1C490(v21);
  sub_A1DB00(v21);
  sub_A1C0C0(v21);
  return v13;
}

