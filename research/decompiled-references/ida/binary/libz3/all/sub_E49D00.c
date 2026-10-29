__int64 __fastcall sub_E49D00(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (*v2)(void); // rax
  __int64 v3; // rdi
  __int64 (*v4)(void); // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  *(_BYTE *)(a1 + 96) = 1;
  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 296LL);
  if ( v2 != sub_E49D00 )
    return v2();
  *(_BYTE *)(v1 + 96) = 1;
  v3 = *(_QWORD *)(v1 + 112);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 296LL);
  if ( v4 != v2 )
    return v4();
  *(_BYTE *)(v3 + 96) = 1;
  v5 = *(_QWORD *)(v3 + 112);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v5 + 296LL);
  if ( v2 != v4 )
    return v2();
  *(_BYTE *)(v5 + 96) = 1;
  v6 = *(_QWORD *)(v5 + 112);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v6 + 296LL);
  if ( v4 != v2 )
    return v4();
  *(_BYTE *)(v6 + 96) = 1;
  v7 = *(_QWORD *)(v6 + 112);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v7 + 296LL);
  if ( v2 != v4 )
    return v2();
  *(_BYTE *)(v7 + 96) = 1;
  v8 = *(_QWORD *)(v7 + 112);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v8 + 296LL);
  if ( v4 != v2 )
    return v4();
  *(_BYTE *)(v8 + 96) = 1;
  v9 = *(_QWORD *)(v8 + 112);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v9 + 296LL);
  if ( v2 == v4 )
  {
    *(_BYTE *)(v9 + 96) = 1;
    v10 = *(_QWORD *)(v9 + 112);
    v4 = *(__int64 (**)(void))(*(_QWORD *)v10 + 296LL);
    if ( v4 == v2 )
    {
      *(_BYTE *)(v10 + 96) = 1;
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 112) + 296LL))(*(_QWORD *)(v10 + 112));
    }
    return v4();
  }
  return v2();
}

