void __fastcall Z3_solver_set_params(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // r13
  int *v6; // rbp
  __int64 v7; // rax
  char v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(); // rdx
  __int64 v12; // rax
  __int64 v13; // rdi

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29D720(a1, (__int64)a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a3 )
    v6 = (int *)(a3 + 24);
  else
    v6 = &qword_1C7F4C8;
  v7 = sub_185A800(v6, "smt.logic", &qword_18D6CD0);
  if ( v7 )
    a2[7] = v7;
  if ( a2[4] )
  {
    v8 = sub_1859610(a2 + 5, "model", 1);
    v9 = sub_1859610(v6, "model", 1);
    if ( v8 != v9 )
    {
      v10 = a2[4];
      v11 = *(__int64 (__fastcall **)())(*(_QWORD *)v10 + 136LL);
      if ( v11 != nullsub_123 )
        ((void (__fastcall *)(__int64, _QWORD))v11)(v10, v9);
    }
    if ( !(unsigned int)sub_1858490(a2 + 6) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a2[4] + 112LL))(a2[4], a2 + 6);
      sub_15B1320(a2 + 6);
    }
    sub_18632D0(v6, a2 + 6);
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)a2[4] + 88LL))(a2[4], v6);
  }
  sub_1863170(a2 + 5, v6);
  v12 = a2[9];
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 280);
    if ( v13 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, a2 + 5);
  }
  sub_2AF8D0(a1, (__int64)a2);
  if ( v5 )
    byte_1C7EBA0 = 1;
}

