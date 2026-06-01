void __fastcall sub_DC1B40(_QWORD *a1)
{
  unsigned int v2; // eax
  __int64 *v3; // r13
  __int64 v4; // rax
  void (__noreturn *v5)(); // r12
  void *v6; // r14
  int v7; // eax
  __int64 v8; // rdi
  void (__noreturn *v9)(); // rax
  __int64 v10; // rdi
  void (__noreturn *v11)(); // rax
  _QWORD *exception; // rbx
  int v13; // [rsp+0h] [rbp-48h] BYREF
  char v14; // [rsp+4h] [rbp-44h]
  __int64 v15; // [rsp+8h] [rbp-40h]
  int v16; // [rsp+10h] [rbp-38h] BYREF
  char v17; // [rsp+14h] [rbp-34h]
  __int64 v18; // [rsp+18h] [rbp-30h]

  v2 = *((_DWORD *)a1 + 356);
  if ( v2 == 5 )
  {
    v10 = a1[179];
    v11 = *(void (__noreturn **)())(*(_QWORD *)v10 + 112LL);
    if ( v11 == sub_2D07C0 )
    {
      sub_1872CE0("");
      sub_1873130(114, 106);
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))v11)(v10, *a1, a1[173]);
    goto LABEL_14;
  }
  if ( v2 <= 5 )
  {
    if ( v2 != 4 )
    {
LABEL_23:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid option value");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v8 = a1[179];
    v9 = *(void (__noreturn **)())(*(_QWORD *)v8 + 120LL);
    if ( v9 == sub_2D0790 )
    {
      sub_1872CE0("");
      sub_1873130(114, 107);
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD *))v9)(v8, *a1, a1 + 6);
LABEL_14:
    if ( *((_DWORD *)a1 + 356) == 9 )
      return;
LABEL_15:
    sub_DC0980(a1);
    return;
  }
  if ( v2 - 6 > 2 )
    goto LABEL_23;
  v3 = (__int64 *)a1[179];
  v4 = *v3;
  v14 &= 0xFCu;
  v17 &= 0xFCu;
  v5 = *(void (__noreturn **)())(v4 + 96);
  v13 = 0;
  v15 = 0;
  v16 = 1;
  v6 = qword_1C7F2C0;
  v18 = 0;
  if ( (*((_BYTE *)a1 + 60) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v13, a1 + 7);
    if ( (*((_BYTE *)a1 + 76) & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    v13 = *((_DWORD *)a1 + 14);
    if ( (*((_BYTE *)a1 + 76) & 1) == 0 )
    {
LABEL_6:
      v7 = *((_DWORD *)a1 + 18);
      v17 &= ~1u;
      v16 = v7;
      goto LABEL_7;
    }
  }
  sub_182C690(v6, &v16, a1 + 9);
LABEL_7:
  if ( v5 == sub_2D0820 )
  {
    sub_1872CE0("");
    sub_1873130(114, 104);
  }
  ((void (__fastcall *)(__int64 *, _QWORD, int *))v5)(v3, *a1, &v13);
  sub_25A130((char *)&v13);
  if ( *((_DWORD *)a1 + 356) != 9 )
    goto LABEL_15;
}

