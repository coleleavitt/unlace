__int64 __fastcall sub_5869F0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax
  _QWORD *v3; // rdi
  __int64 (*v4)(void); // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rdi

  v1 = *(_QWORD **)(a1 + 48);
  if ( !v1 )
    return 0;
  v2 = *(__int64 (**)(void))(*v1 + 24LL);
  if ( v2 != sub_5869F0 )
    return v2();
  v3 = (_QWORD *)v1[6];
  if ( !v3 )
    return 0;
  v4 = *(__int64 (**)(void))(*v3 + 24LL);
  if ( v4 == v2 )
  {
    v5 = (_QWORD *)v3[6];
    if ( v5 )
    {
      v2 = *(__int64 (**)(void))(*v5 + 24LL);
      if ( v2 == v4 )
      {
        v6 = v5[6];
        if ( v6 )
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
        return 0;
      }
      return v2();
    }
    return 0;
  }
  return v4();
}

