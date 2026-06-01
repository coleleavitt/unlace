__int64 __fastcall sub_9D9CB0(_QWORD *a1, __int64 a2, int a3)
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
  __int64 v14; // rbx
  char v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r14
  _BYTE *v18; // rax
  _QWORD v20[4]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+30h] [rbp-38h]

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(unsigned __int8 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
      goto LABEL_11;
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
LABEL_11:
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
  v13 = sub_9D9870((__int64)a1, a2, v12 + 40);
  if ( !(_BYTE)v13 )
    return 0;
  sub_A1C030(
    v20,
    *(_QWORD *)(v12 + 64),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)));
  v14 = a1[23];
  v15 = *(_BYTE *)sub_A1A5A0(v14, 8);
  sub_A1A5E0(v14, 8);
  v16 = v20[3];
  v17 = v20[0];
  if ( !v22 && *(_BYTE *)(sub_8E5480((__int64)v20) + 51) && v21 == v17 )
    v18 = (_BYTE *)(v16 + v21 + 72);
  else
    v18 = (_BYTE *)(v16 + v17 + 40);
  *v18 = v15;
  sub_A1C490(v20);
  sub_A1DB00(v20);
  sub_A1C0C0(v20);
  return v13;
}

