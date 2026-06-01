__int64 __fastcall sub_90BFD0(_QWORD *a1, __int64 a2, int a3)
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
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rbx
  _QWORD v22[4]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-48h]

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(unsigned __int8 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
      goto LABEL_17;
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
LABEL_17:
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
    v22,
    *(_QWORD *)(v12 + 64),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)));
  v14 = a1[23];
  v15 = sub_A1A5A0(v14, 16);
  v16 = *(_DWORD *)(v15 + 8);
  v17 = *(_QWORD *)v15;
  *(_DWORD *)(v15 + 8) = 0;
  sub_A1A5E0(v14, 16);
  v18 = v22[3];
  v19 = v22[0];
  if ( !v24 && *(_BYTE *)(sub_8E5480((__int64)v22) + 51) && v23 == v19 )
    v20 = v18 + v23 + 72;
  else
    v20 = v18 + v19 + 40;
  if ( *(_DWORD *)(v20 + 8) > 0x40u && *(_QWORD *)v20 )
    operator delete[](*(void **)v20);
  *(_QWORD *)v20 = v17;
  *(_DWORD *)(v20 + 8) = v16;
  sub_A1C490(v22);
  sub_A1DB00(v22);
  sub_A1C0C0(v22);
  return v13;
}

