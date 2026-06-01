__int64 __fastcall sub_8F3370(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rdx
  _QWORD *v6; // rdi
  _QWORD **v7; // rdi

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a2;
  v2 = *(_QWORD **)(a1 + 408);
  v3 = *(__int64 (**)(void))(*v2 + 128LL);
  if ( (char *)v3 != (char *)sub_8CCA20 )
    return v3();
  v4 = (_QWORD *)v2[3];
  v5 = *(__int64 (**)(void))(*v4 + 128LL);
  if ( v5 == v3 )
  {
    v6 = (_QWORD *)v4[3];
    v3 = *(__int64 (**)(void))(*v6 + 128LL);
    if ( v3 == v5 )
    {
      v7 = (_QWORD **)v6[3];
      v5 = (__int64 (*)(void))(*v7)[16];
      if ( v5 == v3 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v7[3] + 128LL))(v7[3]);
      return v5();
    }
    return v3();
  }
  return v5();
}

