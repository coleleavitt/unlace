__int64 __fastcall sub_4361B0(__int64 a1)
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

  v1 = *(_QWORD **)(a1 + 96);
  v2 = *(__int64 (**)(void))(*v1 + 152LL);
  if ( v2 != sub_4361B0 )
    return v2();
  v3 = (_QWORD *)v1[12];
  v4 = *(__int64 (**)(void))(*v3 + 152LL);
  if ( v4 != v2 )
    return v4();
  v5 = (_QWORD *)v3[12];
  v2 = *(__int64 (**)(void))(*v5 + 152LL);
  if ( v2 != v4 )
    return v2();
  v6 = (_QWORD *)v5[12];
  v4 = *(__int64 (**)(void))(*v6 + 152LL);
  if ( v4 != v2 )
    return v4();
  v7 = (_QWORD *)v6[12];
  v2 = *(__int64 (**)(void))(*v7 + 152LL);
  if ( v2 != v4 )
    return v2();
  v8 = (_QWORD *)v7[12];
  v4 = *(__int64 (**)(void))(*v8 + 152LL);
  if ( v4 != v2 )
    return v4();
  v9 = (_QWORD *)v8[12];
  v2 = *(__int64 (**)(void))(*v9 + 152LL);
  if ( v2 == v4 )
  {
    v10 = (_QWORD **)v9[12];
    v4 = (__int64 (*)(void))(*v10)[19];
    if ( v4 == v2 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v10[12] + 152LL))(v10[12]);
    return v4();
  }
  return v2();
}

