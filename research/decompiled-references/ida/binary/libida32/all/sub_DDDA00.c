__int64 __fastcall sub_DDDA00(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r13
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rdx
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // r13
  _BYTE *v13; // rdi
  __int64 v14; // rax
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v3 = a1[22];
  sub_DFDA20(v3, 48);
  sub_DFF520(savedregs);
  sub_DFDA50(v3, 48);
  v4 = (_QWORD *)a1[3];
  v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 24LL);
  if ( v5 == sub_CCC510 )
  {
    v6 = (_QWORD *)v4[3];
    v7 = *(__int64 (**)(void))(*v6 + 24LL);
    if ( (char *)v7 != (char *)v5 )
    {
LABEL_13:
      v10 = v7();
      goto LABEL_6;
    }
    v8 = (_QWORD *)v6[3];
    v5 = *(__int64 (__fastcall **)(__int64))(*v8 + 24LL);
    if ( (char *)v5 == (char *)v7 )
    {
      v9 = (_QWORD **)v8[3];
      v7 = (__int64 (*)(void))(*v9)[3];
      if ( (char *)v7 == (char *)v5 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 24LL))(v9[3]);
        goto LABEL_6;
      }
      goto LABEL_13;
    }
  }
  v10 = ((__int64 (*)(void))v5)();
LABEL_6:
  v11 = a1[50];
  if ( (!v10 || *(_QWORD *)(v11 + 8))
    && (sub_DA3C90(a1, *a2, *(_QWORD *)(v11 + 32)), v11 = a1[50], (v12 = *(_QWORD *)(v11 + 8)) != 0) )
  {
    *a2 = *(_QWORD *)(v11 + 136);
    v13 = (_BYTE *)a1[50];
    if ( !v13[200] )
      sub_DFCD30(v13);
    a1[50] = v12;
    v14 = sub_DFD980(a1[22], 48);
    sub_DFF4A0(v14, savedregs);
  }
  else
  {
    if ( !*(_BYTE *)(v11 + 200) )
      sub_DFCD30((void *)v11);
    a1[50] = 0;
  }
  sub_DFF560(savedregs);
  return 1;
}

