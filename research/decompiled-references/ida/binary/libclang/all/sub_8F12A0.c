__int64 __fastcall sub_8F12A0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD **v9; // rdi
  char v10; // dl
  __int64 v11; // r13
  __int64 v12; // rax
  _BYTE v13[104]; // [rsp-68h] [rbp-68h] BYREF

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a3;
  v5 = *(_QWORD **)(a1 + 408);
  v6 = *(__int64 (**)(void))(*v5 + 24LL);
  if ( (char *)v6 != (char *)sub_8D7F10 )
  {
LABEL_10:
    v10 = v6();
    goto LABEL_7;
  }
  v7 = (_QWORD *)v5[3];
  v8 = *(__int64 (**)(void))(*v7 + 24LL);
  if ( v8 == v6 )
  {
    v9 = (_QWORD **)v7[3];
    v6 = (__int64 (*)(void))(*v9)[3];
    if ( v6 == v8 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 24LL))(v9[3]);
      goto LABEL_7;
    }
    goto LABEL_10;
  }
  v10 = v8();
LABEL_7:
  result = 0;
  if ( !v10 )
  {
    v11 = *(_QWORD *)(a1 + 568);
    sub_A176C0(v13, *(_QWORD *)(a1 + 584), a2);
    v12 = sub_A1A4E0(v11, 56);
    sub_A1C070(v12, v13);
    sub_A1C0C0(v13);
    return 1;
  }
  return result;
}

