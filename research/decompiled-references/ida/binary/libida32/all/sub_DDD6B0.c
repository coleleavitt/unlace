__int64 __fastcall sub_DDD6B0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r13
  char v4; // r12
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // r13
  _BYTE *v14; // rdi

  v3 = a1[22];
  v4 = *(_BYTE *)sub_DFDA20(v3, 8);
  sub_DFDA50(v3, 8);
  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_CCC510 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_12:
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
      goto LABEL_12;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = a1[50];
  if ( (!v11 || *(_QWORD *)(v12 + 8))
    && (sub_DA3C90(a1, *a2, *(_QWORD *)(v12 + 32)), v12 = a1[50], (v13 = *(_QWORD *)(v12 + 8)) != 0) )
  {
    *a2 = *(_QWORD *)(v12 + 136);
    v14 = (_BYTE *)a1[50];
    if ( !v14[200] )
      sub_DFCD30(v14);
    a1[50] = v13;
    *(_BYTE *)sub_DFD980(a1[22], 8) = v4;
    return 1;
  }
  else
  {
    if ( !*(_BYTE *)(v12 + 200) )
      sub_DFCD30((void *)v12);
    a1[50] = 0;
    return 1;
  }
}

