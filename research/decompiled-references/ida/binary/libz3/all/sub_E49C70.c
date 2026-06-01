__int64 __fastcall sub_E49C70(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (__fastcall *v2)(); // rax
  _QWORD *v3; // rdi
  __int64 (*v4)(void); // rdx
  _QWORD *v5; // rdi
  _QWORD **v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *(_BYTE *)(a1 + 24) = 1;
  v1 = *(_QWORD **)(a1 + 16);
  v2 = *(__int64 (__fastcall **)())(*v1 + 72LL);
  if ( v2 == sub_E4A320 )
  {
    v3 = (_QWORD *)v1[13];
    v4 = *(__int64 (**)(void))(*v3 + 72LL);
    if ( v4 != v2 )
    {
LABEL_6:
      v9 = v4();
      return sub_1829650(v9);
    }
    v5 = (_QWORD *)v3[13];
    v2 = *(__int64 (__fastcall **)())(*v5 + 72LL);
    if ( v2 == v4 )
    {
      v6 = (_QWORD **)v5[13];
      v4 = (__int64 (*)(void))(*v6)[9];
      if ( v4 == v2 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6[13] + 72LL))(v6[13]);
        return sub_1829650(v7);
      }
      goto LABEL_6;
    }
  }
  v10 = v2();
  return sub_1829650(v10);
}

