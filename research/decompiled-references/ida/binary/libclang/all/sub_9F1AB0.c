void __fastcall sub_9F1AB0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r15
  _QWORD *v4; // rax
  __int64 v5; // r14
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rdx
  _QWORD *v15; // rdi
  _QWORD **v16; // rdi
  char v17; // al
  _QWORD *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r12
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 *v23; // rbp
  __int64 *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+8h] [rbp-50h]

  v3 = a1[23];
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v6 = v4;
  v10 = sub_2575D20(v3, 24, v7);
  if ( v5 == v10 )
    sub_257D000(&v26, v6, v8, v9);
  else
    sub_2576960(&v26, v6);
  sub_A1A5E0(v3, 24);
  v11 = (_QWORD *)a1[3];
  v12 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
  if ( v12 == sub_8D7F10 )
  {
    v13 = (_QWORD *)v11[3];
    v14 = *(__int64 (**)(void))(*v13 + 24LL);
    if ( (char *)v14 != (char *)v12 )
    {
LABEL_20:
      v17 = v14();
      goto LABEL_8;
    }
    v15 = (_QWORD *)v13[3];
    v12 = *(__int64 (__fastcall **)(__int64))(*v15 + 24LL);
    if ( (char *)v12 == (char *)v14 )
    {
      v16 = (_QWORD **)v15[3];
      v14 = (__int64 (*)(void))(*v16)[3];
      if ( (char *)v14 == (char *)v12 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 24LL))(v16[3]);
        goto LABEL_8;
      }
      goto LABEL_20;
    }
  }
  v17 = ((__int64 (*)(void))v12)();
LABEL_8:
  v18 = (_QWORD *)a1[25];
  if ( v17 && !v18[1] )
    goto LABEL_29;
  v19 = v18[4];
  if ( !sub_97DAC0(v19) )
    sub_9BD280((__int64)a1, v19);
  v18 = (_QWORD *)a1[25];
  v20 = v18[1];
  if ( v20 )
  {
    *a2 = v18[19];
    v21 = (void *)a1[25];
    if ( v21 )
      sub_A16FA0(v21);
    a1[25] = v20;
    v22 = sub_A1A4E0(a1[23], 24);
    if ( v10 == v26 )
      sub_257CF50(v22, &v26);
    else
      sub_25768A0(v22, &v26);
  }
  else
  {
LABEL_29:
    sub_A16FA0(v18);
    a1[25] = 0;
  }
  if ( v10 == v26 )
  {
    v23 = v27;
    if ( v27 )
    {
      v24 = &v27[3 * *(v27 - 1)];
      if ( v27 == v24 )
      {
        v25 = 0;
      }
      else
      {
        do
        {
          v24 -= 3;
          sub_5FF3B0(v24);
        }
        while ( v23 != v24 );
        v25 = 24 * *(v23 - 1);
      }
      operator delete[](v23 - 1, v25 + 8);
    }
  }
  else
  {
    sub_25769A0(&v26);
  }
}

