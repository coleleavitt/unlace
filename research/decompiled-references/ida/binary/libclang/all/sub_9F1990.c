__int64 __fastcall sub_9F1990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _QWORD *v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rax
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rdx
  _QWORD *v13; // rdi
  _QWORD **v14; // rdi
  char v15; // al
  void *v16; // r12
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  if ( a5 == 225 )
  {
    v9 = *(_QWORD **)(a1 + 24);
    v10 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( v10 == sub_8D7F10 )
    {
      v11 = (_QWORD *)v9[3];
      v12 = *(__int64 (**)(void))(*v11 + 24LL);
      if ( (char *)v12 != (char *)v10 )
      {
LABEL_13:
        v15 = v12();
LABEL_7:
        if ( v15 )
          return 0;
        goto LABEL_8;
      }
      v13 = (_QWORD *)v11[3];
      v10 = *(__int64 (__fastcall **)(__int64))(*v13 + 24LL);
      if ( (char *)v10 == (char *)v12 )
      {
        v14 = (_QWORD **)v13[3];
        v12 = (__int64 (*)(void))(*v14)[3];
        if ( (char *)v12 == (char *)v10 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v14[3] + 24LL))(v14[3]);
          goto LABEL_7;
        }
        goto LABEL_13;
      }
    }
    v15 = ((__int64 (*)(void))v10)();
    goto LABEL_7;
  }
LABEL_8:
  v16 = (void *)operator new(0xD8u);
  sub_A174C0(v16, a1, a3, a2, 0);
  v17 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = v16;
  v19 = v17;
  result = sub_994D30(a1, a2, a3, a4, a5);
  if ( (_BYTE)result )
    return result;
  *(_QWORD *)(a1 + 200) = v19;
  sub_A16FA0(v16);
  return 0;
}

