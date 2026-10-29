__int64 __fastcall sub_DCA950(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  unsigned __int8 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al

  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 != sub_CF0250 )
    goto LABEL_11;
  v7 = (_QWORD *)v5[3];
  v8 = *(unsigned __int8 (**)(void))(*v7 + 24LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_9;
  v9 = (_QWORD *)v7[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
  if ( (char *)v6 != (char *)v8 )
  {
LABEL_11:
    v11 = ((__int64 (*)(void))v6)();
LABEL_6:
    if ( v11 )
      return 0;
    goto LABEL_7;
  }
  v10 = (_QWORD **)v9[3];
  v8 = (unsigned __int8 (*)(void))(*v10)[3];
  if ( (char *)v8 == (char *)v6 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
    goto LABEL_6;
  }
LABEL_9:
  if ( v8() )
    return 0;
LABEL_7:
  if ( (unsigned __int8)sub_DCA720(a1, a2, *(_QWORD *)(a1 + 400) + 40LL) )
    return sub_DC6DC0(a1, a2, a3, *(_QWORD *)(a1 + 400) + 40LL);
  return 0;
}
