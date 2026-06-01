__int64 __fastcall sub_9D9980(_QWORD *a1, __int64 a2, int a3)
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
  _QWORD *v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 *v24; // rdi
  __int64 v26[4]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v27[4]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-48h]
  int v29; // [rsp+50h] [rbp-38h]

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
  v12 = a1[25];
  v13 = sub_9D9870((__int64)a1, a2, v12 + 40);
  if ( !(_BYTE)v13 )
    return 0;
  sub_A1C030(
    v27,
    *(_QWORD *)(v12 + 64),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)));
  v14 = a1[23];
  v15 = (_QWORD *)sub_A1A5A0(v14, 24);
  v16 = *v15;
  v17 = v15;
  if ( v16 == sub_2575D20(v14, 24, v18) )
    sub_257D000(v26, v17, v19, v20);
  else
    sub_2576960(v26, v17);
  sub_A1A5E0(v14, 24);
  v22 = v27[3];
  v23 = v27[0];
  if ( v29 || !*(_BYTE *)(sub_8E5480((__int64)v27) + 51) || (v24 = (__int64 *)(v22 + v28 + 72), v28 != v23) )
    v24 = (__int64 *)(v22 + v23 + 40);
  sub_9BD190(v24, v26, v21);
  sub_5FF3B0(v26);
  sub_A1C490(v27);
  sub_A1DB00(v27);
  sub_A1C0C0(v27);
  return v13;
}

