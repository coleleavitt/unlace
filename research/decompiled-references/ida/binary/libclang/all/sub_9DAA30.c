__int64 __fastcall sub_9DAA30(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  unsigned __int8 (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  char v13; // al
  __int64 v14; // r14
  unsigned int v15; // r12d
  __int64 v16; // rbx
  char v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r13
  _BYTE *v20; // rax
  _QWORD v22[4]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+30h] [rbp-38h]

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_8D7F10 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(unsigned __int8 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
      goto LABEL_11;
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (unsigned __int8 (*)(void))(*v12)[3];
      if ( (char *)v10 == (char *)v8 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 24LL))(v12[3]);
        goto LABEL_6;
      }
LABEL_11:
      if ( v10() )
        return 0;
      goto LABEL_7;
    }
  }
  v13 = ((__int64 (*)(void))v8)();
LABEL_6:
  if ( v13 )
    return 0;
LABEL_7:
  v14 = a1[25];
  v15 = sub_9D9870((__int64)a1, a2, v14 + 40);
  if ( !(_BYTE)v15 )
    return 0;
  sub_A1C030(
    v22,
    *(_QWORD *)(v14 + 64),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)));
  v16 = a1[23];
  v17 = *(_BYTE *)sub_A1A5A0(v16, 8);
  sub_A1A5E0(v16, 8);
  sub_781830(*a3);
  v18 = v22[3];
  v19 = v22[0];
  if ( !v24 && *(_BYTE *)(sub_8E5480((__int64)v22) + 51) && v23 == v19 )
    v20 = (_BYTE *)(v18 + v23 + 72);
  else
    v20 = (_BYTE *)(v18 + v19 + 40);
  *v20 = v17;
  sub_A1DB00(v22);
  sub_A1C0C0(v22);
  return v15;
}

