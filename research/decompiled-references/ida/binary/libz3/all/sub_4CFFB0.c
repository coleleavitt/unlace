__int64 __fastcall sub_4CFFB0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned int *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  void (***v10)(void); // rdi

  v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8), v3);
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
    v7 = *(unsigned int **)(a1 + 40);
    v8 = v7 ? *(v7 - 1) : 0;
    v9 = sub_4C5900(*(_QWORD *)(v3[1] + 24LL), (__int64)v3, v8, v7);
    v10 = *(void (****)(void))(a1 + 16);
    v4 = v9;
    if ( v10 != (void (***)(void))v9 )
    {
      sub_4CFE00(v10);
      *(_QWORD *)(a1 + 16) = v4;
    }
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 16LL))(v4, v3);
  if ( v3 )
    sub_4D63E0(v3);
  return v5;
}

