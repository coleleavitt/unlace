__int64 __fastcall sub_6885A0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax
  _QWORD *v3; // rdi
  __int64 (*v4)(void); // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi

  v1 = *(_QWORD **)(a1 + 144);
  v2 = *(__int64 (**)(void))(*v1 + 296LL);
  if ( v2 != sub_6885A0 )
    return v2();
  v3 = (_QWORD *)v1[18];
  v4 = *(__int64 (**)(void))(*v3 + 296LL);
  if ( v4 != v2 )
    return v4();
  v5 = (_QWORD *)v3[18];
  v2 = *(__int64 (**)(void))(*v5 + 296LL);
  if ( v2 != v4 )
    return v2();
  v6 = (_QWORD *)v5[18];
  v4 = *(__int64 (**)(void))(*v6 + 296LL);
  if ( v4 != v2 )
    return v4();
  v7 = (_QWORD *)v6[18];
  v2 = *(__int64 (**)(void))(*v7 + 296LL);
  if ( v2 != v4 )
    return v2();
  v8 = (_QWORD *)v7[18];
  v4 = *(__int64 (**)(void))(*v8 + 296LL);
  if ( v4 != v2 )
    return v4();
  v9 = (_QWORD *)v8[18];
  v2 = *(__int64 (**)(void))(*v9 + 296LL);
  if ( v2 == v4 )
  {
    v10 = (_QWORD **)v9[18];
    v4 = (__int64 (*)(void))(*v10)[37];
    if ( v4 == v2 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v10[18] + 296LL))(v10[18]);
    return v4();
  }
  return v2();
}

