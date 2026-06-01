__int64 __fastcall sub_DC1590(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // rbx
  __int16 v15; // r13
  _BYTE v17[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_CCC510 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_10:
      v11 = v8();
      goto LABEL_6;
    }
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (__int64 (*)(void))(*v10)[3];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
        goto LABEL_6;
      }
      goto LABEL_10;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = a1[50];
  if ( v11 && !*(_DWORD *)(v12 + 24) )
    return 0;
  v13 = sub_DA69E0((__int64)a1, a2, v12 + 40);
  if ( !(_BYTE)v13 )
    return 0;
  sub_DFF4E0(
    v17,
    *(_QWORD *)(v12 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)));
  v14 = a1[22];
  v15 = *(_WORD *)sub_DFDA20(v14, 8);
  sub_DFDA50(v14, 8);
  *(_WORD *)sub_CE90A0((__int64)v17) = v15;
  sub_DFFFB0(v17);
  sub_E00FC0(v17);
  sub_DFF560(v17);
  return v13;
}

