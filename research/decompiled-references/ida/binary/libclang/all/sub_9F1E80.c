__int64 __fastcall sub_9F1E80(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  char v7; // r14
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rdx
  _QWORD *v12; // rdi
  _QWORD **v13; // rdi
  char v14; // al
  _QWORD *v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r15
  void *v18; // rdi
  __int64 result; // rax

  v3 = a1[23];
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_BYTE *)(v4 + 16);
  sub_A1A5E0(v3, 24);
  v8 = (_QWORD *)a1[3];
  v9 = *(__int64 (__fastcall **)(__int64))(*v8 + 24LL);
  if ( v9 == sub_8D7F10 )
  {
    v10 = (_QWORD *)v8[3];
    v11 = *(__int64 (**)(void))(*v10 + 24LL);
    if ( (char *)v11 != (char *)v9 )
    {
LABEL_14:
      v14 = v11();
      goto LABEL_6;
    }
    v12 = (_QWORD *)v10[3];
    v9 = *(__int64 (__fastcall **)(__int64))(*v12 + 24LL);
    if ( (char *)v9 == (char *)v11 )
    {
      v13 = (_QWORD **)v12[3];
      v11 = (__int64 (*)(void))(*v13)[3];
      if ( (char *)v11 == (char *)v9 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 24LL))(v13[3]);
        goto LABEL_6;
      }
      goto LABEL_14;
    }
  }
  v14 = ((__int64 (*)(void))v9)();
LABEL_6:
  v15 = (_QWORD *)a1[25];
  if ( v14 && !v15[1] )
    goto LABEL_16;
  v16 = v15[4];
  if ( !sub_97DAC0(v16) )
    sub_9BD280((__int64)a1, v16);
  v15 = (_QWORD *)a1[25];
  v17 = v15[1];
  if ( v17 )
  {
    *a2 = v15[19];
    v18 = (void *)a1[25];
    if ( v18 )
      sub_A16FA0(v18);
    a1[25] = v17;
    result = sub_A1A4E0(a1[23], 24);
    *(_QWORD *)result = v5;
    *(_QWORD *)(result + 8) = v6;
    *(_BYTE *)(result + 16) = v7;
  }
  else
  {
LABEL_16:
    result = sub_A16FA0(v15);
    a1[25] = 0;
  }
  return result;
}

